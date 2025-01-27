	INCLUDE decls\configRelease.asm
	INCLUDE decls\macro.asm
	
	INCLUDE manual\manualdecl.asm
	INCLUDE decls\decls.asm
	INCLUDE decls\proto.asm
.code
	INCLUDE manual\manualfunc.asm
	INCLUDE code\func.asm
.const
	INCLUDE manual\manualconst.asm
	INCLUDE data\const.asm
.data
	INCLUDE data\data.asm
end