	OPTION PROLOGUE:None
	OPTION EPILOGUE:None
	OPTION CASEMAP :None
	OPTION NOSCOPED
	OPTION PROC:PUBLIC
	OPTION DOTNAME
	
.686p
.xmm
.model flat, stdcall
USE_MOVAPS_HACK = 1
	INCLUDE macro.asm
	INCLUDE manual\manualdecl.asm
	INCLUDE decls.asm
	INCLUDE proto.asm
.code
	INCLUDE manual\manualfunc.asm
	INCLUDE func.asm
.const
	INCLUDE manual\manualconst.asm
	INCLUDE const.asm
.data
	INCLUDE data.asm
end