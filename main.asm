	OPTION PROLOGUE:None
	OPTION EPILOGUE:None
	OPTION CASEMAP :None
	OPTION NOSCOPED
	OPTION PROC:PUBLIC
	OPTION DOTNAME
	
.686p
.xmm
.model flat, stdcall
	INCLUDE manualdecl.asm
	INCLUDE decls.asm
	INCLUDE proto.asm
.stack  65536
.code
	INCLUDE manualfunc.asm
	INCLUDE func.asm
.const
	INCLUDE manualconst.asm
	INCLUDE const.asm
.data
	INCLUDE data.asm
end