	OPTION PROLOGUE:None
	OPTION EPILOGUE:None
	OPTION CASEMAP :None
	OPTION NOSCOPED
	OPTION PROC:PUBLIC
	OPTION DOTNAME
	
.686p
.xmm
.model flat, stdcall
	INCLUDE manual\manualdecl.asm
	INCLUDE decls\decls.asm
	INCLUDE decls\proto.asm
.stack  65536
.code
	INCLUDE manual\manualfunc.asm
	INCLUDE code\func.asm
.const
	INCLUDE manual\manualconst.asm
	INCLUDE data\const.asm
.data
	INCLUDE data\data.asm
end