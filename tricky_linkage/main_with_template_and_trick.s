	.file	"main_with_template.cpp"
	.text
.Ltext0:
	.section	.text._ZN3Bar4funcEv,"axG",@progbits,_ZN3Bar4funcEv,comdat
	.align 2
	.weak	_ZN3Bar4funcEv
	.type	_ZN3Bar4funcEv, @function
_ZN3Bar4funcEv:
.LFB1:
	.file 1 "main_with_template.cpp"
	.loc 1 8 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	.loc 1 10 0
	movl	$_ZN3Bar6kConstE, %edi
	call	_Z3fooIiEvRKT_
	.loc 1 11 0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_ZN3Bar4funcEv, .-_ZN3Bar4funcEv
	.globl	_ZN3Bar6kConstE
	.section	.rodata
	.align 4
	.type	_ZN3Bar6kConstE, @object
	.size	_ZN3Bar6kConstE, 4
_ZN3Bar6kConstE:
	.long	1
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.loc 1 17 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
.LBB2:
	.loc 1 19 0
	leaq	-1(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN3Bar4funcEv
.LBE2:
	.loc 1 20 0
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.section	.text._Z3fooIiEvRKT_,"axG",@progbits,_Z3fooIiEvRKT_,comdat
	.weak	_Z3fooIiEvRKT_
	.type	_Z3fooIiEvRKT_, @function
_Z3fooIiEvRKT_:
.LFB3:
	.loc 1 2 0
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	.loc 1 2 0
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	_Z3fooIiEvRKT_, .-_Z3fooIiEvRKT_
	.text
.Letext0:
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x12c
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF2
	.byte	0x4
	.long	.LASF3
	.long	.LASF4
	.long	.Ldebug_ranges0+0
	.quad	0
	.long	.Ldebug_line0
	.uleb128 0x2
	.string	"Bar"
	.byte	0x1
	.byte	0x1
	.byte	0x4
	.long	0x59
	.uleb128 0x3
	.long	.LASF5
	.byte	0x1
	.byte	0x7
	.long	0x59
	.byte	0x1
	.byte	0x1
	.uleb128 0x4
	.long	.LASF6
	.byte	0x1
	.byte	0x8
	.long	.LASF7
	.byte	0x1
	.long	0x52
	.uleb128 0x5
	.long	0x65
	.byte	0
	.byte	0
	.uleb128 0x6
	.long	0x5e
	.uleb128 0x7
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x8
	.byte	0x8
	.long	0x29
	.uleb128 0x9
	.long	0x42
	.quad	.LFB1
	.quad	.LFE1-.LFB1
	.uleb128 0x1
	.byte	0x9c
	.long	0x8a
	.long	0x97
	.uleb128 0xa
	.long	.LASF8
	.long	0x97
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x6
	.long	0x65
	.uleb128 0xb
	.long	.LASF0
	.byte	0x1
	.byte	0x10
	.long	0x5e
	.quad	.LFB2
	.quad	.LFE2-.LFB2
	.uleb128 0x1
	.byte	0x9c
	.long	0xdc
	.uleb128 0xc
	.quad	.LBB2
	.quad	.LBE2-.LBB2
	.uleb128 0xd
	.string	"b"
	.byte	0x1
	.byte	0x12
	.long	0x29
	.uleb128 0x2
	.byte	0x91
	.sleb128 -17
	.byte	0
	.byte	0
	.uleb128 0xe
	.long	.LASF1
	.byte	0x1
	.byte	0x2
	.long	.LASF9
	.quad	.LFB3
	.quad	.LFE3-.LFB3
	.uleb128 0x1
	.byte	0x9c
	.long	0x111
	.uleb128 0xf
	.string	"T"
	.long	0x5e
	.uleb128 0x10
	.string	"a"
	.byte	0x1
	.byte	0x2
	.long	0x111
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x6
	.long	0x116
	.uleb128 0x11
	.byte	0x8
	.long	0x59
	.uleb128 0x12
	.long	0x35
	.long	.LASF10
	.uleb128 0x9
	.byte	0x3
	.quad	_ZN3Bar6kConstE
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x55
	.uleb128 0x17
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x2
	.byte	0x1
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x32
	.uleb128 0xb
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x1c
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x32
	.uleb128 0xb
	.uleb128 0x3c
	.uleb128 0x19
	.uleb128 0x64
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0x5
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0x19
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x64
	.uleb128 0x13
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x34
	.uleb128 0x19
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0xb
	.byte	0x1
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2117
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x2f
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x10
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0x11
	.uleb128 0x10
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x12
	.uleb128 0x34
	.byte	0
	.uleb128 0x47
	.uleb128 0x13
	.uleb128 0x6e
	.uleb128 0xe
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x4c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	.LFB1
	.quad	.LFE1-.LFB1
	.quad	.LFB3
	.quad	.LFE3-.LFB3
	.quad	0
	.quad	0
	.section	.debug_ranges,"",@progbits
.Ldebug_ranges0:
	.quad	.Ltext0
	.quad	.Letext0
	.quad	.LFB1
	.quad	.LFE1
	.quad	.LFB3
	.quad	.LFE3
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF3:
	.string	"main_with_template.cpp"
.LASF5:
	.string	"kConst"
.LASF9:
	.string	"_Z3fooIiEvRKT_"
.LASF10:
	.string	"_ZN3Bar6kConstE"
.LASF1:
	.string	"foo<int>"
.LASF8:
	.string	"this"
.LASF4:
	.string	"/home/stac/development/cpp-sandbox/tricky_linkage"
.LASF0:
	.string	"main"
.LASF2:
	.string	"GNU C++ 4.9.1 -mtune=generic -march=x86-64 -g"
.LASF6:
	.string	"func"
.LASF7:
	.string	"_ZN3Bar4funcEv"
	.ident	"GCC: (Debian 4.9.1-19) 4.9.1"
	.section	.note.GNU-stack,"",@progbits
