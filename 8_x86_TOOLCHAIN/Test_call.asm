; Listing generated by Microsoft (R) Optimizing Compiler Version 16.00.30319.01 

	TITLE	D:\PRATHAMESH\C_PROGRAMMING_LANGUAGE\x86_Toolchain\Test_call.c
	.686P
	.XMM
	include listing.inc
	.model	flat

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

_DATA	SEGMENT
$SG2648	DB	0aH, '&iNo1 = %u', 0aH, '&iNo2 = %u', 0aH, '&iNo3 = %u', 0aH
	DB	'&iNo4 = %u', 0aH, '&iNo5 = %u', 0aH, 0aH, '&iNo6 = %u', 0aH, '&'
	DB	'iNo7 = %u', 0aH, '&iNo8 = %u', 0aH, '&iNo9 = %u', 0aH, '&iNo1'
	DB	'0 = %u', 0aH, 00H
_DATA	ENDS
PUBLIC	_main
EXTRN	_printf:PROC
; Function compile flags: /Odtp
_TEXT	SEGMENT
_iNo4$ = -40						; size = 4
_iNo8$ = -36						; size = 4
_iNo10$ = -32						; size = 4
_iNo1$ = -28						; size = 4
_iNo5$ = -24						; size = 4
_iNo9$ = -20						; size = 4
_iNo2$ = -16						; size = 4
_iNo6$ = -12						; size = 4
_iNo3$ = -8						; size = 4
_iNo7$ = -4						; size = 4
_main	PROC
; File d:\prathamesh\c_programming_language\x86_toolchain\test_call.c
; Line 4
	push	ebp
	mov	ebp, esp
	sub	esp, 40					; 00000028H
; Line 16
	lea	eax, DWORD PTR _iNo10$[ebp]
	push	eax
	lea	ecx, DWORD PTR _iNo9$[ebp]
	push	ecx
	lea	edx, DWORD PTR _iNo8$[ebp]
	push	edx
	lea	eax, DWORD PTR _iNo7$[ebp]
	push	eax
	lea	ecx, DWORD PTR _iNo6$[ebp]
	push	ecx
	lea	edx, DWORD PTR _iNo5$[ebp]
	push	edx
	lea	eax, DWORD PTR _iNo4$[ebp]
	push	eax
	lea	ecx, DWORD PTR _iNo3$[ebp]
	push	ecx
	lea	edx, DWORD PTR _iNo2$[ebp]
	push	edx
	lea	eax, DWORD PTR _iNo1$[ebp]
	push	eax
	push	OFFSET $SG2648
	call	_printf
	add	esp, 44					; 0000002cH
; Line 18
	xor	eax, eax
; Line 19
	mov	esp, ebp
	pop	ebp
	ret	0
_main	ENDP
_TEXT	ENDS
END
