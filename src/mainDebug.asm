	INCLUDE decls\configDebug.asm
	INCLUDE decls\macro.asm
	
	INCLUDE debug\debugdecl.asm
	INCLUDE manual\manualdecl.asm
	INCLUDE decls\decls.asm
	INCLUDE decls\proto.asm
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