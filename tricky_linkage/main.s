	.file	"main.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Hello World !"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1219:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA1219
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movl	%edi, -52(%rbp)
	movq	%rsi, -64(%rbp)
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcEC1Ev
	leaq	-25(%rbp), %rdx
	leaq	-48(%rbp), %rax
	movl	$.LC0, %esi
	movq	%rax, %rdi
.LEHB0:
	call	_ZNSsC1EPKcRKSaIcE
.LEHE0:
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB1:
	call	_ZNSs3endEv
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSs5beginEv
	movl	$_ZN12SpecialChars6kSpaceE, %edx
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_
	movq	%rax, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rsi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEm
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
.LEHE1:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZNSsD1Ev
	movl	$0, %eax
	jmp	.L7
.L5:
	movq	%rax, %rbx
	leaq	-25(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSaIcED1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
	call	_Unwind_Resume
.LEHE2:
.L6:
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNSsD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
.L7:
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1219:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1219:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1219-.LLSDACSB1219
.LLSDACSB1219:
	.uleb128 .LEHB0-.LFB1219
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L5-.LFB1219
	.uleb128 0
	.uleb128 .LEHB1-.LFB1219
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L6-.LFB1219
	.uleb128 0
	.uleb128 .LEHB2-.LFB1219
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB1219
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE1219:
	.text
	.size	main, .-main
	.section	.text._ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_,"axG",@progbits,_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_,comdat
	.weak	_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_
	.type	_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_, @function
_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_:
.LFB1234:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -16(%rbp)
	movq	%rsi, -32(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_
	movq	%rax, %rdx
	movq	-32(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1234:
	.size	_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_, .-_ZSt5countIN9__gnu_cxx17__normal_iteratorIPcSsEEcENSt15iterator_traitsIT_E15difference_typeES5_S5_RKT0_
	.section	.text._ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_,"axG",@progbits,_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_,comdat
	.weak	_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_
	.type	_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_, @function
_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_:
.LFB1253:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rdx
	leaq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC1ERS2_
	movq	-16(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1253:
	.size	_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_, .-_ZN9__gnu_cxx5__ops17__iter_equals_valIKcEENS0_16_Iter_equals_valIT_EERS4_
	.section	.text._ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_,"axG",@progbits,_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_,comdat
	.weak	_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_
	.type	_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_, @function
_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_:
.LFB1254:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movq	%rdi, -32(%rbp)
	movq	%rsi, -48(%rbp)
	movq	%rdx, -64(%rbp)
	movq	$0, -8(%rbp)
	jmp	.L13
.L15:
	movq	-32(%rbp), %rdx
	leaq	-64(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_
	testb	%al, %al
	je	.L14
	addq	$1, -8(%rbp)
.L14:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv
.L13:
	leaq	-48(%rbp), %rdx
	leaq	-32(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_
	testb	%al, %al
	jne	.L15
	movq	-8(%rbp), %rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1254:
	.size	_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_, .-_ZSt10__count_ifIN9__gnu_cxx17__normal_iteratorIPcSsEENS0_5__ops16_Iter_equals_valIKcEEENSt15iterator_traitsIT_E15difference_typeES9_S9_T0_
	.section	.text._ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_,"axG",@progbits,_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC5ERS2_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_
	.type	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_, @function
_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_:
.LFB1263:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-8(%rbp), %rax
	movq	-16(%rbp), %rdx
	movq	%rdx, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1263:
	.size	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_, .-_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_
	.weak	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC1ERS2_
	.set	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC1ERS2_,_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEC2ERS2_
	.section	.text._ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_,"axG",@progbits,_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_,comdat
	.weak	_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_
	.type	_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_, @function
_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_:
.LFB1265:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	movq	(%rax), %rbx
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	movq	(%rax), %rax
	cmpq	%rax, %rbx
	setne	%al
	addq	$24, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1265:
	.size	_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_, .-_ZN9__gnu_cxxneIPcSsEEbRKNS_17__normal_iteratorIT_T0_EES7_
	.section	.text._ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv,"axG",@progbits,_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv,comdat
	.align 2
	.weak	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv
	.type	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv, @function
_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv:
.LFB1266:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	leaq	1(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1266:
	.size	_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv, .-_ZN9__gnu_cxx17__normal_iteratorIPcSsEppEv
	.section	.text._ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_,"axG",@progbits,_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_,comdat
	.align 2
	.weak	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_
	.type	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_, @function
_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_:
.LFB1267:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv
	movzbl	(%rax), %edx
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movzbl	(%rax), %eax
	cmpb	%al, %dl
	sete	%al
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1267:
	.size	_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_, .-_ZN9__gnu_cxx5__ops16_Iter_equals_valIKcEclINS_17__normal_iteratorIPcSsEEEEbT_
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv:
.LFB1272:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1272:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPcSsE4baseEv
	.section	.text._ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv,"axG",@progbits,_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv,comdat
	.align 2
	.weak	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv
	.type	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv, @function
_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv:
.LFB1273:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1273:
	.size	_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv, .-_ZNK9__gnu_cxx17__normal_iteratorIPcSsEdeEv
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1274:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L28
	cmpl	$65535, -8(%rbp)
	jne	.L28
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L28:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1274:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1275:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1275:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.section	.rodata
	.align 8
	.type	_ZZL18__gthread_active_pvE20__gthread_active_ptr, @object
	.size	_ZZL18__gthread_active_pvE20__gthread_active_ptr, 8
_ZZL18__gthread_active_pvE20__gthread_active_ptr:
	.quad	_ZL28__gthrw___pthread_key_createPjPFvPvE
	.weakref	_ZL28__gthrw___pthread_key_createPjPFvPvE,__pthread_key_create
	.hidden	__dso_handle
	.ident	"GCC: (Debian 4.9.1-19) 4.9.1"
	.section	.note.GNU-stack,"",@progbits
