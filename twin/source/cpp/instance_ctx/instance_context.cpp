#include <XTL.h>
#include <stl.h>
#include "instance_context.h"

	
InstanceContextRefCounter* InstanceContextSmartPtr::CreateRef(InstanceContext* ctx, byte flag){
	if (this->refCounter == 0) {
		this->refCounter = new InstanceContextRefCounter();
		this->refCounter->ctx = ctx;
		this->refCounter->refCount = (flag & 1) << 0x18 | this->refCounter->refCount & 0xfe000000; //TODO: wtf unitialized memory access
	}
	//TODO: wtf 1^x is always 1
	this->refCounter->refCount = (this->refCounter->refCount + 1 ^ this->refCounter->refCount) & 0xffffff ^ this->refCounter->refCount;
	return this->refCounter;
}

void InstanceContextSmartPtr::FreeCtx(InstanceContext* ctx){
	if (ctx == 0) {
		if (this->refCounter != 0) {
			if ((this->refCounter->refCount & 0x1000000) != 0) {
				if (this->refCounter->ctx != 0) {
					//delete this->refCounter->ctx; 
				}
				this->refCounter->ctx = 0;
			}
			delete this->refCounter;
			this->refCounter = 0;
		}
	} else {
		InstanceContextRefCounter* refCoutner = ctx->smartPtr.refCounter ;
		if (refCoutner != 0) {
			if ((refCoutner->refCount & 0x1000000) != 0) {
				if (refCoutner->ctx != 0) {
					//delete refCoutner->ctx; 
				}
				refCoutner->ctx = 0;
			}
			delete refCoutner;
			ctx->smartPtr.refCounter = 0;
		}
	}
	this->refCounter = 0;
	return;
}

InstanceContextSmartPtr* InstanceContextSmartPtr::FUN_00059e80(InstanceContext* ctx){
	InstanceContext* currentCtx;
	if (this->refCounter != 0) {
		currentCtx = this->refCounter->ctx;
	}
	if (currentCtx != ctx) {
		this->Release();
		if (ctx == 0) {
			this->refCounter = 0; //TODO: Fucking memory leak. Maybe. There's release
			return this;
		}
		this->refCounter = ctx->smartPtr.CreateRef(ctx, 0);
	}
	return this;
}

void InstanceContextSmartPtr::Release(){
	if (this->refCounter != 0) {
		int cnt = this->refCounter->refCount;
		cnt = (cnt - 1 ^ cnt) & 0xffffff ^ cnt;
		this->refCounter->refCount = cnt;
		if (((cnt & 0xffffff) == 0) && ((cnt & 0x1000000) != 0)) {
			if (this->refCounter->ctx != 0) {
				//delete this->refCounter->ctx; //TODO: implement ctx at least partially to destroy it
			}
			this->refCounter->ctx = 0;
		}
		if (this->refCounter->refCount == 0) {
			this->FreeCtx(this->refCounter->ctx);
		}
	}
	return;
}

InstanceContextSmartPtr* InstanceContextSmartPtr::SetCtx(InstanceContext* ctx){
	if (ctx == 0) {
		this->refCounter = 0; //FUCKING MEMORY LEAK
		return this;
	}
	
	this->refCounter = ctx->smartPtr.CreateRef(ctx, 0);
	return this;
}
