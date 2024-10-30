	.file	"prll2.cpp"
	.text
	.p2align 4
	.type	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0, @function
_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0:
.LFB9944:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	pushq	%rbx
	.cfi_def_cfa_offset 24
	.cfi_offset 3, -24
	subq	$8, %rsp
	.cfi_def_cfa_offset 32
	movq	(%rdi), %rax
	movq	-24(%rax), %rax
	movq	240(%rdi,%rax), %rbp
	testq	%rbp, %rbp
	je	.L7
	cmpb	$0, 56(%rbp)
	movq	%rdi, %rbx
	je	.L3
	movsbl	67(%rbp), %esi
.L4:
	movq	%rbx, %rdi
	call	_ZNSo3putEc@PLT
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbx
	.cfi_def_cfa_offset 16
	movq	%rax, %rdi
	popq	%rbp
	.cfi_def_cfa_offset 8
	jmp	_ZNSo5flushEv@PLT
.L3:
	.cfi_restore_state
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
	movsbl	%al, %esi
	jmp	.L4
.L7:
	call	_ZSt16__throw_bad_castv@PLT
	.cfi_endproc
.LFE9944:
	.size	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0, .-_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	.section	.text._ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev,"axG",@progbits,_ZNSt6vectorIS_IiSaIiEESaIS1_EED5Ev,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev
	.type	_ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev, @function
_ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev:
.LFB9350:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	movq	%rdi, %r12
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	movq	8(%rdi), %rbp
	movq	(%rdi), %rbx
	cmpq	%rbx, %rbp
	je	.L9
	.p2align 4,,10
	.p2align 3
.L13:
	movq	(%rbx), %rdi
	testq	%rdi, %rdi
	je	.L10
	movq	16(%rbx), %rsi
	addq	$24, %rbx
	subq	%rdi, %rsi
	call	_ZdlPvm@PLT
	cmpq	%rbx, %rbp
	jne	.L13
.L12:
	movq	(%r12), %rbx
.L9:
	testq	%rbx, %rbx
	je	.L8
	movq	16(%r12), %rsi
	movq	%rbx, %rdi
	subq	%rbx, %rsi
	popq	%rbx
	.cfi_remember_state
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	jmp	_ZdlPvm@PLT
	.p2align 4,,10
	.p2align 3
.L10:
	.cfi_restore_state
	addq	$24, %rbx
	cmpq	%rbx, %rbp
	jne	.L13
	jmp	.L12
	.p2align 4,,10
	.p2align 3
.L8:
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE9350:
	.size	_ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev, .-_ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev
	.weak	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	.set	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev,_ZNSt6vectorIS_IiSaIiEESaIS1_EED2Ev
	.section	.rodata._ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_.str1.1,"aMS",@progbits,1
.LC0:
	.string	"vector::_M_realloc_insert"
	.section	.text._ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_,"axG",@progbits,_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
	.type	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_, @function
_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_:
.LFB9526:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	movq	%rdx, %r15
	movabsq	$2305843009213693951, %rdx
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$24, %rsp
	.cfi_def_cfa_offset 80
	movq	8(%rdi), %r12
	movq	(%rdi), %r13
	movq	%r12, %rax
	subq	%r13, %rax
	sarq	$2, %rax
	cmpq	%rdx, %rax
	je	.L38
	cmpq	%r12, %r13
	movl	$1, %edx
	movq	%rdi, %rbp
	movq	%rsi, %r14
	cmovne	%rax, %rdx
	xorl	%ecx, %ecx
	addq	%rdx, %rax
	movq	%rsi, %rdx
	setc	%cl
	subq	%r13, %rdx
	testq	%rcx, %rcx
	jne	.L31
	testq	%rax, %rax
	jne	.L39
	xorl	%ebx, %ebx
	xorl	%ecx, %ecx
.L22:
	movl	(%r15), %eax
	leaq	4(%rcx,%rdx), %r8
	subq	%r14, %r12
	leaq	(%r8,%r12), %r15
	movl	%eax, (%rcx,%rdx)
	testq	%rdx, %rdx
	jg	.L40
	testq	%r12, %r12
	jg	.L27
	testq	%r13, %r13
	jne	.L25
.L28:
	movq	%rcx, 0(%rbp)
	movq	%r15, 8(%rbp)
	movq	%rbx, 16(%rbp)
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L40:
	.cfi_restore_state
	movq	%rcx, %rdi
	movq	%r13, %rsi
	movq	%r8, (%rsp)
	call	memmove@PLT
	movq	%rax, %rcx
	testq	%r12, %r12
	jg	.L41
.L25:
	movq	16(%rbp), %rsi
	movq	%r13, %rdi
	movq	%rcx, (%rsp)
	subq	%r13, %rsi
	call	_ZdlPvm@PLT
	movq	(%rsp), %rcx
	jmp	.L28
	.p2align 4,,10
	.p2align 3
.L27:
	movq	%r12, %rdx
	movq	%r14, %rsi
	movq	%r8, %rdi
	movq	%rcx, (%rsp)
	call	memcpy@PLT
	movq	(%rsp), %rcx
	testq	%r13, %r13
	je	.L28
	jmp	.L25
	.p2align 4,,10
	.p2align 3
.L31:
	movabsq	$9223372036854775804, %rbx
.L21:
	movq	%rbx, %rdi
	movq	%rdx, (%rsp)
	call	_Znwm@PLT
	movq	(%rsp), %rdx
	movq	%rax, %rcx
	addq	%rax, %rbx
	jmp	.L22
	.p2align 4,,10
	.p2align 3
.L41:
	movq	(%rsp), %rdi
	movq	%r12, %rdx
	movq	%r14, %rsi
	movq	%rax, 8(%rsp)
	call	memcpy@PLT
	movq	8(%rsp), %rcx
	jmp	.L25
	.p2align 4,,10
	.p2align 3
.L39:
	movabsq	$2305843009213693951, %rcx
	cmpq	%rcx, %rax
	cmova	%rcx, %rax
	leaq	0(,%rax,4), %rbx
	jmp	.L21
.L38:
	leaq	.LC0(%rip), %rdi
	call	_ZSt20__throw_length_errorPKc@PLT
	.cfi_endproc
.LFE9526:
	.size	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_, .-_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC1:
	.string	"cannot create std::vector larger than max_size()"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB2:
	.text
.LHOTB2:
	.p2align 4
	.globl	_Z13generateGraphii
	.type	_Z13generateGraphii, @function
_Z13generateGraphii:
.LFB9032:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9032
	movabsq	$384307168202282325, %rax
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	movslq	%esi, %rbx
	subq	$24, %rsp
	.cfi_def_cfa_offset 80
	cmpq	%rbx, %rax
	jb	.L69
	pxor	%xmm0, %xmm0
	movq	%rdi, %r14
	movq	%rbx, %rbp
	movl	%edx, %r15d
	movq	$0, 16(%rdi)
	movups	%xmm0, (%rdi)
	testq	%rbx, %rbx
	je	.L70
	leaq	(%rbx,%rbx,2), %rsi
	leaq	0(,%rsi,8), %r12
	movq	%r12, %rdi
.LEHB0:
	call	_Znwm@PLT
.LEHE0:
	leaq	(%rax,%r12), %rsi
	movq	%rax, (%r14)
	movq	%rsi, 16(%r14)
	cmpl	$1, %ebx
	je	.L46
	movq	%rbx, %rdi
	movq	%rbx, %rcx
	pxor	%xmm0, %xmm0
	movq	%rax, %rdx
	shrq	%rdi
	andq	$-2, %rcx
	addq	%rdi, %rcx
	salq	$4, %rcx
	addq	%rax, %rcx
	.p2align 4,,10
	.p2align 3
.L47:
	movups	%xmm0, (%rdx)
	addq	$48, %rdx
	movups	%xmm0, -32(%rdx)
	movups	%xmm0, -16(%rdx)
	cmpq	%rcx, %rdx
	jne	.L47
	testb	$1, %bpl
	je	.L45
	andq	$-2, %rbx
	leaq	(%rbx,%rbx,2), %rdx
	leaq	(%rax,%rdx,8), %rax
.L46:
	movq	$0, 16(%rax)
	pxor	%xmm0, %xmm0
	movups	%xmm0, (%rax)
.L45:
	movq	%rsi, 8(%r14)
	xorl	%edi, %edi
	xorl	%r13d, %r13d
	call	time@PLT
	movl	%eax, %edi
	call	srand@PLT
	testl	%r15d, %r15d
	jle	.L42
	.p2align 4,,10
	.p2align 3
.L49:
	call	rand@PLT
	cltd
	idivl	%ebp
	movl	%edx, 8(%rsp)
	movl	%edx, %r12d
	call	rand@PLT
	cltd
	idivl	%ebp
	movslq	%edx, %rbx
	movl	%ebx, 12(%rsp)
	cmpl	%ebx, %r12d
	je	.L54
	movq	(%r14), %rax
	movslq	%r12d, %rdx
	leaq	(%rdx,%rdx,2), %rdx
	leaq	(%rax,%rdx,8), %rdi
	movq	8(%rdi), %rsi
	cmpq	16(%rdi), %rsi
	je	.L51
	movl	%ebx, (%rsi)
	addq	$4, %rsi
	movq	%rsi, 8(%rdi)
.L52:
	leaq	(%rbx,%rbx,2), %rdx
	leaq	(%rax,%rdx,8), %rdi
	movq	8(%rdi), %rsi
	cmpq	16(%rdi), %rsi
	je	.L53
	movl	%r12d, (%rsi)
	addq	$4, %rsi
	movq	%rsi, 8(%rdi)
.L54:
	addl	$1, %r13d
	cmpl	%r13d, %r15d
	jne	.L49
.L42:
	addq	$24, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movq	%r14, %rax
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L53:
	.cfi_restore_state
	leaq	8(%rsp), %rdx
.LEHB1:
	call	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
	jmp	.L54
	.p2align 4,,10
	.p2align 3
.L51:
	leaq	12(%rsp), %rdx
	call	_ZNSt6vectorIiSaIiEE17_M_realloc_insertIJRKiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_
.LEHE1:
	movq	(%r14), %rax
	jmp	.L52
	.p2align 4,,10
	.p2align 3
.L70:
	movq	$0, (%rdi)
	xorl	%esi, %esi
	jmp	.L45
.L69:
	leaq	.LC1(%rip), %rdi
.LEHB2:
	call	_ZSt20__throw_length_errorPKc@PLT
.LEHE2:
.L58:
	movq	%rax, %rbx
	jmp	.L56
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA9032:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE9032-.LLSDACSB9032
.LLSDACSB9032:
	.uleb128 .LEHB0-.LFB9032
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB9032
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L58-.LFB9032
	.uleb128 0
	.uleb128 .LEHB2-.LFB9032
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE9032:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC9032
	.type	_Z13generateGraphii.cold, @function
_Z13generateGraphii.cold:
.LFSB9032:
.L56:
	.cfi_def_cfa_offset 80
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movq	%r14, %rdi
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	movq	%rbx, %rdi
.LEHB3:
	call	_Unwind_Resume@PLT
.LEHE3:
	.cfi_endproc
.LFE9032:
	.section	.gcc_except_table
.LLSDAC9032:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC9032-.LLSDACSBC9032
.LLSDACSBC9032:
	.uleb128 .LEHB3-.LCOLDB2
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSEC9032:
	.section	.text.unlikely
	.text
	.size	_Z13generateGraphii, .-_Z13generateGraphii
	.section	.text.unlikely
	.size	_Z13generateGraphii.cold, .-_Z13generateGraphii.cold
.LCOLDE2:
	.text
.LHOTE2:
	.section	.rodata._ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_.str1.8,"aMS",@progbits,1
	.align 8
.LC3:
	.string	"cannot create std::deque larger than max_size()"
	.section	.text._ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_,"axG",@progbits,_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
	.type	_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_, @function
_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_:
.LFB9692:
	.cfi_startproc
	movabsq	$2305843009213693951, %r8
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	movq	%rsi, %rbp
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$8, %rsp
	.cfi_def_cfa_offset 64
	movq	72(%rdi), %r12
	movq	40(%rdi), %rsi
	movq	48(%rdi), %rax
	subq	56(%rdi), %rax
	movq	%r12, %r13
	sarq	$2, %rax
	subq	%rsi, %r13
	movq	%r13, %rcx
	sarq	$3, %rcx
	cmpq	$1, %r12
	movq	%rcx, %rdx
	adcq	$-1, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	32(%rdi), %rdx
	subq	16(%rdi), %rdx
	sarq	$2, %rdx
	addq	%rdx, %rax
	cmpq	%r8, %rax
	je	.L84
	movq	%rdi, %rbx
	movq	%r12, %rax
	movq	8(%rdi), %rdi
	movq	(%rbx), %rdx
	movq	%rdi, %r9
	subq	%rdx, %rax
	sarq	$3, %rax
	subq	%rax, %r9
	cmpq	$1, %r9
	jbe	.L85
.L73:
	movl	$512, %edi
	call	_Znwm@PLT
	movl	0(%rbp), %edx
	movq	%rax, 8(%r12)
	movq	48(%rbx), %rax
	movl	%edx, (%rax)
	movq	72(%rbx), %rdx
	movq	8(%rdx), %rax
	addq	$8, %rdx
	movq	%rdx, %xmm1
	movq	%rax, %xmm0
	addq	$512, %rax
	punpcklqdq	%xmm0, %xmm0
	movups	%xmm0, 48(%rbx)
	movq	%rax, %xmm0
	punpcklqdq	%xmm1, %xmm0
	movups	%xmm0, 64(%rbx)
	addq	$8, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.p2align 4,,10
	.p2align 3
.L85:
	.cfi_restore_state
	leaq	2(%rcx), %r14
	leaq	(%r14,%r14), %rax
	cmpq	%rdi, %rax
	jb	.L86
	testq	%rdi, %rdi
	je	.L82
	addq	$1, %rdi
	leaq	(%rdi,%rdi), %r12
	movq	%r12, %rax
	shrq	$60, %rax
	jne	.L79
	salq	$4, %rdi
.L78:
	call	_Znwm@PLT
	movq	40(%rbx), %rsi
	movq	%rax, %r15
	movq	%r12, %rax
	subq	%r14, %rax
	shrq	%rax
	leaq	(%r15,%rax,8), %r14
	movq	72(%rbx), %rax
	leaq	8(%rax), %rdx
	cmpq	%rsi, %rdx
	je	.L81
	subq	%rsi, %rdx
	movq	%r14, %rdi
	call	memmove@PLT
.L81:
	movq	8(%rbx), %rax
	movq	(%rbx), %rdi
	leaq	0(,%rax,8), %rsi
	call	_ZdlPvm@PLT
	movq	%r15, (%rbx)
	movq	%r12, 8(%rbx)
.L77:
	movq	(%r14), %rax
	leaq	(%r14,%r13), %r12
	movq	%r14, 40(%rbx)
	movq	%r12, 72(%rbx)
	leaq	512(%rax), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %xmm2
	punpcklqdq	%xmm2, %xmm0
	movups	%xmm0, 24(%rbx)
	movq	(%r12), %rax
	leaq	512(%rax), %rdx
	movq	%rax, %xmm0
	movq	%rdx, %xmm3
	punpcklqdq	%xmm3, %xmm0
	movups	%xmm0, 56(%rbx)
	jmp	.L73
	.p2align 4,,10
	.p2align 3
.L86:
	subq	%r14, %rdi
	addq	$8, %r12
	shrq	%rdi
	leaq	(%rdx,%rdi,8), %r14
	movq	%r12, %rdx
	subq	%rsi, %rdx
	cmpq	%rsi, %r14
	jnb	.L75
	cmpq	%r12, %rsi
	je	.L77
	movq	%r14, %rdi
	call	memmove@PLT
	jmp	.L77
	.p2align 4,,10
	.p2align 3
.L75:
	cmpq	%r12, %rsi
	je	.L77
	leaq	8(%r13), %rdi
	subq	%rdx, %rdi
	addq	%r14, %rdi
	call	memmove@PLT
	jmp	.L77
	.p2align 4,,10
	.p2align 3
.L82:
	movl	$24, %edi
	movl	$3, %r12d
	jmp	.L78
	.p2align 4,,10
	.p2align 3
.L79:
	cmpq	%r12, %r8
	jnb	.L80
	call	_ZSt28__throw_bad_array_new_lengthv@PLT
.L80:
	call	_ZSt17__throw_bad_allocv@PLT
.L84:
	leaq	.LC3(%rip), %rdi
	call	_ZSt20__throw_length_errorPKc@PLT
	.cfi_endproc
.LFE9692:
	.size	_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_, .-_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
	.section	.text.unlikely
.LCOLDB4:
	.text
.LHOTB4:
	.p2align 4
	.globl	_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE
	.type	_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE, @function
_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE:
.LFB9042:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9042
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pxor	%xmm0, %xmm0
	movq	%rdx, %r15
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	movq	%rsi, %r14
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	movl	%edi, %r12d
	movl	$64, %edi
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$88, %rsp
	.cfi_def_cfa_offset 144
	movq	$8, 8(%rsp)
	movaps	%xmm0, 16(%rsp)
	movaps	%xmm0, 32(%rsp)
	movaps	%xmm0, 48(%rsp)
	movaps	%xmm0, 64(%rsp)
.LEHB4:
	call	_Znwm@PLT
.LEHE4:
	movl	$512, %edi
	movq	%rax, (%rsp)
	movq	%rax, %rbp
.LEHB5:
	call	_Znwm@PLT
.LEHE5:
	leaq	24(%rbp), %rbx
	leaq	512(%rax), %rdx
	movq	%rax, 24(%rbp)
	movl	$1, %r13d
	leaq	4(%rax), %rdi
	movq	%rbx, 40(%rsp)
	movq	%rax, 24(%rsp)
	movq	%rdx, 32(%rsp)
	movq	%rbx, 72(%rsp)
	movq	%rax, 56(%rsp)
	movq	%rdx, 64(%rsp)
	movq	%rax, 16(%rsp)
	movl	%r12d, (%rax)
	cmpq	%rax, %rdi
	je	.L92
.L124:
	movl	-4(%rdi), %ebp
	subq	$4, %rdi
	movq	%rdi, 48(%rsp)
.L93:
	movslq	%ebp, %rax
	movq	(%r15), %r8
	testq	%rax, %rax
	leaq	63(%rax), %rdx
	cmovns	%rax, %rdx
	sarq	$6, %rdx
	leaq	(%r8,%rdx,8), %rsi
	cqto
	shrq	$58, %rdx
	leaq	(%rax,%rdx), %rcx
	andl	$63, %ecx
	subq	%rdx, %rcx
	jns	.L94
	addq	$64, %rcx
	subq	$8, %rsi
.L94:
	leaq	(%rax,%rax,2), %r12
	movq	%r13, %rbx
	movq	(%r14), %rax
	movq	(%rsi), %rdx
	salq	$3, %r12
	salq	%cl, %rbx
	addq	%r12, %rax
	testq	%rbx, %rdx
	jne	.L95
	orq	%rbx, %rdx
	prefetcht0	(%rax)
	movq	%rdx, (%rsi)
.L95:
	movq	(%rax), %rsi
	movq	8(%rax), %rbx
	subq	%rsi, %rbx
	sarq	$2, %rbx
	subl	$1, %ebx
	js	.L96
	movl	%ebx, %ebp
	salq	$2, %rbp
	jmp	.L100
	.p2align 4,,10
	.p2align 3
.L122:
	movq	(%r14), %rax
	movq	(%r15), %r8
	movq	(%rax,%r12), %rsi
.L100:
	addq	%rbp, %rsi
	movslq	(%rsi), %rcx
	testq	%rcx, %rcx
	leaq	63(%rcx), %rax
	movq	%rcx, %rdx
	cmovns	%rcx, %rax
	sarq	$6, %rax
	leaq	(%r8,%rax,8), %rax
	movq	%rcx, %r8
	sarq	$63, %r8
	shrq	$58, %r8
	addq	%r8, %rcx
	andl	$63, %ecx
	subq	%r8, %rcx
	jns	.L97
	addq	$64, %rcx
	subq	$8, %rax
.L97:
	movq	%r13, %r9
	salq	%cl, %r9
	movq	%r9, %rcx
	andq	(%rax), %rcx
	jne	.L98
	movq	64(%rsp), %rax
	subq	$4, %rax
	cmpq	%rax, %rdi
	je	.L99
	movl	%edx, (%rdi)
	addq	$4, %rdi
	movq	%rdi, 48(%rsp)
.L98:
	subl	$1, %ebx
	subq	$4, %rbp
	cmpl	$-1, %ebx
	jne	.L122
.L96:
	cmpq	%rdi, 16(%rsp)
	je	.L123
	movq	56(%rsp), %rax
	movq	72(%rsp), %rbx
	cmpq	%rax, %rdi
	jne	.L124
.L92:
	movq	-8(%rbx), %rax
	movl	$512, %esi
	movl	508(%rax), %ebp
	call	_ZdlPvm@PLT
	movq	-8(%rbx), %rdi
	leaq	-8(%rbx), %rax
	movq	%rax, 72(%rsp)
	movq	%rdi, 56(%rsp)
	leaq	512(%rdi), %rax
	addq	$508, %rdi
	movq	%rax, 64(%rsp)
	movq	%rdi, 48(%rsp)
	jmp	.L93
	.p2align 4,,10
	.p2align 3
.L99:
	movq	%rsp, %rdi
.LEHB6:
	call	_ZNSt5dequeIiSaIiEE16_M_push_back_auxIJRKiEEEvDpOT_
.LEHE6:
	movq	48(%rsp), %rdi
	jmp	.L98
	.p2align 4,,10
	.p2align 3
.L123:
	movq	(%rsp), %r12
	testq	%r12, %r12
	je	.L87
	movq	72(%rsp), %rax
	movq	40(%rsp), %rbx
	leaq	8(%rax), %rbp
	cmpq	%rbp, %rbx
	jnb	.L104
	.p2align 4,,10
	.p2align 3
.L103:
	movq	(%rbx), %rdi
	movl	$512, %esi
	addq	$8, %rbx
	call	_ZdlPvm@PLT
	cmpq	%rbp, %rbx
	jb	.L103
.L104:
	movq	8(%rsp), %rax
	addq	$88, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	movq	%r12, %rdi
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	leaq	0(,%rax,8), %rsi
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	jmp	_ZdlPvm@PLT
.L87:
	.cfi_restore_state
	addq	$88, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L109:
	.cfi_restore_state
	movq	%rax, %rbp
	jmp	.L105
.L111:
	movq	%rax, %rdi
	jmp	.L89
	.section	.gcc_except_table
	.align 4
.LLSDA9042:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATT9042-.LLSDATTD9042
.LLSDATTD9042:
	.byte	0x1
	.uleb128 .LLSDACSE9042-.LLSDACSB9042
.LLSDACSB9042:
	.uleb128 .LEHB4-.LFB9042
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB5-.LFB9042
	.uleb128 .LEHE5-.LEHB5
	.uleb128 .L111-.LFB9042
	.uleb128 0x1
	.uleb128 .LEHB6-.LFB9042
	.uleb128 .LEHE6-.LEHB6
	.uleb128 .L109-.LFB9042
	.uleb128 0
.LLSDACSE9042:
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x7d
	.align 4
	.long	0

.LLSDATT9042:
	.text
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC9042
	.type	_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE.cold, @function
_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE.cold:
.LFSB9042:
.L105:
	.cfi_def_cfa_offset 144
	.cfi_offset 3, -56
	.cfi_offset 6, -48
	.cfi_offset 12, -40
	.cfi_offset 13, -32
	.cfi_offset 14, -24
	.cfi_offset 15, -16
	movq	(%rsp), %r13
	testq	%r13, %r13
	je	.L106
	movq	72(%rsp), %rax
	movq	40(%rsp), %rbx
	leaq	8(%rax), %r12
.L107:
	cmpq	%r12, %rbx
	jnb	.L125
	movq	(%rbx), %rdi
	movl	$512, %esi
	addq	$8, %rbx
	call	_ZdlPvm@PLT
	jmp	.L107
.L89:
	call	__cxa_begin_catch@PLT
.LEHB7:
	call	__cxa_rethrow@PLT
.LEHE7:
.L125:
	movq	8(%rsp), %rax
	movq	%r13, %rdi
	leaq	0(,%rax,8), %rsi
	call	_ZdlPvm@PLT
.L106:
	movq	%rbp, %rdi
.LEHB8:
	call	_Unwind_Resume@PLT
.LEHE8:
.L112:
	movq	%rax, %rbx
	call	__cxa_end_catch@PLT
	movq	%rbx, %rdi
	call	__cxa_begin_catch@PLT
	movl	$64, %esi
	movq	%rbp, %rdi
	call	_ZdlPvm@PLT
.LEHB9:
	call	__cxa_rethrow@PLT
.LEHE9:
.L110:
	movq	%rax, %rbx
	call	__cxa_end_catch@PLT
	movq	%rbx, %rdi
.LEHB10:
	call	_Unwind_Resume@PLT
.LEHE10:
	.cfi_endproc
.LFE9042:
	.section	.gcc_except_table
	.align 4
.LLSDAC9042:
	.byte	0xff
	.byte	0x9b
	.uleb128 .LLSDATTC9042-.LLSDATTDC9042
.LLSDATTDC9042:
	.byte	0x1
	.uleb128 .LLSDACSEC9042-.LLSDACSBC9042
.LLSDACSBC9042:
	.uleb128 .LEHB7-.LCOLDB4
	.uleb128 .LEHE7-.LEHB7
	.uleb128 .L112-.LCOLDB4
	.uleb128 0x3
	.uleb128 .LEHB8-.LCOLDB4
	.uleb128 .LEHE8-.LEHB8
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB9-.LCOLDB4
	.uleb128 .LEHE9-.LEHB9
	.uleb128 .L110-.LCOLDB4
	.uleb128 0
	.uleb128 .LEHB10-.LCOLDB4
	.uleb128 .LEHE10-.LEHB10
	.uleb128 0
	.uleb128 0
.LLSDACSEC9042:
	.byte	0x1
	.byte	0
	.byte	0
	.byte	0x7d
	.align 4
	.long	0

.LLSDATTC9042:
	.section	.text.unlikely
	.text
	.size	_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE, .-_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE
	.section	.text.unlikely
	.size	_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE.cold, .-_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE.cold
.LCOLDE4:
	.text
.LHOTE4:
	.section	.text._ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv,"axG",@progbits,_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv,comdat
	.align 2
	.p2align 4
	.weak	_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
	.type	_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv, @function
_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv:
.LFB9706:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movq	%rdi, %rbx
	movq	(%rdi), %rdi
	testq	%rdi, %rdi
	je	.L126
	movq	32(%rbx), %rsi
	subq	%rdi, %rsi
	call	_ZdlPvm@PLT
	movq	$0, (%rbx)
	movl	$0, 8(%rbx)
	movq	$0, 16(%rbx)
	movl	$0, 24(%rbx)
	movq	$0, 32(%rbx)
.L126:
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE9706:
	.size	_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv, .-_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC5:
	.string	"\320\236\320\261\321\205\320\276\320\264 \320\267\320\260\320\262\320\265\321\200\321\210\320\265\320\275."
	.section	.rodata.str1.8
	.align 8
.LC6:
	.string	"\320\222\321\200\320\265\320\274\321\217 \320\262\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\321\217: "
	.section	.rodata.str1.1
.LC7:
	.string	" \320\274\320\270\320\273\320\273\320\270\321\201\320\265\320\272\321\203\320\275\320\264"
	.section	.text.unlikely
.LCOLDB8:
	.section	.text.startup,"ax",@progbits
.LHOTB8:
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB9047:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA9047
	pushq	%r13
	.cfi_def_cfa_offset 16
	.cfi_offset 13, -16
	movl	$30000000, %edx
	movl	$30000000, %esi
	pushq	%r12
	.cfi_def_cfa_offset 24
	.cfi_offset 12, -24
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	pushq	%rbx
	.cfi_def_cfa_offset 40
	.cfi_offset 3, -40
	subq	$88, %rsp
	.cfi_def_cfa_offset 128
	movq	%rsp, %r12
	movq	%r12, %rdi
.LEHB11:
	call	_Z13generateGraphii
.LEHE11:
	movl	$3750000, %edi
	movq	$0, 32(%rsp)
	movq	$0, 40(%rsp)
	movq	$0, 48(%rsp)
	movq	$0, 56(%rsp)
	movq	$0, 64(%rsp)
.LEHB12:
	call	_Znwm@PLT
.LEHE12:
	movq	%rax, %rdi
	movl	$3750000, %edx
	leaq	32(%rsp), %r13
	xorl	%esi, %esi
	leaq	3750000(%rax), %rax
	movq	%rdi, 32(%rsp)
	movq	%rax, 64(%rsp)
	movl	$0, 40(%rsp)
	movq	%rax, 48(%rsp)
	movl	$0, 56(%rsp)
	call	memset@PLT
	call	_ZNSt6chrono3_V212system_clock3nowEv@PLT
	movq	%r13, %rdx
	movq	%r12, %rsi
	xorl	%edi, %edi
	movq	%rax, %rbx
.LEHB13:
	call	_Z3dfsiRSt6vectorIS_IiSaIiEESaIS1_EERS_IbSaIbEE
	leaq	_ZSt4cout(%rip), %rbp
	movq	%rbp, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	call	_ZNSt6chrono3_V212system_clock3nowEv@PLT
	leaq	.LC5(%rip), %rsi
	movq	%rbp, %rdi
	movabsq	$4835703278458516699, %rdx
	subq	%rbx, %rax
	movq	%rax, %rcx
	imulq	%rdx
	sarq	$63, %rcx
	sarq	$18, %rdx
	movq	%rdx, %rbx
	movl	$28, %edx
	subq	%rcx, %rbx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	%rbp, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
	movl	$33, %edx
	leaq	.LC6(%rip), %rsi
	movq	%rbp, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	%rbx, %rsi
	movq	%rbp, %rdi
	call	_ZNSo9_M_insertIlEERSoT_@PLT
	movl	$23, %edx
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	movq	%rax, %rbx
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	%rbx, %rdi
	call	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_.isra.0
.LEHE13:
	movq	%r13, %rdi
	call	_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
	movq	%r12, %rdi
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	addq	$88, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 40
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 32
	popq	%rbp
	.cfi_def_cfa_offset 24
	popq	%r12
	.cfi_def_cfa_offset 16
	popq	%r13
	.cfi_def_cfa_offset 8
	ret
.L138:
	.cfi_restore_state
	movq	%rax, %rbx
	jmp	.L134
.L137:
	movq	%rax, %rbx
	jmp	.L136
	.section	.gcc_except_table
.LLSDA9047:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE9047-.LLSDACSB9047
.LLSDACSB9047:
	.uleb128 .LEHB11-.LFB9047
	.uleb128 .LEHE11-.LEHB11
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB12-.LFB9047
	.uleb128 .LEHE12-.LEHB12
	.uleb128 .L138-.LFB9047
	.uleb128 0
	.uleb128 .LEHB13-.LFB9047
	.uleb128 .LEHE13-.LEHB13
	.uleb128 .L137-.LFB9047
	.uleb128 0
.LLSDACSE9047:
	.section	.text.startup
	.cfi_endproc
	.section	.text.unlikely
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDAC9047
	.type	main.cold, @function
main.cold:
.LFSB9047:
.L134:
	.cfi_def_cfa_offset 128
	.cfi_offset 3, -40
	.cfi_offset 6, -32
	.cfi_offset 12, -24
	.cfi_offset 13, -16
	leaq	32(%rsp), %rdi
	call	_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
.L135:
	movq	%r12, %rdi
	call	_ZNSt6vectorIS_IiSaIiEESaIS1_EED1Ev
	movq	%rbx, %rdi
.LEHB14:
	call	_Unwind_Resume@PLT
.LEHE14:
.L136:
	movq	%r13, %rdi
	call	_ZNSt13_Bvector_baseISaIbEE13_M_deallocateEv
	jmp	.L135
	.cfi_endproc
.LFE9047:
	.section	.gcc_except_table
.LLSDAC9047:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSEC9047-.LLSDACSBC9047
.LLSDACSBC9047:
	.uleb128 .LEHB14-.LCOLDB8
	.uleb128 .LEHE14-.LEHB14
	.uleb128 0
	.uleb128 0
.LLSDACSEC9047:
	.section	.text.unlikely
	.section	.text.startup
	.size	main, .-main
	.section	.text.unlikely
	.size	main.cold, .-main.cold
.LCOLDE8:
	.section	.text.startup
.LHOTE8:
	.p2align 4
	.type	_GLOBAL__sub_I__Z13generateGraphii, @function
_GLOBAL__sub_I__Z13generateGraphii:
.LFB9940:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	leaq	_ZStL8__ioinit(%rip), %rbx
	movq	%rbx, %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	movq	%rbx, %rsi
	popq	%rbx
	.cfi_def_cfa_offset 8
	leaq	__dso_handle(%rip), %rdx
	jmp	__cxa_atexit@PLT
	.cfi_endproc
.LFE9940:
	.size	_GLOBAL__sub_I__Z13generateGraphii, .-_GLOBAL__sub_I__Z13generateGraphii
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I__Z13generateGraphii
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.hidden	__dso_handle
	.ident	"GCC: (Debian 12.2.0-14) 12.2.0"
	.section	.note.GNU-stack,"",@progbits
