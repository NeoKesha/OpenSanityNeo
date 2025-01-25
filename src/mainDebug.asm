	OPTION PROLOGUE:None
	OPTION EPILOGUE:None
	OPTION CASEMAP :None
	OPTION NOSCOPED
	OPTION PROC:PUBLIC
	OPTION DOTNAME
	
DEBUG_ENABLED = 1
;;DEBUG_REG_FUNC = 1
;;DEBUG_FPU_MONITOR = 1
;;DEBUG_THIS_PRINT = 1
;;DEBUG_CALLLOG = 1
.686p
.xmm
.model flat, stdcall
	INCLUDE debug\debugdecl.asm
	INCLUDE manual\manualdecl.asm
	INCLUDE decls\decls.asm
	INCLUDE decls\proto.asm
.stack  65536
.code
	INCLUDE debug\debugfunc.asm
	INCLUDE manual\manualfunc.asm
	INCLUDE code\func.asm
.const
	INCLUDE debug\debugconst.asm
	INCLUDE manual\manualconst.asm
	INCLUDE data\const.asm
.data
	DBG_FPU_STATE db 512 dup(0)
	DBG_TMP_BUFFER db 512 dup(0)
	INCLUDE data\data.asm
end