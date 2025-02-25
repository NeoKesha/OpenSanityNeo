#include "convert.h"

DWORD ConvertBehaviourFlags(DWORD Flags) {
	return Flags;
}

DWORD ConvertSetGammaRampFlags(DWORD Flags) {
	return Flags & ~(0x00000002L); //D3DSGR_IMMEDIATE unsupported
}

DWORD ConvertClearFlags(DWORD Flags) {
	return ((Flags) << 1) | (Flags >= 0x00000010l); //Where's your god now?
}

D3DPRIMITIVETYPE ConvertPrimitiveType(D3DPRIMITIVETYPE type) {
    if (type <= 2) return type;
    if (type == 3) return D3DPT_LINESTRIP; //LINELOOP extension
    if (type >= 8) return (D3DPRIMITIVETYPE)(type - 3); //QUADLIST => TRIANGLELIST

    return (D3DPRIMITIVETYPE)(type - 1); //b-b-but lines belong with lines... GO FUCK YOURSELF GUY WHO INSERTED EXTENSION IN THE MIDDLE OF ENUM
}

D3DTRANSFORMSTATETYPE ConvertTransformState(D3DTRANSFORMSTATETYPE state) {
    switch (state) {
        case 0: return D3DTS_VIEW;
        case 1: return D3DTS_PROJECTION;
        case 2: return D3DTS_TEXTURE0;
        case 3: return D3DTS_TEXTURE1;
        case 4: return D3DTS_TEXTURE2;
        case 5: return D3DTS_TEXTURE3;
        case 6: return D3DTS_TEXTURE4; //D3DTS_WORLD
        case 7: return D3DTS_TEXTURE5; //D3DTS_WORLD1
        case 8: return D3DTS_TEXTURE6; //D3DTS_WORLD2
        case 9: return D3DTS_TEXTURE7; //D3DTS_WORLD3
    }

    return state;
}

D3DSHADEMODE ConvertShadeMode(D3DSHADEMODE mode) {
    switch (mode) {
        case 0x1d00: return D3DSHADE_FLAT;
        case 0x1d01: return D3DSHADE_GOURAUD;
        default: return D3DSHADE_FLAT;
    }
}

D3DFILLMODE ConvertFillMode(D3DFILLMODE mode) {
    switch (mode) {
        case 0x1b00: return D3DFILL_POINT;
        case 0x1b01: return D3DFILL_WIREFRAME;
        case 0x1b02: return D3DFILL_SOLID;
        default: return D3DFILL_SOLID;
    }
}

D3DBLEND ConvertBlend(D3DBLEND blend) {
    switch (blend) {
        case 1: return D3DBLEND_ZERO;
        case 2: return D3DBLEND_ONE;
        case 0x300: return D3DBLEND_SRCCOLOR;
        case 0x301: return D3DBLEND_INVSRCCOLOR;
        case 0x302: return D3DBLEND_SRCALPHA;
        case 0x304: return D3DBLEND_DESTALPHA;
        case 0x305: return D3DBLEND_INVDESTALPHA;
        case 0x306: return D3DBLEND_DESTCOLOR;
        case 0x307: return D3DBLEND_INVDESTCOLOR;
        case 0x308: return D3DBLEND_SRCALPHASAT;
        default: return D3DBLEND_ZERO;
    }
}

D3DBLENDOP ConvertBlendOp(D3DBLENDOP op) {
    switch (op) {
        case 0x8006: return D3DBLENDOP_ADD;
        case 0x800a: return D3DBLENDOP_SUBTRACT;
        case 0x800b: return D3DBLENDOP_REVSUBTRACT;
        case 0x8007: return D3DBLENDOP_MIN;
        case 0x8008: return D3DBLENDOP_MAX;
        default: return D3DBLENDOP_ADD;
    }
}

D3DCULL ConvertCull(D3DCULL value) {
    switch (value) {
        case 0: return D3DCULL_NONE;
        case 0x900: return D3DCULL_CW;
        case 0x901: return D3DCULL_CCW;
        default: return D3DCULL_NONE;
    }
}

D3DCMPFUNC ConvertCmpFunc(D3DCMPFUNC value) {
    switch (value) {
        case 0x200: return D3DCMP_NEVER;
        case 0x201: return D3DCMP_LESS;
        case 0x202: return D3DCMP_EQUAL;
        case 0x203: return D3DCMP_LESSEQUAL;
        case 0x204: return D3DCMP_GREATER;
        case 0x205: return D3DCMP_NOTEQUAL;
        case 0x206: return D3DCMP_GREATEREQUAL;
        case 0x207: return D3DCMP_ALWAYS;
        default: return D3DCMP_NEVER;
    }
}

D3DSTENCILOP ConvertStencilOp(D3DSTENCILOP value) {
    switch (value) {
        case 0x1e00: return D3DSTENCILOP_KEEP;
        case 0: return D3DSTENCILOP_ZERO;
        case 0x1e01: return D3DSTENCILOP_REPLACE;
        case 0x1e02: return D3DSTENCILOP_INCRSAT;
        case 0x1e03: return D3DSTENCILOP_DECRSAT;
        case 0x150a: return D3DSTENCILOP_INVERT;
        case 0x8507: return D3DSTENCILOP_INCR;
        case 0x8508: return D3DSTENCILOP_DECR;
        default: return D3DSTENCILOP_KEEP;
    }
}

D3DFOGMODE ConvertFogMode(D3DFOGMODE value) {
    return value;
}

D3DZBUFFERTYPE ConvertZBufferType(D3DZBUFFERTYPE value) {
    return value;
}

D3DVERTEXBLENDFLAGS ConvertVertexBlendFlags(D3DVERTEXBLENDFLAGS value) {
    switch (value) {
    case 0: return D3DVBF_DISABLE;
    case 1: return D3DVBF_1WEIGHTS;
    case 3: return D3DVBF_2WEIGHTS;
    case 5: return D3DVBF_3WEIGHTS;
    default: return D3DVBF_DISABLE;
    }
}

D3DMATERIALCOLORSOURCE ConvertMaterialColorSource(D3DMATERIALCOLORSOURCE value) {
    return value;
}

D3DRENDERSTATETYPE ConvertRenderStateType(D3DRENDERSTATETYPE type) {
    switch (type) {
        case 143: return D3DRS_ZENABLE;
        case 139: return D3DRS_FILLMODE;
        case 66: return D3DRS_SHADEMODE;
        case 64: return D3DRS_ZWRITEENABLE;
        case 60: return D3DRS_ALPHATESTENABLE;
        case 62: return D3DRS_SRCBLEND;
        case 63: return D3DRS_DESTBLEND;
        case 147: return D3DRS_CULLMODE;
        case 57: return D3DRS_ZFUNC;
        case 61: return D3DRS_ALPHAREF;
        case 58: return D3DRS_ALPHAFUNC;
        case 65: return D3DRS_DITHERENABLE;
        case 59: return D3DRS_ALPHABLENDENABLE;
        case 92: return D3DRS_FOGENABLE;
        case 103: return D3DRS_SPECULARENABLE;
        case 138: return D3DRS_FOGCOLOR;
        case 93: return D3DRS_FOGTABLEMODE;
        case 94: return D3DRS_FOGSTART;
        case 95: return D3DRS_FOGEND;
        case 96: return D3DRS_FOGDENSITY;
        case 149: return D3DRS_ZBIAS;
        case 97: return D3DRS_RANGEFOGENABLE;
        case 144: return D3DRS_STENCILENABLE;
        case 145: return D3DRS_STENCILFAIL;
        case 68: return D3DRS_STENCILZFAIL;
        case 69: return D3DRS_STENCILPASS;
        case 70: return D3DRS_STENCILFUNC;
        case 71: return D3DRS_STENCILREF;
        case 72: return D3DRS_STENCILMASK;
        case 73: return D3DRS_STENCILWRITEMASK;
        case 148: return D3DRS_TEXTUREFACTOR;
        case 98: return D3DRS_WRAP0;
        case 99: return D3DRS_WRAP1;
        case 100: return D3DRS_WRAP2;
        case 101: return D3DRS_WRAP3;
        case 102: return D3DRS_LIGHTING;
        case 115: return D3DRS_AMBIENT;
        case 105: return D3DRS_COLORVERTEX;
        case 104: return D3DRS_LOCALVIEWER;
        case 142: return D3DRS_NORMALIZENORMALS;
        case 11: return D3DRS_DIFFUSEMATERIALSOURCE;
        case 110: return D3DRS_SPECULARMATERIALSOURCE;
        case 112: return D3DRS_AMBIENTMATERIALSOURCE;
        case 113: return D3DRS_EMISSIVEMATERIALSOURCE;
        case 137: return D3DRS_VERTEXBLEND;
        case 116: return D3DRS_POINTSIZE;
        case 117: return D3DRS_POINTSIZE_MIN;
        case 118: return D3DRS_POINTSPRITEENABLE;
        case 119: return D3DRS_POINTSCALEENABLE;
        case 120: return D3DRS_POINTSCALE_A;
        case 121: return D3DRS_POINTSCALE_B;
        case 122: return D3DRS_POINTSCALE_C;
        case 124: return D3DRS_PATCHEDGESTYLE;
        case 125: return D3DRS_PATCHSEGMENTS;
        case 123: return D3DRS_POINTSIZE_MAX;
        case 67: return D3DRS_COLORWRITEENABLE;
        case 74: return D3DRS_BLENDOP;
        default: return D3DRS_FORCE_DWORD;
    }
}

DWORD ConvertColorWriteEnable(DWORD Flags) {
    if (Flags == 0x01010101) {
        return D3DCOLORWRITEENABLE_RED | D3DCOLORWRITEENABLE_GREEN | D3DCOLORWRITEENABLE_BLUE | D3DCOLORWRITEENABLE_ALPHA;
    }
    DWORD newFlags = 0;
    if ((Flags & (1L << 16)) != 0) {
        newFlags |= D3DCOLORWRITEENABLE_RED;
    }
    if ((Flags & (1L << 8)) != 0) {
        newFlags |= D3DCOLORWRITEENABLE_GREEN;
    }
    if ((Flags & (1L << 0)) != 0) {
        newFlags |= D3DCOLORWRITEENABLE_BLUE;
    }
    if ((Flags & (1L << 24)) != 0) {
        newFlags |= D3DCOLORWRITEENABLE_ALPHA;
    }

    return newFlags;
}

DWORD ConvertWrap(DWORD flags) {
    DWORD newFlags = 0;
    if ((flags & 0x00000010L) != 0) newFlags |= D3DWRAP_U;
    if ((flags & 0x00001000L) != 0) newFlags |= D3DWRAP_V;
    if ((flags & 0x00100000L) != 0) newFlags |= D3DWRAP_W;
    return newFlags;
}

DWORD ConvertWrapCoord(DWORD flags) {
    DWORD newFlags = 0;
    if ((flags & 0x00000010L) != 0) newFlags |= D3DWRAPCOORD_0;
    if ((flags & 0x00001000L) != 0) newFlags |= D3DWRAPCOORD_1;
    if ((flags & 0x00100000L) != 0) newFlags |= D3DWRAPCOORD_2;
    if ((flags & 0x01000000L) != 0) newFlags |= D3DWRAPCOORD_3;
    return newFlags;
}

D3DTEXTUREOP ConvertTextureOp(D3DTEXTUREOP value) {
    switch (value) {
        case 1: return D3DTOP_DISABLE;
        case 2: return D3DTOP_SELECTARG1;
        case 3: return D3DTOP_SELECTARG2;
        case 5: return D3DTOP_MODULATE2X;
        case 6: return D3DTOP_MODULATE4X;
        case 7: return D3DTOP_ADD;
        case 8: return D3DTOP_ADDSIGNED;
        case 9: return D3DTOP_ADDSIGNED2X;
        case 10: return D3DTOP_SUBTRACT;
        case 11: return D3DTOP_ADDSMOOTH;
        case 12: return D3DTOP_BLENDDIFFUSEALPHA;
        case 14: return D3DTOP_BLENDTEXTUREALPHA;
        case 15: return D3DTOP_BLENDFACTORALPHA;
        case 16: return D3DTOP_BLENDTEXTUREALPHAPM;
        case 13: return D3DTOP_BLENDCURRENTALPHA;
        case 17: return D3DTOP_PREMODULATE;
        case 18: return D3DTOP_MODULATEALPHA_ADDCOLOR;
        case 19: return D3DTOP_MODULATECOLOR_ADDALPHA;
        case 20: return D3DTOP_MODULATEINVALPHA_ADDCOLOR;
        case 21: return D3DTOP_MODULATEINVCOLOR_ADDALPHA;
        case 25: return D3DTOP_BUMPENVMAP;
        case 26: return D3DTOP_BUMPENVMAPLUMINANCE;
        case 22: return D3DTOP_DOTPRODUCT3;
        case 23: return D3DTOP_MULTIPLYADD;
        case 24: return D3DTOP_LERP;
        default: return D3DTOP_FORCE_DWORD;
    }
}

D3DTEXTUREADDRESS ConvertTextureAddress(D3DTEXTUREADDRESS value) {
    if (value == 5) return D3DTADDRESS_CLAMP;
    return value;
}


D3DTEXTURETRANSFORMFLAGS ConvertTextureTransformFlags(D3DTEXTURETRANSFORMFLAGS value) {
    return value;
}

D3DTEXTUREFILTERTYPE ConvertTextureFilterType(D3DTEXTUREFILTERTYPE value) {
    return value;
}

D3DTEXTURESTAGESTATETYPE ConvertTextureStageType (D3DTEXTURESTAGESTATETYPE type) {
    switch (type) {
        case 12: return D3DTSS_COLOROP;
        case 14: return D3DTSS_COLORARG1;
        case 15: return D3DTSS_COLORARG2;
        case 16: return D3DTSS_ALPHAOP;
        case 18: return D3DTSS_ALPHAARG1;
        case 19: return D3DTSS_ALPHAARG2;
        case 22: return D3DTSS_BUMPENVMAT00;
        case 23: return D3DTSS_BUMPENVMAT01;
        case 25: return D3DTSS_BUMPENVMAT10;
        case 24: return D3DTSS_BUMPENVMAT11;
        case 28: return D3DTSS_TEXCOORDINDEX;
        case 0: return D3DTSS_ADDRESSU;
        case 1: return D3DTSS_ADDRESSV;
        case 29: return D3DTSS_BORDERCOLOR;
        case 3: return D3DTSS_MAGFILTER;
        case 4: return D3DTSS_MINFILTER;
        case 5: return D3DTSS_MIPFILTER;
        case 6: return D3DTSS_MIPMAPLODBIAS;
        case 7: return D3DTSS_MAXMIPLEVEL;
        case 8: return D3DTSS_MAXANISOTROPY;
        case 26: return D3DTSS_BUMPENVLSCALE;
        case 27: return D3DTSS_BUMPENVLOFFSET;
        case 21: return D3DTSS_TEXTURETRANSFORMFLAGS;
        case 2: return D3DTSS_ADDRESSW;
        case 13: return D3DTSS_COLORARG0;
        case 17: return D3DTSS_ALPHAARG0;
        case 20: return D3DTSS_RESULTARG;
        default: return D3DTSS_COLOROP;
    }
}

D3DFORMAT ConvertD3DFormat(D3DFORMAT fmt) {
    switch (fmt) {
        case -1: return D3DFMT_UNKNOWN;
        case 6: return D3DFMT_A8R8G8B8;
        case 3: return D3DFMT_X1R5G5B5;
        case 2: return D3DFMT_A1R5G5B5;
        case 4: return D3DFMT_A4R4G4B4;
        case 25: return D3DFMT_A8;
        case 11: return D3DFMT_P8;
        case 0: return D3DFMT_L8;
        case 26: return D3DFMT_A8L8;
        case 40: return D3DFMT_V8U8;
        case 39: return D3DFMT_L6V5U5;
        case 7: return D3DFMT_X8L8V8U8;
        case 58: return D3DFMT_Q8W8V8U8;
        case 51: return D3DFMT_V16U16;
        case 37: return D3DFMT_UYVY;
        case 36: return D3DFMT_YUY2;
        case 12: return D3DFMT_DXT1;
        case 14: return D3DFMT_DXT2;
        case 15: return D3DFMT_DXT4;
        case 44: return D3DFMT_D16_LOCKABLE;
        case 42: return D3DFMT_D24S8;
        case 100: return D3DFMT_VERTEXDATA;
        case 101: return D3DFMT_INDEX16;
        case 0x00000010: return D3DFMT_A1R5G5B5;
        case 0x0000001D: return D3DFMT_A4R4G4B4;
        case 0x0000001F: return D3DFMT_A8;
        case 0x00000012: return D3DFMT_A8R8G8B8;
        case 0x00000011: return D3DFMT_R5G6B5;
        case 0x0000001C: return D3DFMT_X1R5G5B5;
        case 0x0000001E: return D3DFMT_X8R8G8B8;
        case 0x00000020: return D3DFMT_A8L8;
        case 0x00000013: return D3DFMT_L8;
        case 0x00000036: return D3DFMT_V16U16;
        case 0x00000017: return D3DFMT_V8U8;
        case 0x00000037: return D3DFMT_L6V5U5;
        case 0x0000002E: return D3DFMT_D24S8;
        case 0x00000030: return D3DFMT_D16;
        default: return D3DFMT_UNKNOWN;
    }
}

D3DSWAPEFFECT ConvertSwapEffect(D3DSWAPEFFECT val) {
    return val;
}

D3DDEVTYPE ConvertDeviceType(D3DDEVTYPE type) {
    return type;
}