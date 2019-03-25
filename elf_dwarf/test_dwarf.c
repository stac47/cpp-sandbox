#include <stdio.h>
#include <errno.h>
#include <assert.h>

#include "dwarf.h"
#include "elfutils/libdw.h"

static int display_attr(Dwarf_Attribute* attr, void * other)
{
    printf("Value: %s, Code: %x, Form: %x\n", attr->valp, attr->code, attr->form);
    return DWARF_CB_OK;
}

void display_die(Dwarf_Die* die)
{
    Dwarf_Attribute attr;
    if (dwarf_attr(die, DW_AT_name, &attr) != NULL)
    {
        printf("name: %s\n", attr.valp);
    }
    if (dwarf_attr(die, DW_AT_comp_dir, &attr) != NULL)
    {
        printf("dir: %s\n", attr.valp);
    }
}

int main(int argc, const char *argv[])
{
    size_t hdr_size = 0;
    Dwarf_Off offset = 0;
    Dwarf_Off last_offset = 0;
    FILE* fp;
    Dwarf* dwarf;

    printf("Opening file: %s\n", argv[1]);
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf ("Opening file, errno = %d\n", errno);
        return 1;
    }
    dwarf = dwarf_begin(fileno(fp), DWARF_C_READ);
    if (dwarf == NULL)
    {
        printf ("No symbols found");
    }

    /* if (dwarf_nextcu(dwarf, offset, &offset, &hdr_size, NULL, NULL, NULL) == 0) */
    /* { */
    /*     Dwarf_Die main_die; */
    /*     if (dwarf_offdie(dwarf, last_offset + hdr_size, &main_die)) */
    /*     { */
    /*         Dwarf_Die child_die; */
    /*         dwarf_child(&main_die, &child_die); */
    /*         Dwarf_Die base_sibling = child_die; */
    /*         Dwarf_Die next_sibling; */
    /*         while (dwarf_siblingof(&base_sibling, &next_sibling) == 0) */
    /*         { */
    /*             display_die(&base_sibling); */
    /*             main_die = next_sibling; */
    /*         } */
    /*     } */
    /* } */

    while (dwarf_nextcu(dwarf, offset, &offset, &hdr_size, NULL, NULL, NULL) == 0)
    {
        Dwarf_Die die;
        if (dwarf_offdie(dwarf, last_offset + hdr_size, &die) == NULL)
        {
            continue;
        }
        puts("==================");
        printf("Tag: %x\n", dwarf_tag(&die));
        printf("  name: %s\n", dwarf_diename(&die));
        Dwarf_Attribute attr;
        if (dwarf_hasattr(&die, DW_AT_comp_dir) == 0)
        {
            continue;
        }
        Dwarf_Attribute* attr_ret = dwarf_attr_integrate(&die, DW_AT_comp_dir, &attr);
        assert(attr_ret == &attr);
        printf("  dir: %s\n", dwarf_formstring(&attr));
        /* dwarf_getattrs(die, &display_attr, NULL, 0); */
        /* display_die(die); */
        last_offset = offset;
    }

    dwarf_end(dwarf);
    fclose(fp);
    return 0;
}
