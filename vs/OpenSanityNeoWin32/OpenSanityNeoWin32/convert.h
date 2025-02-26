#pragma once
#include <Windows.h>
#include <d3d8.h>

DWORD ConvertBehaviourFlags(DWORD Flags);

DWORD ConvertSetGammaRampFlags(DWORD Flags);

DWORD ConvertClearFlags(DWORD Flags);

D3DPRIMITIVETYPE ConvertPrimitiveType(D3DPRIMITIVETYPE type);

D3DTRANSFORMSTATETYPE ConvertTransformState(D3DTRANSFORMSTATETYPE state);

D3DSHADEMODE ConvertShadeMode(D3DSHADEMODE mode);

D3DFILLMODE ConvertFillMode(D3DFILLMODE mode);

D3DBLEND ConvertBlend(D3DBLEND blend);

D3DBLENDOP ConvertBlendOp(D3DBLENDOP op);

D3DCULL ConvertCull(D3DCULL value);

D3DCMPFUNC ConvertCmpFunc(D3DCMPFUNC value);

D3DSTENCILOP ConvertStencilOp(D3DSTENCILOP value);

D3DFOGMODE ConvertFogMode(D3DFOGMODE value);

D3DZBUFFERTYPE ConvertZBufferType(D3DZBUFFERTYPE value);

D3DVERTEXBLENDFLAGS ConvertVertexBlendFlags(D3DVERTEXBLENDFLAGS value);

D3DMATERIALCOLORSOURCE ConvertMaterialColorSource(D3DMATERIALCOLORSOURCE value);

D3DRENDERSTATETYPE ConvertRenderStateType(D3DRENDERSTATETYPE type);

DWORD ConvertColorWriteEnable(DWORD Flags);

DWORD ConvertWrap(DWORD flags);

DWORD ConvertWrapCoord(DWORD flags);

D3DTEXTUREOP ConvertTextureOp(D3DTEXTUREOP value);

D3DTEXTUREADDRESS ConvertTextureAddress(D3DTEXTUREADDRESS value);

D3DTEXTURETRANSFORMFLAGS ConvertTextureTransformFlags(D3DTEXTURETRANSFORMFLAGS value);

D3DTEXTUREFILTERTYPE ConvertTextureFilterType(D3DTEXTUREFILTERTYPE value);

D3DTEXTURESTAGESTATETYPE ConvertTextureStageType(D3DTEXTURESTAGESTATETYPE type);

D3DFORMAT ConvertD3DFormat(D3DFORMAT fmt);

D3DSWAPEFFECT ConvertSwapEffect(D3DSWAPEFFECT val);

D3DDEVTYPE ConvertDeviceType(D3DDEVTYPE type);

char* ConvertFilePath(const char* path);

const char* ConvertShaderListing(const char* input);

const DWORD* ConvertShaderDecl(const DWORD* input);

DWORD ConvertLockFlags(DWORD flags);


static const char* staticGeomShader1 =		"vs.1.1\n"
											"mul r2, c[0], v0.x\n"
											"mad r2, c[1], v0.y, r2\n"
											"mad r2, c[2], v0.z, r2\n"
											"mad r2, c[3], v0.w, r2\n"
											"dp3 r6, v5, c[6]\n"
											"mul r6, r6, c[9]\n"
											"dp3 r7, v5, c[7]\n"
											"mad r7, r7, c[10], r6\n"
											"dp3 r8, v5, c[8]\n"
											"mad r8, r8, c[11], r7\n"
											"add r9, r8, c[5]\n"
											"mov oD0.w, v6.w\n"
											"mul oD0.xyz, v6, r9\n"
											"mul oT1.x, r2.z, c[15].z\n"
											"add oT0, v7, c[4]\n"
											"mul r2.xyz, r2.xyz, c[38].xyz\n"
											"rcp r1.x, r2.w\n"
											"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n"
											"mov oPos, r2";
static const char* staticGeomShader2 =		"vs.1.1\n"
											"mul r2, c[0], v0.x\n"
											"mad r2, c[1], v0.y, r2\n"
											"mad r2, c[2], v0.z, r2\n"
											"mad r2, c[3], v0.w, r2\n"
											"mov oD0, v6\n"
											"mul oT1.x, r2.z, c[15].z\n"
											"add oT0, v7, c[4]\n"
											"mul r2.xyz, r2.xyz, c[38].xyz\n"
											"rcp r1.x, r2.w\n"
											"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n"
											"mov oPos, r2";
static const char* skinnedShader =		"vs.1.1\n"
										"mov a0.x, v3.x\n"
										"mul r0, c[a0.x + 0], v0.x\n"
										"mad r0, c[a0.x + 1], v0.y, r0\n"
										"mad r0, c[a0.x + 2], v0.z, r0\n"
										"mad r0, c[a0.x + 3], v0.w, r0\n"
										"mul r0, r0, v1.x\n"
										"mul r3, c[a0.x + 0], v5.x\n"
										"mad r3, c[a0.x + 1], v5.y, r3\n"
										"mad r3, c[a0.x + 2], v5.z, r3\n"
										"mov a0.x, v3.y\n"
										"mul r1, c[a0.x + 0], v0.x\n"
										"mad r1, c[a0.x + 1], v0.y, r1\n"
										"mad r1, c[a0.x + 2], v0.z, r1\n"
										"mad r1, c[a0.x + 3], v0.w, r1\n"
										"mad r0, r1, v1.y, r0\n"
										"mov a0.x, v3.z\n"
										"mul r2, c[a0.x + 0], v0.x\n"
										"mad r2, c[a0.x + 1], v0.y, r2\n"
										"mad r2, c[a0.x + 2], v0.z, r2\n"
										"mad r2, c[a0.x + 3], v0.w, r2\n"
										"mad r0, r2, v1.z, r0\n"
										"mul r4, c[0], r0.x\n"
										"mad r4, c[1], r0.y, r4\n"
										"mad r4, c[2], r0.z, r4\n"
										"mad r4, c[3], r0.w, r4\n"
										"dp3 r6, r3, c6\n"
										"mul r6, r6, c[9]\n"
										"dp3 r7, r3, c7\n"
										"mad r7, r7, c[10], r6\n"
										"dp3 r8, r3, c8\n"
										"mad r8, r8, c[11], r7\n"
										"add r9, r8, c[5]\n"
										"mov oD0.w, v6.w\n"
										"mul oD0.xyz, v6, r9\n"
										"mul oT1.x, r4.z, c[15].z\n"
										"add oT0, v7, c[4]\n"
										"mov oPos, r4";
static const char* blendShapeShader1 =	"vs.1.1\n"
										"mov r4, v0\n"
										"mov r5, v0\n"
										"sub r8, v10, r5\n"
										"mad r4, c[12].z, r8, r4\n"
										"sub r7, v9, r5\n"
										"mad r4, c[12].y, r7, r4\n"
										"sub r6, v8, r5\n"
										"mad r4, c[12].x, r6, r4\n"
										"mov a0.x, v3.x\n"
										"mul r0, c[a0.x + 0], r4.x\n"
										"mad r0, c[a0.x + 1], r4.y, r0\n"
										"mad r0, c[a0.x + 2], r4.z, r0\n"
										"mad r0, c[a0.x + 3], r4.w, r0\n"
										"mul r0, r0, v1.x\n"
										"mul r3, c[a0.x + 0], v5.x\n"
										"mad r3, c[a0.x + 1], v5.y, r3\n"
										"mad r3, c[a0.x + 2], v5.z, r3\n"
										"mov a0.x, v3.y\n"
										"mul r1, c[a0.x + 0], r4.x\n"
										"mad r1, c[a0.x + 1], r4.y, r1\n"
										"mad r1, c[a0.x + 2], r4.z, r1\n"
										"mad r1, c[a0.x + 3], r4.w, r1\n"
										"mad r0, r1, v1.y, r0\n"
										"mov a0.x, v3.z\n"
										"mul r2, c[a0.x + 0], r4.x\n"
										"mad r2, c[a0.x + 1], r4.y, r2\n"
										"mad r2, c[a0.x + 2], r4.z, r2\n"
										"mad r2, c[a0.x + 3], r4.w, r2\n"
										"mad r0, r2, v1.z, r0\n"
										"mul r10, c[0], r0.x\n"
										"mad r10, c[1], r0.y, r10\n"
										"mad r10, c[2], r0.z, r10\n"
										"mad r10, c[3], r0.w, r10\n"
										"dp3 r6, r3, c6\n"
										"mul r6, r6.x, c[9]\n"
										"dp3 r7, r3, c7\n"
										"mad r7, r7.x, c[10], r6\n"
										"dp3 r8, r3, c8\n"
										"mad r8, r8.x, c[11], r7\n"
										"add r9, r8, c[5]\n"
										"mov oD0.w, v6.w\n"
										"mul oD0.xyz, v6, r9\n"
										"mul oT1.x, r10.z, c[15].z\n"
										"add oT0, v7, c[4]\n"
										"mov oPos, v0";
static const char* blendShapeShader2 =	"vs.1.1\n"
										"mov a0.x, v3.x\n"
										"mul r0, c[a0.x + 0], v0.x\n"
										"mad r0, c[a0.x + 1], v0.y, r0\n"
										"mad r0, c[a0.x + 2], v0.z, r0\n"
										"mad r0, c[a0.x + 3], v0.w, r0\n"
										"mul r0, r0, v1.x\n"
										"mul r3, c[a0.x + 0], v5.x\n"
										"mad r3, c[a0.x + 1], v5.y, r3\n"
										"mad r3, c[a0.x + 2], v5.z, r3\n"
										"mov a0.x, v3.y\n"
										"mul r1, c[a0.x + 0], v0.x\n"
										"mad r1, c[a0.x + 1], v0.y, r1\n"
										"mad r1, c[a0.x + 2], v0.z, r1\n"
										"mad r1, c[a0.x + 3], v0.w, r1\n"
										"mad r0, r1, v1.y, r0\n"
										"mov a0.x, v3.z\n"
										"mul r2, c[a0.x + 0], v0.x\n"
										"mad r2, c[a0.x + 1], v0.y, r2\n"
										"mad r2, c[a0.x + 2], v0.z, r2\n"
										"mad r2, c[a0.x + 3], v0.w, r2\n"
										"mad r0, r2, v1.z, r0\n"
										"mul r10, c[0], r0.x\n"
										"mad r10, c[1], r0.y, r10\n"
										"mad r10, c[2], r0.z, r10\n"
										"mad r10, c[3], r0.w, r10\n"
										"dp3 r6, r3, c6\n"
										"mul r6, r6.x, c[9]\n"
										"dp3 r7, r3, c7\n"
										"mad r7, r7.x, c[10], r6\n"
										"dp3 r8, r3, c8\n"
										"mad r8, r8.x, c[11], r7\n"
										"add r9, r8, c[5]\n"
										"mov oD0.w, v6.w\n"
										"mul oD0.xyz, v6, r9\n"
										"mul oT1.x, r10.z, c[15].z\n"
										"add oT0, v7, c[4]\n"
										"mov oPos, r10";
static const char* waterShader =	"vs.1.1\n"
									"mul r2, v0.x, c[0]\n"
									"mov oD0, v6\n"
									"mad r2, v0.y, c[1], r2\n"
									"mad r2, v0.z, c[2], r2\n"
									"mad r2, v0.w, c[3], r2\n"
									"add oT0, v7, c[4]\n"
									"mul oT1.x, r2.z, c[15].z\n"
									"mul r2.xyz, r2.xyz, c[38].xyz\n" //scale. wtf is register c[-38]?
									"rcp r1.x, r2.w\n" //no rcc which is clamped
									"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n" //offset
									"mov oPos, r2\n";
static const char* skyShader =		"vs.1.1\n"
									"mov oT1.x, c[5].z\n"
									"mul r2, v0.x, c[0]\n"
									"mov oD0, v6\n"
									"mad r2, v0.y, c[1], r2\n"
									"mad r2, v0.z, c[2], r2\n"
									"mad r2, v0.w, c[3], r2\n"
									"add oT0, v7, c[4]\n"
									"mul r2.xyz, r2.xyz, c[38].xyz\n"
									"rcp r1.x, r2.w\n"
									"mad r2.xyz, r2.xyz, r1.x, c[37].xyz\n"
									"mov r2.z, c[5].z\n"
									"mov oPos, r2\n";

static const char* unusedShader1 = staticGeomShader2;
static const char* unusedShader2 = staticGeomShader2;
static const char* unusedShader3 = staticGeomShader2;

static const char* shaders[] = { unusedShader1, unusedShader2,unusedShader3,waterShader, skyShader, staticGeomShader1, staticGeomShader2, skinnedShader, blendShapeShader1, blendShapeShader2  };

DWORD staticDecl1[] = { D3DVSD_STREAM(0), 
						D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
						D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4),
						D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4), 
						D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2),
						D3DVSD_END() 
};

DWORD staticDecl2[] = { D3DVSD_STREAM(0),
						D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
						D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4),
						D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4),
						D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2),
						D3DVSD_END()
};

DWORD skinnedDecl[] = { D3DVSD_STREAM(0),
						D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
						D3DVSD_REG(D3DVSDE_BLENDWEIGHT, D3DVSDT_FLOAT3),
						D3DVSD_REG(D3DVSDE_NORMAL, D3DVSDT_SHORT4), //V2 -> V3
						D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4), //V3 -> V5
						D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4), //V4 -> V6
						D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2), //V5 -> V7
						D3DVSD_END()
};

DWORD blendShapeDecl1[] = { D3DVSD_STREAM(0),
							D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
							D3DVSD_REG(D3DVSDE_BLENDWEIGHT, D3DVSDT_FLOAT3),
							D3DVSD_REG(D3DVSDE_NORMAL, D3DVSDT_SHORT4),  //V2 -> V3
							D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4),  //V3 -> V5
							D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4), //V4 -> V6
							D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2), //V5 -> V7
							D3DVSD_STREAM(1),
							D3DVSD_REG(D3DVSDE_TEXCOORD1, D3DVSDT_FLOAT3), //V6 -> V8 NOT A TEXTURE
							D3DVSD_STREAM(2),
							D3DVSD_REG(D3DVSDE_TEXCOORD2, D3DVSDT_FLOAT3),//V7 -> V9 NOT A TEXTURE
							D3DVSD_STREAM(3),
							D3DVSD_REG(D3DVSDE_TEXCOORD3, D3DVSDT_FLOAT3),//V8 -> V10 NOT A TEXTURE
							D3DVSD_STREAM(4),
							D3DVSD_REG(D3DVSDE_TEXCOORD4, D3DVSDT_FLOAT3),//V9 -> V11 NOT A TEXTURE
							D3DVSD_STREAM(5),
							D3DVSD_REG(D3DVSDE_TEXCOORD5, D3DVSDT_FLOAT3),//V10 -> V12 NOT A TEXTURE
							D3DVSD_STREAM(6),
							D3DVSD_REG(D3DVSDE_TEXCOORD6, D3DVSDT_FLOAT3),//V11 -> V13 NOT A TEXTURE
							D3DVSD_STREAM(7),
							D3DVSD_REG(D3DVSDE_TEXCOORD7, D3DVSDT_FLOAT3),//V12 -> V14 NOT A TEXTURE
							D3DVSD_STREAM(8),
							D3DVSD_REG(D3DVSDE_POSITION2, D3DVSDT_FLOAT3),//V13 -> V15
							D3DVSD_END() //Stream limit probably
};
//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[23] = D3DVSD_STREAM(9),
//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[24] = D3DVSD_REG(D3DVSDE_NORMAL2, D3DVSDT_FLOAT3),//V14 -> V16 NOT A NORMAL
//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[25] = D3DVSD_STREAM(10),
//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[26] = D3DVSD_REG(D3DVSDE_BLENDINDICES, D3DVSDT_FLOAT3),//V15 -> V2 NOT A BLEND INDEX
//GLOBAL->SHADER_BLEND_SKIN_1.pDeclaration[27] = D3DVSD_END(),

DWORD blendShapeDecl2[] = { D3DVSD_STREAM(0),
							D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
							D3DVSD_REG(D3DVSDE_BLENDWEIGHT, D3DVSDT_FLOAT3),
							D3DVSD_REG(D3DVSDE_NORMAL, D3DVSDT_SHORT4), //V2 -> V3
							D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4), //V3 -> V5
							D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4), //V4 -> V6
							D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2), //V5 -> V7
							D3DVSD_END(),
};

DWORD waterDecl[] = {	D3DVSD_STREAM(0),
						D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
						D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4),
						D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4),
						D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2),
						D3DVSD_END(),
};

DWORD skyDecl[] = { D3DVSD_STREAM(0),
					D3DVSD_REG(D3DVSDE_POSITION, D3DVSDT_FLOAT3),
					D3DVSD_REG(D3DVSDE_DIFFUSE, D3DVSDT_FLOAT4),
					D3DVSD_REG(D3DVSDE_SPECULAR, D3DVSDT_FLOAT4),
					D3DVSD_REG(D3DVSDE_TEXCOORD0, D3DVSDT_FLOAT2),
					D3DVSD_END()
};

static DWORD* decls[] = { waterDecl, skyDecl, staticDecl1 , staticDecl2, skinnedDecl, blendShapeDecl1, blendShapeDecl2 };