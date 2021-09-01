#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

static void ExitOnError(char const* msg) {
    printf("ERROR: %s (errno=%d)\n", msg, errno);
    exit(1);
}

int main(int argc, char *argv[])
{
    FILE* pipe;
    char buf[BUFSIZ];

    printf("BUFSIZ=%d", BUFSIZ);

    pipe = popen("ls -l", "r");
    if (pipe == NULL) {
        ExitOnError("popen failed");
    }
    while (fgets(buf, sizeof(buf), pipe)) {
        printf("read: %s\n", buf);
    }
    int rc = pclose(pipe);
    if (rc == -1) {
        ExitOnError("pclose failed");
    }
    printf("Result(code=%d): %s\n", rc, buf);
    return 0;
}
