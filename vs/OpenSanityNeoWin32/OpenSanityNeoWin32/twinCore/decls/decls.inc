PhysicalPool STRUCT
    alignedStart DWORD 0; void *
    alignedSize DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    field7_0x1c DWORD 0
    field8_0x20 DWORD 0
    field9_0x24 DWORD 0
    field10_0x28 DWORD 0
    field11_0x2c DWORD 0
    field12_0x30 DWORD 0
    field13_0x34 DWORD 0
    field14_0x38 DWORD 0
    field15_0x3c DWORD 0
    field16_0x40 DWORD 0
    field17_0x44 DWORD 0
    field18_0x48 DWORD 0
    field19_0x4c DWORD 0
    listTail DWORD 0; PhysicalPoolElement *
    alignedEnd DWORD 0; void *
    field22_0x58 DWORD 0
    memoryArena BYTE 8192 dup (0)
    field24_0x205c DWORD 0; PhysicalPoolSubStruct *
    field25_0x2060 DWORD 0
    field26_0x2064 DWORD 0
PhysicalPool ENDS
TwinString STRUCT
    value DWORD 0; char *
    strLength DWORD 0
    strSize DWORD 0
TwinString ENDS
Color STRUCT
    R BYTE 0
    B BYTE 0
    G BYTE 0
    A BYTE 0
Color ENDS
GameContextAbstract STRUCT
    vtable DWORD 0; GameContextAbstract_VTable *
    profile DWORD 0
    unkField0 REAL4 0.0;
    color Color {}
    restrict TwinString {}
GameContextAbstract ENDS
StringCollection STRUCT
    array DWORD 0; TwinString *
    strCnt DWORD 0
    capacity DWORD 0
    cnt2 DWORD 0
StringCollection ENDS
GameResourcesBase STRUCT
    vtable DWORD 0; GameResourcesBase_VTable *
    languages DWORD 0
    agents DWORD 0; char *
    gameObjects DWORD 0; SectionDataGameObjectBase *
    scripts DWORD 0; SectionDataScriptBase *
    animations DWORD 0; SectionDataAnimationBase *
    ogis DWORD 0; SectionDataOGIBase *
    codeModels DWORD 0; SectionDataCodeModelBase *
    sounds DWORD 0; SectionDataSfx *
    voices DWORD 0; SectionDataSfx * *
    gameObjectList DWORD 0; ResourceListGameObject *
    scriptList DWORD 0; ResourceListScript *
    animationList DWORD 0; ResourceListAnimation *
    ogiList DWORD 0; ResourceListOGI *
    codeModelList DWORD 0; ResourceListCodeModel *
    sfxList DWORD 0; ResourceListSound *
    voList DWORD 0; ResourceListSound * *
GameResourcesBase ENDS
GameResources STRUCT
    parent GameResourcesBase {}
GameResources ENDS
UnkBuilder1 STRUCT
    vtable DWORD 0; UnkBuilder1_VTable *
UnkBuilder1 ENDS
UnkBuilder2 STRUCT
    vtable DWORD 0; UnkBuilder2_VTable *
UnkBuilder2 ENDS
ActionFactory STRUCT
    vtable DWORD 0; ActionFactory_VTable *
ActionFactory ENDS
PerceptFactory STRUCT
    vtable DWORD 0; PerceptFactory_VTable *
PerceptFactory ENDS
UnkBuilder5 STRUCT
    vtable DWORD 0; UnkBuilder5_VTable *
UnkBuilder5 ENDS
UnkBuilder6 STRUCT
    vtable DWORD 0; UnkBuilder6_VTable *
UnkBuilder6 ENDS
SceneryFactory STRUCT
    vtable DWORD 0; SceneryFactory_VTable *
SceneryFactory ENDS
CollectionInstanceTemplate STRUCT
    list DWORD 0; InstanceTemplate * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionInstanceTemplate ENDS
GameResourceManagerBase STRUCT
    vtable DWORD 0; GameResourceManagerBase_VTable *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 WORD 0
    field5_0x12 WORD 0
    gameResources DWORD 0; GameResources *
    collectionInstanceTemplate CollectionInstanceTemplate {}
GameResourceManagerBase ENDS
GameResourceManager STRUCT
    parent GameResourceManagerBase {}
GameResourceManager ENDS
CameraFactory STRUCT
    vtable DWORD 0; CameraFactory_VTable *
CameraFactory ENDS
UnkBuilder9 STRUCT
    vtable DWORD 0; UnkBuilder9_VTable *
UnkBuilder9 ENDS
UnkBuilder10 STRUCT
    vtable DWORD 0; UnkBuilder10_VTable *
UnkBuilder10 ENDS
GameContext STRUCT
    parent GameContextAbstract {}
    flags DWORD 0
    startupLevel TwinString {}
    stringCollection StringCollection {}
    unkField8 DWORD 0
    batch TwinString {}
    gameResources GameResources {}
    builder1 UnkBuilder1 {}
    builder2 UnkBuilder2 {}
    actionFactory ActionFactory {}
    perceptFactory PerceptFactory {}
    builder5 UnkBuilder5 {}
    builder6 UnkBuilder6 {}
    sceneryFactory SceneryFactory {}
    resourceManager GameResourceManager {}
    cameraFactory CameraFactory {}
    builder9 UnkBuilder9 {}
    builder10 UnkBuilder10 {}
    time DWORD 0
    inputHandle1 DWORD 0; InputStruct *
    inputHandle2 DWORD 0; InputStruct *
    defaultRm DWORD 0; UnkFamily16A *
    gameController DWORD 0; GameController *
    ai DWORD 0
    render DWORD 0
GameContext ENDS
ObjectBuilderStorage STRUCT
    last DWORD 0; ObjectBuilder *
    first DWORD 0; ObjectBuilder *
    amount DWORD 0
    capacity DWORD 0
ObjectBuilderStorage ENDS
PoolRecord STRUCT
    lastSegment DWORD 0; Segment *
    totalLength DWORD 0
    segSize DWORD 0
    freeSegment DWORD 0; Segment *
    totalSegments DWORD 0
    freeSegments DWORD 0
    field6_0x18 DWORD 0
    nextRecord DWORD 0; PoolRecord *
PoolRecord ENDS
VirtualPoolExt STRUCT
    field0_0x0 DWORD 0
    lastSegment DWORD 0; Segment *
    end2 DWORD 0; Segment *
    end1 DWORD 0; Segment *
    rec PoolRecord {}
VirtualPoolExt ENDS
VirtualPool STRUCT
    elementPrt2 DWORD 0; unkVirtualPoolStruct *
    elementPtr3 DWORD 0; unkVirtualPoolStruct *
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    start DWORD 0; void *
    _size DWORD 0
    field9_0x24 DWORD 0
    field10_0x28 DWORD 0
    field11_0x2c DWORD 0
    field12_0x30 DWORD 0
    elementPtr1 DWORD 0; unkVirtualPoolStruct *
    field14_0x38 DWORD 0
    field15_0x3c DWORD 0
    virtualPoolExt VirtualPoolExt {}
    segmentList BYTE 256 dup (0)
    field18_0x170 DWORD 0
    field19_0x174 DWORD 0
    field20_0x178 DWORD 0
    field21_0x17c DWORD 0
VirtualPool ENDS
UnkRMRelated STRUCT
    vtable DWORD 0; UnkRMRelated_VTable *
    capacity WORD 0
    expansion WORD 0
    count WORD 0
    lastIndexId WORD 0
    indexes DWORD 0; short *
    readers DWORD 0; FileReaderHelper * *
    field7_0x14 DWORD 0
    field8_0x18 BYTE 0
    field9_0x19 BYTE 0
    field10_0x1a BYTE 0
    field11_0x1b BYTE 0
UnkRMRelated ENDS
UnkStruct STRUCT
    field0_0x0 BYTE 16 dup (0)
    field1_0x10 BYTE 16 dup (0)
    field2_0x20 BYTE 0
    field3_0x21 BYTE 0
    field4_0x22 BYTE 0
    field5_0x23 BYTE 0
    field6_0x24 BYTE 0
    field7_0x25 BYTE 0
    field8_0x26 BYTE 0
    field9_0x27 BYTE 0
    field10_0x28 BYTE 0
    field11_0x29 BYTE 0
    field12_0x2a BYTE 0
    field13_0x2b BYTE 0
    field14_0x2c BYTE 0
    field15_0x2d BYTE 0
    field16_0x2e BYTE 0
    field17_0x2f BYTE 0
    field18_0x30 BYTE 0
    field19_0x31 BYTE 0
    field20_0x32 BYTE 0
    field21_0x33 BYTE 0
    field22_0x34 BYTE 0
    field23_0x35 BYTE 0
    field24_0x36 BYTE 0
    field25_0x37 BYTE 0
    field26_0x38 BYTE 0
    field27_0x39 BYTE 0
    field28_0x3a BYTE 0
    field29_0x3b BYTE 0
    field30_0x3c BYTE 0
    field31_0x3d BYTE 0
    field32_0x3e BYTE 0
    field33_0x3f BYTE 0
    field34_0x40 BYTE 0
    field35_0x41 BYTE 0
    field36_0x42 BYTE 0
    field37_0x43 BYTE 0
    field38_0x44 BYTE 0
    field39_0x45 BYTE 0
    field40_0x46 BYTE 0
    field41_0x47 BYTE 0
    field42_0x48 DWORD 0
    field43_0x4c DWORD 0
    field44_0x50 DWORD 0
    field45_0x54 DWORD 0
    field46_0x58 BYTE 0
    field47_0x59 BYTE 0
    field48_0x5a BYTE 0
    field49_0x5b BYTE 0
    field50_0x5c BYTE 0
    field51_0x5d BYTE 0
    field52_0x5e BYTE 0
    field53_0x5f BYTE 0
    field54_0x60 BYTE 0
    field55_0x61 BYTE 0
    field56_0x62 BYTE 0
    field57_0x63 BYTE 0
    field58_0x64 DWORD 0
    field59_0x68 BYTE 0
    field60_0x69 BYTE 0
    field61_0x6a BYTE 0
    field62_0x6b BYTE 0
    field63_0x6c BYTE 0
    field64_0x6d BYTE 0
    field65_0x6e BYTE 0
    field66_0x6f BYTE 0
    field67_0x70 BYTE 0
    field68_0x71 BYTE 0
    field69_0x72 BYTE 0
    field70_0x73 BYTE 0
    field71_0x74 BYTE 0
    field72_0x75 BYTE 0
    field73_0x76 BYTE 0
    field74_0x77 BYTE 0
    field75_0x78 BYTE 0
    field76_0x79 BYTE 0
    field77_0x7a BYTE 0
    field78_0x7b BYTE 0
    field79_0x7c BYTE 0
    field80_0x7d BYTE 0
    field81_0x7e BYTE 0
    field82_0x7f BYTE 0
    field83_0x80 BYTE 0
    field84_0x81 BYTE 0
    field85_0x82 BYTE 0
    field86_0x83 BYTE 0
    field87_0x84 DWORD 0
    field88_0x88 DWORD 0
    field89_0x8c DWORD 0
    field90_0x90 BYTE 0
    field91_0x91 BYTE 0
    field92_0x92 BYTE 0
    field93_0x93 BYTE 0
    field94_0x94 DWORD 0
    field95_0x98 BYTE 0
    field96_0x99 BYTE 0
    field97_0x9a BYTE 0
    field98_0x9b BYTE 0
    field99_0x9c BYTE 0
    field100_0x9d BYTE 0
    field101_0x9e BYTE 0
    field102_0x9f BYTE 0
    field103_0xa0 BYTE 0
    field104_0xa1 BYTE 0
    field105_0xa2 BYTE 0
    field106_0xa3 BYTE 0
    field107_0xa4 BYTE 0
    field108_0xa5 BYTE 0
    field109_0xa6 BYTE 0
    field110_0xa7 BYTE 0
    field111_0xa8 BYTE 0
    field112_0xa9 BYTE 0
    field113_0xaa BYTE 0
    field114_0xab BYTE 0
    field115_0xac BYTE 0
    field116_0xad BYTE 0
    field117_0xae BYTE 0
    field118_0xaf BYTE 0
    field119_0xb0 BYTE 0
    field120_0xb1 BYTE 0
    field121_0xb2 BYTE 0
    field122_0xb3 BYTE 0
    field123_0xb4 BYTE 0
    field124_0xb5 BYTE 0
    field125_0xb6 BYTE 0
    field126_0xb7 BYTE 0
    field127_0xb8 BYTE 0
    field128_0xb9 BYTE 0
    field129_0xba BYTE 0
    field130_0xbb BYTE 0
    field131_0xbc BYTE 0
    field132_0xbd BYTE 0
    field133_0xbe BYTE 0
    field134_0xbf BYTE 0
    field135_0xc0 BYTE 0
    field136_0xc1 BYTE 0
    field137_0xc2 BYTE 0
    field138_0xc3 BYTE 0
    field139_0xc4 BYTE 0
    field140_0xc5 BYTE 0
    field141_0xc6 BYTE 0
    field142_0xc7 BYTE 0
    field143_0xc8 BYTE 0
    field144_0xc9 BYTE 0
    field145_0xca BYTE 0
    field146_0xcb BYTE 0
    field147_0xcc BYTE 0
    field148_0xcd BYTE 0
    field149_0xce BYTE 0
    field150_0xcf BYTE 0
    field151_0xd0 BYTE 0
    field152_0xd1 BYTE 0
    field153_0xd2 BYTE 0
    field154_0xd3 BYTE 0
    field155_0xd4 BYTE 0
    field156_0xd5 BYTE 0
    field157_0xd6 BYTE 0
    field158_0xd7 BYTE 0
    field159_0xd8 BYTE 0
    field160_0xd9 BYTE 0
    field161_0xda BYTE 0
    field162_0xdb BYTE 0
    field163_0xdc BYTE 0
    field164_0xdd BYTE 0
    field165_0xde BYTE 0
    field166_0xdf BYTE 0
    field167_0xe0 BYTE 0
    field168_0xe1 BYTE 0
    field169_0xe2 BYTE 0
    field170_0xe3 BYTE 0
    field171_0xe4 BYTE 0
    field172_0xe5 BYTE 0
    field173_0xe6 BYTE 0
    field174_0xe7 BYTE 0
    field175_0xe8 BYTE 0
    field176_0xe9 BYTE 0
    field177_0xea BYTE 0
    field178_0xeb BYTE 0
    field179_0xec DWORD 0
    field180_0xf0 BYTE 0
    field181_0xf1 BYTE 0
    field182_0xf2 BYTE 0
    field183_0xf3 BYTE 0
    field184_0xf4 BYTE 0
    field185_0xf5 BYTE 0
    field186_0xf6 BYTE 0
    field187_0xf7 BYTE 0
    field188_0xf8 BYTE 0
    field189_0xf9 BYTE 0
    field190_0xfa BYTE 0
    field191_0xfb BYTE 0
    field192_0xfc BYTE 0
    field193_0xfd BYTE 0
    field194_0xfe BYTE 0
    field195_0xff BYTE 0
    field196_0x100 BYTE 0
    field197_0x101 BYTE 0
    field198_0x102 BYTE 0
    field199_0x103 BYTE 0
    field200_0x104 BYTE 0
    field201_0x105 BYTE 0
    field202_0x106 BYTE 0
    field203_0x107 BYTE 0
    field204_0x108 BYTE 0
    field205_0x109 BYTE 0
    field206_0x10a BYTE 0
    field207_0x10b BYTE 0
    field208_0x10c BYTE 0
    field209_0x10d BYTE 0
    field210_0x10e BYTE 0
    field211_0x10f BYTE 0
    field212_0x110 BYTE 0
    field213_0x111 BYTE 0
    field214_0x112 BYTE 0
    field215_0x113 BYTE 0
    field216_0x114 DWORD 0
    field217_0x118 DWORD 0
    field218_0x11c DWORD 0
    field219_0x120 DWORD 0
    field220_0x124 BYTE 0
    field221_0x125 BYTE 0
    field222_0x126 BYTE 0
    field223_0x127 BYTE 0
    field224_0x128 BYTE 0
    field225_0x129 BYTE 0
    field226_0x12a BYTE 0
    field227_0x12b BYTE 0
    field228_0x12c BYTE 0
    field229_0x12d BYTE 0
    field230_0x12e BYTE 0
    field231_0x12f BYTE 0
    field232_0x130 DWORD 0
    field233_0x134 BYTE 0
    field234_0x135 BYTE 0
    field235_0x136 BYTE 0
    field236_0x137 BYTE 0
    field237_0x138 BYTE 0
    field238_0x139 BYTE 0
    field239_0x13a BYTE 0
    field240_0x13b BYTE 0
    field241_0x13c BYTE 0
    field242_0x13d BYTE 0
    field243_0x13e BYTE 0
    field244_0x13f BYTE 0
    field245_0x140 BYTE 0
    field246_0x141 BYTE 0
    field247_0x142 BYTE 0
    field248_0x143 BYTE 0
    field249_0x144 BYTE 0
    field250_0x145 BYTE 0
    field251_0x146 BYTE 0
    field252_0x147 BYTE 0
    field253_0x148 BYTE 0
    field254_0x149 BYTE 0
    field255_0x14a BYTE 0
    field256_0x14b BYTE 0
    field257_0x14c BYTE 0
    field258_0x14d BYTE 0
    field259_0x14e BYTE 0
    field260_0x14f BYTE 0
    field261_0x150 DWORD 0
    field262_0x154 DWORD 0
    field263_0x158 DWORD 0
    field264_0x15c BYTE 0
    field265_0x15d BYTE 0
    field266_0x15e BYTE 0
    field267_0x15f BYTE 0
    field268_0x160 DWORD 0
    field269_0x164 BYTE 0
    field270_0x165 BYTE 0
    field271_0x166 BYTE 0
    field272_0x167 BYTE 0
    field273_0x168 BYTE 0
    field274_0x169 BYTE 0
    field275_0x16a BYTE 0
    field276_0x16b BYTE 0
    field277_0x16c BYTE 0
    field278_0x16d BYTE 0
    field279_0x16e BYTE 0
    field280_0x16f BYTE 0
    field281_0x170 BYTE 0
    field282_0x171 BYTE 0
    field283_0x172 BYTE 0
    field284_0x173 BYTE 0
    field285_0x174 BYTE 0
    field286_0x175 BYTE 0
    field287_0x176 BYTE 0
    field288_0x177 BYTE 0
    field289_0x178 BYTE 0
    field290_0x179 BYTE 0
    field291_0x17a BYTE 0
    field292_0x17b BYTE 0
    field293_0x17c BYTE 0
    field294_0x17d BYTE 0
    field295_0x17e BYTE 0
    field296_0x17f BYTE 0
    field297_0x180 BYTE 0
    field298_0x181 BYTE 0
    field299_0x182 BYTE 0
    field300_0x183 BYTE 0
    field301_0x184 BYTE 0
    field302_0x185 BYTE 0
    field303_0x186 BYTE 0
    field304_0x187 BYTE 0
    field305_0x188 BYTE 0
    field306_0x189 BYTE 0
    field307_0x18a BYTE 0
    field308_0x18b BYTE 0
    field309_0x18c BYTE 0
    field310_0x18d BYTE 0
    field311_0x18e BYTE 0
    field312_0x18f BYTE 0
    field313_0x190 BYTE 0
    field314_0x191 BYTE 0
    field315_0x192 BYTE 0
    field316_0x193 BYTE 0
    field317_0x194 BYTE 0
    field318_0x195 BYTE 0
    field319_0x196 BYTE 0
    field320_0x197 BYTE 0
    field321_0x198 BYTE 0
    field322_0x199 BYTE 0
    field323_0x19a BYTE 0
    field324_0x19b BYTE 0
    field325_0x19c BYTE 0
    field326_0x19d BYTE 0
    field327_0x19e BYTE 0
    field328_0x19f BYTE 0
    field329_0x1a0 BYTE 0
    field330_0x1a1 BYTE 0
    field331_0x1a2 BYTE 0
    field332_0x1a3 BYTE 0
    field333_0x1a4 BYTE 0
    field334_0x1a5 BYTE 0
    field335_0x1a6 BYTE 0
    field336_0x1a7 BYTE 0
    field337_0x1a8 BYTE 0
    field338_0x1a9 BYTE 0
    field339_0x1aa BYTE 0
    field340_0x1ab BYTE 0
    field341_0x1ac BYTE 0
    field342_0x1ad BYTE 0
    field343_0x1ae BYTE 0
    field344_0x1af BYTE 0
    field345_0x1b0 BYTE 0
    field346_0x1b1 BYTE 0
    field347_0x1b2 BYTE 0
    field348_0x1b3 BYTE 0
    field349_0x1b4 BYTE 0
    field350_0x1b5 BYTE 0
    field351_0x1b6 BYTE 0
    field352_0x1b7 BYTE 0
    field353_0x1b8 DWORD 0
    field354_0x1bc BYTE 0
    field355_0x1bd BYTE 0
    field356_0x1be BYTE 0
    field357_0x1bf BYTE 0
    field358_0x1c0 BYTE 0
    field359_0x1c1 BYTE 0
    field360_0x1c2 BYTE 0
    field361_0x1c3 BYTE 0
    field362_0x1c4 BYTE 0
    field363_0x1c5 BYTE 0
    field364_0x1c6 BYTE 0
    field365_0x1c7 BYTE 0
    field366_0x1c8 BYTE 0
    field367_0x1c9 BYTE 0
    field368_0x1ca BYTE 0
    field369_0x1cb BYTE 0
    field370_0x1cc BYTE 0
    field371_0x1cd BYTE 0
    field372_0x1ce BYTE 0
    field373_0x1cf BYTE 0
    field374_0x1d0 BYTE 0
    field375_0x1d1 BYTE 0
    field376_0x1d2 BYTE 0
    field377_0x1d3 BYTE 0
    field378_0x1d4 BYTE 0
    field379_0x1d5 BYTE 0
    field380_0x1d6 BYTE 0
    field381_0x1d7 BYTE 0
    field382_0x1d8 BYTE 0
    field383_0x1d9 BYTE 0
    field384_0x1da BYTE 0
    field385_0x1db BYTE 0
    field386_0x1dc BYTE 0
    field387_0x1dd BYTE 0
    field388_0x1de BYTE 0
    field389_0x1df BYTE 0
    field390_0x1e0 DWORD 0
    field391_0x1e4 DWORD 0
    field392_0x1e8 DWORD 0
    field393_0x1ec DWORD 0
    field394_0x1f0 BYTE 0
    field395_0x1f1 BYTE 0
    field396_0x1f2 BYTE 0
    field397_0x1f3 BYTE 0
    field398_0x1f4 BYTE 0
    field399_0x1f5 BYTE 0
    field400_0x1f6 BYTE 0
    field401_0x1f7 BYTE 0
    field402_0x1f8 BYTE 0
    field403_0x1f9 BYTE 0
    field404_0x1fa BYTE 0
    field405_0x1fb BYTE 0
    field406_0x1fc DWORD 0
    field407_0x200 BYTE 0
    field408_0x201 BYTE 0
    field409_0x202 BYTE 0
    field410_0x203 BYTE 0
    field411_0x204 BYTE 0
    field412_0x205 BYTE 0
    field413_0x206 BYTE 0
    field414_0x207 BYTE 0
    field415_0x208 BYTE 0
    field416_0x209 BYTE 0
    field417_0x20a BYTE 0
    field418_0x20b BYTE 0
    field419_0x20c BYTE 0
    field420_0x20d BYTE 0
    field421_0x20e BYTE 0
    field422_0x20f BYTE 0
    field423_0x210 BYTE 0
    field424_0x211 BYTE 0
    field425_0x212 BYTE 0
    field426_0x213 BYTE 0
    field427_0x214 BYTE 0
    field428_0x215 BYTE 0
    field429_0x216 BYTE 0
    field430_0x217 BYTE 0
    field431_0x218 BYTE 0
    field432_0x219 BYTE 0
    field433_0x21a BYTE 0
    field434_0x21b BYTE 0
    field435_0x21c DWORD 0
    field436_0x220 DWORD 0
    field437_0x224 DWORD 0
    field438_0x228 BYTE 0
    field439_0x229 BYTE 0
    field440_0x22a BYTE 0
    field441_0x22b BYTE 0
    field442_0x22c DWORD 0
    field443_0x230 BYTE 0
    field444_0x231 BYTE 0
    field445_0x232 BYTE 0
    field446_0x233 BYTE 0
    field447_0x234 BYTE 0
    field448_0x235 BYTE 0
    field449_0x236 BYTE 0
    field450_0x237 BYTE 0
    field451_0x238 BYTE 0
    field452_0x239 BYTE 0
    field453_0x23a BYTE 0
    field454_0x23b BYTE 0
    field455_0x23c BYTE 0
    field456_0x23d BYTE 0
    field457_0x23e BYTE 0
    field458_0x23f BYTE 0
    field459_0x240 BYTE 0
    field460_0x241 BYTE 0
    field461_0x242 BYTE 0
    field462_0x243 BYTE 0
    field463_0x244 BYTE 0
    field464_0x245 BYTE 0
    field465_0x246 BYTE 0
    field466_0x247 BYTE 0
    field467_0x248 BYTE 0
    field468_0x249 BYTE 0
    field469_0x24a BYTE 0
    field470_0x24b BYTE 0
    field471_0x24c BYTE 0
    field472_0x24d BYTE 0
    field473_0x24e BYTE 0
    field474_0x24f BYTE 0
    field475_0x250 BYTE 0
    field476_0x251 BYTE 0
    field477_0x252 BYTE 0
    field478_0x253 BYTE 0
    field479_0x254 BYTE 0
    field480_0x255 BYTE 0
    field481_0x256 BYTE 0
    field482_0x257 BYTE 0
    field483_0x258 BYTE 0
    field484_0x259 BYTE 0
    field485_0x25a BYTE 0
    field486_0x25b BYTE 0
    field487_0x25c BYTE 0
    field488_0x25d BYTE 0
    field489_0x25e BYTE 0
    field490_0x25f BYTE 0
    field491_0x260 BYTE 0
    field492_0x261 BYTE 0
    field493_0x262 BYTE 0
    field494_0x263 BYTE 0
    field495_0x264 BYTE 0
    field496_0x265 BYTE 0
    field497_0x266 BYTE 0
    field498_0x267 BYTE 0
    field499_0x268 BYTE 0
    field500_0x269 BYTE 0
    field501_0x26a BYTE 0
    field502_0x26b BYTE 0
    field503_0x26c BYTE 0
    field504_0x26d BYTE 0
    field505_0x26e BYTE 0
    field506_0x26f BYTE 0
    field507_0x270 BYTE 0
    field508_0x271 BYTE 0
    field509_0x272 BYTE 0
    field510_0x273 BYTE 0
    field511_0x274 BYTE 0
    field512_0x275 BYTE 0
    field513_0x276 BYTE 0
    field514_0x277 BYTE 0
    field515_0x278 BYTE 0
    field516_0x279 BYTE 0
    field517_0x27a BYTE 0
    field518_0x27b BYTE 0
    field519_0x27c BYTE 0
    field520_0x27d BYTE 0
    field521_0x27e BYTE 0
    field522_0x27f BYTE 0
    field523_0x280 BYTE 0
    field524_0x281 BYTE 0
    field525_0x282 BYTE 0
    field526_0x283 BYTE 0
    field527_0x284 DWORD 0
    field528_0x288 BYTE 0
    field529_0x289 BYTE 0
    field530_0x28a BYTE 0
    field531_0x28b BYTE 0
    field532_0x28c BYTE 0
    field533_0x28d BYTE 0
    field534_0x28e BYTE 0
    field535_0x28f BYTE 0
    field536_0x290 BYTE 0
    field537_0x291 BYTE 0
    field538_0x292 BYTE 0
    field539_0x293 BYTE 0
    field540_0x294 BYTE 0
    field541_0x295 BYTE 0
    field542_0x296 BYTE 0
    field543_0x297 BYTE 0
    field544_0x298 BYTE 0
    field545_0x299 BYTE 0
    field546_0x29a BYTE 0
    field547_0x29b BYTE 0
    field548_0x29c BYTE 0
    field549_0x29d BYTE 0
    field550_0x29e BYTE 0
    field551_0x29f BYTE 0
    field552_0x2a0 BYTE 0
    field553_0x2a1 BYTE 0
    field554_0x2a2 BYTE 0
    field555_0x2a3 BYTE 0
    field556_0x2a4 BYTE 0
    field557_0x2a5 BYTE 0
    field558_0x2a6 BYTE 0
    field559_0x2a7 BYTE 0
    field560_0x2a8 BYTE 0
    field561_0x2a9 BYTE 0
    field562_0x2aa BYTE 0
    field563_0x2ab BYTE 0
    field564_0x2ac DWORD 0
    field565_0x2b0 DWORD 0
    field566_0x2b4 DWORD 0
    field567_0x2b8 DWORD 0
    field568_0x2bc BYTE 0
    field569_0x2bd BYTE 0
    field570_0x2be BYTE 0
    field571_0x2bf BYTE 0
    field572_0x2c0 BYTE 0
    field573_0x2c1 BYTE 0
    field574_0x2c2 BYTE 0
    field575_0x2c3 BYTE 0
    field576_0x2c4 BYTE 0
    field577_0x2c5 BYTE 0
    field578_0x2c6 BYTE 0
    field579_0x2c7 BYTE 0
    field580_0x2c8 DWORD 0
    field581_0x2cc BYTE 0
    field582_0x2cd BYTE 0
    field583_0x2ce BYTE 0
    field584_0x2cf BYTE 0
    field585_0x2d0 BYTE 0
    field586_0x2d1 BYTE 0
    field587_0x2d2 BYTE 0
    field588_0x2d3 BYTE 0
    field589_0x2d4 BYTE 0
    field590_0x2d5 BYTE 0
    field591_0x2d6 BYTE 0
    field592_0x2d7 BYTE 0
    field593_0x2d8 BYTE 0
    field594_0x2d9 BYTE 0
    field595_0x2da BYTE 0
    field596_0x2db BYTE 0
    field597_0x2dc BYTE 0
    field598_0x2dd BYTE 0
    field599_0x2de BYTE 0
    field600_0x2df BYTE 0
    field601_0x2e0 BYTE 0
    field602_0x2e1 BYTE 0
    field603_0x2e2 BYTE 0
    field604_0x2e3 BYTE 0
    field605_0x2e4 BYTE 0
    field606_0x2e5 BYTE 0
    field607_0x2e6 BYTE 0
    field608_0x2e7 BYTE 0
    field609_0x2e8 DWORD 0
    field610_0x2ec DWORD 0
    field611_0x2f0 DWORD 0
    field612_0x2f4 BYTE 0
    field613_0x2f5 BYTE 0
    field614_0x2f6 BYTE 0
    field615_0x2f7 BYTE 0
    field616_0x2f8 DWORD 0
    field617_0x2fc BYTE 0
    field618_0x2fd BYTE 0
    field619_0x2fe BYTE 0
    field620_0x2ff BYTE 0
    field621_0x300 BYTE 0
    field622_0x301 BYTE 0
    field623_0x302 BYTE 0
    field624_0x303 BYTE 0
    field625_0x304 BYTE 0
    field626_0x305 BYTE 0
    field627_0x306 BYTE 0
    field628_0x307 BYTE 0
    field629_0x308 BYTE 0
    field630_0x309 BYTE 0
    field631_0x30a BYTE 0
    field632_0x30b BYTE 0
    field633_0x30c BYTE 0
    field634_0x30d BYTE 0
    field635_0x30e BYTE 0
    field636_0x30f BYTE 0
    field637_0x310 BYTE 0
    field638_0x311 BYTE 0
    field639_0x312 BYTE 0
    field640_0x313 BYTE 0
    field641_0x314 BYTE 0
    field642_0x315 BYTE 0
    field643_0x316 BYTE 0
    field644_0x317 BYTE 0
    field645_0x318 BYTE 0
    field646_0x319 BYTE 0
    field647_0x31a BYTE 0
    field648_0x31b BYTE 0
    field649_0x31c BYTE 0
    field650_0x31d BYTE 0
    field651_0x31e BYTE 0
    field652_0x31f BYTE 0
    field653_0x320 BYTE 0
    field654_0x321 BYTE 0
    field655_0x322 BYTE 0
    field656_0x323 BYTE 0
    field657_0x324 BYTE 0
    field658_0x325 BYTE 0
    field659_0x326 BYTE 0
    field660_0x327 BYTE 0
    field661_0x328 BYTE 0
    field662_0x329 BYTE 0
    field663_0x32a BYTE 0
    field664_0x32b BYTE 0
    field665_0x32c BYTE 0
    field666_0x32d BYTE 0
    field667_0x32e BYTE 0
    field668_0x32f BYTE 0
    field669_0x330 BYTE 0
    field670_0x331 BYTE 0
    field671_0x332 BYTE 0
    field672_0x333 BYTE 0
    field673_0x334 BYTE 0
    field674_0x335 BYTE 0
    field675_0x336 BYTE 0
    field676_0x337 BYTE 0
    field677_0x338 BYTE 0
    field678_0x339 BYTE 0
    field679_0x33a BYTE 0
    field680_0x33b BYTE 0
    field681_0x33c BYTE 0
    field682_0x33d BYTE 0
    field683_0x33e BYTE 0
    field684_0x33f BYTE 0
    field685_0x340 BYTE 0
    field686_0x341 BYTE 0
    field687_0x342 BYTE 0
    field688_0x343 BYTE 0
    field689_0x344 BYTE 0
    field690_0x345 BYTE 0
    field691_0x346 BYTE 0
    field692_0x347 BYTE 0
    field693_0x348 BYTE 0
    field694_0x349 BYTE 0
    field695_0x34a BYTE 0
    field696_0x34b BYTE 0
    field697_0x34c BYTE 0
    field698_0x34d BYTE 0
    field699_0x34e BYTE 0
    field700_0x34f BYTE 0
UnkStruct ENDS
RendererSubStruct STRUCT
    vtable DWORD 0; pointer *
    count WORD 0
    expansion WORD 0
    capacity WORD 0
    lastIndex WORD 0
    indexArray DWORD 0; short *
    pointerArray DWORD 0; FontRenderer * *
RendererSubStruct ENDS
Vector2 STRUCT
    x REAL4 0.0;
    y REAL4 0.0;
Vector2 ENDS
RendererAbstract STRUCT
    vtable DWORD 0; RendererAbstract_VTable *
    substruct RendererSubStruct {}
    vec Vector2 {}
RendererAbstract ENDS
Renderer STRUCT
    parent RendererAbstract {}
Renderer ENDS
Clock STRUCT
    prevTime DWORD 0
    deltaTimeTicks DWORD 0
    timeArray BYTE 96 dup (0)
    fps DWORD 0
    divisions DWORD 0
    frequencyHigh DWORD 0
    frequencyLow DWORD 0
    field7_0x78 DWORD 0
    field8_0x7c DWORD 0
    startTimestampHigh DWORD 0
    startTimestampLow DWORD 0
    timestampHigh DWORD 0
    timestampLow DWORD 0
Clock ENDS
InputController STRUCT
    vtable DWORD 0; InputController_VTable *
    inputSourceList BYTE 16 dup (0)
    connectedDevicesMask DWORD 0
    flags DWORD 0
InputController ENDS
UnkFamily16Sub STRUCT
    ctxArray BYTE 2048 dup (0)
    cnt WORD 0
    field2_0x802 WORD 0
UnkFamily16Sub ENDS
UnkFamily16Base STRUCT
    vtable DWORD 0; UnkFamily16Base_VTable *
    flags DWORD 0
    recordArray BYTE 2048 dup (0)
    rmSection DWORD 0; SectionRM *
    indexToIdList DWORD 0; IndexToIdList *
    gameResources DWORD 0; GameResources *
    field6_0x814 DWORD 0; UnkFamily17Base *
    unkStruct UnkFamily16Sub {}
UnkFamily16Base ENDS
UnkFamily17Base STRUCT
    vtable DWORD 0; UnkFamily17Base_VTable *
    field1_0x4 BYTE 12 dup (0)
    ptrArray BYTE 512 dup (0)
    cnt WORD 0
    field15_0x212 BYTE 2034 dup (0)
    field2049_0xa04 REAL4 0.0;
    field2050_0xa08 WORD 0
    field2051_0xa0a WORD 0
    field2052_0xa0c DWORD 0
    field2053_0xa10 REAL4 0.0;
	field2054_0xa14 BYTE 2096 dup (0)
    unkPtr DWORD 0; uint *
UnkFamily17Base ENDS
UnkFamily17A STRUCT
    parent UnkFamily17Base {}
UnkFamily17A ENDS
UnkFamily16A STRUCT
    parent UnkFamily16Base {}
    intArray BYTE 4000 dup (0)
    field2_0x1fbc BYTE 0
    field3_0x1fbd BYTE 0
    field4_0x1fbe BYTE 0
    field5_0x1fbf BYTE 0
    unkStruct2 UnkFamily17A {}
    field7_0x3208 BYTE 0
    field8_0x3209 BYTE 0
    field9_0x320a BYTE 0
    field10_0x320b BYTE 0
    field11_0x320c BYTE 0
    field12_0x320d BYTE 0
    field13_0x320e BYTE 0
    field14_0x320f BYTE 0
    field15_0x3210 BYTE 0
    field16_0x3211 BYTE 0
    field17_0x3212 BYTE 0
    field18_0x3213 BYTE 0
    field19_0x3214 BYTE 0
    field20_0x3215 BYTE 0
    field21_0x3216 BYTE 0
    field22_0x3217 BYTE 0
    field23_0x3218 BYTE 0
    field24_0x3219 BYTE 0
    field25_0x321a BYTE 0
    field26_0x321b BYTE 0
    field27_0x321c BYTE 0
    field28_0x321d BYTE 0
    field29_0x321e BYTE 0
    field30_0x321f BYTE 0
    field31_0x3220 BYTE 0
    field32_0x3221 BYTE 0
    field33_0x3222 BYTE 0
    field34_0x3223 BYTE 0
    field35_0x3224 BYTE 0
    field36_0x3225 BYTE 0
    field37_0x3226 BYTE 0
    field38_0x3227 BYTE 0
    field39_0x3228 BYTE 0
    field40_0x3229 BYTE 0
    field41_0x322a BYTE 0
    field42_0x322b BYTE 0
    field43_0x322c BYTE 0
    field44_0x322d BYTE 0
    field45_0x322e BYTE 0
    field46_0x322f BYTE 0
    field47_0x3230 BYTE 0
    field48_0x3231 BYTE 0
    field49_0x3232 BYTE 0
    field50_0x3233 BYTE 0
    field51_0x3234 BYTE 0
    field52_0x3235 BYTE 0
    field53_0x3236 BYTE 0
    field54_0x3237 BYTE 0
    field55_0x3238 BYTE 0
    field56_0x3239 BYTE 0
    field57_0x323a BYTE 0
    field58_0x323b BYTE 0
    field59_0x323c BYTE 0
    field60_0x323d BYTE 0
    field61_0x323e BYTE 0
    field62_0x323f BYTE 0
    field63_0x3240 BYTE 0
    field64_0x3241 BYTE 0
    field65_0x3242 BYTE 0
    field66_0x3243 BYTE 0
    field67_0x3244 BYTE 0
    field68_0x3245 BYTE 0
    field69_0x3246 BYTE 0
    field70_0x3247 BYTE 0
    field71_0x3248 BYTE 0
    field72_0x3249 BYTE 0
    field73_0x324a BYTE 0
    field74_0x324b BYTE 0
    field75_0x324c BYTE 0
    field76_0x324d BYTE 0
    field77_0x324e BYTE 0
    field78_0x324f BYTE 0
    field79_0x3250 BYTE 0
    field80_0x3251 BYTE 0
    field81_0x3252 BYTE 0
    field82_0x3253 BYTE 0
    field83_0x3254 BYTE 0
    field84_0x3255 BYTE 0
    field85_0x3256 BYTE 0
    field86_0x3257 BYTE 0
    field87_0x3258 BYTE 0
    field88_0x3259 BYTE 0
    field89_0x325a BYTE 0
    field90_0x325b BYTE 0
    field91_0x325c BYTE 0
    field92_0x325d BYTE 0
    field93_0x325e BYTE 0
    field94_0x325f BYTE 0
    field95_0x3260 BYTE 0
    field96_0x3261 BYTE 0
    field97_0x3262 BYTE 0
    field98_0x3263 BYTE 0
    field99_0x3264 BYTE 0
    field100_0x3265 BYTE 0
    field101_0x3266 BYTE 0
    field102_0x3267 BYTE 0
    field103_0x3268 BYTE 0
    field104_0x3269 BYTE 0
    field105_0x326a BYTE 0
    field106_0x326b BYTE 0
    field107_0x326c BYTE 0
    field108_0x326d BYTE 0
    field109_0x326e BYTE 0
    field110_0x326f BYTE 0
    field111_0x3270 BYTE 0
    field112_0x3271 BYTE 0
    field113_0x3272 BYTE 0
    field114_0x3273 BYTE 0
    field115_0x3274 BYTE 0
    field116_0x3275 BYTE 0
    field117_0x3276 BYTE 0
    field118_0x3277 BYTE 0
    field119_0x3278 BYTE 0
    field120_0x3279 BYTE 0
    field121_0x327a BYTE 0
    field122_0x327b BYTE 0
    field123_0x327c BYTE 0
    field124_0x327d BYTE 0
    field125_0x327e BYTE 0
    field126_0x327f BYTE 0
UnkFamily16A ENDS
CodeSectionDataAbstract STRUCT
    vtable DWORD 0; CodeSectionDataAbstract_VTable *
CodeSectionDataAbstract ENDS
SectionDataSfxBase STRUCT
    parent CodeSectionDataAbstract {}
    flags DWORD 0
    elements DWORD 0; Sfx * *
    indexes DWORD 0; short *
    field4_0x10 DWORD 0
    sfxList DWORD 0; ResourceListSound *
SectionDataSfxBase ENDS
SectionDataSfx STRUCT
    parent SectionDataSfxBase {}
    waveData DWORD 0; MemoryStream *
    field2_0x1c DWORD 0
SectionDataSfx ENDS
FontAbstract STRUCT
    vtable DWORD 0; FontAbstract_VTable *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    data DWORD 0; RendererText *
    scale Vector2 {}
FontAbstract ENDS
Font STRUCT
    parent FontAbstract {}
    cnt DWORD 0
    field2_0x1c DWORD 0; void *
    next DWORD 0; void *
    field4_0x24 DWORD 0
    field5_0x28 DWORD 0; void *
    field6_0x2c DWORD 0
    field7_0x30 DWORD 0
Font ENDS
Matrix4 STRUCT
    m11 REAL4 0.0;
    m12 REAL4 0.0;
    m13 REAL4 0.0;
    m14 REAL4 0.0;
    m21 REAL4 0.0;
    m22 REAL4 0.0;
    m23 REAL4 0.0;
    m24 REAL4 0.0;
    m31 REAL4 0.0;
    m32 REAL4 0.0;
    m33 REAL4 0.0;
    m34 REAL4 0.0;
    m41 REAL4 0.0;
    m42 REAL4 0.0;
    m43 REAL4 0.0;
    m44 REAL4 0.0;
Matrix4 ENDS
Vector4 STRUCT
    x REAL4 0.0;
    y REAL4 0.0;
    z REAL4 0.0;
    w REAL4 0.0;
Vector4 ENDS
AutoClass25 STRUCT
    matrix1 Matrix4 {}
    matrix2 Matrix4 {}
    matrix3 Matrix4 {}
    matrix4 Matrix4 {}
    matrix5 Matrix4 {}
    vec1 Vector4 {}
    vec2 Vector4 {}
    ctxPtr DWORD 0; InstanceContextRefCounter *
    unkFloat REAL4 0.0;
AutoClass25 ENDS
InstanceNodeKSubAbstract STRUCT
    vtable DWORD 0; InstanceNodeKSubAbstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 DWORD 0; undefined * *
    field14_0x14 DWORD 0; undefined * *
    struct1ptr DWORD 0; InstanceNodeKSubModuleAbstract *
    struct2ptr DWORD 0; InstanceNodeKSubModuleAbstract *
    struct3ptr DWORD 0; InstanceNodeKSubModule2Abstract *
    struct4ptr DWORD 0; InstanceNodeKSubModule3Abstract *
InstanceNodeKSubAbstract ENDS
InputWrapper STRUCT
    arrayLength2 BYTE 0
    arrayLength1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    array2 DWORD 0; InputBinding2 *
    array1 DWORD 0; InputBinding1 *
InputWrapper ENDS
InstanceNodeKSubBase STRUCT
    parent InstanceNodeKSubAbstract {}
    field1_0x28 BYTE 0
    field2_0x29 BYTE 0
    field3_0x2a BYTE 0
    field4_0x2b BYTE 0
    field5_0x2c BYTE 0
    field6_0x2d BYTE 0
    field7_0x2e BYTE 0
    field8_0x2f BYTE 0
    field9_0x30 BYTE 0
    field10_0x31 BYTE 0
    field11_0x32 BYTE 0
    field12_0x33 BYTE 0
    field13_0x34 BYTE 0
    field14_0x35 BYTE 0
    field15_0x36 BYTE 0
    field16_0x37 BYTE 0
    field17_0x38 BYTE 0
    field18_0x39 BYTE 0
    field19_0x3a BYTE 0
    field20_0x3b BYTE 0
    field21_0x3c BYTE 0
    field22_0x3d BYTE 0
    field23_0x3e BYTE 0
    field24_0x3f BYTE 0
    inputWrapper InputWrapper {}
InstanceNodeKSubBase ENDS
InstanceNodeKSubModuleAbstract STRUCT
    vtable DWORD 0; pointer *
InstanceNodeKSubModuleAbstract ENDS
InstanceNodeKSubModuleA STRUCT
    parent InstanceNodeKSubModuleAbstract {}
    functionType DWORD 0
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 Vector4 {}
    field11_0x20 REAL4 0.0;
    field12_0x24 REAL4 0.0;
InstanceNodeKSubModuleA ENDS
InstanceNodeKSubModule2Abstract STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 DWORD 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 Vector4 {}
    field27_0x30 Vector4 {}
    field28_0x40 Vector4 {}
    field29_0x50 Vector4 {}
    field30_0x60 Vector4 {}
    field31_0x70 BYTE 0
    field32_0x71 BYTE 0
InstanceNodeKSubModule2Abstract ENDS
InstanceNodeKSubModule2A STRUCT
    parent InstanceNodeKSubModule2Abstract {}
    field1_0x72 BYTE 0
    field2_0x73 BYTE 0
    field3_0x74 BYTE 0
    field4_0x75 BYTE 0
    field5_0x76 BYTE 0
    field6_0x77 BYTE 0
    field7_0x78 BYTE 0
    field8_0x79 BYTE 0
    field9_0x7a BYTE 0
    field10_0x7b BYTE 0
    field11_0x7c BYTE 0
    field12_0x7d BYTE 0
    field13_0x7e BYTE 0
    field14_0x7f BYTE 0
    field15_0x80 DWORD 0
    field16_0x84 BYTE 0
    field17_0x85 BYTE 0
    field18_0x86 BYTE 0
    field19_0x87 BYTE 0
    field20_0x88 BYTE 0
    field21_0x89 BYTE 0
    field22_0x8a BYTE 0
    field23_0x8b BYTE 0
    field24_0x8c BYTE 0
    field25_0x8d BYTE 0
    field26_0x8e BYTE 0
    field27_0x8f BYTE 0
    field28_0x90 Vector4 {}
    field29_0xa0 Vector4 {}
    field30_0xb0 BYTE 0
    field31_0xb1 BYTE 0
    field32_0xb2 BYTE 0
    field33_0xb3 BYTE 0
    field34_0xb4 BYTE 0
    field35_0xb5 BYTE 0
    field36_0xb6 BYTE 0
    field37_0xb7 BYTE 0
    field38_0xb8 DWORD 0; Path *
    field39_0xbc BYTE 0
    field40_0xbd BYTE 0
    field41_0xbe BYTE 0
    field42_0xbf BYTE 0
InstanceNodeKSubModule2A ENDS
InstanceNodeKSubModule3Abstract STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 DWORD 0
    fov REAL4 0.0;
    field15_0x18 BYTE 0
    field16_0x19 BYTE 0
    field17_0x1a BYTE 0
    field18_0x1b BYTE 0
    field19_0x1c BYTE 0
    field20_0x1d BYTE 0
    field21_0x1e BYTE 0
    field22_0x1f BYTE 0
    vec1 Vector4 {}
    vec2 Vector4 {}
    field25_0x40 BYTE 0
    field26_0x41 BYTE 0
    field27_0x42 BYTE 0
    field28_0x43 BYTE 0
InstanceNodeKSubModule3Abstract ENDS
InstanceNodeKSubModule3A STRUCT
    parent InstanceNodeKSubModule3Abstract {}
    field1_0x44 BYTE 0
    field2_0x45 BYTE 0
    field3_0x46 BYTE 0
    field4_0x47 BYTE 0
    field5_0x48 BYTE 0
    field6_0x49 BYTE 0
    field7_0x4a BYTE 0
    field8_0x4b BYTE 0
    field9_0x4c BYTE 0
    field10_0x4d BYTE 0
    field11_0x4e BYTE 0
    field12_0x4f BYTE 0
    field13_0x50 DWORD 0
    field14_0x54 DWORD 0
    field15_0x58 BYTE 0
    field16_0x59 BYTE 0
    field17_0x5a BYTE 0
    field18_0x5b BYTE 0
    field19_0x5c BYTE 0
    field20_0x5d BYTE 0
    field21_0x5e BYTE 0
    field22_0x5f BYTE 0
    field23_0x60 Vector4 {}
    field24_0x70 Vector4 {}
    field25_0x80 BYTE 0
    field26_0x81 BYTE 0
    field27_0x82 BYTE 0
    field28_0x83 BYTE 0
    field29_0x84 BYTE 0
    field30_0x85 BYTE 0
    field31_0x86 BYTE 0
    field32_0x87 BYTE 0
    field33_0x88 BYTE 0
    field34_0x89 BYTE 0
    field35_0x8a BYTE 0
    field36_0x8b BYTE 0
    field37_0x8c BYTE 0
    field38_0x8d BYTE 0
    field39_0x8e BYTE 0
    field40_0x8f BYTE 0
    field41_0x90 BYTE 0
    field42_0x91 BYTE 0
    field43_0x92 BYTE 0
    field44_0x93 BYTE 0
    field45_0x94 BYTE 0
    field46_0x95 BYTE 0
    field47_0x96 BYTE 0
    field48_0x97 BYTE 0
    field49_0x98 DWORD 0; Path *
InstanceNodeKSubModule3A ENDS
InstanceNodeKSubA STRUCT
    parent InstanceNodeKSubBase {}
    field1_0x4c BYTE 0
    field2_0x4d BYTE 0
    field3_0x4e BYTE 0
    field4_0x4f BYTE 0
    vec1 Vector4 {}
    vec2 Vector4 {}
    field7_0x70 BYTE 0
    field8_0x71 BYTE 0
    field9_0x72 BYTE 0
    field10_0x73 BYTE 0
    field11_0x74 BYTE 0
    field12_0x75 BYTE 0
    field13_0x76 BYTE 0
    field14_0x77 BYTE 0
    field15_0x78 BYTE 0
    field16_0x79 BYTE 0
    field17_0x7a BYTE 0
    field18_0x7b BYTE 0
    field19_0x7c BYTE 0
    field20_0x7d BYTE 0
    field21_0x7e BYTE 0
    field22_0x7f BYTE 0
    field23_0x80 BYTE 0
    field24_0x81 BYTE 0
    field25_0x82 BYTE 0
    field26_0x83 BYTE 0
    field27_0x84 BYTE 0
    field28_0x85 BYTE 0
    field29_0x86 BYTE 0
    field30_0x87 BYTE 0
    field31_0x88 BYTE 0
    field32_0x89 BYTE 0
    field33_0x8a BYTE 0
    field34_0x8b BYTE 0
    field35_0x8c BYTE 0
    field36_0x8d BYTE 0
    field37_0x8e BYTE 0
    field38_0x8f BYTE 0
    field39_0x90 BYTE 0
    field40_0x91 BYTE 0
    field41_0x92 BYTE 0
    field42_0x93 BYTE 0
    field43_0x94 BYTE 0
    field44_0x95 BYTE 0
    field45_0x96 BYTE 0
    field46_0x97 BYTE 0
    field47_0x98 BYTE 0
    field48_0x99 BYTE 0
    field49_0x9a BYTE 0
    field50_0x9b BYTE 0
    field51_0x9c BYTE 0
    field52_0x9d BYTE 0
    field53_0x9e BYTE 0
    field54_0x9f BYTE 0
    field55_0xa0 BYTE 0
    field56_0xa1 BYTE 0
    field57_0xa2 BYTE 0
    field58_0xa3 BYTE 0
    field59_0xa4 BYTE 0
    field60_0xa5 BYTE 0
    field61_0xa6 BYTE 0
    field62_0xa7 BYTE 0
    field63_0xa8 BYTE 0
    field64_0xa9 BYTE 0
    field65_0xaa BYTE 0
    field66_0xab BYTE 0
    field67_0xac BYTE 0
    field68_0xad BYTE 0
    field69_0xae BYTE 0
    field70_0xaf BYTE 0
    field71_0xb0 BYTE 0
    field72_0xb1 BYTE 0
    field73_0xb2 BYTE 0
    field74_0xb3 BYTE 0
    field75_0xb4 DWORD 0; Path *
    field76_0xb8 DWORD 0; Path *
    field77_0xbc BYTE 0
    field78_0xbd BYTE 0
    field79_0xbe BYTE 0
    field80_0xbf BYTE 0
    struct1 InstanceNodeKSubModuleA {}
    field82_0xe8 BYTE 0
    field83_0xe9 BYTE 0
    field84_0xea BYTE 0
    field85_0xeb BYTE 0
    field86_0xec BYTE 0
    field87_0xed BYTE 0
    field88_0xee BYTE 0
    field89_0xef BYTE 0
    struct2 InstanceNodeKSubModuleA {}
    field91_0x118 BYTE 0
    field92_0x119 BYTE 0
    field93_0x11a BYTE 0
    field94_0x11b BYTE 0
    field95_0x11c BYTE 0
    field96_0x11d BYTE 0
    field97_0x11e BYTE 0
    field98_0x11f BYTE 0
    struct3 InstanceNodeKSubModule2A {}
    struct4 InstanceNodeKSubModule3A {}
    field101_0x27c BYTE 0
    field102_0x27d BYTE 0
    field103_0x27e BYTE 0
    field104_0x27f BYTE 0
InstanceNodeKSubA ENDS
InstanceNodeKSubModule3C STRUCT
    parent InstanceNodeKSubModule3Abstract {}
InstanceNodeKSubModule3C ENDS
InstanceNodeKSubC STRUCT
    parent InstanceNodeKSubAbstract {}
    field1_0x28 BYTE 0
    field2_0x29 BYTE 0
    field3_0x2a BYTE 0
    field4_0x2b BYTE 0
    field5_0x2c BYTE 0
    field6_0x2d BYTE 0
    field7_0x2e BYTE 0
    field8_0x2f BYTE 0
    field9_0x30 BYTE 0
    field10_0x31 BYTE 0
    field11_0x32 BYTE 0
    field12_0x33 BYTE 0
    field13_0x34 BYTE 0
    field14_0x35 BYTE 0
    field15_0x36 BYTE 0
    field16_0x37 BYTE 0
    field17_0x38 BYTE 0
    field18_0x39 BYTE 0
    field19_0x3a BYTE 0
    field20_0x3b BYTE 0
    field21_0x3c BYTE 0
    field22_0x3d BYTE 0
    field23_0x3e BYTE 0
    field24_0x3f BYTE 0
    struct1 InstanceNodeKSubModule3C {}
InstanceNodeKSubC ENDS
ChunkDesc STRUCT
    flags2 DWORD 0
    flags DWORD 0
    ticks DWORD 0
    someTime DWORD 0
    chunkName TwinString {}
    unkString1 TwinString {}
    unkString2 TwinString {}
    uintArray BYTE 64 dup (0)
    unkReserved1 DWORD 0
    unkField10 DWORD 0
    someDTime DWORD 0
    playerInstanceContexts BYTE 24 dup (0)
    slot1 DWORD 0; AutoClass53 *
    slot2 DWORD 0; AutoClass53 *
    slot3 DWORD 0; AutoClass53 *
ChunkDesc ENDS
AutoClass56 STRUCT
    flags DWORD 0
    field1_0x4 DWORD 0
    someTicks DWORD 0
    chunkName TwinString {}
    field4_0x18 WORD 0
    field5_0x1a BYTE 0
    field6_0x1b BYTE 0
    field7_0x1c DWORD 0
    field8_0x20 BYTE 0
    field9_0x21 BYTE 0
    field10_0x22 BYTE 0
    field11_0x23 BYTE 0
    field12_0x24 REAL4 0.0;
    field13_0x28 REAL4 0.0;
    rmDataPool DWORD 0; void *
AutoClass56 ENDS
OlegBase STRUCT
    vtable DWORD 0; OlegBase_VTable *
    field1_0x4 REAL4 0.0;
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    uiPresetMask BYTE 512 dup (0)
    modules BYTE 256 dup (0)
OlegBase ENDS
SplineAbstract STRUCT
    vtable DWORD 0; SplineAbstract_VTable *
    _length REAL4 0.0;
    position REAL4 0.0;
    argument REAL4 0.0;
    repeats DWORD 0
    next DWORD 0; SplineAbstract *
SplineAbstract ENDS
SplineA STRUCT
    parent SplineAbstract {}
    arrayLength DWORD 0
    spline DWORD 0; Vector2 *
SplineA ENDS
SplineD STRUCT
    parent SplineAbstract {}
SplineD ENDS
SplineE STRUCT
    parent SplineAbstract {}
SplineE ENDS
SplineC STRUCT
    parent SplineAbstract {}
SplineC ENDS
InputObserver STRUCT
    vtable DWORD 0; undefined * *
    collection DWORD 0; InputWrapper *
    inputMask1 BYTE 0
    inputMask0 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
InputObserver ENDS
UnkSfxCollection STRUCT
    sfx BYTE 52 dup (0)
    arr2 BYTE 52 dup (0)
UnkSfxCollection ENDS
TwinsanityMaterialShader STRUCT
    shaderPrograms BYTE 16 dup (0)
    shaderProgramCnt DWORD 0
    field2_0x14 DWORD 0
    field3_0x18 DWORD 0
    field4_0x1c DWORD 0
    shaderType DWORD 0
    field6_0x24 DWORD 0
TwinsanityMaterialShader ENDS
UIElementAbstract STRUCT
    vtable DWORD 0; UIElementAbstract_VTable *
    shader DWORD 0; TwinsanityMaterialShader *
    material DWORD 0; TwinsanityMaterial *
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
UIElementAbstract ENDS
UIElementImage STRUCT
    parent UIElementAbstract {}
    pos Vector2 {}
    _size Vector2 {}
UIElementImage ENDS
UnkFamily20BaseSub STRUCT
    vtable DWORD 0; pointer *
    totalSpace WORD 0
    field2_0x6 WORD 0
    occupiedElements WORD 0
    lastIndex WORD 0
    indexes DWORD 0; short *
    unkArray DWORD 0; struct1 *
UnkFamily20BaseSub ENDS
UnkFamily20Base STRUCT
    vtable DWORD 0; UnkFamily20Base_VTable *
    subStruct UnkFamily20BaseSub {}
    vec Vector4 {}
    field3_0x28 REAL4 0.0;
    field4_0x2c REAL4 0.0;
    field5_0x30 DWORD 0
    field6_0x34 REAL4 0.0;
    field7_0x38 REAL4 0.0;
    field8_0x3c DWORD 0
    field9_0x40 DWORD 0
    field10_0x44 DWORD 0
    field11_0x48 DWORD 0
UnkFamily20Base ENDS
SplineB STRUCT
    parent SplineAbstract {}
    field1_0x18 BYTE 0
    field2_0x19 BYTE 0
    field3_0x1a BYTE 0
    field4_0x1b BYTE 0
    field5_0x1c BYTE 0
    field6_0x1d BYTE 0
    field7_0x1e BYTE 0
    field8_0x1f BYTE 0
    unkStruct UnkFamily20Base {}
SplineB ENDS
AutoClass11 STRUCT
    font DWORD 0; Font *
    field1_0x4 DWORD 0
    message TwinString {}
    color Color {}
    vec Vector4 {}
    field5_0x28 DWORD 0
    field6_0x2c DWORD 0
    module DWORD 0; OlegModuleLabelGeneric *
AutoClass11 ENDS
OlegModuleAbstract STRUCT
    vtable DWORD 0; OlegModuleAbstract_VTable *
    flags DWORD 0
    field2_0x8 Vector2 {}
    startTime DWORD 0
    fadeInLength DWORD 0
    fadeOutLength DWORD 0
    value REAL4 0.0;
    next DWORD 0; OlegModuleAbstract *
    spline DWORD 0; SplineA *
    field9_0x28 DWORD 0; uint *
    field10_0x2c Color {}
    field11_0x30 Vector2 {}
OlegModuleAbstract ENDS
OlegModuleA STRUCT
    parent OlegModuleAbstract {}
    color0 Color {}
    color4 Color {}
    color1 Color {}
    color2 Color {}
    array BYTE 64 dup (0)
OlegModuleA ENDS
OlegModuleIcon STRUCT
    parent OlegModuleA {}
    icons DWORD 0; UIElementImage *
    field2_0x8c DWORD 0; UnkFamily20Base *
    field3_0x90 REAL4 0.0;
    field4_0x94 REAL4 0.0;
    field5_0x98 REAL4 0.0;
    field6_0x9c REAL4 0.0;
    field7_0xa0 REAL4 0.0;
    field8_0xa4 REAL4 0.0;
    field9_0xa8 REAL4 0.0;
    field10_0xac REAL4 0.0;
    field11_0xb0 REAL4 0.0;
    field12_0xb4 REAL4 0.0;
    field13_0xb8 REAL4 0.0;
OlegModuleIcon ENDS
OlegModuleLabelGeneric STRUCT
    parent OlegModuleA {}
    font DWORD 0; Font *
    index DWORD 0
    _str TwinString {}
OlegModuleLabelGeneric ENDS
OlegModuleMenuBubble STRUCT
    parent OlegModuleA {}
    cnt BYTE 0
    field2_0x89 BYTE 0
    index1 BYTE 0
    field4_0x8b BYTE 0
    index2 DWORD 0
    imageArray DWORD 0; UIElementSimpleShapeA * *
OlegModuleMenuBubble ENDS
OlegModuleLabelPulsating STRUCT
    parent OlegModuleA {}
    font DWORD 0; Font *
    index2 DWORD 0
    index1 DWORD 0
OlegModuleLabelPulsating ENDS
OlegModuleLabelSelectable STRUCT
    parent OlegModuleA {}
    field1_0x88 BYTE 0
    field2_0x89 BYTE 0
    field3_0x8a BYTE 0
    field4_0x8b BYTE 0
    page1 DWORD 0; UnkFamily10Base *
    page2 DWORD 0; UnkFamily10Base *
    inputHandle DWORD 0; InputStruct *
    inputObserver DWORD 0; InputObserver *
    colorMatrix DWORD 0; ColorMatrix *
    sfxCollection DWORD 0; UnkSfxCollection *
    field11_0xa4 DWORD 0
    field12_0xa8 DWORD 0
OlegModuleLabelSelectable ENDS
OlegModuleAH STRUCT
    parent OlegModuleA {}
    field1_0x88 DWORD 0; UIElementImage *
    field2_0x8c DWORD 0; ChunkDesc *
OlegModuleAH ENDS
OlegModuleAF STRUCT
    parent OlegModuleA {}
    field1_0x88 REAL4 0.0;
    field2_0x8c DWORD 0; UIElementImage *
    field3_0x90 DWORD 0; UIElementImage *
    image1 DWORD 0; UIElementImage *
    image2 DWORD 0; UIElementImage *
OlegModuleAF ENDS
OlegModuleAC STRUCT
    parent OlegModuleA {}
    field1_0x88 DWORD 0; UIElementImage *
OlegModuleAC ENDS
Oleg STRUCT
    parent OlegBase {}
    field1_0x310 DWORD 0
    screenFlags DWORD 0
    field3_0x318 DWORD 0
    field4_0x31c DWORD 0
    field5_0x320 DWORD 0
    deltaTime DWORD 0
    spline0 SplineA {}
    spline1 SplineD {}
    spline2 SplineE {}
    spline3 SplineC {}
    chunkDesc DWORD 0; ChunkDesc *
    font DWORD 0; Font *
    psmPath TwinString {}
    inputWrapper InputWrapper {}
    inputObserver InputObserver {}
    colorMatrix BYTE 828 dup (0)
    sfxRelated UnkSfxCollection {}
    page1 DWORD 0; UnkFamily10VM *
    page2 DWORD 0; UnkFamily10B *
    page3 DWORD 0; UnkFamily10I *
    page4 DWORD 0; UnkFamily10L *
    page5 DWORD 0; UnkFamily10M *
    page6 DWORD 0; UnkFamily10N *
    page7 DWORD 0; UnkFamily10VA *
    page8 DWORD 0; UnkFamily10P *
    page9 DWORD 0; UnkFamily10P *
    page10 DWORD 0; UnkFamily10P *
    page11 DWORD 0; UnkFamily10Q *
    page12 DWORD 0; UnkFamily10Q *
    page13 DWORD 0; UnkFamily10Q *
    page14 DWORD 0; UnkFamily10Q *
    page15 DWORD 0; UnkFamily10R *
    page16 DWORD 0; UnkFamily10S *
    page17 DWORD 0; UnkFamily10ZA *
    page18 DWORD 0; UnkFamily10VL *
    material TwinsanityMaterialShader {}
    unkClass DWORD 0; ShaderProgramAbstract *
    materialRelated UIElementImage {}
    arr1length DWORD 0
    arr1 DWORD 0; Vector4 *
    arr2length DWORD 0
    arr2 DWORD 0; Vector2 *
    arr3length DWORD 0
    arr3 DWORD 0; float *
    arr4length DWORD 0
    arr4 DWORD 0; float *
    unkStruct12array BYTE 608 dup (0)
    field48_0xa74 BYTE 0
    field49_0xa75 BYTE 0
    field50_0xa76 BYTE 0
    field51_0xa77 BYTE 0
    field52_0xa78 BYTE 0
    field53_0xa79 BYTE 0
    field54_0xa7a BYTE 0
    field55_0xa7b BYTE 0
    field56_0xa7c BYTE 0
    field57_0xa7d BYTE 0
    field58_0xa7e BYTE 0
    field59_0xa7f BYTE 0
    spline4 SplineB {}
    field61_0xaec BYTE 0
    field62_0xaed BYTE 0
    field63_0xaee BYTE 0
    field64_0xaef BYTE 0
    field65_0xaf0 Vector4 {}
    field66_0xb00 DWORD 0
    field67_0xb04 DWORD 0
    field68_0xb08 DWORD 0
    someIcon1 UIElementImage {}
    crashTwinsanityLogo UIElementImage {}
    someIcon2 UIElementImage {}
    someIcon3 UIElementImage {}
    someIcon4 UIElementImage {}
    someIcon5 UIElementImage {}
    iconsPsm2 BYTE 1280 dup (0)
    iconsPsm3 BYTE 256 dup (0)
    screenMessage AutoClass11 {}
    uiIcon01 OlegModuleIcon {}
    uiIcon02 OlegModuleIcon {}
    uiIcon03 OlegModuleIcon {}
    uiIcon04 OlegModuleIcon {}
    uiIcon05 OlegModuleIcon {}
    label01 OlegModuleLabelGeneric {}
    uiIcon06 OlegModuleIcon {}
    bubble01 OlegModuleMenuBubble {}
    bubble02 OlegModuleMenuBubble {}
    caption01 OlegModuleLabelPulsating {}
    caption02 OlegModuleLabelPulsating {}
    caption03 OlegModuleLabelPulsating {}
    caption04 OlegModuleLabelPulsating {}
    caption05 OlegModuleLabelPulsating {}
    option01 OlegModuleLabelSelectable {}
    bubble03 OlegModuleMenuBubble {}
    option02 OlegModuleLabelSelectable {}
    caption06 OlegModuleLabelPulsating {}
    option03 OlegModuleLabelSelectable {}
    uiIcon07 OlegModuleIcon {}
    option04 OlegModuleLabelSelectable {}
    option05 OlegModuleLabelSelectable {}
    caption07 OlegModuleLabelPulsating {}
    option06 OlegModuleLabelSelectable {}
    caption08 OlegModuleLabelPulsating {}
    option07 OlegModuleLabelSelectable {}
    caption09 OlegModuleLabelPulsating {}
    caption10 OlegModuleLabelPulsating {}
    caption11 OlegModuleLabelPulsating {}
    caption12 OlegModuleLabelPulsating {}
    caption13 OlegModuleLabelPulsating {}
    caption14 OlegModuleLabelPulsating {}
    option08 OlegModuleLabelSelectable {}
    caption15 OlegModuleLabelPulsating {}
    caption16 OlegModuleLabelPulsating {}
    uiIcon08 OlegModuleIcon {}
    option09 OlegModuleLabelSelectable {}
    caption17 OlegModuleLabelPulsating {}
    option10 OlegModuleLabelSelectable {}
    bubble04 OlegModuleMenuBubble {}
    bubble05 OlegModuleMenuBubble {}
    bubble06 OlegModuleMenuBubble {}
    bubble07 OlegModuleMenuBubble {}
    bubble08 OlegModuleMenuBubble {}
    uiIcon09 OlegModuleIcon {}
    progressPercent OlegModuleLabelGeneric {}
    label03 OlegModuleLabelGeneric {}
    uiIcon10 OlegModuleIcon {}
    label04 OlegModuleLabelGeneric {}
    uiIcon11 OlegModuleIcon {}
    label05 OlegModuleLabelGeneric {}
    uiIcon12 OlegModuleIcon {}
    iconArray BYTE 24 dup (0)
    option11 OlegModuleLabelSelectable {}
    option12 OlegModuleLabelSelectable {}
    option13 OlegModuleLabelSelectable {}
    option14 OlegModuleLabelSelectable {}
    caption18 OlegModuleLabelPulsating {}
    bubble09 OlegModuleMenuBubble {}
    option15 OlegModuleLabelSelectable {}
    bubble10 OlegModuleMenuBubble {}
    uiIcon13 OlegModuleIcon {}
    caption19 OlegModuleLabelPulsating {}
    option16 OlegModuleLabelSelectable {}
    label07 OlegModuleLabelGeneric {}
    label08 OlegModuleLabelGeneric {}
    option17 OlegModuleLabelSelectable {}
    label09 OlegModuleLabelGeneric {}
    bubble11 OlegModuleMenuBubble {}
    option18 OlegModuleLabelSelectable {}
    caption20 OlegModuleLabelPulsating {}
    uiIcon14 OlegModuleIcon {}
    label10 OlegModuleLabelGeneric {}
    uiIcon15 OlegModuleIcon {}
    label11 OlegModuleLabelGeneric {}
    uiIcon16 OlegModuleIcon {}
    module75 OlegModuleAH {}
    module76 OlegModuleAF {}
    wumpaCount OlegModuleLabelGeneric {}
    uiIcon17 OlegModuleIcon {}
    label13 OlegModuleLabelGeneric {}
    uiIcon18 OlegModuleIcon {}
    lifeIcon OlegModuleIcon {}
    uiIcon20 OlegModuleIcon {}
    label14 OlegModuleLabelGeneric {}
    uiIcon21 OlegModuleIcon {}
    uiIcon22 OlegModuleIcon {}
    module86 OlegModuleAC {}
    uiIcon23 OlegModuleIcon {}
    caption21 OlegModuleLabelPulsating {}
Oleg ENDS
GameController STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    state DWORD 0
    flags DWORD 0
    flags2 DWORD 0
    waitTime DWORD 0
    progressCounter DWORD 0
    field13_0x1c DWORD 0
    progressGoal DWORD 0
    timeFromStart DWORD 0
    timeRelated DWORD 0
    fontRenderer DWORD 0; FontRenderer *
    defaultRm DWORD 0; UnkFamily16A *
    resourceManager DWORD 0; GameResourceManager *
    gameResources DWORD 0; GameResources *
    inputHandle1 DWORD 0; InputStruct *
    inputHandle2 DWORD 0; InputStruct *
    sfxData SectionDataSfx {}
    fmvTimeRelated REAL4 0.0;
    fmvIndex DWORD 0
    galleryName TwinString {}
    font Font {}
    field28_0xac BYTE 0
    field29_0xad BYTE 0
    field30_0xae BYTE 0
    field31_0xaf BYTE 0
    field32_0xb0 AutoClass25 {}
    field33_0x218 BYTE 0
    field34_0x219 BYTE 0
    field35_0x21a BYTE 0
    field36_0x21b BYTE 0
    field37_0x21c BYTE 0
    field38_0x21d BYTE 0
    field39_0x21e BYTE 0
    field40_0x21f BYTE 0
    unkStruct3 InstanceNodeKSubA {}
    field42_0x4a0 InstanceNodeKSubC {}
    field43_0x524 BYTE 0
    field44_0x525 BYTE 0
    field45_0x526 BYTE 0
    field46_0x527 BYTE 0
    field47_0x528 BYTE 0
    field48_0x529 BYTE 0
    field49_0x52a BYTE 0
    field50_0x52b BYTE 0
    field51_0x52c BYTE 0
    field52_0x52d BYTE 0
    field53_0x52e BYTE 0
    field54_0x52f BYTE 0
    chunkDescriptor ChunkDesc {}
    unkStruct AutoClass56 {}
    chunkDesc DWORD 0; ChunkDesc *
    field58_0x608 BYTE 0
    field59_0x609 BYTE 0
    field60_0x60a BYTE 0
    field61_0x60b BYTE 0
    field62_0x60c BYTE 0
    field63_0x60d BYTE 0
    field64_0x60e BYTE 0
    field65_0x60f BYTE 0
    oleg Oleg {}
    field67_0x5148 BYTE 0
    field68_0x5149 BYTE 0
    field69_0x514a BYTE 0
    field70_0x514b BYTE 0
    field71_0x514c BYTE 0
    field72_0x514d BYTE 0
    field73_0x514e BYTE 0
    field74_0x514f BYTE 0
    credits DWORD 0; Credits *
    field76_0x5154 BYTE 0
    field77_0x5155 BYTE 0
    field78_0x5156 BYTE 0
    field79_0x5157 BYTE 0
    field80_0x5158 BYTE 0
    field81_0x5159 BYTE 0
    field82_0x515a BYTE 0
    field83_0x515b BYTE 0
    field84_0x515c BYTE 0
    field85_0x515d BYTE 0
    field86_0x515e BYTE 0
    field87_0x515f BYTE 0
GameController ENDS
InstanceContextSmartPtr STRUCT
    refCounter DWORD 0; InstanceContextRefCounter *
InstanceContextSmartPtr ENDS
World STRUCT
    flags DWORD 0
    restrict TwinString {}
    unkField5 DWORD 0
    someState DWORD 0; SomeState *
    first DWORD 0; WorldChunk *
    currentChunk DWORD 0; WorldChunk *
    ctxPtr InstanceContextSmartPtr {}
World ENDS
FileStream STRUCT
    vtable DWORD 0; FileStream_VTable *
    handle DWORD 0
    errno DWORD 0
FileStream ENDS
ScreenInfo STRUCT
    renderer DWORD 0; Renderer *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    width2 DWORD 0
    height2 DWORD 0
    color Color {}
    width1 DWORD 0
    height1 DWORD 0
ScreenInfo ENDS
FontCollection STRUCT
    fonts DWORD 0; AutoClass58 * *
    fontsCount DWORD 0
    totalSpace DWORD 0
    field3_0xc DWORD 0
FontCollection ENDS
FontRenderer STRUCT
    renderer DWORD 0; Renderer *
    field1_0x4 DWORD 0; AutoClass25 *
    screenInfoExt DWORD 0; ScreenInfoExt *
    flags DWORD 0
    color Color {}
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    fontCollection FontCollection {}
    font DWORD 0; Font *
    originX REAL4 0.0;
    originY REAL4 0.0;
    field13_0x34 DWORD 0
    field14_0x38 DWORD 0
    field15_0x3c DWORD 0
    field16_0x40 DWORD 0
    field17_0x44 DWORD 0
    field18_0x48 DWORD 0
    field19_0x4c DWORD 0
    field20_0x50 DWORD 0
    field21_0x54 DWORD 0
    field22_0x58 DWORD 0
    field23_0x5c DWORD 0
    field24_0x60 DWORD 0
    field25_0x64 DWORD 0
FontRenderer ENDS
SaveSystemAbstract STRUCT
    vtable DWORD 0; SaveSystem_VTable *
    flags1 DWORD 0
    flags2 DWORD 0
    title TwinString {}
    saveController DWORD 0; SaveController *
    oleg DWORD 0; Oleg *
    uiPresetIndex1 DWORD 0
    uiPresetIndex2 DWORD 0
    uiPresetIndex3 DWORD 0
    field9_0x2c DWORD 0
    str0 TwinString {}
    str1 TwinString {}
    str2 TwinString {}
    label0 DWORD 0; OlegModuleLabelGeneric *
    label1 DWORD 0; OlegModuleLabelGeneric *
    label2 DWORD 0; OlegModuleLabelGeneric *
    field16_0x60 DWORD 0
    field17_0x64 DWORD 0
SaveSystemAbstract ENDS
MY_FILETIME STRUCT
    dwHighDateTime DWORD 0
    dwLowDateTime DWORD 0
MY_FILETIME ENDS
SaveFileAbstract STRUCT
    vtable DWORD 0; SaveFileAbstract_VTable *
    name TwinString {}
    saveTime MY_FILETIME {}
    field3_0x18 DWORD 0
    saveHash DWORD 0
    stream DWORD 0; MemoryStream *
    streamLength DWORD 0
    streamStartPtr DWORD 0; byte *
SaveFileAbstract ENDS
SaveFileD STRUCT
    parent SaveFileAbstract {}
    _str TwinString {}
SaveFileD ENDS
CollectionUnk2 STRUCT
    field0_0x0 BYTE 0
    cnt BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 DWORD 0
    array DWORD 0; int *
CollectionUnk2 ENDS
SaveFileA STRUCT
    parent SaveFileAbstract {}
    bankCnt DWORD 0
    bankSubs DWORD 0; BankSub * *
SaveFileA ENDS
SaveControllerAbstract STRUCT
    vtable DWORD 0; SaveController_VTable *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    banks DWORD 0; SaveFileC * *
    array DWORD 0; int *
SaveControllerAbstract ENDS
SaveController STRUCT
    parent SaveControllerAbstract {}
    saveRoot TwinString {}
    savePath TwinString {}
    saveGameName BYTE 22 dup (0)
    field4_0x52 BYTE 0
    field5_0x53 BYTE 0
    field6_0x54 BYTE 0
    field7_0x55 BYTE 0
    field8_0x56 BYTE 0
    field9_0x57 BYTE 0
    field10_0x58 BYTE 0
    field11_0x59 BYTE 0
    field12_0x5a BYTE 0
    field13_0x5b BYTE 0
    field14_0x5c BYTE 0
    field15_0x5d BYTE 0
    field16_0x5e BYTE 0
    field17_0x5f BYTE 0
    field18_0x60 BYTE 0
    field19_0x61 BYTE 0
    field20_0x62 BYTE 0
    field21_0x63 BYTE 0
    field22_0x64 BYTE 0
    field23_0x65 BYTE 0
    field24_0x66 BYTE 0
    field25_0x67 BYTE 0
    field26_0x68 BYTE 0
    field27_0x69 BYTE 0
    field28_0x6a BYTE 0
    field29_0x6b BYTE 0
    field30_0x6c BYTE 0
    field31_0x6d BYTE 0
    field32_0x6e BYTE 0
    field33_0x6f BYTE 0
    field34_0x70 BYTE 0
    field35_0x71 BYTE 0
    field36_0x72 BYTE 0
    field37_0x73 BYTE 0
    field38_0x74 BYTE 0
    field39_0x75 BYTE 0
    field40_0x76 BYTE 0
    field41_0x77 BYTE 0
    field42_0x78 BYTE 0
    field43_0x79 BYTE 0
    field44_0x7a BYTE 0
    field45_0x7b BYTE 0
    field46_0x7c BYTE 0
    field47_0x7d BYTE 0
    field48_0x7e BYTE 0
    field49_0x7f BYTE 0
    field50_0x80 BYTE 0
    field51_0x81 BYTE 0
    field52_0x82 BYTE 0
    field53_0x83 BYTE 0
    field54_0x84 BYTE 0
    field55_0x85 BYTE 0
    field56_0x86 BYTE 0
    field57_0x87 BYTE 0
    field58_0x88 BYTE 0
    field59_0x89 BYTE 0
    field60_0x8a BYTE 0
    field61_0x8b BYTE 0
    field62_0x8c BYTE 0
    field63_0x8d BYTE 0
    field64_0x8e BYTE 0
    field65_0x8f BYTE 0
    field66_0x90 BYTE 0
    field67_0x91 BYTE 0
    field68_0x92 BYTE 0
    field69_0x93 BYTE 0
    field70_0x94 BYTE 0
    field71_0x95 BYTE 0
    field72_0x96 BYTE 0
    field73_0x97 BYTE 0
    field74_0x98 BYTE 0
    field75_0x99 BYTE 0
    field76_0x9a BYTE 0
    field77_0x9b BYTE 0
    field78_0x9c BYTE 0
    field79_0x9d BYTE 0
    field80_0x9e BYTE 0
    field81_0x9f BYTE 0
    field82_0xa0 BYTE 0
    field83_0xa1 BYTE 0
    field84_0xa2 BYTE 0
    field85_0xa3 BYTE 0
    field86_0xa4 BYTE 0
    field87_0xa5 BYTE 0
    field88_0xa6 BYTE 0
    field89_0xa7 BYTE 0
    field90_0xa8 BYTE 0
    field91_0xa9 BYTE 0
    field92_0xaa BYTE 0
    field93_0xab BYTE 0
    field94_0xac BYTE 0
    field95_0xad BYTE 0
    field96_0xae BYTE 0
    field97_0xaf BYTE 0
    field98_0xb0 BYTE 0
    field99_0xb1 BYTE 0
    field100_0xb2 BYTE 0
    field101_0xb3 BYTE 0
    field102_0xb4 BYTE 0
    field103_0xb5 BYTE 0
    field104_0xb6 BYTE 0
    field105_0xb7 BYTE 0
    field106_0xb8 BYTE 0
    field107_0xb9 BYTE 0
    field108_0xba BYTE 0
    field109_0xbb BYTE 0
    field110_0xbc BYTE 0
    field111_0xbd BYTE 0
    field112_0xbe BYTE 0
    field113_0xbf BYTE 0
    field114_0xc0 BYTE 0
    field115_0xc1 BYTE 0
    field116_0xc2 BYTE 0
    field117_0xc3 BYTE 0
    field118_0xc4 BYTE 0
    field119_0xc5 BYTE 0
    field120_0xc6 BYTE 0
    field121_0xc7 BYTE 0
    field122_0xc8 BYTE 0
    field123_0xc9 BYTE 0
    field124_0xca BYTE 0
    field125_0xcb BYTE 0
    field126_0xcc BYTE 0
    field127_0xcd BYTE 0
    field128_0xce BYTE 0
    field129_0xcf BYTE 0
    field130_0xd0 BYTE 0
    field131_0xd1 BYTE 0
    field132_0xd2 BYTE 0
    field133_0xd3 BYTE 0
    field134_0xd4 BYTE 0
    field135_0xd5 BYTE 0
    field136_0xd6 BYTE 0
    field137_0xd7 BYTE 0
    field138_0xd8 BYTE 0
    field139_0xd9 BYTE 0
    field140_0xda BYTE 0
    field141_0xdb BYTE 0
    field142_0xdc BYTE 0
    field143_0xdd BYTE 0
    field144_0xde BYTE 0
    field145_0xdf BYTE 0
    field146_0xe0 BYTE 0
    field147_0xe1 BYTE 0
    field148_0xe2 BYTE 0
    field149_0xe3 BYTE 0
    field150_0xe4 BYTE 0
    field151_0xe5 BYTE 0
    field152_0xe6 BYTE 0
    field153_0xe7 BYTE 0
    field154_0xe8 BYTE 0
    field155_0xe9 BYTE 0
    field156_0xea BYTE 0
    field157_0xeb BYTE 0
    field158_0xec BYTE 0
    field159_0xed BYTE 0
    field160_0xee BYTE 0
    field161_0xef BYTE 0
    field162_0xf0 BYTE 0
    field163_0xf1 BYTE 0
    field164_0xf2 BYTE 0
    field165_0xf3 BYTE 0
    field166_0xf4 BYTE 0
    field167_0xf5 BYTE 0
    field168_0xf6 BYTE 0
    field169_0xf7 BYTE 0
    field170_0xf8 BYTE 0
    field171_0xf9 BYTE 0
    field172_0xfa BYTE 0
    field173_0xfb BYTE 0
    field174_0xfc BYTE 0
    field175_0xfd BYTE 0
    field176_0xfe BYTE 0
    field177_0xff BYTE 0
    field178_0x100 BYTE 0
    field179_0x101 BYTE 0
    field180_0x102 BYTE 0
    field181_0x103 BYTE 0
    field182_0x104 BYTE 0
    field183_0x105 BYTE 0
    field184_0x106 BYTE 0
    field185_0x107 BYTE 0
    field186_0x108 BYTE 0
    field187_0x109 BYTE 0
    field188_0x10a BYTE 0
    field189_0x10b BYTE 0
    field190_0x10c BYTE 0
    field191_0x10d BYTE 0
    field192_0x10e BYTE 0
    field193_0x10f BYTE 0
    field194_0x110 BYTE 0
    field195_0x111 BYTE 0
    field196_0x112 BYTE 0
    field197_0x113 BYTE 0
    field198_0x114 BYTE 0
    field199_0x115 BYTE 0
    field200_0x116 BYTE 0
    field201_0x117 BYTE 0
    field202_0x118 BYTE 0
    field203_0x119 BYTE 0
    field204_0x11a BYTE 0
    field205_0x11b BYTE 0
    field206_0x11c BYTE 0
    field207_0x11d BYTE 0
    field208_0x11e BYTE 0
    field209_0x11f BYTE 0
    field210_0x120 BYTE 0
    field211_0x121 BYTE 0
    field212_0x122 BYTE 0
    field213_0x123 BYTE 0
    field214_0x124 BYTE 0
    field215_0x125 BYTE 0
    field216_0x126 BYTE 0
    field217_0x127 BYTE 0
    field218_0x128 BYTE 0
    field219_0x129 BYTE 0
    field220_0x12a BYTE 0
    field221_0x12b BYTE 0
    field222_0x12c BYTE 0
    field223_0x12d BYTE 0
    field224_0x12e BYTE 0
    field225_0x12f BYTE 0
    field226_0x130 BYTE 0
    field227_0x131 BYTE 0
    field228_0x132 BYTE 0
    field229_0x133 BYTE 0
    field230_0x134 BYTE 0
    field231_0x135 BYTE 0
    field232_0x136 BYTE 0
    field233_0x137 BYTE 0
    field234_0x138 BYTE 0
    field235_0x139 BYTE 0
    field236_0x13a BYTE 0
    field237_0x13b BYTE 0
    field238_0x13c DWORD 0
    field239_0x140 DWORD 0
    field240_0x144 BYTE 0
    field241_0x145 BYTE 0
    field242_0x146 BYTE 0
    field243_0x147 BYTE 0
    field244_0x148 BYTE 0
    field245_0x149 BYTE 0
    field246_0x14a BYTE 0
    field247_0x14b BYTE 0
    field248_0x14c BYTE 0
    field249_0x14d BYTE 0
    field250_0x14e BYTE 0
    field251_0x14f BYTE 0
    field252_0x150 BYTE 0
    field253_0x151 BYTE 0
    field254_0x152 BYTE 0
    field255_0x153 BYTE 0
SaveController ENDS
SaveSystem STRUCT
    parent SaveSystemAbstract {}
    saveImageWrong SaveFileD {}
    unkStruct0 CollectionUnk2 {}
    saveFile SaveFileA {}
    saveController SaveController {}
    saveFiles DWORD 0; SaveFileC * *
SaveSystem ENDS
GameReaderStorage STRUCT
    index DWORD 0
    reader DWORD 0; FileReaderHelper *
    readerBuffer DWORD 0; FileResourceDescAbstract * *
    bufferSpaceTotal DWORD 0
    bufferIndex DWORD 0
    bufferSpaceUsed DWORD 0
    currentReaderItem DWORD 0; FileResourceDescAbstract *
    readerStorage DWORD 0; FileResourceDescAbstract * *
    storageSpaceTotal WORD 0
    storageSpaceUsed WORD 0
GameReaderStorage ENDS
VideoPlayerAbstract STRUCT
    vtable DWORD 0; VideoPlayer_VTable *
    flags DWORD 0
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    fmvName TwinString {}
VideoPlayerAbstract ENDS
VideoPlayer STRUCT
    parent VideoPlayerAbstract {}
    field1_0x1c DWORD 0; ulonglong *
    field2_0x20 DWORD 0; int *
    field3_0x24 DWORD 0
    field4_0x28 DWORD 0
    res1 DWORD 0; D3DSurfaceResource *
    res2 DWORD 0; D3DSurfaceResource *
    field7_0x34 DWORD 0; void *
    field8_0x38 DWORD 0
    field9_0x3c DWORD 0
    field10_0x40 DWORD 0
    field11_0x44 DWORD 0
    field12_0x48 DWORD 0
    field13_0x4c DWORD 0
    field14_0x50 DWORD 0
    field15_0x54 DWORD 0
    field16_0x58 DWORD 0
    field17_0x5c DWORD 0
    _width DWORD 0
    height DWORD 0
    field20_0x68 DWORD 0
    fullScreenTexture1 DWORD 0; void *
    fullScreenTexture2 DWORD 0; void *
VideoPlayer ENDS
UnkClassC STRUCT
    arr1 DWORD 0; int *
    arr1length DWORD 0
    arr2 DWORD 0; short *
    arr2length DWORD 0
    field4_0x10 DWORD 0; void *
UnkClassC ENDS
FileReaderHelper STRUCT
    flags DWORD 0
    section DWORD 0; UnkRMRelated *
    streamSize DWORD 0
    field3_0xc DWORD 0
    data DWORD 0; int *
    stream DWORD 0; MemoryStream *
    _length DWORD 0
    fname TwinString {}
    fileHandle1 DWORD 0
    field9_0x2c DWORD 0
    field10_0x30 DWORD 0
    overlapped DWORD 0
    field12_0x38 DWORD 0
    field13_0x3c DWORD 0
    field14_0x40 DWORD 0
    field15_0x44 DWORD 0
    str2 TwinString {}
    fileHandle2 DWORD 0
    unkClass DWORD 0
FileReaderHelper ENDS
VideoController STRUCT
    resourceManager DWORD 0; GameResourceManager *
    flags DWORD 0
    state DWORD 0
    prevState DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0; InstanceContext *
    field7_0x1c BYTE 0
    field8_0x1d BYTE 0
    field9_0x1e BYTE 0
    field10_0x1f BYTE 0
    unkMatrix Matrix4 {}
    field12_0x60 DWORD 0
    field13_0x64 DWORD 0
    hintStr TwinString {}
    errorStr TwinString {}
    field16_0x80 BYTE 0
    field17_0x81 BYTE 0
    field18_0x82 BYTE 0
    field19_0x83 BYTE 0
    field20_0x84 BYTE 0
    field21_0x85 BYTE 0
    field22_0x86 BYTE 0
    field23_0x87 BYTE 0
    field24_0x88 BYTE 0
    field25_0x89 BYTE 0
    field26_0x8a BYTE 0
    field27_0x8b BYTE 0
    field28_0x8c BYTE 0
    field29_0x8d BYTE 0
    field30_0x8e BYTE 0
    field31_0x8f BYTE 0
    field32_0x90 BYTE 0
    field33_0x91 BYTE 0
    field34_0x92 BYTE 0
    field35_0x93 BYTE 0
    field36_0x94 BYTE 0
    field37_0x95 BYTE 0
    field38_0x96 BYTE 0
    field39_0x97 BYTE 0
    field40_0x98 BYTE 0
    field41_0x99 BYTE 0
    field42_0x9a BYTE 0
    field43_0x9b BYTE 0
    field44_0x9c BYTE 0
    field45_0x9d BYTE 0
    field46_0x9e BYTE 0
    field47_0x9f BYTE 0
    field48_0xa0 BYTE 0
    field49_0xa1 BYTE 0
    field50_0xa2 BYTE 0
    field51_0xa3 BYTE 0
    field52_0xa4 BYTE 0
    field53_0xa5 BYTE 0
    field54_0xa6 BYTE 0
    field55_0xa7 BYTE 0
    field56_0xa8 BYTE 0
    field57_0xa9 BYTE 0
    field58_0xaa BYTE 0
    field59_0xab BYTE 0
    field60_0xac BYTE 0
    field61_0xad BYTE 0
    field62_0xae BYTE 0
    field63_0xaf BYTE 0
    field64_0xb0 BYTE 0
    field65_0xb1 BYTE 0
    field66_0xb2 BYTE 0
    field67_0xb3 BYTE 0
    field68_0xb4 BYTE 0
    field69_0xb5 BYTE 0
    field70_0xb6 BYTE 0
    field71_0xb7 BYTE 0
    field72_0xb8 BYTE 0
    field73_0xb9 BYTE 0
    field74_0xba BYTE 0
    field75_0xbb BYTE 0
    field76_0xbc BYTE 0
    field77_0xbd BYTE 0
    field78_0xbe BYTE 0
    field79_0xbf BYTE 0
    field80_0xc0 BYTE 0
    field81_0xc1 BYTE 0
    field82_0xc2 BYTE 0
    field83_0xc3 BYTE 0
    field84_0xc4 BYTE 0
    field85_0xc5 BYTE 0
    field86_0xc6 BYTE 0
    field87_0xc7 BYTE 0
    field88_0xc8 BYTE 0
    field89_0xc9 BYTE 0
    field90_0xca BYTE 0
    field91_0xcb BYTE 0
    field92_0xcc BYTE 0
    field93_0xcd BYTE 0
    field94_0xce BYTE 0
    field95_0xcf BYTE 0
    field96_0xd0 BYTE 0
    field97_0xd1 BYTE 0
    field98_0xd2 BYTE 0
    field99_0xd3 BYTE 0
    field100_0xd4 BYTE 0
    field101_0xd5 BYTE 0
    field102_0xd6 BYTE 0
    field103_0xd7 BYTE 0
    field104_0xd8 BYTE 0
    field105_0xd9 BYTE 0
    field106_0xda BYTE 0
    field107_0xdb BYTE 0
    field108_0xdc BYTE 0
    field109_0xdd BYTE 0
    field110_0xde BYTE 0
    field111_0xdf BYTE 0
    cnt WORD 0
    field113_0xe2 BYTE 0
    field114_0xe3 BYTE 0
    field115_0xe4 BYTE 0
    field116_0xe5 BYTE 0
    field117_0xe6 BYTE 0
    field118_0xe7 BYTE 0
    field119_0xe8 DWORD 0
    field120_0xec DWORD 0; pointer
    field121_0xf0 DWORD 0; pointer
    field122_0xf4 BYTE 0
    field123_0xf5 BYTE 0
    field124_0xf6 BYTE 0
    field125_0xf7 BYTE 0
    field126_0xf8 DWORD 0
    field127_0xfc BYTE 0
    field128_0xfd BYTE 0
    field129_0xfe BYTE 0
    field130_0xff BYTE 0
    matrixArray BYTE 2048 dup (0)
    someStructArray BYTE 1536 dup (0)
    dataArray3 BYTE 1536 dup (0)
    field134_0x1500 DWORD 0
    field135_0x1504 DWORD 0
    someCnt DWORD 0
    field137_0x150c REAL4 0.0;
    unkStruct DWORD 0; SoundControllerUnkClass *
    field139_0x1514 REAL4 0.0;
    field140_0x1518 REAL4 0.0;
    field141_0x151c REAL4 0.0;
    field142_0x1520 WORD 0
    field143_0x1522 WORD 0
    field144_0x1524 WORD 0
    field145_0x1526 BYTE 0
    field146_0x1527 BYTE 0
    field147_0x1528 REAL4 0.0;
    field148_0x152c BYTE 0
    field149_0x152d BYTE 0
    field150_0x152e BYTE 0
    field151_0x152f BYTE 0
    field152_0x1530 BYTE 0
    field153_0x1531 BYTE 0
    field154_0x1532 BYTE 0
    field155_0x1533 BYTE 0
    field156_0x1534 BYTE 0
    field157_0x1535 BYTE 0
    field158_0x1536 BYTE 0
    field159_0x1537 BYTE 0
    field160_0x1538 BYTE 0
    field161_0x1539 BYTE 0
    field162_0x153a BYTE 0
    field163_0x153b BYTE 0
    field164_0x153c BYTE 0
    field165_0x153d BYTE 0
    field166_0x153e BYTE 0
    field167_0x153f BYTE 0
    field168_0x1540 BYTE 0
    field169_0x1541 BYTE 0
    field170_0x1542 BYTE 0
    field171_0x1543 BYTE 0
    field172_0x1544 BYTE 0
    field173_0x1545 BYTE 0
    field174_0x1546 BYTE 0
    field175_0x1547 BYTE 0
    field176_0x1548 BYTE 0
    field177_0x1549 BYTE 0
    field178_0x154a BYTE 0
    field179_0x154b BYTE 0
    field180_0x154c BYTE 0
    field181_0x154d BYTE 0
    field182_0x154e BYTE 0
    field183_0x154f BYTE 0
    field184_0x1550 BYTE 0
    field185_0x1551 BYTE 0
    field186_0x1552 BYTE 0
    field187_0x1553 BYTE 0
    field188_0x1554 BYTE 0
    field189_0x1555 BYTE 0
    field190_0x1556 BYTE 0
    field191_0x1557 BYTE 0
    field192_0x1558 BYTE 0
    field193_0x1559 BYTE 0
    field194_0x155a BYTE 0
    field195_0x155b BYTE 0
    field196_0x155c BYTE 0
    field197_0x155d BYTE 0
    field198_0x155e BYTE 0
    field199_0x155f BYTE 0
    field200_0x1560 BYTE 0
    field201_0x1561 BYTE 0
    field202_0x1562 BYTE 0
    field203_0x1563 BYTE 0
    field204_0x1564 BYTE 0
    field205_0x1565 BYTE 0
    field206_0x1566 BYTE 0
    field207_0x1567 BYTE 0
    field208_0x1568 BYTE 0
    field209_0x1569 BYTE 0
    field210_0x156a BYTE 0
    field211_0x156b BYTE 0
    field212_0x156c BYTE 0
    field213_0x156d BYTE 0
    field214_0x156e BYTE 0
    field215_0x156f BYTE 0
    field216_0x1570 BYTE 0
    field217_0x1571 BYTE 0
    field218_0x1572 BYTE 0
    field219_0x1573 BYTE 0
    field220_0x1574 BYTE 0
    field221_0x1575 BYTE 0
    field222_0x1576 BYTE 0
    field223_0x1577 BYTE 0
    field224_0x1578 BYTE 0
    field225_0x1579 BYTE 0
    field226_0x157a BYTE 0
    field227_0x157b BYTE 0
    field228_0x157c BYTE 0
    field229_0x157d BYTE 0
    field230_0x157e BYTE 0
    field231_0x157f BYTE 0
    field232_0x1580 BYTE 0
    field233_0x1581 BYTE 0
    field234_0x1582 BYTE 0
    field235_0x1583 BYTE 0
    field236_0x1584 BYTE 0
    field237_0x1585 BYTE 0
    field238_0x1586 BYTE 0
    field239_0x1587 BYTE 0
    field240_0x1588 BYTE 0
    field241_0x1589 BYTE 0
    field242_0x158a BYTE 0
    field243_0x158b BYTE 0
    field244_0x158c BYTE 0
    field245_0x158d BYTE 0
    field246_0x158e BYTE 0
    field247_0x158f BYTE 0
    field248_0x1590 BYTE 0
    field249_0x1591 BYTE 0
    field250_0x1592 BYTE 0
    field251_0x1593 BYTE 0
    field252_0x1594 BYTE 0
    field253_0x1595 BYTE 0
    field254_0x1596 BYTE 0
    field255_0x1597 BYTE 0
    field256_0x1598 BYTE 0
    field257_0x1599 BYTE 0
    field258_0x159a BYTE 0
    field259_0x159b BYTE 0
    field260_0x159c BYTE 0
    field261_0x159d BYTE 0
    field262_0x159e BYTE 0
    field263_0x159f BYTE 0
    field264_0x15a0 BYTE 0
    field265_0x15a1 BYTE 0
    field266_0x15a2 BYTE 0
    field267_0x15a3 BYTE 0
    field268_0x15a4 BYTE 0
    field269_0x15a5 BYTE 0
    field270_0x15a6 BYTE 0
    field271_0x15a7 BYTE 0
    field272_0x15a8 BYTE 0
    field273_0x15a9 BYTE 0
    field274_0x15aa BYTE 0
    field275_0x15ab BYTE 0
    field276_0x15ac BYTE 0
    field277_0x15ad BYTE 0
    field278_0x15ae BYTE 0
    field279_0x15af BYTE 0
VideoController ENDS
ColorMatrix STRUCT
    unkFiled1 BYTE 0
    unkFiled2 BYTE 0
    unkFiled3 BYTE 0
    unkFiled4 BYTE 0
    matrix Matrix4 {}
    color1 Color {}
    color2 Color {}
    color3 Color {}
    color4 Color {}
    unkFiled5 DWORD 0
    unkFiled6 DWORD 0; uint *
ColorMatrix ENDS
FileResourceDescAbstract STRUCT
    vtable DWORD 0; FileResourceDescAbstract_VTable *
    reader DWORD 0; SectionReaderAbstract *
FileResourceDescAbstract ENDS
FileResourceDescE STRUCT
    parent FileResourceDescAbstract {}
    field1_0x8 DWORD 0
    element DWORD 0; void *
    fname TwinString {}
    field4_0x1c DWORD 0
    field5_0x20 DWORD 0
    field6_0x24 DWORD 0; FileReaderHelper *
FileResourceDescE ENDS
MemoryStream STRUCT
    vtable DWORD 0; MemoryStream_VTable *
    flags DWORD 0
    startPtr DWORD 0; byte *
    currentPtr DWORD 0; byte *
    _length DWORD 0
MemoryStream ENDS
SfxDataStream STRUCT
    header DWORD 0
    unkField1 DWORD 0
    unkField2 DWORD 0
    someData DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 WORD 0
    field7_0x1a WORD 0
    field8_0x1c WORD 0
    field9_0x1e BYTE 0
    field10_0x1f BYTE 0
    field11_0x20 DWORD 0
    soundStream DWORD 0; byte *
    soundStreamLength DWORD 0
    field14_0x2c DWORD 0
    field15_0x30 DWORD 0
    unkField3 DWORD 0
    unkField4 DWORD 0
    buffer DWORD 0; void *
    streamLength DWORD 0
SfxDataStream ENDS
Sfx STRUCT
    flags DWORD 0
    index DWORD 0
    flags2 DWORD 0
    soundPath TwinString {}
    someData SfxDataStream {}
    dataSize DWORD 0
    streamPosition DWORD 0
Sfx ENDS
AutoClass28 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 DWORD 0
    field5_0x8 DWORD 0
    field6_0xc DWORD 0
    field7_0x10 DWORD 0
    field8_0x14 DWORD 0
    field9_0x18 DWORD 0
    mat Matrix4 {}
    field11_0x5c DWORD 0
    field12_0x60 DWORD 0
    field13_0x64 DWORD 0
    field14_0x68 DWORD 0
    field15_0x6c DWORD 0
    field16_0x70 DWORD 0
    field17_0x74 DWORD 0
    field18_0x78 DWORD 0
    field19_0x7c DWORD 0
    field20_0x80 WORD 0
AutoClass28 ENDS
UnkFamily2Base STRUCT
    vtable DWORD 0; UnkFamily2_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    node DWORD 0; InstanceNodeAbstract *
UnkFamily2Base ENDS
UnkFamily3Abstract STRUCT
    vtable DWORD 0; UnkFamily3Abstract_VTable *
UnkFamily3Abstract ENDS
UnkFamily3A STRUCT
    parent UnkFamily3Abstract {}
    field1_0x4 DWORD 0; InstanceContext *
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 BYTE 0
    field27_0x21 BYTE 0
    field28_0x22 BYTE 0
    field29_0x23 BYTE 0
    field30_0x24 BYTE 0
    field31_0x25 BYTE 0
    field32_0x26 BYTE 0
    field33_0x27 BYTE 0
    field34_0x28 BYTE 0
    field35_0x29 BYTE 0
    field36_0x2a BYTE 0
    field37_0x2b BYTE 0
    field38_0x2c BYTE 0
    field39_0x2d BYTE 0
    field40_0x2e BYTE 0
    field41_0x2f BYTE 0
    field42_0x30 BYTE 0
    field43_0x31 BYTE 0
    field44_0x32 BYTE 0
    field45_0x33 BYTE 0
    field46_0x34 BYTE 0
    field47_0x35 BYTE 0
    field48_0x36 BYTE 0
    field49_0x37 BYTE 0
    field50_0x38 REAL4 0.0;
    field51_0x3c REAL4 0.0;
    field52_0x40 BYTE 0
    field53_0x41 BYTE 0
    field54_0x42 BYTE 0
    field55_0x43 BYTE 0
    field56_0x44 BYTE 0
    field57_0x45 BYTE 0
    field58_0x46 BYTE 0
    field59_0x47 BYTE 0
    field60_0x48 BYTE 0
    field61_0x49 BYTE 0
    field62_0x4a BYTE 0
    field63_0x4b BYTE 0
    field64_0x4c BYTE 0
    field65_0x4d BYTE 0
    field66_0x4e BYTE 0
    field67_0x4f BYTE 0
    field68_0x50 BYTE 0
    field69_0x51 BYTE 0
    field70_0x52 BYTE 0
    field71_0x53 BYTE 0
    field72_0x54 BYTE 0
    field73_0x55 BYTE 0
    field74_0x56 BYTE 0
    field75_0x57 BYTE 0
    field76_0x58 BYTE 0
    field77_0x59 BYTE 0
    field78_0x5a BYTE 0
    field79_0x5b BYTE 0
    field80_0x5c BYTE 0
    field81_0x5d BYTE 0
    field82_0x5e BYTE 0
    field83_0x5f BYTE 0
    field84_0x60 BYTE 0
    field85_0x61 BYTE 0
    field86_0x62 BYTE 0
    field87_0x63 BYTE 0
    field88_0x64 BYTE 0
    field89_0x65 BYTE 0
    field90_0x66 BYTE 0
    field91_0x67 BYTE 0
    field92_0x68 BYTE 0
    field93_0x69 BYTE 0
    field94_0x6a BYTE 0
    field95_0x6b BYTE 0
    field96_0x6c BYTE 0
    field97_0x6d BYTE 0
    field98_0x6e BYTE 0
    field99_0x6f BYTE 0
    field100_0x70 BYTE 0
    field101_0x71 BYTE 0
    field102_0x72 BYTE 0
    field103_0x73 BYTE 0
    field104_0x74 BYTE 0
    field105_0x75 BYTE 0
    field106_0x76 BYTE 0
    field107_0x77 BYTE 0
    field108_0x78 BYTE 0
    field109_0x79 BYTE 0
    field110_0x7a BYTE 0
    field111_0x7b BYTE 0
    field112_0x7c BYTE 0
    field113_0x7d BYTE 0
    field114_0x7e BYTE 0
    field115_0x7f BYTE 0
    field116_0x80 BYTE 0
    field117_0x81 BYTE 0
    field118_0x82 BYTE 0
    field119_0x83 BYTE 0
    field120_0x84 BYTE 0
    field121_0x85 BYTE 0
    field122_0x86 BYTE 0
    field123_0x87 BYTE 0
    field124_0x88 BYTE 0
    field125_0x89 BYTE 0
    field126_0x8a BYTE 0
    field127_0x8b BYTE 0
    field128_0x8c BYTE 0
    field129_0x8d BYTE 0
    field130_0x8e BYTE 0
    field131_0x8f BYTE 0
    field132_0x90 BYTE 0
    field133_0x91 BYTE 0
    field134_0x92 BYTE 0
    field135_0x93 BYTE 0
    field136_0x94 BYTE 0
    field137_0x95 BYTE 0
    field138_0x96 BYTE 0
    field139_0x97 BYTE 0
    field140_0x98 BYTE 0
    field141_0x99 BYTE 0
    field142_0x9a BYTE 0
    field143_0x9b BYTE 0
    field144_0x9c BYTE 0
    field145_0x9d BYTE 0
    field146_0x9e BYTE 0
    field147_0x9f BYTE 0
    field148_0xa0 BYTE 0
    field149_0xa1 BYTE 0
    field150_0xa2 BYTE 0
    field151_0xa3 BYTE 0
    field152_0xa4 BYTE 0
    field153_0xa5 BYTE 0
    field154_0xa6 BYTE 0
    field155_0xa7 BYTE 0
    field156_0xa8 BYTE 0
    field157_0xa9 BYTE 0
    field158_0xaa BYTE 0
    field159_0xab BYTE 0
    field160_0xac BYTE 0
    field161_0xad BYTE 0
    field162_0xae BYTE 0
    field163_0xaf BYTE 0
    field164_0xb0 BYTE 0
    field165_0xb1 BYTE 0
    field166_0xb2 BYTE 0
    field167_0xb3 BYTE 0
    field168_0xb4 BYTE 0
    field169_0xb5 BYTE 0
    field170_0xb6 BYTE 0
    field171_0xb7 BYTE 0
    field172_0xb8 BYTE 0
    field173_0xb9 BYTE 0
    field174_0xba BYTE 0
    field175_0xbb BYTE 0
    field176_0xbc BYTE 0
    field177_0xbd BYTE 0
    field178_0xbe BYTE 0
    field179_0xbf BYTE 0
    field180_0xc0 BYTE 0
    field181_0xc1 BYTE 0
    field182_0xc2 BYTE 0
    field183_0xc3 BYTE 0
    field184_0xc4 BYTE 0
    field185_0xc5 BYTE 0
    field186_0xc6 BYTE 0
    field187_0xc7 BYTE 0
    field188_0xc8 BYTE 0
    field189_0xc9 BYTE 0
    field190_0xca BYTE 0
    field191_0xcb BYTE 0
    field192_0xcc BYTE 0
    field193_0xcd BYTE 0
    field194_0xce BYTE 0
    field195_0xcf BYTE 0
    field196_0xd0 BYTE 0
    field197_0xd1 BYTE 0
    field198_0xd2 BYTE 0
    field199_0xd3 BYTE 0
    field200_0xd4 BYTE 0
    field201_0xd5 BYTE 0
    field202_0xd6 BYTE 0
    field203_0xd7 BYTE 0
    field204_0xd8 REAL4 0.0;
    field205_0xdc REAL4 0.0;
    field206_0xe0 BYTE 0
    field207_0xe1 BYTE 0
    field208_0xe2 BYTE 0
    field209_0xe3 BYTE 0
    field210_0xe4 BYTE 0
    field211_0xe5 BYTE 0
    field212_0xe6 BYTE 0
    field213_0xe7 BYTE 0
    field214_0xe8 BYTE 0
    field215_0xe9 BYTE 0
    field216_0xea BYTE 0
    field217_0xeb BYTE 0
    field218_0xec BYTE 0
    field219_0xed BYTE 0
    field220_0xee BYTE 0
    field221_0xef BYTE 0
    field222_0xf0 BYTE 0
    field223_0xf1 BYTE 0
    field224_0xf2 BYTE 0
    field225_0xf3 BYTE 0
    field226_0xf4 BYTE 0
    field227_0xf5 BYTE 0
    field228_0xf6 BYTE 0
    field229_0xf7 BYTE 0
    field230_0xf8 BYTE 0
    field231_0xf9 BYTE 0
    field232_0xfa BYTE 0
    field233_0xfb BYTE 0
    field234_0xfc BYTE 0
    field235_0xfd BYTE 0
    field236_0xfe BYTE 0
    field237_0xff BYTE 0
    field238_0x100 BYTE 0
    field239_0x101 BYTE 0
    field240_0x102 BYTE 0
    field241_0x103 BYTE 0
    field242_0x104 BYTE 0
    field243_0x105 BYTE 0
    field244_0x106 BYTE 0
    field245_0x107 BYTE 0
    field246_0x108 BYTE 0
    field247_0x109 BYTE 0
    field248_0x10a BYTE 0
    field249_0x10b BYTE 0
    field250_0x10c BYTE 0
    field251_0x10d BYTE 0
    field252_0x10e BYTE 0
    field253_0x10f BYTE 0
    field254_0x110 BYTE 0
    field255_0x111 BYTE 0
    field256_0x112 BYTE 0
    field257_0x113 BYTE 0
    field258_0x114 BYTE 0
    field259_0x115 BYTE 0
    field260_0x116 BYTE 0
    field261_0x117 BYTE 0
    field262_0x118 BYTE 0
    field263_0x119 BYTE 0
    field264_0x11a BYTE 0
    field265_0x11b BYTE 0
    field266_0x11c BYTE 0
    field267_0x11d BYTE 0
    field268_0x11e BYTE 0
    field269_0x11f BYTE 0
    field270_0x120 BYTE 0
    field271_0x121 BYTE 0
    field272_0x122 BYTE 0
    field273_0x123 BYTE 0
    field274_0x124 BYTE 0
    field275_0x125 BYTE 0
    field276_0x126 BYTE 0
    field277_0x127 BYTE 0
    field278_0x128 BYTE 0
    field279_0x129 BYTE 0
    field280_0x12a BYTE 0
    field281_0x12b BYTE 0
    field282_0x12c BYTE 0
    field283_0x12d BYTE 0
    field284_0x12e BYTE 0
    field285_0x12f BYTE 0
    field286_0x130 BYTE 0
    field287_0x131 BYTE 0
    field288_0x132 BYTE 0
    field289_0x133 BYTE 0
    field290_0x134 BYTE 0
    field291_0x135 BYTE 0
    field292_0x136 BYTE 0
    field293_0x137 BYTE 0
    field294_0x138 BYTE 0
    field295_0x139 BYTE 0
    field296_0x13a BYTE 0
    field297_0x13b BYTE 0
    field298_0x13c BYTE 0
    field299_0x13d BYTE 0
    field300_0x13e BYTE 0
    field301_0x13f BYTE 0
    field302_0x140 BYTE 0
    field303_0x141 BYTE 0
    field304_0x142 BYTE 0
    field305_0x143 BYTE 0
    field306_0x144 BYTE 0
    field307_0x145 BYTE 0
    field308_0x146 BYTE 0
    field309_0x147 BYTE 0
    field310_0x148 BYTE 0
    field311_0x149 BYTE 0
    field312_0x14a BYTE 0
    field313_0x14b BYTE 0
    field314_0x14c BYTE 0
    field315_0x14d BYTE 0
    field316_0x14e BYTE 0
    field317_0x14f BYTE 0
    field318_0x150 BYTE 0
    field319_0x151 BYTE 0
    field320_0x152 BYTE 0
    field321_0x153 BYTE 0
    field322_0x154 BYTE 0
    field323_0x155 BYTE 0
    field324_0x156 BYTE 0
    field325_0x157 BYTE 0
    field326_0x158 BYTE 0
    field327_0x159 BYTE 0
    field328_0x15a BYTE 0
    field329_0x15b BYTE 0
    field330_0x15c BYTE 0
    field331_0x15d BYTE 0
    field332_0x15e BYTE 0
    field333_0x15f BYTE 0
    field334_0x160 BYTE 0
    field335_0x161 BYTE 0
    field336_0x162 BYTE 0
    field337_0x163 BYTE 0
    field338_0x164 BYTE 0
    field339_0x165 BYTE 0
    field340_0x166 BYTE 0
    field341_0x167 BYTE 0
    field342_0x168 BYTE 0
    field343_0x169 BYTE 0
    field344_0x16a BYTE 0
    field345_0x16b BYTE 0
    field346_0x16c BYTE 0
    field347_0x16d BYTE 0
    field348_0x16e BYTE 0
    field349_0x16f BYTE 0
    field350_0x170 BYTE 0
    field351_0x171 BYTE 0
    field352_0x172 BYTE 0
    field353_0x173 BYTE 0
    field354_0x174 BYTE 0
    field355_0x175 BYTE 0
    field356_0x176 BYTE 0
    field357_0x177 BYTE 0
    field358_0x178 REAL4 0.0;
    field359_0x17c REAL4 0.0;
    field360_0x180 BYTE 0
UnkFamily3A ENDS
UnkFamily2A STRUCT
    parent UnkFamily2Base {}
    field1_0xc BYTE 0
    field2_0xd BYTE 0
    field3_0xe BYTE 0
    field4_0xf BYTE 0
    field5_0x10 UnkFamily3A {}
    field6_0x191 BYTE 0
    field7_0x192 BYTE 0
    field8_0x193 BYTE 0
    field9_0x194 BYTE 0
    field10_0x195 BYTE 0
    field11_0x196 BYTE 0
    field12_0x197 BYTE 0
    field13_0x198 BYTE 0
    field14_0x199 BYTE 0
    field15_0x19a BYTE 0
    field16_0x19b BYTE 0
    field17_0x19c BYTE 0
    field18_0x19d BYTE 0
    field19_0x19e BYTE 0
    field20_0x19f BYTE 0
    field21_0x1a0 BYTE 0
    field22_0x1a1 BYTE 0
    field23_0x1a2 BYTE 0
    field24_0x1a3 BYTE 0
    field25_0x1a4 BYTE 0
    field26_0x1a5 BYTE 0
    field27_0x1a6 BYTE 0
    field28_0x1a7 BYTE 0
    field29_0x1a8 BYTE 0
    field30_0x1a9 BYTE 0
    field31_0x1aa BYTE 0
    field32_0x1ab BYTE 0
    field33_0x1ac BYTE 0
    field34_0x1ad BYTE 0
    field35_0x1ae BYTE 0
    field36_0x1af BYTE 0
    field37_0x1b0 BYTE 0
    field38_0x1b1 BYTE 0
    field39_0x1b2 BYTE 0
    field40_0x1b3 BYTE 0
    field41_0x1b4 BYTE 0
    field42_0x1b5 BYTE 0
    field43_0x1b6 BYTE 0
    field44_0x1b7 BYTE 0
    field45_0x1b8 BYTE 0
    field46_0x1b9 BYTE 0
    field47_0x1ba BYTE 0
    field48_0x1bb BYTE 0
    field49_0x1bc BYTE 0
    field50_0x1bd BYTE 0
    field51_0x1be BYTE 0
    field52_0x1bf BYTE 0
    field53_0x1c0 BYTE 0
    field54_0x1c1 BYTE 0
    field55_0x1c2 BYTE 0
    field56_0x1c3 BYTE 0
    field57_0x1c4 BYTE 0
    field58_0x1c5 BYTE 0
    field59_0x1c6 BYTE 0
    field60_0x1c7 BYTE 0
    field61_0x1c8 BYTE 0
    field62_0x1c9 BYTE 0
    field63_0x1ca BYTE 0
    field64_0x1cb BYTE 0
    field65_0x1cc BYTE 0
    field66_0x1cd BYTE 0
    field67_0x1ce BYTE 0
    field68_0x1cf BYTE 0
    field69_0x1d0 BYTE 0
    field70_0x1d1 BYTE 0
    field71_0x1d2 BYTE 0
    field72_0x1d3 BYTE 0
    field73_0x1d4 BYTE 0
    field74_0x1d5 BYTE 0
    field75_0x1d6 BYTE 0
    field76_0x1d7 BYTE 0
    field77_0x1d8 BYTE 0
    field78_0x1d9 BYTE 0
    field79_0x1da BYTE 0
    field80_0x1db BYTE 0
    field81_0x1dc BYTE 0
    field82_0x1dd BYTE 0
    field83_0x1de BYTE 0
    field84_0x1df BYTE 0
    field85_0x1e0 BYTE 0
    field86_0x1e1 BYTE 0
    field87_0x1e2 BYTE 0
    field88_0x1e3 BYTE 0
    field89_0x1e4 BYTE 0
    field90_0x1e5 BYTE 0
    field91_0x1e6 BYTE 0
    field92_0x1e7 BYTE 0
    field93_0x1e8 BYTE 0
    field94_0x1e9 BYTE 0
    field95_0x1ea BYTE 0
    field96_0x1eb BYTE 0
    field97_0x1ec BYTE 0
    field98_0x1ed BYTE 0
    field99_0x1ee BYTE 0
    field100_0x1ef BYTE 0
    field101_0x1f0 BYTE 0
    field102_0x1f1 BYTE 0
    field103_0x1f2 BYTE 0
    field104_0x1f3 BYTE 0
    field105_0x1f4 BYTE 0
    field106_0x1f5 BYTE 0
    field107_0x1f6 BYTE 0
    field108_0x1f7 BYTE 0
    field109_0x1f8 BYTE 0
    field110_0x1f9 BYTE 0
    field111_0x1fa BYTE 0
    field112_0x1fb BYTE 0
    field113_0x1fc BYTE 0
    field114_0x1fd BYTE 0
    field115_0x1fe BYTE 0
    field116_0x1ff BYTE 0
    field117_0x200 BYTE 0
    field118_0x201 BYTE 0
    field119_0x202 BYTE 0
    field120_0x203 BYTE 0
    field121_0x204 BYTE 0
    field122_0x205 BYTE 0
    field123_0x206 BYTE 0
    field124_0x207 BYTE 0
    field125_0x208 BYTE 0
    field126_0x209 BYTE 0
    field127_0x20a BYTE 0
    field128_0x20b BYTE 0
    field129_0x20c BYTE 0
    field130_0x20d BYTE 0
    field131_0x20e BYTE 0
    field132_0x20f BYTE 0
    field133_0x210 BYTE 0
    field134_0x211 BYTE 0
    field135_0x212 BYTE 0
    field136_0x213 BYTE 0
    field137_0x214 BYTE 0
    field138_0x215 BYTE 0
    field139_0x216 BYTE 0
    field140_0x217 BYTE 0
    field141_0x218 BYTE 0
    field142_0x219 BYTE 0
    field143_0x21a BYTE 0
    field144_0x21b BYTE 0
    field145_0x21c BYTE 0
    field146_0x21d BYTE 0
    field147_0x21e BYTE 0
    field148_0x21f BYTE 0
UnkFamily2A ENDS
UnkFamily2B STRUCT
    parent UnkFamily2Base {}
    field1_0xc DWORD 0
    field2_0x10 DWORD 0
    field3_0x14 WORD 0
    field4_0x16 BYTE 0
    field5_0x17 BYTE 0
    field6_0x18 BYTE 0
    field7_0x19 BYTE 0
    field8_0x1a BYTE 0
    field9_0x1b BYTE 0
    field10_0x1c BYTE 0
    field11_0x1d BYTE 0
    field12_0x1e BYTE 0
    field13_0x1f BYTE 0
    field14_0x20 DWORD 0
    field15_0x24 BYTE 0
    field16_0x25 BYTE 0
    field17_0x26 BYTE 0
    field18_0x27 BYTE 0
    field19_0x28 BYTE 0
    field20_0x29 BYTE 0
    field21_0x2a BYTE 0
    field22_0x2b BYTE 0
    field23_0x2c BYTE 0
    field24_0x2d BYTE 0
    field25_0x2e BYTE 0
    field26_0x2f BYTE 0
    field27_0x30 BYTE 0
    field28_0x31 BYTE 0
    field29_0x32 BYTE 0
    field30_0x33 BYTE 0
    field31_0x34 BYTE 0
    field32_0x35 BYTE 0
    field33_0x36 BYTE 0
    field34_0x37 BYTE 0
    field35_0x38 BYTE 0
    field36_0x39 BYTE 0
    field37_0x3a BYTE 0
    field38_0x3b BYTE 0
    field39_0x3c BYTE 0
    field40_0x3d BYTE 0
    field41_0x3e BYTE 0
    field42_0x3f BYTE 0
    field43_0x40 BYTE 0
    field44_0x41 BYTE 0
    field45_0x42 BYTE 0
    field46_0x43 BYTE 0
    field47_0x44 BYTE 0
    field48_0x45 BYTE 0
    field49_0x46 BYTE 0
    field50_0x47 BYTE 0
    field51_0x48 BYTE 0
    field52_0x49 BYTE 0
    field53_0x4a BYTE 0
    field54_0x4b BYTE 0
    field55_0x4c BYTE 0
    field56_0x4d BYTE 0
    field57_0x4e BYTE 0
    field58_0x4f BYTE 0
    field59_0x50 BYTE 0
    field60_0x51 BYTE 0
    field61_0x52 BYTE 0
    field62_0x53 BYTE 0
    field63_0x54 BYTE 0
    field64_0x55 BYTE 0
    field65_0x56 BYTE 0
    field66_0x57 BYTE 0
    field67_0x58 BYTE 0
    field68_0x59 BYTE 0
    field69_0x5a BYTE 0
    field70_0x5b BYTE 0
    field71_0x5c BYTE 0
    field72_0x5d BYTE 0
    field73_0x5e BYTE 0
    field74_0x5f BYTE 0
    field75_0x60 BYTE 0
    field76_0x61 BYTE 0
    field77_0x62 BYTE 0
    field78_0x63 BYTE 0
    field79_0x64 BYTE 0
    field80_0x65 BYTE 0
    field81_0x66 BYTE 0
    field82_0x67 BYTE 0
    field83_0x68 BYTE 0
    field84_0x69 BYTE 0
    field85_0x6a BYTE 0
    field86_0x6b BYTE 0
    field87_0x6c BYTE 0
    field88_0x6d BYTE 0
    field89_0x6e BYTE 0
    field90_0x6f BYTE 0
    field91_0x70 BYTE 0
    field92_0x71 BYTE 0
    field93_0x72 BYTE 0
    field94_0x73 BYTE 0
    field95_0x74 BYTE 0
    field96_0x75 BYTE 0
    field97_0x76 BYTE 0
    field98_0x77 BYTE 0
    field99_0x78 BYTE 0
    field100_0x79 BYTE 0
    field101_0x7a BYTE 0
    field102_0x7b BYTE 0
    field103_0x7c BYTE 0
    field104_0x7d BYTE 0
    field105_0x7e BYTE 0
    field106_0x7f BYTE 0
    field107_0x80 BYTE 0
    field108_0x81 BYTE 0
    field109_0x82 BYTE 0
    field110_0x83 BYTE 0
    field111_0x84 BYTE 0
    field112_0x85 BYTE 0
    field113_0x86 BYTE 0
    field114_0x87 BYTE 0
    field115_0x88 BYTE 0
    field116_0x89 BYTE 0
    field117_0x8a BYTE 0
    field118_0x8b BYTE 0
    field119_0x8c BYTE 0
    field120_0x8d BYTE 0
    field121_0x8e BYTE 0
    field122_0x8f BYTE 0
    field123_0x90 DWORD 0
    field124_0x94 BYTE 0
    field125_0x95 BYTE 0
    field126_0x96 BYTE 0
    field127_0x97 BYTE 0
    field128_0x98 BYTE 0
    field129_0x99 BYTE 0
    field130_0x9a BYTE 0
    field131_0x9b BYTE 0
    field132_0x9c BYTE 0
    field133_0x9d BYTE 0
    field134_0x9e BYTE 0
    field135_0x9f BYTE 0
    field136_0xa0 BYTE 0
    field137_0xa1 BYTE 0
    field138_0xa2 BYTE 0
    field139_0xa3 BYTE 0
    field140_0xa4 BYTE 0
    field141_0xa5 BYTE 0
    field142_0xa6 BYTE 0
    field143_0xa7 BYTE 0
    field144_0xa8 BYTE 0
    field145_0xa9 BYTE 0
    field146_0xaa BYTE 0
    field147_0xab BYTE 0
    field148_0xac BYTE 0
    field149_0xad BYTE 0
    field150_0xae BYTE 0
    field151_0xaf BYTE 0
    field152_0xb0 BYTE 0
    field153_0xb1 BYTE 0
    field154_0xb2 BYTE 0
    field155_0xb3 BYTE 0
    field156_0xb4 BYTE 0
    field157_0xb5 BYTE 0
    field158_0xb6 BYTE 0
    field159_0xb7 BYTE 0
    field160_0xb8 BYTE 0
    field161_0xb9 BYTE 0
    field162_0xba BYTE 0
    field163_0xbb BYTE 0
    field164_0xbc BYTE 0
    field165_0xbd BYTE 0
    field166_0xbe BYTE 0
    field167_0xbf BYTE 0
    field168_0xc0 BYTE 0
    field169_0xc1 BYTE 0
    field170_0xc2 BYTE 0
    field171_0xc3 BYTE 0
    field172_0xc4 BYTE 0
    field173_0xc5 BYTE 0
    field174_0xc6 BYTE 0
    field175_0xc7 BYTE 0
    field176_0xc8 BYTE 0
    field177_0xc9 BYTE 0
    field178_0xca BYTE 0
    field179_0xcb BYTE 0
    field180_0xcc BYTE 0
    field181_0xcd BYTE 0
    field182_0xce BYTE 0
    field183_0xcf BYTE 0
    field184_0xd0 BYTE 0
    field185_0xd1 BYTE 0
    field186_0xd2 BYTE 0
    field187_0xd3 BYTE 0
    field188_0xd4 BYTE 0
    field189_0xd5 BYTE 0
    field190_0xd6 BYTE 0
    field191_0xd7 BYTE 0
    field192_0xd8 BYTE 0
    field193_0xd9 BYTE 0
    field194_0xda BYTE 0
    field195_0xdb BYTE 0
    field196_0xdc BYTE 0
    field197_0xdd BYTE 0
    field198_0xde BYTE 0
    field199_0xdf BYTE 0
    field200_0xe0 BYTE 0
    field201_0xe1 BYTE 0
    field202_0xe2 BYTE 0
    field203_0xe3 BYTE 0
    field204_0xe4 BYTE 0
    field205_0xe5 BYTE 0
    field206_0xe6 BYTE 0
    field207_0xe7 BYTE 0
    field208_0xe8 BYTE 0
    field209_0xe9 BYTE 0
    field210_0xea BYTE 0
    field211_0xeb BYTE 0
    field212_0xec BYTE 0
    field213_0xed BYTE 0
    field214_0xee BYTE 0
    field215_0xef BYTE 0
    field216_0xf0 BYTE 0
    field217_0xf1 BYTE 0
    field218_0xf2 BYTE 0
    field219_0xf3 BYTE 0
    field220_0xf4 BYTE 0
    field221_0xf5 BYTE 0
    field222_0xf6 BYTE 0
    field223_0xf7 BYTE 0
    field224_0xf8 BYTE 0
    field225_0xf9 BYTE 0
    field226_0xfa BYTE 0
    field227_0xfb BYTE 0
    field228_0xfc BYTE 0
    field229_0xfd BYTE 0
    field230_0xfe BYTE 0
    field231_0xff BYTE 0
    field232_0x100 DWORD 0
    field233_0x104 BYTE 0
    field234_0x105 BYTE 0
    field235_0x106 BYTE 0
    field236_0x107 BYTE 0
    field237_0x108 BYTE 0
    field238_0x109 BYTE 0
    field239_0x10a BYTE 0
    field240_0x10b BYTE 0
    field241_0x10c BYTE 0
    field242_0x10d BYTE 0
    field243_0x10e BYTE 0
    field244_0x10f BYTE 0
    field245_0x110 BYTE 0
    field246_0x111 BYTE 0
    field247_0x112 BYTE 0
    field248_0x113 BYTE 0
    field249_0x114 BYTE 0
    field250_0x115 BYTE 0
    field251_0x116 BYTE 0
    field252_0x117 BYTE 0
    field253_0x118 BYTE 0
    field254_0x119 BYTE 0
    field255_0x11a BYTE 0
    field256_0x11b BYTE 0
    field257_0x11c BYTE 0
    field258_0x11d BYTE 0
    field259_0x11e BYTE 0
    field260_0x11f BYTE 0
    field261_0x120 BYTE 0
    field262_0x121 BYTE 0
    field263_0x122 BYTE 0
    field264_0x123 BYTE 0
    field265_0x124 BYTE 0
    field266_0x125 BYTE 0
    field267_0x126 BYTE 0
    field268_0x127 BYTE 0
    field269_0x128 BYTE 0
    field270_0x129 BYTE 0
    field271_0x12a BYTE 0
    field272_0x12b BYTE 0
    field273_0x12c BYTE 0
    field274_0x12d BYTE 0
    field275_0x12e BYTE 0
    field276_0x12f BYTE 0
    field277_0x130 BYTE 0
    field278_0x131 BYTE 0
    field279_0x132 BYTE 0
    field280_0x133 BYTE 0
    field281_0x134 BYTE 0
    field282_0x135 BYTE 0
    field283_0x136 BYTE 0
    field284_0x137 BYTE 0
    field285_0x138 BYTE 0
    field286_0x139 BYTE 0
    field287_0x13a BYTE 0
    field288_0x13b BYTE 0
    field289_0x13c BYTE 0
    field290_0x13d BYTE 0
    field291_0x13e BYTE 0
    field292_0x13f BYTE 0
    field293_0x140 BYTE 0
    field294_0x141 BYTE 0
    field295_0x142 BYTE 0
    field296_0x143 BYTE 0
    field297_0x144 BYTE 0
    field298_0x145 BYTE 0
    field299_0x146 BYTE 0
    field300_0x147 BYTE 0
    field301_0x148 BYTE 0
    field302_0x149 BYTE 0
    field303_0x14a BYTE 0
    field304_0x14b BYTE 0
    field305_0x14c BYTE 0
    field306_0x14d BYTE 0
    field307_0x14e BYTE 0
    field308_0x14f BYTE 0
    field309_0x150 BYTE 0
    field310_0x151 BYTE 0
    field311_0x152 BYTE 0
    field312_0x153 BYTE 0
    field313_0x154 BYTE 0
    field314_0x155 BYTE 0
    field315_0x156 BYTE 0
    field316_0x157 BYTE 0
    field317_0x158 BYTE 0
    field318_0x159 BYTE 0
    field319_0x15a BYTE 0
    field320_0x15b BYTE 0
    field321_0x15c BYTE 0
    field322_0x15d BYTE 0
    field323_0x15e BYTE 0
    field324_0x15f BYTE 0
    field325_0x160 BYTE 0
    field326_0x161 BYTE 0
    field327_0x162 BYTE 0
    field328_0x163 BYTE 0
    field329_0x164 BYTE 0
    field330_0x165 BYTE 0
    field331_0x166 BYTE 0
    field332_0x167 BYTE 0
    field333_0x168 BYTE 0
    field334_0x169 BYTE 0
    field335_0x16a BYTE 0
    field336_0x16b BYTE 0
    field337_0x16c BYTE 0
    field338_0x16d BYTE 0
    field339_0x16e BYTE 0
    field340_0x16f BYTE 0
    field341_0x170 BYTE 0
    field342_0x171 BYTE 0
    field343_0x172 BYTE 0
    field344_0x173 BYTE 0
    field345_0x174 BYTE 0
    field346_0x175 BYTE 0
    field347_0x176 BYTE 0
    field348_0x177 BYTE 0
    field349_0x178 BYTE 0
    field350_0x179 BYTE 0
    field351_0x17a BYTE 0
    field352_0x17b BYTE 0
    field353_0x17c BYTE 0
    field354_0x17d BYTE 0
    field355_0x17e BYTE 0
    field356_0x17f BYTE 0
    field357_0x180 BYTE 0
    field358_0x181 BYTE 0
    field359_0x182 BYTE 0
    field360_0x183 BYTE 0
    field361_0x184 BYTE 0
    field362_0x185 BYTE 0
    field363_0x186 BYTE 0
    field364_0x187 BYTE 0
    field365_0x188 BYTE 0
    field366_0x189 BYTE 0
    field367_0x18a BYTE 0
    field368_0x18b BYTE 0
    field369_0x18c BYTE 0
    field370_0x18d BYTE 0
    field371_0x18e BYTE 0
    field372_0x18f BYTE 0
    field373_0x190 BYTE 0
    field374_0x191 BYTE 0
    field375_0x192 BYTE 0
    field376_0x193 BYTE 0
    field377_0x194 BYTE 0
    field378_0x195 BYTE 0
    field379_0x196 BYTE 0
    field380_0x197 BYTE 0
    field381_0x198 BYTE 0
    field382_0x199 BYTE 0
    field383_0x19a BYTE 0
    field384_0x19b BYTE 0
    field385_0x19c BYTE 0
    field386_0x19d BYTE 0
    field387_0x19e BYTE 0
    field388_0x19f BYTE 0
    field389_0x1a0 BYTE 0
    field390_0x1a1 BYTE 0
    field391_0x1a2 BYTE 0
    field392_0x1a3 BYTE 0
    field393_0x1a4 BYTE 0
    field394_0x1a5 BYTE 0
    field395_0x1a6 BYTE 0
    field396_0x1a7 BYTE 0
    field397_0x1a8 BYTE 0
    field398_0x1a9 BYTE 0
    field399_0x1aa BYTE 0
    field400_0x1ab BYTE 0
    field401_0x1ac BYTE 0
    field402_0x1ad BYTE 0
    field403_0x1ae BYTE 0
    field404_0x1af BYTE 0
    field405_0x1b0 BYTE 0
    field406_0x1b1 BYTE 0
    field407_0x1b2 BYTE 0
    field408_0x1b3 BYTE 0
    field409_0x1b4 BYTE 0
    field410_0x1b5 BYTE 0
    field411_0x1b6 BYTE 0
    field412_0x1b7 BYTE 0
    field413_0x1b8 BYTE 0
    field414_0x1b9 BYTE 0
    field415_0x1ba BYTE 0
    field416_0x1bb BYTE 0
    field417_0x1bc BYTE 0
    field418_0x1bd BYTE 0
    field419_0x1be BYTE 0
    field420_0x1bf BYTE 0
    field421_0x1c0 BYTE 0
    field422_0x1c1 BYTE 0
    field423_0x1c2 BYTE 0
    field424_0x1c3 BYTE 0
    field425_0x1c4 BYTE 0
    field426_0x1c5 BYTE 0
    field427_0x1c6 BYTE 0
    field428_0x1c7 BYTE 0
    field429_0x1c8 BYTE 0
    field430_0x1c9 BYTE 0
    field431_0x1ca BYTE 0
    field432_0x1cb BYTE 0
    field433_0x1cc BYTE 0
    field434_0x1cd BYTE 0
    field435_0x1ce BYTE 0
    field436_0x1cf BYTE 0
    field437_0x1d0 BYTE 0
    field438_0x1d1 BYTE 0
    field439_0x1d2 BYTE 0
    field440_0x1d3 BYTE 0
    field441_0x1d4 BYTE 0
    field442_0x1d5 BYTE 0
    field443_0x1d6 BYTE 0
    field444_0x1d7 BYTE 0
    field445_0x1d8 BYTE 0
    field446_0x1d9 BYTE 0
    field447_0x1da BYTE 0
    field448_0x1db BYTE 0
    field449_0x1dc BYTE 0
    field450_0x1dd BYTE 0
    field451_0x1de BYTE 0
    field452_0x1df BYTE 0
    field453_0x1e0 BYTE 0
    field454_0x1e1 BYTE 0
    field455_0x1e2 BYTE 0
    field456_0x1e3 BYTE 0
    field457_0x1e4 BYTE 0
    field458_0x1e5 BYTE 0
    field459_0x1e6 BYTE 0
    field460_0x1e7 BYTE 0
    field461_0x1e8 BYTE 0
    field462_0x1e9 BYTE 0
    field463_0x1ea BYTE 0
    field464_0x1eb BYTE 0
    field465_0x1ec BYTE 0
    field466_0x1ed BYTE 0
    field467_0x1ee BYTE 0
    field468_0x1ef BYTE 0
    field469_0x1f0 BYTE 0
    field470_0x1f1 BYTE 0
    field471_0x1f2 BYTE 0
    field472_0x1f3 BYTE 0
    field473_0x1f4 BYTE 0
    field474_0x1f5 BYTE 0
    field475_0x1f6 BYTE 0
    field476_0x1f7 BYTE 0
    field477_0x1f8 BYTE 0
    field478_0x1f9 BYTE 0
    field479_0x1fa BYTE 0
    field480_0x1fb BYTE 0
    field481_0x1fc BYTE 0
    field482_0x1fd BYTE 0
    field483_0x1fe BYTE 0
    field484_0x1ff BYTE 0
    field485_0x200 BYTE 0
    field486_0x201 BYTE 0
    field487_0x202 BYTE 0
    field488_0x203 BYTE 0
    field489_0x204 BYTE 0
    field490_0x205 BYTE 0
    field491_0x206 BYTE 0
    field492_0x207 BYTE 0
    field493_0x208 BYTE 0
    field494_0x209 BYTE 0
    field495_0x20a BYTE 0
    field496_0x20b BYTE 0
    field497_0x20c BYTE 0
    field498_0x20d BYTE 0
    field499_0x20e BYTE 0
    field500_0x20f BYTE 0
    field501_0x210 BYTE 0
    field502_0x211 BYTE 0
    field503_0x212 BYTE 0
    field504_0x213 BYTE 0
    field505_0x214 BYTE 0
    field506_0x215 BYTE 0
    field507_0x216 BYTE 0
    field508_0x217 BYTE 0
    field509_0x218 BYTE 0
    field510_0x219 BYTE 0
    field511_0x21a BYTE 0
    field512_0x21b BYTE 0
    field513_0x21c BYTE 0
    field514_0x21d BYTE 0
    field515_0x21e BYTE 0
    field516_0x21f BYTE 0
    field517_0x220 BYTE 0
    field518_0x221 BYTE 0
    field519_0x222 BYTE 0
    field520_0x223 BYTE 0
    field521_0x224 BYTE 0
    field522_0x225 BYTE 0
    field523_0x226 BYTE 0
    field524_0x227 BYTE 0
    field525_0x228 BYTE 0
    field526_0x229 BYTE 0
    field527_0x22a BYTE 0
    field528_0x22b BYTE 0
    field529_0x22c BYTE 0
    field530_0x22d BYTE 0
    field531_0x22e BYTE 0
    field532_0x22f BYTE 0
    field533_0x230 BYTE 0
    field534_0x231 BYTE 0
    field535_0x232 BYTE 0
    field536_0x233 BYTE 0
    field537_0x234 BYTE 0
    field538_0x235 BYTE 0
    field539_0x236 BYTE 0
    field540_0x237 BYTE 0
    field541_0x238 BYTE 0
    field542_0x239 BYTE 0
    field543_0x23a BYTE 0
    field544_0x23b BYTE 0
    field545_0x23c BYTE 0
    field546_0x23d BYTE 0
    field547_0x23e BYTE 0
    field548_0x23f BYTE 0
    field549_0x240 BYTE 0
    field550_0x241 BYTE 0
    field551_0x242 BYTE 0
    field552_0x243 BYTE 0
    field553_0x244 BYTE 0
    field554_0x245 BYTE 0
    field555_0x246 BYTE 0
    field556_0x247 BYTE 0
    field557_0x248 BYTE 0
    field558_0x249 BYTE 0
    field559_0x24a BYTE 0
    field560_0x24b BYTE 0
    field561_0x24c BYTE 0
    field562_0x24d BYTE 0
    field563_0x24e BYTE 0
    field564_0x24f BYTE 0
    field565_0x250 BYTE 0
    field566_0x251 BYTE 0
    field567_0x252 BYTE 0
    field568_0x253 BYTE 0
    field569_0x254 BYTE 0
    field570_0x255 BYTE 0
    field571_0x256 BYTE 0
    field572_0x257 BYTE 0
    field573_0x258 BYTE 0
    field574_0x259 BYTE 0
    field575_0x25a BYTE 0
    field576_0x25b BYTE 0
    field577_0x25c BYTE 0
    field578_0x25d BYTE 0
    field579_0x25e BYTE 0
    field580_0x25f BYTE 0
    field581_0x260 BYTE 0
    field582_0x261 BYTE 0
    field583_0x262 BYTE 0
    field584_0x263 BYTE 0
    field585_0x264 BYTE 0
    field586_0x265 BYTE 0
    field587_0x266 BYTE 0
    field588_0x267 BYTE 0
    field589_0x268 BYTE 0
    field590_0x269 BYTE 0
    field591_0x26a BYTE 0
    field592_0x26b BYTE 0
    field593_0x26c BYTE 0
    field594_0x26d BYTE 0
    field595_0x26e BYTE 0
    field596_0x26f BYTE 0
    field597_0x270 BYTE 0
    field598_0x271 BYTE 0
    field599_0x272 BYTE 0
    field600_0x273 BYTE 0
    field601_0x274 BYTE 0
    field602_0x275 BYTE 0
    field603_0x276 BYTE 0
    field604_0x277 BYTE 0
    field605_0x278 BYTE 0
    field606_0x279 BYTE 0
    field607_0x27a BYTE 0
    field608_0x27b BYTE 0
    field609_0x27c BYTE 0
    field610_0x27d BYTE 0
    field611_0x27e BYTE 0
    field612_0x27f BYTE 0
    field613_0x280 BYTE 0
    field614_0x281 BYTE 0
    field615_0x282 BYTE 0
    field616_0x283 BYTE 0
    field617_0x284 BYTE 0
    field618_0x285 BYTE 0
    field619_0x286 BYTE 0
    field620_0x287 BYTE 0
    field621_0x288 BYTE 0
    field622_0x289 BYTE 0
    field623_0x28a BYTE 0
    field624_0x28b BYTE 0
    field625_0x28c BYTE 0
    field626_0x28d BYTE 0
    field627_0x28e BYTE 0
    field628_0x28f BYTE 0
    field629_0x290 BYTE 0
    field630_0x291 BYTE 0
    field631_0x292 BYTE 0
    field632_0x293 BYTE 0
    field633_0x294 BYTE 0
    field634_0x295 BYTE 0
    field635_0x296 BYTE 0
    field636_0x297 BYTE 0
    field637_0x298 BYTE 0
    field638_0x299 BYTE 0
    field639_0x29a BYTE 0
    field640_0x29b BYTE 0
    field641_0x29c BYTE 0
    field642_0x29d BYTE 0
    field643_0x29e BYTE 0
    field644_0x29f BYTE 0
    field645_0x2a0 BYTE 0
    field646_0x2a1 BYTE 0
    field647_0x2a2 BYTE 0
    field648_0x2a3 BYTE 0
    field649_0x2a4 BYTE 0
    field650_0x2a5 BYTE 0
    field651_0x2a6 BYTE 0
    field652_0x2a7 BYTE 0
    field653_0x2a8 BYTE 0
    field654_0x2a9 BYTE 0
    field655_0x2aa BYTE 0
    field656_0x2ab BYTE 0
    field657_0x2ac BYTE 0
    field658_0x2ad BYTE 0
    field659_0x2ae BYTE 0
    field660_0x2af BYTE 0
    field661_0x2b0 BYTE 0
    field662_0x2b1 BYTE 0
    field663_0x2b2 BYTE 0
    field664_0x2b3 BYTE 0
    field665_0x2b4 BYTE 0
    field666_0x2b5 BYTE 0
    field667_0x2b6 BYTE 0
    field668_0x2b7 BYTE 0
    field669_0x2b8 BYTE 0
    field670_0x2b9 BYTE 0
    field671_0x2ba BYTE 0
    field672_0x2bb BYTE 0
    field673_0x2bc BYTE 0
    field674_0x2bd BYTE 0
    field675_0x2be BYTE 0
    field676_0x2bf BYTE 0
    field677_0x2c0 BYTE 0
    field678_0x2c1 BYTE 0
    field679_0x2c2 BYTE 0
    field680_0x2c3 BYTE 0
    field681_0x2c4 BYTE 0
    field682_0x2c5 BYTE 0
    field683_0x2c6 BYTE 0
    field684_0x2c7 BYTE 0
    field685_0x2c8 BYTE 0
    field686_0x2c9 BYTE 0
    field687_0x2ca BYTE 0
    field688_0x2cb BYTE 0
    field689_0x2cc BYTE 0
    field690_0x2cd BYTE 0
    field691_0x2ce BYTE 0
    field692_0x2cf BYTE 0
    field693_0x2d0 BYTE 0
    field694_0x2d1 BYTE 0
    field695_0x2d2 BYTE 0
    field696_0x2d3 BYTE 0
    field697_0x2d4 BYTE 0
    field698_0x2d5 BYTE 0
    field699_0x2d6 BYTE 0
    field700_0x2d7 BYTE 0
    field701_0x2d8 BYTE 0
    field702_0x2d9 BYTE 0
    field703_0x2da BYTE 0
    field704_0x2db BYTE 0
    field705_0x2dc BYTE 0
    field706_0x2dd BYTE 0
    field707_0x2de BYTE 0
    field708_0x2df BYTE 0
    field709_0x2e0 BYTE 0
    field710_0x2e1 BYTE 0
    field711_0x2e2 BYTE 0
    field712_0x2e3 BYTE 0
    field713_0x2e4 BYTE 0
    field714_0x2e5 BYTE 0
    field715_0x2e6 BYTE 0
    field716_0x2e7 BYTE 0
    field717_0x2e8 BYTE 0
    field718_0x2e9 BYTE 0
    field719_0x2ea BYTE 0
    field720_0x2eb BYTE 0
    field721_0x2ec BYTE 0
    field722_0x2ed BYTE 0
    field723_0x2ee BYTE 0
    field724_0x2ef BYTE 0
    field725_0x2f0 BYTE 0
    field726_0x2f1 BYTE 0
    field727_0x2f2 BYTE 0
    field728_0x2f3 BYTE 0
    field729_0x2f4 BYTE 0
    field730_0x2f5 BYTE 0
    field731_0x2f6 BYTE 0
    field732_0x2f7 BYTE 0
    field733_0x2f8 BYTE 0
    field734_0x2f9 BYTE 0
    field735_0x2fa BYTE 0
    field736_0x2fb BYTE 0
    field737_0x2fc BYTE 0
    field738_0x2fd BYTE 0
    field739_0x2fe BYTE 0
    field740_0x2ff BYTE 0
    field741_0x300 BYTE 0
    field742_0x301 BYTE 0
    field743_0x302 BYTE 0
    field744_0x303 BYTE 0
    field745_0x304 BYTE 0
    field746_0x305 BYTE 0
    field747_0x306 BYTE 0
    field748_0x307 BYTE 0
    field749_0x308 BYTE 0
    field750_0x309 BYTE 0
    field751_0x30a BYTE 0
    field752_0x30b BYTE 0
    field753_0x30c BYTE 0
    field754_0x30d BYTE 0
    field755_0x30e BYTE 0
    field756_0x30f BYTE 0
    field757_0x310 BYTE 0
    field758_0x311 BYTE 0
    field759_0x312 BYTE 0
    field760_0x313 BYTE 0
    field761_0x314 BYTE 0
    field762_0x315 BYTE 0
    field763_0x316 BYTE 0
    field764_0x317 BYTE 0
    field765_0x318 BYTE 0
    field766_0x319 BYTE 0
    field767_0x31a BYTE 0
    field768_0x31b BYTE 0
    field769_0x31c BYTE 0
    field770_0x31d BYTE 0
    field771_0x31e BYTE 0
    field772_0x31f BYTE 0
    field773_0x320 BYTE 0
    field774_0x321 BYTE 0
    field775_0x322 BYTE 0
    field776_0x323 BYTE 0
    field777_0x324 BYTE 0
    field778_0x325 BYTE 0
    field779_0x326 BYTE 0
    field780_0x327 BYTE 0
    field781_0x328 BYTE 0
    field782_0x329 BYTE 0
    field783_0x32a BYTE 0
    field784_0x32b BYTE 0
    field785_0x32c BYTE 0
    field786_0x32d BYTE 0
    field787_0x32e BYTE 0
    field788_0x32f BYTE 0
    field789_0x330 BYTE 0
    field790_0x331 BYTE 0
    field791_0x332 BYTE 0
    field792_0x333 BYTE 0
    field793_0x334 BYTE 0
    field794_0x335 BYTE 0
    field795_0x336 BYTE 0
    field796_0x337 BYTE 0
    field797_0x338 BYTE 0
    field798_0x339 BYTE 0
    field799_0x33a BYTE 0
    field800_0x33b BYTE 0
    field801_0x33c BYTE 0
    field802_0x33d BYTE 0
    field803_0x33e BYTE 0
    field804_0x33f BYTE 0
    field805_0x340 BYTE 0
    field806_0x341 BYTE 0
    field807_0x342 BYTE 0
    field808_0x343 BYTE 0
    field809_0x344 BYTE 0
    field810_0x345 BYTE 0
    field811_0x346 BYTE 0
    field812_0x347 BYTE 0
    field813_0x348 BYTE 0
    field814_0x349 BYTE 0
    field815_0x34a BYTE 0
    field816_0x34b BYTE 0
    field817_0x34c BYTE 0
    field818_0x34d BYTE 0
    field819_0x34e BYTE 0
    field820_0x34f BYTE 0
    field821_0x350 BYTE 0
    field822_0x351 BYTE 0
    field823_0x352 BYTE 0
    field824_0x353 BYTE 0
    field825_0x354 BYTE 0
    field826_0x355 BYTE 0
    field827_0x356 BYTE 0
    field828_0x357 BYTE 0
    field829_0x358 BYTE 0
    field830_0x359 BYTE 0
    field831_0x35a BYTE 0
    field832_0x35b BYTE 0
    field833_0x35c BYTE 0
    field834_0x35d BYTE 0
    field835_0x35e BYTE 0
    field836_0x35f BYTE 0
    field837_0x360 BYTE 0
    field838_0x361 BYTE 0
    field839_0x362 BYTE 0
    field840_0x363 BYTE 0
    field841_0x364 BYTE 0
    field842_0x365 BYTE 0
    field843_0x366 BYTE 0
    field844_0x367 BYTE 0
    field845_0x368 BYTE 0
    field846_0x369 BYTE 0
    field847_0x36a BYTE 0
    field848_0x36b BYTE 0
    field849_0x36c BYTE 0
    field850_0x36d BYTE 0
    field851_0x36e BYTE 0
    field852_0x36f BYTE 0
    field853_0x370 BYTE 0
    field854_0x371 BYTE 0
    field855_0x372 BYTE 0
    field856_0x373 BYTE 0
    field857_0x374 BYTE 0
    field858_0x375 BYTE 0
    field859_0x376 BYTE 0
    field860_0x377 BYTE 0
    field861_0x378 BYTE 0
    field862_0x379 BYTE 0
    field863_0x37a BYTE 0
    field864_0x37b BYTE 0
    field865_0x37c BYTE 0
    field866_0x37d BYTE 0
    field867_0x37e BYTE 0
    field868_0x37f BYTE 0
    field869_0x380 BYTE 0
    field870_0x381 BYTE 0
    field871_0x382 BYTE 0
    field872_0x383 BYTE 0
    field873_0x384 BYTE 0
    field874_0x385 BYTE 0
    field875_0x386 BYTE 0
    field876_0x387 BYTE 0
    field877_0x388 BYTE 0
    field878_0x389 BYTE 0
    field879_0x38a BYTE 0
    field880_0x38b BYTE 0
    field881_0x38c BYTE 0
    field882_0x38d BYTE 0
    field883_0x38e BYTE 0
    field884_0x38f BYTE 0
    field885_0x390 BYTE 0
    field886_0x391 BYTE 0
    field887_0x392 BYTE 0
    field888_0x393 BYTE 0
    field889_0x394 BYTE 0
    field890_0x395 BYTE 0
    field891_0x396 BYTE 0
    field892_0x397 BYTE 0
    field893_0x398 BYTE 0
    field894_0x399 BYTE 0
    field895_0x39a BYTE 0
    field896_0x39b BYTE 0
    field897_0x39c BYTE 0
    field898_0x39d BYTE 0
    field899_0x39e BYTE 0
    field900_0x39f BYTE 0
    field901_0x3a0 BYTE 0
    field902_0x3a1 BYTE 0
    field903_0x3a2 BYTE 0
    field904_0x3a3 BYTE 0
    field905_0x3a4 BYTE 0
    field906_0x3a5 BYTE 0
    field907_0x3a6 BYTE 0
    field908_0x3a7 BYTE 0
    field909_0x3a8 BYTE 0
    field910_0x3a9 BYTE 0
    field911_0x3aa BYTE 0
    field912_0x3ab BYTE 0
    field913_0x3ac BYTE 0
    field914_0x3ad BYTE 0
    field915_0x3ae BYTE 0
    field916_0x3af BYTE 0
    field917_0x3b0 BYTE 0
    field918_0x3b1 BYTE 0
    field919_0x3b2 BYTE 0
    field920_0x3b3 BYTE 0
    field921_0x3b4 BYTE 0
    field922_0x3b5 BYTE 0
    field923_0x3b6 BYTE 0
    field924_0x3b7 BYTE 0
    field925_0x3b8 BYTE 0
    field926_0x3b9 BYTE 0
    field927_0x3ba BYTE 0
    field928_0x3bb BYTE 0
    field929_0x3bc BYTE 0
    field930_0x3bd BYTE 0
    field931_0x3be BYTE 0
    field932_0x3bf BYTE 0
    field933_0x3c0 BYTE 0
    field934_0x3c1 BYTE 0
    field935_0x3c2 BYTE 0
    field936_0x3c3 BYTE 0
    field937_0x3c4 BYTE 0
    field938_0x3c5 BYTE 0
    field939_0x3c6 BYTE 0
    field940_0x3c7 BYTE 0
    field941_0x3c8 BYTE 0
    field942_0x3c9 BYTE 0
    field943_0x3ca BYTE 0
    field944_0x3cb BYTE 0
    field945_0x3cc BYTE 0
    field946_0x3cd BYTE 0
    field947_0x3ce BYTE 0
    field948_0x3cf BYTE 0
    field949_0x3d0 BYTE 0
    field950_0x3d1 BYTE 0
    field951_0x3d2 BYTE 0
    field952_0x3d3 BYTE 0
    field953_0x3d4 BYTE 0
    field954_0x3d5 BYTE 0
    field955_0x3d6 BYTE 0
    field956_0x3d7 BYTE 0
    field957_0x3d8 BYTE 0
    field958_0x3d9 BYTE 0
    field959_0x3da BYTE 0
    field960_0x3db BYTE 0
    field961_0x3dc BYTE 0
    field962_0x3dd BYTE 0
    field963_0x3de BYTE 0
    field964_0x3df BYTE 0
    field965_0x3e0 BYTE 0
    field966_0x3e1 BYTE 0
    field967_0x3e2 BYTE 0
    field968_0x3e3 BYTE 0
    field969_0x3e4 BYTE 0
    field970_0x3e5 BYTE 0
    field971_0x3e6 BYTE 0
    field972_0x3e7 BYTE 0
    field973_0x3e8 BYTE 0
    field974_0x3e9 BYTE 0
    field975_0x3ea BYTE 0
    field976_0x3eb BYTE 0
    field977_0x3ec BYTE 0
    field978_0x3ed BYTE 0
    field979_0x3ee BYTE 0
    field980_0x3ef BYTE 0
    field981_0x3f0 BYTE 0
    field982_0x3f1 BYTE 0
    field983_0x3f2 BYTE 0
    field984_0x3f3 BYTE 0
    field985_0x3f4 BYTE 0
    field986_0x3f5 BYTE 0
    field987_0x3f6 BYTE 0
    field988_0x3f7 BYTE 0
    field989_0x3f8 BYTE 0
    field990_0x3f9 BYTE 0
    field991_0x3fa BYTE 0
    field992_0x3fb BYTE 0
    field993_0x3fc BYTE 0
    field994_0x3fd BYTE 0
    field995_0x3fe BYTE 0
    field996_0x3ff BYTE 0
    field997_0x400 BYTE 0
    field998_0x401 BYTE 0
    field999_0x402 BYTE 0
    field1000_0x403 BYTE 0
    field1001_0x404 BYTE 0
    field1002_0x405 BYTE 0
    field1003_0x406 BYTE 0
    field1004_0x407 BYTE 0
    field1005_0x408 BYTE 0
    field1006_0x409 BYTE 0
    field1007_0x40a BYTE 0
    field1008_0x40b BYTE 0
    field1009_0x40c BYTE 0
    field1010_0x40d BYTE 0
    field1011_0x40e BYTE 0
    field1012_0x40f BYTE 0
    field1013_0x410 BYTE 0
    field1014_0x411 BYTE 0
    field1015_0x412 BYTE 0
    field1016_0x413 BYTE 0
    field1017_0x414 BYTE 0
    field1018_0x415 BYTE 0
    field1019_0x416 BYTE 0
    field1020_0x417 BYTE 0
    field1021_0x418 BYTE 0
    field1022_0x419 BYTE 0
    field1023_0x41a BYTE 0
    field1024_0x41b BYTE 0
    field1025_0x41c BYTE 0
    field1026_0x41d BYTE 0
    field1027_0x41e BYTE 0
    field1028_0x41f BYTE 0
    field1029_0x420 BYTE 0
    field1030_0x421 BYTE 0
    field1031_0x422 BYTE 0
    field1032_0x423 BYTE 0
    field1033_0x424 BYTE 0
    field1034_0x425 BYTE 0
    field1035_0x426 BYTE 0
    field1036_0x427 BYTE 0
    field1037_0x428 BYTE 0
    field1038_0x429 BYTE 0
    field1039_0x42a BYTE 0
    field1040_0x42b BYTE 0
    field1041_0x42c BYTE 0
    field1042_0x42d BYTE 0
    field1043_0x42e BYTE 0
    field1044_0x42f BYTE 0
    field1045_0x430 BYTE 0
    field1046_0x431 BYTE 0
    field1047_0x432 BYTE 0
    field1048_0x433 BYTE 0
    field1049_0x434 BYTE 0
    field1050_0x435 BYTE 0
    field1051_0x436 BYTE 0
    field1052_0x437 BYTE 0
    field1053_0x438 BYTE 0
    field1054_0x439 BYTE 0
    field1055_0x43a BYTE 0
    field1056_0x43b BYTE 0
    field1057_0x43c BYTE 0
    field1058_0x43d BYTE 0
    field1059_0x43e BYTE 0
    field1060_0x43f BYTE 0
    field1061_0x440 BYTE 0
    field1062_0x441 BYTE 0
    field1063_0x442 BYTE 0
    field1064_0x443 BYTE 0
    field1065_0x444 BYTE 0
    field1066_0x445 BYTE 0
    field1067_0x446 BYTE 0
    field1068_0x447 BYTE 0
    field1069_0x448 BYTE 0
    field1070_0x449 BYTE 0
    field1071_0x44a BYTE 0
    field1072_0x44b BYTE 0
    field1073_0x44c BYTE 0
    field1074_0x44d BYTE 0
    field1075_0x44e BYTE 0
    field1076_0x44f BYTE 0
    field1077_0x450 BYTE 0
    field1078_0x451 BYTE 0
    field1079_0x452 BYTE 0
    field1080_0x453 BYTE 0
    field1081_0x454 BYTE 0
    field1082_0x455 BYTE 0
    field1083_0x456 BYTE 0
    field1084_0x457 BYTE 0
    field1085_0x458 BYTE 0
    field1086_0x459 BYTE 0
    field1087_0x45a BYTE 0
    field1088_0x45b BYTE 0
    field1089_0x45c BYTE 0
    field1090_0x45d BYTE 0
    field1091_0x45e BYTE 0
    field1092_0x45f BYTE 0
    field1093_0x460 BYTE 0
    field1094_0x461 BYTE 0
    field1095_0x462 BYTE 0
    field1096_0x463 BYTE 0
    field1097_0x464 BYTE 0
    field1098_0x465 BYTE 0
    field1099_0x466 BYTE 0
    field1100_0x467 BYTE 0
    field1101_0x468 BYTE 0
    field1102_0x469 BYTE 0
    field1103_0x46a BYTE 0
    field1104_0x46b BYTE 0
    field1105_0x46c BYTE 0
    field1106_0x46d BYTE 0
    field1107_0x46e BYTE 0
    field1108_0x46f BYTE 0
    field1109_0x470 BYTE 0
    field1110_0x471 BYTE 0
    field1111_0x472 BYTE 0
    field1112_0x473 BYTE 0
    field1113_0x474 BYTE 0
    field1114_0x475 BYTE 0
    field1115_0x476 BYTE 0
    field1116_0x477 BYTE 0
    field1117_0x478 BYTE 0
    field1118_0x479 BYTE 0
    field1119_0x47a BYTE 0
    field1120_0x47b BYTE 0
    field1121_0x47c BYTE 0
    field1122_0x47d BYTE 0
    field1123_0x47e BYTE 0
    field1124_0x47f BYTE 0
    field1125_0x480 BYTE 0
    field1126_0x481 BYTE 0
    field1127_0x482 BYTE 0
    field1128_0x483 BYTE 0
    field1129_0x484 BYTE 0
    field1130_0x485 BYTE 0
    field1131_0x486 BYTE 0
    field1132_0x487 BYTE 0
    field1133_0x488 BYTE 0
    field1134_0x489 BYTE 0
    field1135_0x48a BYTE 0
    field1136_0x48b BYTE 0
    field1137_0x48c BYTE 0
    field1138_0x48d BYTE 0
    field1139_0x48e BYTE 0
    field1140_0x48f BYTE 0
    field1141_0x490 BYTE 0
    field1142_0x491 BYTE 0
    field1143_0x492 BYTE 0
    field1144_0x493 BYTE 0
    field1145_0x494 BYTE 0
    field1146_0x495 BYTE 0
    field1147_0x496 BYTE 0
    field1148_0x497 BYTE 0
    field1149_0x498 BYTE 0
    field1150_0x499 BYTE 0
    field1151_0x49a BYTE 0
    field1152_0x49b BYTE 0
    field1153_0x49c BYTE 0
    field1154_0x49d BYTE 0
    field1155_0x49e BYTE 0
    field1156_0x49f BYTE 0
    field1157_0x4a0 BYTE 0
    field1158_0x4a1 BYTE 0
    field1159_0x4a2 BYTE 0
    field1160_0x4a3 BYTE 0
    field1161_0x4a4 BYTE 0
    field1162_0x4a5 BYTE 0
    field1163_0x4a6 BYTE 0
    field1164_0x4a7 BYTE 0
    field1165_0x4a8 BYTE 0
    field1166_0x4a9 BYTE 0
    field1167_0x4aa BYTE 0
    field1168_0x4ab BYTE 0
    field1169_0x4ac BYTE 0
    field1170_0x4ad BYTE 0
    field1171_0x4ae BYTE 0
    field1172_0x4af BYTE 0
    field1173_0x4b0 BYTE 0
    field1174_0x4b1 BYTE 0
    field1175_0x4b2 BYTE 0
    field1176_0x4b3 BYTE 0
    field1177_0x4b4 BYTE 0
    field1178_0x4b5 BYTE 0
    field1179_0x4b6 BYTE 0
    field1180_0x4b7 BYTE 0
    field1181_0x4b8 BYTE 0
    field1182_0x4b9 BYTE 0
    field1183_0x4ba BYTE 0
    field1184_0x4bb BYTE 0
    field1185_0x4bc BYTE 0
    field1186_0x4bd BYTE 0
    field1187_0x4be BYTE 0
    field1188_0x4bf BYTE 0
    field1189_0x4c0 BYTE 0
    field1190_0x4c1 BYTE 0
    field1191_0x4c2 BYTE 0
    field1192_0x4c3 BYTE 0
    field1193_0x4c4 BYTE 0
    field1194_0x4c5 BYTE 0
    field1195_0x4c6 BYTE 0
    field1196_0x4c7 BYTE 0
    field1197_0x4c8 BYTE 0
    field1198_0x4c9 BYTE 0
    field1199_0x4ca BYTE 0
    field1200_0x4cb BYTE 0
    field1201_0x4cc BYTE 0
    field1202_0x4cd BYTE 0
    field1203_0x4ce BYTE 0
    field1204_0x4cf BYTE 0
    field1205_0x4d0 BYTE 0
    field1206_0x4d1 BYTE 0
    field1207_0x4d2 BYTE 0
    field1208_0x4d3 BYTE 0
    field1209_0x4d4 BYTE 0
    field1210_0x4d5 BYTE 0
    field1211_0x4d6 BYTE 0
    field1212_0x4d7 BYTE 0
    field1213_0x4d8 BYTE 0
    field1214_0x4d9 BYTE 0
    field1215_0x4da BYTE 0
    field1216_0x4db BYTE 0
    field1217_0x4dc BYTE 0
    field1218_0x4dd BYTE 0
    field1219_0x4de BYTE 0
    field1220_0x4df BYTE 0
    field1221_0x4e0 BYTE 0
    field1222_0x4e1 BYTE 0
    field1223_0x4e2 BYTE 0
    field1224_0x4e3 BYTE 0
    field1225_0x4e4 BYTE 0
    field1226_0x4e5 BYTE 0
    field1227_0x4e6 BYTE 0
    field1228_0x4e7 BYTE 0
    field1229_0x4e8 BYTE 0
    field1230_0x4e9 BYTE 0
    field1231_0x4ea BYTE 0
    field1232_0x4eb BYTE 0
    field1233_0x4ec BYTE 0
    field1234_0x4ed BYTE 0
    field1235_0x4ee BYTE 0
    field1236_0x4ef BYTE 0
    field1237_0x4f0 BYTE 0
    field1238_0x4f1 BYTE 0
    field1239_0x4f2 BYTE 0
    field1240_0x4f3 BYTE 0
    field1241_0x4f4 BYTE 0
    field1242_0x4f5 BYTE 0
    field1243_0x4f6 BYTE 0
    field1244_0x4f7 BYTE 0
    field1245_0x4f8 BYTE 0
    field1246_0x4f9 BYTE 0
    field1247_0x4fa BYTE 0
    field1248_0x4fb BYTE 0
    field1249_0x4fc BYTE 0
    field1250_0x4fd BYTE 0
    field1251_0x4fe BYTE 0
    field1252_0x4ff BYTE 0
    field1253_0x500 BYTE 0
    field1254_0x501 BYTE 0
    field1255_0x502 BYTE 0
    field1256_0x503 BYTE 0
    field1257_0x504 BYTE 0
    field1258_0x505 BYTE 0
    field1259_0x506 BYTE 0
    field1260_0x507 BYTE 0
    field1261_0x508 BYTE 0
    field1262_0x509 BYTE 0
    field1263_0x50a BYTE 0
    field1264_0x50b BYTE 0
    field1265_0x50c BYTE 0
    field1266_0x50d BYTE 0
    field1267_0x50e BYTE 0
    field1268_0x50f BYTE 0
    field1269_0x510 BYTE 0
    field1270_0x511 BYTE 0
    field1271_0x512 BYTE 0
    field1272_0x513 BYTE 0
    field1273_0x514 BYTE 0
    field1274_0x515 BYTE 0
    field1275_0x516 BYTE 0
    field1276_0x517 BYTE 0
    field1277_0x518 BYTE 0
    field1278_0x519 BYTE 0
    field1279_0x51a BYTE 0
    field1280_0x51b BYTE 0
    field1281_0x51c BYTE 0
    field1282_0x51d BYTE 0
    field1283_0x51e BYTE 0
    field1284_0x51f BYTE 0
    field1285_0x520 BYTE 0
    field1286_0x521 BYTE 0
    field1287_0x522 BYTE 0
    field1288_0x523 BYTE 0
    field1289_0x524 BYTE 0
    field1290_0x525 BYTE 0
    field1291_0x526 BYTE 0
    field1292_0x527 BYTE 0
    field1293_0x528 BYTE 0
    field1294_0x529 BYTE 0
    field1295_0x52a BYTE 0
    field1296_0x52b BYTE 0
    field1297_0x52c BYTE 0
    field1298_0x52d BYTE 0
    field1299_0x52e BYTE 0
    field1300_0x52f BYTE 0
    field1301_0x530 BYTE 0
    field1302_0x531 BYTE 0
    field1303_0x532 BYTE 0
    field1304_0x533 BYTE 0
    field1305_0x534 BYTE 0
    field1306_0x535 BYTE 0
    field1307_0x536 BYTE 0
    field1308_0x537 BYTE 0
    field1309_0x538 BYTE 0
    field1310_0x539 BYTE 0
    field1311_0x53a BYTE 0
    field1312_0x53b BYTE 0
    field1313_0x53c BYTE 0
    field1314_0x53d BYTE 0
    field1315_0x53e BYTE 0
    field1316_0x53f BYTE 0
    field1317_0x540 BYTE 0
    field1318_0x541 BYTE 0
    field1319_0x542 BYTE 0
    field1320_0x543 BYTE 0
    field1321_0x544 BYTE 0
    field1322_0x545 BYTE 0
    field1323_0x546 BYTE 0
    field1324_0x547 BYTE 0
    field1325_0x548 BYTE 0
    field1326_0x549 BYTE 0
    field1327_0x54a BYTE 0
    field1328_0x54b BYTE 0
    field1329_0x54c BYTE 0
    field1330_0x54d BYTE 0
    field1331_0x54e BYTE 0
    field1332_0x54f BYTE 0
    field1333_0x550 BYTE 0
    field1334_0x551 BYTE 0
    field1335_0x552 BYTE 0
    field1336_0x553 BYTE 0
    field1337_0x554 BYTE 0
    field1338_0x555 BYTE 0
    field1339_0x556 BYTE 0
    field1340_0x557 BYTE 0
    field1341_0x558 BYTE 0
    field1342_0x559 BYTE 0
    field1343_0x55a BYTE 0
    field1344_0x55b BYTE 0
    field1345_0x55c BYTE 0
    field1346_0x55d BYTE 0
    field1347_0x55e BYTE 0
    field1348_0x55f BYTE 0
    field1349_0x560 BYTE 0
    field1350_0x561 BYTE 0
    field1351_0x562 BYTE 0
    field1352_0x563 BYTE 0
    field1353_0x564 BYTE 0
    field1354_0x565 BYTE 0
    field1355_0x566 BYTE 0
    field1356_0x567 BYTE 0
    field1357_0x568 BYTE 0
    field1358_0x569 BYTE 0
    field1359_0x56a BYTE 0
    field1360_0x56b BYTE 0
    field1361_0x56c BYTE 0
    field1362_0x56d BYTE 0
    field1363_0x56e BYTE 0
    field1364_0x56f BYTE 0
    field1365_0x570 BYTE 0
    field1366_0x571 BYTE 0
    field1367_0x572 BYTE 0
    field1368_0x573 BYTE 0
    field1369_0x574 BYTE 0
    field1370_0x575 BYTE 0
    field1371_0x576 BYTE 0
    field1372_0x577 BYTE 0
    field1373_0x578 BYTE 0
    field1374_0x579 BYTE 0
    field1375_0x57a BYTE 0
    field1376_0x57b BYTE 0
    field1377_0x57c BYTE 0
    field1378_0x57d BYTE 0
    field1379_0x57e BYTE 0
    field1380_0x57f BYTE 0
    field1381_0x580 BYTE 0
    field1382_0x581 BYTE 0
    field1383_0x582 BYTE 0
    field1384_0x583 BYTE 0
    field1385_0x584 BYTE 0
    field1386_0x585 BYTE 0
    field1387_0x586 BYTE 0
    field1388_0x587 BYTE 0
    field1389_0x588 BYTE 0
    field1390_0x589 BYTE 0
    field1391_0x58a BYTE 0
    field1392_0x58b BYTE 0
    field1393_0x58c BYTE 0
    field1394_0x58d BYTE 0
    field1395_0x58e BYTE 0
    field1396_0x58f BYTE 0
    field1397_0x590 BYTE 0
    field1398_0x591 BYTE 0
    field1399_0x592 BYTE 0
    field1400_0x593 BYTE 0
    field1401_0x594 BYTE 0
    field1402_0x595 BYTE 0
    field1403_0x596 BYTE 0
    field1404_0x597 BYTE 0
    field1405_0x598 BYTE 0
    field1406_0x599 BYTE 0
    field1407_0x59a BYTE 0
    field1408_0x59b BYTE 0
    field1409_0x59c BYTE 0
    field1410_0x59d BYTE 0
    field1411_0x59e BYTE 0
    field1412_0x59f BYTE 0
    field1413_0x5a0 BYTE 0
    field1414_0x5a1 BYTE 0
    field1415_0x5a2 BYTE 0
    field1416_0x5a3 BYTE 0
    field1417_0x5a4 BYTE 0
    field1418_0x5a5 BYTE 0
    field1419_0x5a6 BYTE 0
    field1420_0x5a7 BYTE 0
    field1421_0x5a8 BYTE 0
    field1422_0x5a9 BYTE 0
    field1423_0x5aa BYTE 0
    field1424_0x5ab BYTE 0
    field1425_0x5ac BYTE 0
    field1426_0x5ad BYTE 0
    field1427_0x5ae BYTE 0
    field1428_0x5af BYTE 0
    field1429_0x5b0 BYTE 0
    field1430_0x5b1 BYTE 0
    field1431_0x5b2 BYTE 0
    field1432_0x5b3 BYTE 0
    field1433_0x5b4 BYTE 0
    field1434_0x5b5 BYTE 0
    field1435_0x5b6 BYTE 0
    field1436_0x5b7 BYTE 0
    field1437_0x5b8 BYTE 0
    field1438_0x5b9 BYTE 0
    field1439_0x5ba BYTE 0
    field1440_0x5bb BYTE 0
    field1441_0x5bc BYTE 0
    field1442_0x5bd BYTE 0
    field1443_0x5be BYTE 0
    field1444_0x5bf BYTE 0
    field1445_0x5c0 BYTE 0
    field1446_0x5c1 BYTE 0
    field1447_0x5c2 BYTE 0
    field1448_0x5c3 BYTE 0
    field1449_0x5c4 BYTE 0
    field1450_0x5c5 BYTE 0
    field1451_0x5c6 BYTE 0
    field1452_0x5c7 BYTE 0
    field1453_0x5c8 BYTE 0
    field1454_0x5c9 BYTE 0
    field1455_0x5ca BYTE 0
    field1456_0x5cb BYTE 0
    field1457_0x5cc BYTE 0
    field1458_0x5cd BYTE 0
    field1459_0x5ce BYTE 0
    field1460_0x5cf BYTE 0
    field1461_0x5d0 BYTE 0
    field1462_0x5d1 BYTE 0
    field1463_0x5d2 BYTE 0
    field1464_0x5d3 BYTE 0
    field1465_0x5d4 BYTE 0
    field1466_0x5d5 BYTE 0
    field1467_0x5d6 BYTE 0
    field1468_0x5d7 BYTE 0
    field1469_0x5d8 BYTE 0
    field1470_0x5d9 BYTE 0
    field1471_0x5da BYTE 0
    field1472_0x5db BYTE 0
    field1473_0x5dc BYTE 0
    field1474_0x5dd BYTE 0
    field1475_0x5de BYTE 0
    field1476_0x5df BYTE 0
    field1477_0x5e0 BYTE 0
    field1478_0x5e1 BYTE 0
    field1479_0x5e2 BYTE 0
    field1480_0x5e3 BYTE 0
    field1481_0x5e4 BYTE 0
    field1482_0x5e5 BYTE 0
    field1483_0x5e6 BYTE 0
    field1484_0x5e7 BYTE 0
    field1485_0x5e8 BYTE 0
    field1486_0x5e9 BYTE 0
    field1487_0x5ea BYTE 0
    field1488_0x5eb BYTE 0
    field1489_0x5ec BYTE 0
    field1490_0x5ed BYTE 0
    field1491_0x5ee BYTE 0
    field1492_0x5ef BYTE 0
    field1493_0x5f0 BYTE 0
    field1494_0x5f1 BYTE 0
    field1495_0x5f2 BYTE 0
    field1496_0x5f3 BYTE 0
    field1497_0x5f4 BYTE 0
    field1498_0x5f5 BYTE 0
    field1499_0x5f6 BYTE 0
    field1500_0x5f7 BYTE 0
    field1501_0x5f8 BYTE 0
    field1502_0x5f9 BYTE 0
    field1503_0x5fa BYTE 0
    field1504_0x5fb BYTE 0
    field1505_0x5fc BYTE 0
    field1506_0x5fd BYTE 0
    field1507_0x5fe BYTE 0
    field1508_0x5ff BYTE 0
    field1509_0x600 BYTE 0
    field1510_0x601 BYTE 0
    field1511_0x602 BYTE 0
    field1512_0x603 BYTE 0
    field1513_0x604 BYTE 0
    field1514_0x605 BYTE 0
    field1515_0x606 BYTE 0
    field1516_0x607 BYTE 0
    field1517_0x608 BYTE 0
    field1518_0x609 BYTE 0
    field1519_0x60a BYTE 0
    field1520_0x60b BYTE 0
    field1521_0x60c BYTE 0
    field1522_0x60d BYTE 0
    field1523_0x60e BYTE 0
    field1524_0x60f BYTE 0
    field1525_0x610 BYTE 0
    field1526_0x611 BYTE 0
    field1527_0x612 BYTE 0
    field1528_0x613 BYTE 0
    field1529_0x614 BYTE 0
    field1530_0x615 BYTE 0
    field1531_0x616 BYTE 0
    field1532_0x617 BYTE 0
    field1533_0x618 BYTE 0
    field1534_0x619 BYTE 0
    field1535_0x61a BYTE 0
    field1536_0x61b BYTE 0
    field1537_0x61c BYTE 0
    field1538_0x61d BYTE 0
    field1539_0x61e BYTE 0
    field1540_0x61f BYTE 0
    field1541_0x620 BYTE 0
    field1542_0x621 BYTE 0
    field1543_0x622 BYTE 0
    field1544_0x623 BYTE 0
    field1545_0x624 BYTE 0
    field1546_0x625 BYTE 0
    field1547_0x626 BYTE 0
    field1548_0x627 BYTE 0
    field1549_0x628 BYTE 0
    field1550_0x629 BYTE 0
    field1551_0x62a BYTE 0
    field1552_0x62b BYTE 0
    field1553_0x62c BYTE 0
    field1554_0x62d BYTE 0
    field1555_0x62e BYTE 0
    field1556_0x62f BYTE 0
    field1557_0x630 BYTE 0
    field1558_0x631 BYTE 0
    field1559_0x632 BYTE 0
    field1560_0x633 BYTE 0
    field1561_0x634 BYTE 0
    field1562_0x635 BYTE 0
    field1563_0x636 BYTE 0
    field1564_0x637 BYTE 0
    field1565_0x638 BYTE 0
    field1566_0x639 BYTE 0
    field1567_0x63a BYTE 0
    field1568_0x63b BYTE 0
    field1569_0x63c BYTE 0
    field1570_0x63d BYTE 0
    field1571_0x63e BYTE 0
    field1572_0x63f BYTE 0
    field1573_0x640 DWORD 0
    field1574_0x644 DWORD 0
    field1575_0x648 DWORD 0
    field1576_0x64c DWORD 0
    field1577_0x650 BYTE 0
    field1578_0x651 BYTE 0
    field1579_0x652 BYTE 0
    field1580_0x653 BYTE 0
    field1581_0x654 BYTE 0
    field1582_0x655 BYTE 0
    field1583_0x656 BYTE 0
    field1584_0x657 BYTE 0
    field1585_0x658 BYTE 0
    field1586_0x659 BYTE 0
    field1587_0x65a BYTE 0
    field1588_0x65b BYTE 0
    field1589_0x65c BYTE 0
    field1590_0x65d BYTE 0
    field1591_0x65e BYTE 0
    field1592_0x65f BYTE 0
    field1593_0x660 BYTE 0
    field1594_0x661 BYTE 0
    field1595_0x662 BYTE 0
    field1596_0x663 BYTE 0
    field1597_0x664 BYTE 0
    field1598_0x665 BYTE 0
    field1599_0x666 BYTE 0
    field1600_0x667 BYTE 0
    field1601_0x668 BYTE 0
    field1602_0x669 BYTE 0
    field1603_0x66a BYTE 0
    field1604_0x66b BYTE 0
    field1605_0x66c BYTE 0
    field1606_0x66d BYTE 0
    field1607_0x66e BYTE 0
    field1608_0x66f BYTE 0
    field1609_0x670 BYTE 0
    field1610_0x671 BYTE 0
    field1611_0x672 BYTE 0
    field1612_0x673 BYTE 0
    field1613_0x674 BYTE 0
    field1614_0x675 BYTE 0
    field1615_0x676 BYTE 0
    field1616_0x677 BYTE 0
    field1617_0x678 BYTE 0
    field1618_0x679 BYTE 0
    field1619_0x67a BYTE 0
    field1620_0x67b BYTE 0
    field1621_0x67c BYTE 0
    field1622_0x67d BYTE 0
    field1623_0x67e BYTE 0
    field1624_0x67f BYTE 0
    field1625_0x680 Vector4 {}
    field1626_0x690 REAL4 0.0;
    field1627_0x694 REAL4 0.0;
    field1628_0x698 REAL4 0.0;
    field1629_0x69c BYTE 0
    field1630_0x69d BYTE 0
    field1631_0x69e BYTE 0
    field1632_0x69f BYTE 0
    field1633_0x6a0 Vector4 {}
    field1634_0x6b0 Vector4 {}
    field1635_0x6c0 Vector4 {}
    field1636_0x6d0 Vector4 {}
UnkFamily2B ENDS
UnkFamily2C STRUCT
    parent UnkFamily2Base {}
    field1_0xc BYTE 0
    field2_0xd BYTE 0
    field3_0xe BYTE 0
    field4_0xf BYTE 0
    field5_0x10 DWORD 0
    field6_0x14 DWORD 0
    field7_0x18 DWORD 0
    field8_0x1c REAL4 0.0;
    field9_0x20 REAL4 0.0;
    field10_0x24 REAL4 0.0;
    field11_0x28 BYTE 0
    field12_0x29 BYTE 0
    field13_0x2a BYTE 0
    field14_0x2b BYTE 0
    field15_0x2c DWORD 0
UnkFamily2C ENDS
UnkFamily2D STRUCT
    parent UnkFamily2Base {}
    field1_0xc DWORD 0
    field2_0x10 WORD 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    field17_0x20 DWORD 0
    field18_0x24 DWORD 0
    field19_0x28 DWORD 0
    field20_0x2c DWORD 0
    field21_0x30 DWORD 0
    field22_0x34 DWORD 0
    field23_0x38 WORD 0
    field24_0x3a BYTE 0
    field25_0x3b BYTE 0
    field26_0x3c BYTE 0
    field27_0x3d BYTE 0
    field28_0x3e BYTE 0
    field29_0x3f BYTE 0
    field30_0x40 DWORD 0
    field31_0x44 BYTE 0
    field32_0x45 BYTE 0
    field33_0x46 BYTE 0
    field34_0x47 BYTE 0
    field35_0x48 BYTE 0
    field36_0x49 BYTE 0
    field37_0x4a BYTE 0
    field38_0x4b BYTE 0
    field39_0x4c BYTE 0
    field40_0x4d BYTE 0
    field41_0x4e BYTE 0
    field42_0x4f BYTE 0
    field43_0x50 BYTE 0
    field44_0x51 BYTE 0
    field45_0x52 BYTE 0
    field46_0x53 BYTE 0
    field47_0x54 BYTE 0
    field48_0x55 BYTE 0
    field49_0x56 BYTE 0
    field50_0x57 BYTE 0
    field51_0x58 BYTE 0
    field52_0x59 BYTE 0
    field53_0x5a BYTE 0
    field54_0x5b BYTE 0
    field55_0x5c BYTE 0
    field56_0x5d BYTE 0
    field57_0x5e BYTE 0
    field58_0x5f BYTE 0
    field59_0x60 BYTE 0
    field60_0x61 BYTE 0
    field61_0x62 BYTE 0
    field62_0x63 BYTE 0
    field63_0x64 BYTE 0
    field64_0x65 BYTE 0
    field65_0x66 BYTE 0
    field66_0x67 BYTE 0
    field67_0x68 BYTE 0
    field68_0x69 BYTE 0
    field69_0x6a BYTE 0
    field70_0x6b BYTE 0
    field71_0x6c BYTE 0
    field72_0x6d BYTE 0
    field73_0x6e BYTE 0
    field74_0x6f BYTE 0
    field75_0x70 BYTE 0
    field76_0x71 BYTE 0
    field77_0x72 BYTE 0
    field78_0x73 BYTE 0
    field79_0x74 BYTE 0
    field80_0x75 BYTE 0
    field81_0x76 BYTE 0
    field82_0x77 BYTE 0
    field83_0x78 BYTE 0
    field84_0x79 BYTE 0
    field85_0x7a BYTE 0
    field86_0x7b BYTE 0
    field87_0x7c BYTE 0
    field88_0x7d BYTE 0
    field89_0x7e BYTE 0
    field90_0x7f BYTE 0
    field91_0x80 BYTE 0
    field92_0x81 BYTE 0
    field93_0x82 BYTE 0
    field94_0x83 BYTE 0
    field95_0x84 BYTE 0
    field96_0x85 BYTE 0
    field97_0x86 BYTE 0
    field98_0x87 BYTE 0
    field99_0x88 BYTE 0
    field100_0x89 BYTE 0
    field101_0x8a BYTE 0
    field102_0x8b BYTE 0
    field103_0x8c BYTE 0
    field104_0x8d BYTE 0
    field105_0x8e BYTE 0
    field106_0x8f BYTE 0
    field107_0x90 BYTE 0
    field108_0x91 BYTE 0
    field109_0x92 BYTE 0
    field110_0x93 BYTE 0
    field111_0x94 BYTE 0
    field112_0x95 BYTE 0
    field113_0x96 BYTE 0
    field114_0x97 BYTE 0
    field115_0x98 BYTE 0
    field116_0x99 BYTE 0
    field117_0x9a BYTE 0
    field118_0x9b BYTE 0
    field119_0x9c BYTE 0
    field120_0x9d BYTE 0
    field121_0x9e BYTE 0
    field122_0x9f BYTE 0
    field123_0xa0 BYTE 0
    field124_0xa1 BYTE 0
    field125_0xa2 BYTE 0
    field126_0xa3 BYTE 0
    field127_0xa4 BYTE 0
    field128_0xa5 BYTE 0
    field129_0xa6 BYTE 0
    field130_0xa7 BYTE 0
    field131_0xa8 BYTE 0
    field132_0xa9 BYTE 0
    field133_0xaa BYTE 0
    field134_0xab BYTE 0
    field135_0xac BYTE 0
    field136_0xad BYTE 0
    field137_0xae BYTE 0
    field138_0xaf BYTE 0
    field139_0xb0 BYTE 0
    field140_0xb1 BYTE 0
    field141_0xb2 BYTE 0
    field142_0xb3 BYTE 0
    field143_0xb4 BYTE 0
    field144_0xb5 BYTE 0
    field145_0xb6 BYTE 0
    field146_0xb7 BYTE 0
    field147_0xb8 BYTE 0
    field148_0xb9 BYTE 0
    field149_0xba BYTE 0
    field150_0xbb BYTE 0
    field151_0xbc BYTE 0
    field152_0xbd BYTE 0
    field153_0xbe BYTE 0
    field154_0xbf BYTE 0
    field155_0xc0 BYTE 0
    field156_0xc1 BYTE 0
    field157_0xc2 BYTE 0
    field158_0xc3 BYTE 0
    field159_0xc4 BYTE 0
    field160_0xc5 BYTE 0
    field161_0xc6 BYTE 0
    field162_0xc7 BYTE 0
    field163_0xc8 BYTE 0
    field164_0xc9 BYTE 0
    field165_0xca BYTE 0
    field166_0xcb BYTE 0
    field167_0xcc BYTE 0
    field168_0xcd BYTE 0
    field169_0xce BYTE 0
    field170_0xcf BYTE 0
    field171_0xd0 BYTE 0
    field172_0xd1 BYTE 0
    field173_0xd2 BYTE 0
    field174_0xd3 BYTE 0
    field175_0xd4 BYTE 0
    field176_0xd5 BYTE 0
    field177_0xd6 BYTE 0
    field178_0xd7 BYTE 0
    field179_0xd8 BYTE 0
    field180_0xd9 BYTE 0
    field181_0xda BYTE 0
    field182_0xdb BYTE 0
    field183_0xdc BYTE 0
    field184_0xdd BYTE 0
    field185_0xde BYTE 0
    field186_0xdf BYTE 0
    field187_0xe0 BYTE 0
    field188_0xe1 BYTE 0
    field189_0xe2 BYTE 0
    field190_0xe3 BYTE 0
    field191_0xe4 BYTE 0
    field192_0xe5 BYTE 0
    field193_0xe6 BYTE 0
    field194_0xe7 BYTE 0
    field195_0xe8 BYTE 0
    field196_0xe9 BYTE 0
    field197_0xea BYTE 0
    field198_0xeb BYTE 0
    field199_0xec BYTE 0
    field200_0xed BYTE 0
    field201_0xee BYTE 0
    field202_0xef BYTE 0
    field203_0xf0 BYTE 0
    field204_0xf1 BYTE 0
    field205_0xf2 BYTE 0
    field206_0xf3 BYTE 0
    field207_0xf4 BYTE 0
    field208_0xf5 BYTE 0
    field209_0xf6 BYTE 0
    field210_0xf7 BYTE 0
    field211_0xf8 BYTE 0
    field212_0xf9 BYTE 0
    field213_0xfa BYTE 0
    field214_0xfb BYTE 0
    field215_0xfc BYTE 0
    field216_0xfd BYTE 0
    field217_0xfe BYTE 0
    field218_0xff BYTE 0
    field219_0x100 BYTE 0
    field220_0x101 BYTE 0
    field221_0x102 BYTE 0
    field222_0x103 BYTE 0
    field223_0x104 BYTE 0
    field224_0x105 BYTE 0
    field225_0x106 BYTE 0
    field226_0x107 BYTE 0
    field227_0x108 BYTE 0
    field228_0x109 BYTE 0
    field229_0x10a BYTE 0
    field230_0x10b BYTE 0
    field231_0x10c BYTE 0
    field232_0x10d BYTE 0
    field233_0x10e BYTE 0
    field234_0x10f BYTE 0
    field235_0x110 BYTE 0
    field236_0x111 BYTE 0
    field237_0x112 BYTE 0
    field238_0x113 BYTE 0
    field239_0x114 BYTE 0
    field240_0x115 BYTE 0
    field241_0x116 BYTE 0
    field242_0x117 BYTE 0
    field243_0x118 BYTE 0
    field244_0x119 BYTE 0
    field245_0x11a BYTE 0
    field246_0x11b BYTE 0
    field247_0x11c BYTE 0
    field248_0x11d BYTE 0
    field249_0x11e BYTE 0
    field250_0x11f BYTE 0
    field251_0x120 BYTE 0
    field252_0x121 BYTE 0
    field253_0x122 BYTE 0
    field254_0x123 BYTE 0
    field255_0x124 BYTE 0
    field256_0x125 BYTE 0
    field257_0x126 BYTE 0
    field258_0x127 BYTE 0
    field259_0x128 BYTE 0
    field260_0x129 BYTE 0
    field261_0x12a BYTE 0
    field262_0x12b BYTE 0
    field263_0x12c BYTE 0
    field264_0x12d BYTE 0
    field265_0x12e BYTE 0
    field266_0x12f BYTE 0
    field267_0x130 BYTE 0
    field268_0x131 BYTE 0
    field269_0x132 BYTE 0
    field270_0x133 BYTE 0
    field271_0x134 BYTE 0
    field272_0x135 BYTE 0
    field273_0x136 BYTE 0
    field274_0x137 BYTE 0
    field275_0x138 BYTE 0
    field276_0x139 BYTE 0
    field277_0x13a BYTE 0
    field278_0x13b BYTE 0
    field279_0x13c BYTE 0
    field280_0x13d BYTE 0
    field281_0x13e BYTE 0
    field282_0x13f BYTE 0
    field283_0x140 BYTE 0
    field284_0x141 BYTE 0
    field285_0x142 BYTE 0
    field286_0x143 BYTE 0
    field287_0x144 BYTE 0
    field288_0x145 BYTE 0
    field289_0x146 BYTE 0
    field290_0x147 BYTE 0
    field291_0x148 BYTE 0
    field292_0x149 BYTE 0
    field293_0x14a BYTE 0
    field294_0x14b BYTE 0
    field295_0x14c BYTE 0
    field296_0x14d BYTE 0
    field297_0x14e BYTE 0
    field298_0x14f BYTE 0
    field299_0x150 BYTE 0
    field300_0x151 BYTE 0
    field301_0x152 BYTE 0
    field302_0x153 BYTE 0
    field303_0x154 BYTE 0
    field304_0x155 BYTE 0
    field305_0x156 BYTE 0
    field306_0x157 BYTE 0
    field307_0x158 BYTE 0
    field308_0x159 BYTE 0
    field309_0x15a BYTE 0
    field310_0x15b BYTE 0
    field311_0x15c BYTE 0
    field312_0x15d BYTE 0
    field313_0x15e BYTE 0
    field314_0x15f BYTE 0
    field315_0x160 BYTE 0
    field316_0x161 BYTE 0
    field317_0x162 BYTE 0
    field318_0x163 BYTE 0
    field319_0x164 BYTE 0
    field320_0x165 BYTE 0
    field321_0x166 BYTE 0
    field322_0x167 BYTE 0
    field323_0x168 BYTE 0
    field324_0x169 BYTE 0
    field325_0x16a BYTE 0
    field326_0x16b BYTE 0
    field327_0x16c BYTE 0
    field328_0x16d BYTE 0
    field329_0x16e BYTE 0
    field330_0x16f BYTE 0
    field331_0x170 BYTE 0
    field332_0x171 BYTE 0
    field333_0x172 BYTE 0
    field334_0x173 BYTE 0
    field335_0x174 BYTE 0
    field336_0x175 BYTE 0
    field337_0x176 BYTE 0
    field338_0x177 BYTE 0
    field339_0x178 BYTE 0
    field340_0x179 BYTE 0
    field341_0x17a BYTE 0
    field342_0x17b BYTE 0
    field343_0x17c BYTE 0
    field344_0x17d BYTE 0
    field345_0x17e BYTE 0
    field346_0x17f BYTE 0
    field347_0x180 BYTE 0
    field348_0x181 BYTE 0
    field349_0x182 BYTE 0
    field350_0x183 BYTE 0
    field351_0x184 BYTE 0
    field352_0x185 BYTE 0
    field353_0x186 BYTE 0
    field354_0x187 BYTE 0
    field355_0x188 BYTE 0
    field356_0x189 BYTE 0
    field357_0x18a BYTE 0
    field358_0x18b BYTE 0
    field359_0x18c BYTE 0
    field360_0x18d BYTE 0
    field361_0x18e BYTE 0
    field362_0x18f BYTE 0
    field363_0x190 BYTE 0
    field364_0x191 BYTE 0
    field365_0x192 BYTE 0
    field366_0x193 BYTE 0
    field367_0x194 BYTE 0
    field368_0x195 BYTE 0
    field369_0x196 BYTE 0
    field370_0x197 BYTE 0
    field371_0x198 BYTE 0
    field372_0x199 BYTE 0
    field373_0x19a BYTE 0
    field374_0x19b BYTE 0
    field375_0x19c BYTE 0
    field376_0x19d BYTE 0
    field377_0x19e BYTE 0
    field378_0x19f BYTE 0
    field379_0x1a0 BYTE 0
    field380_0x1a1 BYTE 0
    field381_0x1a2 BYTE 0
    field382_0x1a3 BYTE 0
    field383_0x1a4 BYTE 0
    field384_0x1a5 BYTE 0
    field385_0x1a6 BYTE 0
    field386_0x1a7 BYTE 0
    field387_0x1a8 BYTE 0
    field388_0x1a9 BYTE 0
    field389_0x1aa BYTE 0
    field390_0x1ab BYTE 0
    field391_0x1ac BYTE 0
    field392_0x1ad BYTE 0
    field393_0x1ae BYTE 0
    field394_0x1af BYTE 0
    field395_0x1b0 BYTE 0
    field396_0x1b1 BYTE 0
    field397_0x1b2 BYTE 0
    field398_0x1b3 BYTE 0
    field399_0x1b4 BYTE 0
    field400_0x1b5 BYTE 0
    field401_0x1b6 BYTE 0
    field402_0x1b7 BYTE 0
    field403_0x1b8 BYTE 0
    field404_0x1b9 BYTE 0
    field405_0x1ba BYTE 0
    field406_0x1bb BYTE 0
    field407_0x1bc BYTE 0
    field408_0x1bd BYTE 0
    field409_0x1be BYTE 0
    field410_0x1bf BYTE 0
    field411_0x1c0 BYTE 0
    field412_0x1c1 BYTE 0
    field413_0x1c2 BYTE 0
    field414_0x1c3 BYTE 0
    field415_0x1c4 BYTE 0
    field416_0x1c5 BYTE 0
    field417_0x1c6 BYTE 0
    field418_0x1c7 BYTE 0
    field419_0x1c8 BYTE 0
    field420_0x1c9 BYTE 0
    field421_0x1ca BYTE 0
    field422_0x1cb BYTE 0
    field423_0x1cc BYTE 0
    field424_0x1cd BYTE 0
    field425_0x1ce BYTE 0
    field426_0x1cf BYTE 0
    field427_0x1d0 BYTE 0
    field428_0x1d1 BYTE 0
    field429_0x1d2 BYTE 0
    field430_0x1d3 BYTE 0
    field431_0x1d4 BYTE 0
    field432_0x1d5 BYTE 0
    field433_0x1d6 BYTE 0
    field434_0x1d7 BYTE 0
    field435_0x1d8 BYTE 0
    field436_0x1d9 BYTE 0
    field437_0x1da BYTE 0
    field438_0x1db BYTE 0
    field439_0x1dc BYTE 0
    field440_0x1dd BYTE 0
    field441_0x1de BYTE 0
    field442_0x1df BYTE 0
    field443_0x1e0 BYTE 0
    field444_0x1e1 BYTE 0
    field445_0x1e2 BYTE 0
    field446_0x1e3 BYTE 0
    field447_0x1e4 BYTE 0
    field448_0x1e5 BYTE 0
    field449_0x1e6 BYTE 0
    field450_0x1e7 BYTE 0
    field451_0x1e8 BYTE 0
    field452_0x1e9 BYTE 0
    field453_0x1ea BYTE 0
    field454_0x1eb BYTE 0
    field455_0x1ec BYTE 0
    field456_0x1ed BYTE 0
    field457_0x1ee BYTE 0
    field458_0x1ef BYTE 0
    field459_0x1f0 BYTE 0
    field460_0x1f1 BYTE 0
    field461_0x1f2 BYTE 0
    field462_0x1f3 BYTE 0
    field463_0x1f4 BYTE 0
    field464_0x1f5 BYTE 0
    field465_0x1f6 BYTE 0
    field466_0x1f7 BYTE 0
    field467_0x1f8 BYTE 0
    field468_0x1f9 BYTE 0
    field469_0x1fa BYTE 0
    field470_0x1fb BYTE 0
    field471_0x1fc BYTE 0
    field472_0x1fd BYTE 0
    field473_0x1fe BYTE 0
    field474_0x1ff BYTE 0
    field475_0x200 BYTE 0
    field476_0x201 BYTE 0
    field477_0x202 BYTE 0
    field478_0x203 BYTE 0
    field479_0x204 BYTE 0
    field480_0x205 BYTE 0
    field481_0x206 BYTE 0
    field482_0x207 BYTE 0
    field483_0x208 BYTE 0
    field484_0x209 BYTE 0
    field485_0x20a BYTE 0
    field486_0x20b BYTE 0
    field487_0x20c BYTE 0
    field488_0x20d BYTE 0
    field489_0x20e BYTE 0
    field490_0x20f BYTE 0
    field491_0x210 BYTE 0
    field492_0x211 BYTE 0
    field493_0x212 BYTE 0
    field494_0x213 BYTE 0
    field495_0x214 BYTE 0
    field496_0x215 BYTE 0
    field497_0x216 BYTE 0
    field498_0x217 BYTE 0
    field499_0x218 BYTE 0
    field500_0x219 BYTE 0
    field501_0x21a BYTE 0
    field502_0x21b BYTE 0
    field503_0x21c BYTE 0
    field504_0x21d BYTE 0
    field505_0x21e BYTE 0
    field506_0x21f BYTE 0
    field507_0x220 BYTE 0
    field508_0x221 BYTE 0
    field509_0x222 BYTE 0
    field510_0x223 BYTE 0
    field511_0x224 BYTE 0
    field512_0x225 BYTE 0
    field513_0x226 BYTE 0
    field514_0x227 BYTE 0
    field515_0x228 BYTE 0
    field516_0x229 BYTE 0
    field517_0x22a BYTE 0
    field518_0x22b BYTE 0
    field519_0x22c BYTE 0
    field520_0x22d BYTE 0
    field521_0x22e BYTE 0
    field522_0x22f BYTE 0
    field523_0x230 BYTE 0
    field524_0x231 BYTE 0
    field525_0x232 BYTE 0
    field526_0x233 BYTE 0
    field527_0x234 BYTE 0
    field528_0x235 BYTE 0
    field529_0x236 BYTE 0
    field530_0x237 BYTE 0
    field531_0x238 BYTE 0
    field532_0x239 BYTE 0
    field533_0x23a BYTE 0
    field534_0x23b BYTE 0
    field535_0x23c BYTE 0
    field536_0x23d BYTE 0
    field537_0x23e BYTE 0
    field538_0x23f BYTE 0
    field539_0x240 BYTE 0
    field540_0x241 BYTE 0
    field541_0x242 BYTE 0
    field542_0x243 BYTE 0
    field543_0x244 BYTE 0
    field544_0x245 BYTE 0
    field545_0x246 BYTE 0
    field546_0x247 BYTE 0
    field547_0x248 BYTE 0
    field548_0x249 BYTE 0
    field549_0x24a BYTE 0
    field550_0x24b BYTE 0
    field551_0x24c BYTE 0
    field552_0x24d BYTE 0
    field553_0x24e BYTE 0
    field554_0x24f BYTE 0
    field555_0x250 BYTE 0
    field556_0x251 BYTE 0
    field557_0x252 BYTE 0
    field558_0x253 BYTE 0
    field559_0x254 BYTE 0
    field560_0x255 BYTE 0
    field561_0x256 BYTE 0
    field562_0x257 BYTE 0
    field563_0x258 BYTE 0
    field564_0x259 BYTE 0
    field565_0x25a BYTE 0
    field566_0x25b BYTE 0
    field567_0x25c BYTE 0
    field568_0x25d BYTE 0
    field569_0x25e BYTE 0
    field570_0x25f BYTE 0
    field571_0x260 BYTE 0
    field572_0x261 BYTE 0
    field573_0x262 BYTE 0
    field574_0x263 BYTE 0
    field575_0x264 BYTE 0
    field576_0x265 BYTE 0
    field577_0x266 BYTE 0
    field578_0x267 BYTE 0
    field579_0x268 BYTE 0
    field580_0x269 BYTE 0
    field581_0x26a BYTE 0
    field582_0x26b BYTE 0
    field583_0x26c BYTE 0
    field584_0x26d BYTE 0
    field585_0x26e BYTE 0
    field586_0x26f BYTE 0
    field587_0x270 BYTE 0
    field588_0x271 BYTE 0
    field589_0x272 BYTE 0
    field590_0x273 BYTE 0
    field591_0x274 BYTE 0
    field592_0x275 BYTE 0
    field593_0x276 BYTE 0
    field594_0x277 BYTE 0
    field595_0x278 BYTE 0
    field596_0x279 BYTE 0
    field597_0x27a BYTE 0
    field598_0x27b BYTE 0
    field599_0x27c BYTE 0
    field600_0x27d BYTE 0
    field601_0x27e BYTE 0
    field602_0x27f BYTE 0
    field603_0x280 BYTE 0
    field604_0x281 BYTE 0
    field605_0x282 BYTE 0
    field606_0x283 BYTE 0
    field607_0x284 BYTE 0
    field608_0x285 BYTE 0
    field609_0x286 BYTE 0
    field610_0x287 BYTE 0
    field611_0x288 BYTE 0
    field612_0x289 BYTE 0
    field613_0x28a BYTE 0
    field614_0x28b BYTE 0
    field615_0x28c BYTE 0
    field616_0x28d BYTE 0
    field617_0x28e BYTE 0
    field618_0x28f BYTE 0
    field619_0x290 BYTE 0
    field620_0x291 BYTE 0
    field621_0x292 BYTE 0
    field622_0x293 BYTE 0
    field623_0x294 BYTE 0
    field624_0x295 BYTE 0
    field625_0x296 BYTE 0
    field626_0x297 BYTE 0
    field627_0x298 BYTE 0
    field628_0x299 BYTE 0
    field629_0x29a BYTE 0
    field630_0x29b BYTE 0
    field631_0x29c BYTE 0
    field632_0x29d BYTE 0
    field633_0x29e BYTE 0
    field634_0x29f BYTE 0
    field635_0x2a0 BYTE 0
    field636_0x2a1 BYTE 0
    field637_0x2a2 BYTE 0
    field638_0x2a3 BYTE 0
    field639_0x2a4 BYTE 0
    field640_0x2a5 BYTE 0
    field641_0x2a6 BYTE 0
    field642_0x2a7 BYTE 0
    field643_0x2a8 BYTE 0
    field644_0x2a9 BYTE 0
    field645_0x2aa BYTE 0
    field646_0x2ab BYTE 0
    field647_0x2ac BYTE 0
    field648_0x2ad BYTE 0
    field649_0x2ae BYTE 0
    field650_0x2af BYTE 0
    field651_0x2b0 BYTE 0
    field652_0x2b1 BYTE 0
    field653_0x2b2 BYTE 0
    field654_0x2b3 BYTE 0
    field655_0x2b4 BYTE 0
    field656_0x2b5 BYTE 0
    field657_0x2b6 BYTE 0
    field658_0x2b7 BYTE 0
    field659_0x2b8 BYTE 0
    field660_0x2b9 BYTE 0
    field661_0x2ba BYTE 0
    field662_0x2bb BYTE 0
    field663_0x2bc BYTE 0
    field664_0x2bd BYTE 0
    field665_0x2be BYTE 0
    field666_0x2bf BYTE 0
    field667_0x2c0 BYTE 0
    field668_0x2c1 BYTE 0
    field669_0x2c2 BYTE 0
    field670_0x2c3 BYTE 0
    field671_0x2c4 BYTE 0
    field672_0x2c5 BYTE 0
    field673_0x2c6 BYTE 0
    field674_0x2c7 BYTE 0
    field675_0x2c8 BYTE 0
    field676_0x2c9 BYTE 0
    field677_0x2ca BYTE 0
    field678_0x2cb BYTE 0
    field679_0x2cc BYTE 0
    field680_0x2cd BYTE 0
    field681_0x2ce BYTE 0
    field682_0x2cf BYTE 0
    field683_0x2d0 BYTE 0
    field684_0x2d1 BYTE 0
    field685_0x2d2 BYTE 0
    field686_0x2d3 BYTE 0
    field687_0x2d4 BYTE 0
    field688_0x2d5 BYTE 0
    field689_0x2d6 BYTE 0
    field690_0x2d7 BYTE 0
    field691_0x2d8 BYTE 0
    field692_0x2d9 BYTE 0
    field693_0x2da BYTE 0
    field694_0x2db BYTE 0
    field695_0x2dc BYTE 0
    field696_0x2dd BYTE 0
    field697_0x2de BYTE 0
    field698_0x2df BYTE 0
    field699_0x2e0 BYTE 0
    field700_0x2e1 BYTE 0
    field701_0x2e2 BYTE 0
    field702_0x2e3 BYTE 0
    field703_0x2e4 BYTE 0
    field704_0x2e5 BYTE 0
    field705_0x2e6 BYTE 0
    field706_0x2e7 BYTE 0
    field707_0x2e8 BYTE 0
    field708_0x2e9 BYTE 0
    field709_0x2ea BYTE 0
    field710_0x2eb BYTE 0
    field711_0x2ec BYTE 0
    field712_0x2ed BYTE 0
    field713_0x2ee BYTE 0
    field714_0x2ef BYTE 0
    field715_0x2f0 BYTE 0
    field716_0x2f1 BYTE 0
    field717_0x2f2 BYTE 0
    field718_0x2f3 BYTE 0
    field719_0x2f4 BYTE 0
    field720_0x2f5 BYTE 0
    field721_0x2f6 BYTE 0
    field722_0x2f7 BYTE 0
    field723_0x2f8 BYTE 0
    field724_0x2f9 BYTE 0
    field725_0x2fa BYTE 0
    field726_0x2fb BYTE 0
    field727_0x2fc BYTE 0
    field728_0x2fd BYTE 0
    field729_0x2fe BYTE 0
    field730_0x2ff BYTE 0
    field731_0x300 BYTE 0
    field732_0x301 BYTE 0
    field733_0x302 BYTE 0
    field734_0x303 BYTE 0
    field735_0x304 BYTE 0
    field736_0x305 BYTE 0
    field737_0x306 BYTE 0
    field738_0x307 BYTE 0
    field739_0x308 BYTE 0
    field740_0x309 BYTE 0
    field741_0x30a BYTE 0
    field742_0x30b BYTE 0
    field743_0x30c BYTE 0
    field744_0x30d BYTE 0
    field745_0x30e BYTE 0
    field746_0x30f BYTE 0
    field747_0x310 BYTE 0
    field748_0x311 BYTE 0
    field749_0x312 BYTE 0
    field750_0x313 BYTE 0
    field751_0x314 BYTE 0
    field752_0x315 BYTE 0
    field753_0x316 BYTE 0
    field754_0x317 BYTE 0
    field755_0x318 BYTE 0
    field756_0x319 BYTE 0
    field757_0x31a BYTE 0
    field758_0x31b BYTE 0
    field759_0x31c BYTE 0
    field760_0x31d BYTE 0
    field761_0x31e BYTE 0
    field762_0x31f BYTE 0
    field763_0x320 BYTE 0
    field764_0x321 BYTE 0
    field765_0x322 BYTE 0
    field766_0x323 BYTE 0
    field767_0x324 BYTE 0
    field768_0x325 BYTE 0
    field769_0x326 BYTE 0
    field770_0x327 BYTE 0
    field771_0x328 BYTE 0
    field772_0x329 BYTE 0
    field773_0x32a BYTE 0
    field774_0x32b BYTE 0
    field775_0x32c BYTE 0
    field776_0x32d BYTE 0
    field777_0x32e BYTE 0
    field778_0x32f BYTE 0
    field779_0x330 BYTE 0
    field780_0x331 BYTE 0
    field781_0x332 BYTE 0
    field782_0x333 BYTE 0
    field783_0x334 BYTE 0
    field784_0x335 BYTE 0
    field785_0x336 BYTE 0
    field786_0x337 BYTE 0
    field787_0x338 BYTE 0
    field788_0x339 BYTE 0
    field789_0x33a BYTE 0
    field790_0x33b BYTE 0
    field791_0x33c BYTE 0
    field792_0x33d BYTE 0
    field793_0x33e BYTE 0
    field794_0x33f BYTE 0
    field795_0x340 BYTE 0
    field796_0x341 BYTE 0
    field797_0x342 BYTE 0
    field798_0x343 BYTE 0
    field799_0x344 BYTE 0
    field800_0x345 BYTE 0
    field801_0x346 BYTE 0
    field802_0x347 BYTE 0
    field803_0x348 BYTE 0
    field804_0x349 BYTE 0
    field805_0x34a BYTE 0
    field806_0x34b BYTE 0
    field807_0x34c BYTE 0
    field808_0x34d BYTE 0
    field809_0x34e BYTE 0
    field810_0x34f BYTE 0
    field811_0x350 BYTE 0
    field812_0x351 BYTE 0
    field813_0x352 BYTE 0
    field814_0x353 BYTE 0
    field815_0x354 BYTE 0
    field816_0x355 BYTE 0
    field817_0x356 BYTE 0
    field818_0x357 BYTE 0
    field819_0x358 BYTE 0
    field820_0x359 BYTE 0
    field821_0x35a BYTE 0
    field822_0x35b BYTE 0
    field823_0x35c BYTE 0
    field824_0x35d BYTE 0
    field825_0x35e BYTE 0
    field826_0x35f BYTE 0
    field827_0x360 BYTE 0
    field828_0x361 BYTE 0
    field829_0x362 BYTE 0
    field830_0x363 BYTE 0
    field831_0x364 BYTE 0
    field832_0x365 BYTE 0
    field833_0x366 BYTE 0
    field834_0x367 BYTE 0
    field835_0x368 BYTE 0
    field836_0x369 BYTE 0
    field837_0x36a BYTE 0
    field838_0x36b BYTE 0
    field839_0x36c BYTE 0
    field840_0x36d BYTE 0
    field841_0x36e BYTE 0
    field842_0x36f BYTE 0
    field843_0x370 BYTE 0
    field844_0x371 BYTE 0
    field845_0x372 BYTE 0
    field846_0x373 BYTE 0
    field847_0x374 BYTE 0
    field848_0x375 BYTE 0
    field849_0x376 BYTE 0
    field850_0x377 BYTE 0
    field851_0x378 BYTE 0
    field852_0x379 BYTE 0
    field853_0x37a BYTE 0
    field854_0x37b BYTE 0
    field855_0x37c BYTE 0
    field856_0x37d BYTE 0
    field857_0x37e BYTE 0
    field858_0x37f BYTE 0
    field859_0x380 BYTE 0
    field860_0x381 BYTE 0
    field861_0x382 BYTE 0
    field862_0x383 BYTE 0
    field863_0x384 BYTE 0
    field864_0x385 BYTE 0
    field865_0x386 BYTE 0
    field866_0x387 BYTE 0
    field867_0x388 BYTE 0
    field868_0x389 BYTE 0
    field869_0x38a BYTE 0
    field870_0x38b BYTE 0
    field871_0x38c BYTE 0
    field872_0x38d BYTE 0
    field873_0x38e BYTE 0
    field874_0x38f BYTE 0
    field875_0x390 BYTE 0
    field876_0x391 BYTE 0
    field877_0x392 BYTE 0
    field878_0x393 BYTE 0
    field879_0x394 BYTE 0
    field880_0x395 BYTE 0
    field881_0x396 BYTE 0
    field882_0x397 BYTE 0
    field883_0x398 BYTE 0
    field884_0x399 BYTE 0
    field885_0x39a BYTE 0
    field886_0x39b BYTE 0
    field887_0x39c BYTE 0
    field888_0x39d BYTE 0
    field889_0x39e BYTE 0
    field890_0x39f BYTE 0
    field891_0x3a0 BYTE 0
    field892_0x3a1 BYTE 0
    field893_0x3a2 BYTE 0
    field894_0x3a3 BYTE 0
    field895_0x3a4 BYTE 0
    field896_0x3a5 BYTE 0
    field897_0x3a6 BYTE 0
    field898_0x3a7 BYTE 0
    field899_0x3a8 BYTE 0
    field900_0x3a9 BYTE 0
    field901_0x3aa BYTE 0
    field902_0x3ab BYTE 0
    field903_0x3ac BYTE 0
    field904_0x3ad BYTE 0
    field905_0x3ae BYTE 0
    field906_0x3af BYTE 0
    field907_0x3b0 BYTE 0
    field908_0x3b1 BYTE 0
    field909_0x3b2 BYTE 0
    field910_0x3b3 BYTE 0
    field911_0x3b4 BYTE 0
    field912_0x3b5 BYTE 0
    field913_0x3b6 BYTE 0
    field914_0x3b7 BYTE 0
    field915_0x3b8 BYTE 0
    field916_0x3b9 BYTE 0
    field917_0x3ba BYTE 0
    field918_0x3bb BYTE 0
    field919_0x3bc BYTE 0
    field920_0x3bd BYTE 0
    field921_0x3be BYTE 0
    field922_0x3bf BYTE 0
    field923_0x3c0 DWORD 0
    field924_0x3c4 BYTE 0
    field925_0x3c5 BYTE 0
    field926_0x3c6 BYTE 0
    field927_0x3c7 BYTE 0
    field928_0x3c8 BYTE 0
    field929_0x3c9 BYTE 0
    field930_0x3ca BYTE 0
    field931_0x3cb BYTE 0
    field932_0x3cc BYTE 0
    field933_0x3cd BYTE 0
    field934_0x3ce BYTE 0
    field935_0x3cf BYTE 0
    field936_0x3d0 BYTE 0
    field937_0x3d1 BYTE 0
    field938_0x3d2 BYTE 0
    field939_0x3d3 BYTE 0
    field940_0x3d4 BYTE 0
    field941_0x3d5 BYTE 0
    field942_0x3d6 BYTE 0
    field943_0x3d7 BYTE 0
    field944_0x3d8 BYTE 0
    field945_0x3d9 BYTE 0
    field946_0x3da BYTE 0
    field947_0x3db BYTE 0
    field948_0x3dc BYTE 0
    field949_0x3dd BYTE 0
    field950_0x3de BYTE 0
    field951_0x3df BYTE 0
    field952_0x3e0 BYTE 0
    field953_0x3e1 BYTE 0
    field954_0x3e2 BYTE 0
    field955_0x3e3 BYTE 0
    field956_0x3e4 DWORD 0
    field957_0x3e8 BYTE 0
    field958_0x3e9 BYTE 0
    field959_0x3ea BYTE 0
    field960_0x3eb BYTE 0
    field961_0x3ec BYTE 0
    field962_0x3ed BYTE 0
    field963_0x3ee BYTE 0
    field964_0x3ef BYTE 0
UnkFamily2D ENDS
InstanceNodeAbstractBody STRUCT
    ctx DWORD 0; InstanceContext *
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    time DWORD 0
    field4_0xc DWORD 0; InstanceNodeAbstract *
    field5_0x10 DWORD 0
InstanceNodeAbstractBody ENDS
AutoClass52 STRUCT
    vec1 Vector4 {}
    vec2 Vector4 {}
    field2_0x20 DWORD 0
    chunkName TwinString {}
AutoClass52 ENDS
InstanceNodeInstanceBody STRUCT
    parent InstanceNodeAbstractBody {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c AutoClass52 {}
    field42_0x6c DWORD 0; AutoClass52 *
    field43_0x70 DWORD 0; AutoClass52 *
    field44_0x74 DWORD 0
    field45_0x78 WORD 0
    field46_0x7a BYTE 0
    field47_0x7b BYTE 0
    field48_0x7c DWORD 0
    field49_0x80 DWORD 0; ushort *
    field50_0x84 DWORD 0
    field51_0x88 BYTE 0
    field52_0x89 BYTE 0
    field53_0x8a WORD 0
    field54_0x8c DWORD 0
    field55_0x90 DWORD 0
    field56_0x94 DWORD 0
    field57_0x98 BYTE 0
    field58_0x99 BYTE 0
    field59_0x9a BYTE 0
    field60_0x9b BYTE 0
    field61_0x9c Vector4 {}
    vec2 Vector4 {}
    field63_0xbc DWORD 0
    field64_0xc0 BYTE 0
    field65_0xc1 BYTE 0
    field66_0xc2 BYTE 0
    field67_0xc3 BYTE 0
    field68_0xc4 BYTE 0
    field69_0xc5 BYTE 0
    field70_0xc6 BYTE 0
    field71_0xc7 BYTE 0
    field72_0xc8 BYTE 0
    field73_0xc9 BYTE 0
    field74_0xca BYTE 0
    field75_0xcb BYTE 0
InstanceNodeInstanceBody ENDS
InstanceNodeInstance STRUCT
    vtable DWORD 0; InstanceNodeInstance_VTable *
    body InstanceNodeInstanceBody {}
InstanceNodeInstance ENDS
NodeRelated2Abstract STRUCT
    vtable DWORD 0; NodeRelated2Abstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    ctx DWORD 0; InstanceContext *
    instanceIndex WORD 0
    objectId WORD 0
    gameObject DWORD 0; GameObject *
    blackboard DWORD 0; BlackboardAbstract *
    related DWORD 0; NodeRelated1Abstract *
    field19_0x24 WORD 0
    field20_0x26 WORD 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c DWORD 0
    vec1 Vector4 {}
    field27_0x40 Vector4 {}
    field28_0x50 BYTE 0
    field29_0x51 BYTE 0
    field30_0x52 BYTE 0
    field31_0x53 BYTE 0
    field32_0x54 BYTE 0
    field33_0x55 BYTE 0
    field34_0x56 BYTE 0
    field35_0x57 BYTE 0
    field36_0x58 BYTE 0
    field37_0x59 BYTE 0
    field38_0x5a BYTE 0
    field39_0x5b BYTE 0
    field40_0x5c BYTE 0
    field41_0x5d BYTE 0
    field42_0x5e BYTE 0
    field43_0x5f BYTE 0
NodeRelated2Abstract ENDS
InstanceNodeAbstract STRUCT
    vtable DWORD 0; InstanceNodeAbstract_VTable *
    ctx DWORD 0; InstanceContext *
    field2_0x8 WORD 0
    field3_0xa WORD 0
    time DWORD 0
    field5_0x10 DWORD 0; InstanceNodeAbstract *
    field6_0x14 DWORD 0
InstanceNodeAbstract ENDS
InstanceNodeCreature STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2E *
InstanceNodeCreature ENDS
BlackboardAbstract STRUCT
    vtable DWORD 0; Blackboard_VTable *
    instStateFlags DWORD 0
    blackboardSub DWORD 0; BlackboardSub *
    fractions DWORD 0; uint *
    floats DWORD 0; float *
    field5_0x14 DWORD 0; pointer
    field6_0x18 DWORD 0; pointer
    field7_0x1c DWORD 0; pointer
    ints DWORD 0; int *
BlackboardAbstract ENDS
SoundBuffer STRUCT
	field0_0x0 BYTE 220 dup(0)
    soundBufferFlags DWORD 0
    field221_0xe0 BYTE 464 dup(0)
	next DWORD 0; SoundBuffer *
    field686_0x2b4 BYTE 15852 dup(0)
SoundBuffer ENDS
SoundControllerUnkClass STRUCT
    field0_0x0 WORD 0
    field1_0x2 WORD 0
    field2_0x4 WORD 0
    field3_0x6 WORD 0
    field4_0x8 BYTE 0
    field5_0x9 BYTE 0
    field6_0xa BYTE 0
    field7_0xb BYTE 0
    field8_0xc BYTE 0
    field9_0xd BYTE 0
    field10_0xe BYTE 0
    field11_0xf BYTE 0
    field12_0x10 DWORD 0
    field13_0x14 DWORD 0
    field14_0x18 DWORD 0
    field15_0x1c DWORD 0
    field16_0x20 BYTE 0
    field17_0x21 BYTE 0
    field18_0x22 BYTE 0
    field19_0x23 BYTE 0
    field20_0x24 DWORD 0
    field21_0x28 DWORD 0
    field22_0x2c WORD 0
    field23_0x2e BYTE 0
    field24_0x2f BYTE 0
    field25_0x30 DWORD 0
    field26_0x34 DWORD 0
    field27_0x38 WORD 0
    field28_0x3a BYTE 0
    field29_0x3b BYTE 0
    field30_0x3c DWORD 0
    field31_0x40 BYTE 0
    field32_0x41 BYTE 0
    field33_0x42 BYTE 0
    field34_0x43 BYTE 0
    field35_0x44 BYTE 0
    field36_0x45 BYTE 0
    field37_0x46 BYTE 0
    field38_0x47 BYTE 0
    field39_0x48 BYTE 0
    field40_0x49 BYTE 0
    field41_0x4a BYTE 0
    field42_0x4b BYTE 0
    field43_0x4c BYTE 0
    field44_0x4d BYTE 0
    field45_0x4e BYTE 0
    field46_0x4f BYTE 0
    field47_0x50 BYTE 0
    field48_0x51 BYTE 0
    field49_0x52 BYTE 0
    field50_0x53 BYTE 0
    field51_0x54 BYTE 0
    field52_0x55 BYTE 0
    field53_0x56 BYTE 0
    field54_0x57 BYTE 0
    field55_0x58 BYTE 0
    field56_0x59 BYTE 0
    field57_0x5a BYTE 0
    field58_0x5b BYTE 0
    field59_0x5c DWORD 0
    field60_0x60 DWORD 0
    field61_0x64 DWORD 0
SoundControllerUnkClass ENDS
BankSub STRUCT
    vtable DWORD 0; BankSub_VTable *
    time MY_FILETIME {}
    _str TwinString {}
    unkInt1 DWORD 0
    unkInt2 DWORD 0
BankSub ENDS
SaveFileC STRUCT
    parent SaveFileAbstract {}
    bankSub BankSub {}
    gameController DWORD 0; GameController *
SaveFileC ENDS
SectionAbstract STRUCT
    vtable DWORD 0; SectionAbstract_VTable *
SectionAbstract ENDS
AutoClass40 STRUCT
    vectorCnt WORD 0
    field1_0x2 WORD 0
    field2_0x4 WORD 0
    field3_0x6 WORD 0
    field4_0x8 WORD 0
    offset1 WORD 0
    offset2 WORD 0
    offset3 WORD 0
    offset4 WORD 0
    offset5 WORD 0
    offset6 WORD 0
    field11_0x16 WORD 0
    memoryLength DWORD 0
    vectorArray BYTE 4 dup (0)
AutoClass40 ENDS
DSCAPS STRUCT
    free2dBuffers DWORD 0
    free3dBuffers DWORD 0
    freeBufferSGE DWORD 0
    memoryAllocated DWORD 0
DSCAPS ENDS
DSDevice STRUCT
    vtable DWORD 0; pointer *
    dsInterface DWORD 0; IDIRECTSOUND8 *
    caps DSCAPS {}
    field3_0x18 DWORD 0
    field4_0x1c DWORD 0
DSDevice ENDS
Decals STRUCT
    field0_0x0 WORD 0
    field1_0x2 WORD 0
    field2_0x4 WORD 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 DWORD 0
    field6_0xc DWORD 0
    field7_0x10 BYTE 90868 dup (0)
    floatArray BYTE 16 dup (0)
    field9_0x16314 BYTE 0
    field10_0x16315 BYTE 0
    field11_0x16316 BYTE 0
    field12_0x16317 BYTE 0
    field13_0x16318 BYTE 0
    field14_0x16319 BYTE 0
    field15_0x1631a BYTE 0
    field16_0x1631b BYTE 0
    field17_0x1631c BYTE 0
    field18_0x1631d BYTE 0
    field19_0x1631e BYTE 0
    field20_0x1631f BYTE 0
Decals ENDS
D3DVERTEXATTRIBUTEFORMAT STRUCT
    inputs BYTE 256 dup (0)
D3DVERTEXATTRIBUTEFORMAT ENDS
AutoClass3 STRUCT
    arraysCnt DWORD 0
    arrayLength DWORD 0
    array1 DWORD 0; int * *
    idxArray DWORD 0; int *
AutoClass3 ENDS
AutoClass46 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    field7_0x1c BYTE 0
    field8_0x1d BYTE 0
    field9_0x1e BYTE 0
    field10_0x1f BYTE 0
    field11_0x20 DWORD 0
    field12_0x24 BYTE 0
    field13_0x25 BYTE 0
    field14_0x26 BYTE 0
    field15_0x27 BYTE 0
    field16_0x28 DWORD 0
    field17_0x2c DWORD 0
    field18_0x30 DWORD 0
	field19_0x34 BYTE 4084 dup(0)
AutoClass46 ENDS
UnkFamily28Abstract STRUCT
    vtable DWORD 0; UnkFamily28Abstract_VTable *
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    cnt WORD 0
    field4_0xa WORD 0
    indexArray DWORD 0; short *
    array DWORD 0; UnkFamily28Element *
UnkFamily28Abstract ENDS
UnkFamily28A STRUCT
    parent UnkFamily28Abstract {}
UnkFamily28A ENDS
IteratorCAbstract STRUCT
    vtable DWORD 0; IteratorCBase_VTable *
IteratorCAbstract ENDS
IteratorC4Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC4Abstract ENDS
IteratorC4 STRUCT
    parent IteratorC4Abstract {}
    i WORD 0
    index WORD 0
    collection DWORD 0; RendererSubStruct *
IteratorC4 ENDS
ShaderProgramAbstract STRUCT
    vtable DWORD 0; ShaderProgramAbstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    flags DWORD 0
    states DWORD 0
    field15_0x18 BYTE 0
    field16_0x19 BYTE 0
    field17_0x1a BYTE 0
    field18_0x1b BYTE 0
    field19_0x1c BYTE 0
    field20_0x1d BYTE 0
    field21_0x1e BYTE 0
    field22_0x1f BYTE 0
    field23_0x20 BYTE 0
    field24_0x21 BYTE 0
    field25_0x22 BYTE 0
    field26_0x23 BYTE 0
    texture DWORD 0; TwinsanityTexture *
    field28_0x28 WORD 0
    field29_0x2a WORD 0
    field30_0x2c BYTE 0
    field31_0x2d BYTE 0
    field32_0x2e BYTE 0
    field33_0x2f BYTE 0
    field34_0x30 BYTE 0
    field35_0x31 BYTE 0
    field36_0x32 BYTE 0
    field37_0x33 BYTE 0
    field38_0x34 BYTE 0
    field39_0x35 BYTE 0
    field40_0x36 BYTE 0
    field41_0x37 BYTE 0
    field42_0x38 BYTE 0
    field43_0x39 BYTE 0
    field44_0x3a BYTE 0
    field45_0x3b BYTE 0
    field46_0x3c BYTE 0
    field47_0x3d BYTE 0
    field48_0x3e BYTE 0
    field49_0x3f BYTE 0
    vec0 Vector4 {}
    field51_0x50 REAL4 0.0;
    field52_0x54 REAL4 0.0;
    field53_0x58 REAL4 0.0;
    field54_0x5c REAL4 0.0;
    field55_0x60 REAL4 0.0;
    field56_0x64 REAL4 0.0;
    field57_0x68 DWORD 0
    field58_0x6c DWORD 0
    field59_0x70 DWORD 0
    id DWORD 0
    unkSubStruct DWORD 0; ShaderProgramSub *
    field62_0x7c BYTE 0
    field63_0x7d BYTE 0
    field64_0x7e BYTE 0
    field65_0x7f BYTE 0
ShaderProgramAbstract ENDS
FileResourceDescG STRUCT
    parent FileResourceDescAbstract {}
    field1_0x8 DWORD 0
    fname TwinString {}
    buffer DWORD 0; byte *
    _size DWORD 0
    _offset DWORD 0
    field6_0x24 DWORD 0
    field7_0x28 REAL4 0.0;
    readerHelper DWORD 0; FileReaderHelper *
FileResourceDescG ENDS
SectionMaterial STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataMaterial *
SectionMaterial ENDS
SectionTexture STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataTexture *
SectionTexture ENDS
SectionModel STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataModel *
SectionModel ENDS
SectionRigidModel STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataRigidModel *
SectionRigidModel ENDS
SectionSkin STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataSkin *
SectionSkin ENDS
SectionBlendSkin STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataBlendSkin *
SectionBlendSkin ENDS
SectionSkydome STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataSkydome *
SectionSkydome ENDS
SectionLod STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataLod *
SectionLod ENDS
SectionGraphics STRUCT
    parent SectionAbstract {}
    materials SectionMaterial {}
    textures SectionTexture {}
    models SectionModel {}
    rigidModels SectionRigidModel {}
    skins SectionSkin {}
    blendSkins SectionBlendSkin {}
    skydomes SectionSkydome {}
    rigidModels2 SectionRigidModel {}
    _lods SectionLod {}
    memptrArray BYTE 36 dup (0)
SectionGraphics ENDS
SectionGameObject STRUCT
    parent SectionAbstract {}
    collection DWORD 0; SectionDataGameObjectBase *
    indexToIdList DWORD 0; IndexToIdList *
SectionGameObject ENDS
SectionScript STRUCT
    parent SectionAbstract {}
    collection DWORD 0; SectionDataScriptBase *
    unkField DWORD 0
SectionScript ENDS
SectionAnimation STRUCT
    parent SectionAbstract {}
    collection DWORD 0; SectionDataAnimationBase *
    section DWORD 0; SectionAnimation *
SectionAnimation ENDS
SectionOGI STRUCT
    parent SectionAbstract {}
    collection DWORD 0; SectionDataOGIBase *
    unkField DWORD 0
SectionOGI ENDS
SectionCodeModel STRUCT
    parent SectionAbstract {}
    collection DWORD 0; SectionDataCodeModelBase *
    unkField DWORD 0
SectionCodeModel ENDS
SectionSfx STRUCT
    parent SectionAbstract {}
    sfxData DWORD 0; SectionDataSfx *
    _ptr DWORD 0; int *
SectionSfx ENDS
SectionCode STRUCT
    parent SectionAbstract {}
    gameResources DWORD 0; GameResources *
    sectionUnk1 SectionGameObject {}
    sectionUnk2 SectionScript {}
    sectionUnk3 SectionAnimation {}
    sectionUnk4 SectionOGI {}
    sectionUnk5 SectionCodeModel {}
    sectionSfx SectionSfx {}
    sectionVoEng SectionSfx {}
    sectionVoFre SectionSfx {}
    sectionVoGer SectionSfx {}
    sectionVoSpa SectionSfx {}
    sectionVoIta SectionSfx {}
    sectionVoJpn SectionSfx {}
SectionCode ENDS
SectionRM STRUCT
    parent SectionAbstract {}
    flags DWORD 0
    levelName TwinString {}
    gameResources DWORD 0; GameResources *
    indexToIdList DWORD 0; IndexToIdList *
    collisionData DWORD 0; CollisionData *
    graphicsSection SectionGraphics {}
    codeSection SectionCode {}
    instanceSectionResources BYTE 32 dup (0)
    instanceSection BYTE 32 dup (0)
    field10_0x168 DWORD 0; AutoClass16 *
SectionRM ENDS
GraphicsSectionDataAbstract STRUCT
    vtable DWORD 0; GraphicsSectionDataAbstract_VTable *
GraphicsSectionDataAbstract ENDS
SectionDataEntriesTexture STRUCT
    elements DWORD 0; EntryDescriptorTexture *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesTexture ENDS
SectionDataTexture STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesTexture {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    textureList DWORD 0; ResourceListTwinsanityTexture *
SectionDataTexture ENDS
SectionDataEntriesRigidModel2 STRUCT
    elements DWORD 0; EntryDescriptorRigidModel2 *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesRigidModel2 ENDS
SectionDataRigidModel STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesRigidModel2 {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    rigidModelList DWORD 0; ResourceListTwinsanityRigidModel *
SectionDataRigidModel ENDS
SectionDataEntriesModel STRUCT
    elements DWORD 0; EntryDescriptorModel *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesModel ENDS
SectionDataModel STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesModel {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    modeList DWORD 0; ResourceListTwinsanityModel *
SectionDataModel ENDS
SectionDataEntriesMaterial STRUCT
    elements DWORD 0; EntryDescriptorMaterial *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesMaterial ENDS
SectionDataMaterial STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesMaterial {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    materialList DWORD 0; ResourceListTwinsanityMaterial *
SectionDataMaterial ENDS
SectionDataEntriesSkin STRUCT
    elements DWORD 0; EntryDescriptorSkin *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesSkin ENDS
SectionDataSkin STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesSkin {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    skinList DWORD 0; ResourceListTwinsanitySkin *
SectionDataSkin ENDS
SectionDataEntriesBlendSkin STRUCT
    elements DWORD 0; EntryDescriptorBlendSkin *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesBlendSkin ENDS
SectionDataBlendSkin STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesBlendSkin {}
    field2_0xe WORD 0
    ids DWORD 0; int *
    blendSkinLlist DWORD 0; ResourceListTwinsanityBlendSkin *
SectionDataBlendSkin ENDS
IndexToIdList STRUCT
    cnt DWORD 0
    ids BYTE 1024 dup (0)
IndexToIdList ENDS
ChunkList STRUCT
    firstChunk DWORD 0; ChunkData *
    chunkRef DWORD 0; ChunkDataRefCounter *
    field2_0x8 DWORD 0
ChunkList ENDS
InputStruct STRUCT
    handle DWORD 0; void *
    devicePtr BYTE 64 dup (0)
    field2_0x44 BYTE 0
    field3_0x45 BYTE 0
    field4_0x46 BYTE 0
    field5_0x47 BYTE 0
    field6_0x48 BYTE 0
    field7_0x49 BYTE 0
    field8_0x4a DWORD 0
    inputBitfield1 WORD 0
    field10_0x50 BYTE 0
    field11_0x51 BYTE 0
    field12_0x52 DWORD 0
    field13_0x56 BYTE 0
    field14_0x57 BYTE 0
    analogValue2 WORD 0
    analogValue1 WORD 0
    field17_0x5c BYTE 0
    field18_0x5d BYTE 0
    field19_0x5e WORD 0
    field20_0x60 DWORD 0; int *
    inputBitfield2 WORD 0
    field22_0x66 BYTE 0
    field23_0x67 BYTE 0
    field24_0x68 DWORD 0; int *
    field25_0x6c BYTE 0
    field26_0x6d BYTE 0
    field27_0x6e WORD 0
    field28_0x70 WORD 0
    field29_0x72 BYTE 0
    field30_0x73 BYTE 0
    field31_0x74 WORD 0
    field32_0x76 BYTE 0
    field33_0x77 BYTE 0
    port DWORD 0
    slot DWORD 0
InputStruct ENDS
AutoClass42 STRUCT
    field0_0x0 DWORD 0
    subStruct DWORD 0
    fileHandle DWORD 0
    xwbHeader DWORD 0; int *
    field4_0x10 DWORD 0; uint *
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0; char *
    field7_0x1c DWORD 0
    field8_0x20 DWORD 0; void *
    field9_0x24 DWORD 0
    field10_0x28 DWORD 0
AutoClass42 ENDS
TwinsanityTexture STRUCT
    index DWORD 0
    id DWORD 0
    _size DWORD 0
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe WORD 0
    field6_0x10 BYTE 0
    field7_0x11 BYTE 0
    field8_0x12 BYTE 0
    field9_0x13 BYTE 0
    field10_0x14 BYTE 0
    field11_0x15 BYTE 0
    field12_0x16 BYTE 0
    field13_0x17 BYTE 0
    field14_0x18 BYTE 0
    field15_0x19 BYTE 0
    field16_0x1a BYTE 0
    field17_0x1b BYTE 0
    field18_0x1c BYTE 0
    field19_0x1d BYTE 0
    field20_0x1e BYTE 0
    field21_0x1f BYTE 0
    field22_0x20 BYTE 0
    field23_0x21 BYTE 0
    field24_0x22 BYTE 0
    field25_0x23 BYTE 0
    field26_0x24 BYTE 0
    field27_0x25 BYTE 0
    field28_0x26 BYTE 0
    field29_0x27 BYTE 0
    field30_0x28 BYTE 0
    field31_0x29 BYTE 0
    field32_0x2a BYTE 0
    field33_0x2b BYTE 0
    field34_0x2c BYTE 0
    field35_0x2d BYTE 0
    field36_0x2e BYTE 0
    field37_0x2f BYTE 0
    field38_0x30 BYTE 0
    field39_0x31 BYTE 0
    field40_0x32 BYTE 0
    field41_0x33 BYTE 0
    field42_0x34 BYTE 0
    field43_0x35 BYTE 0
    field44_0x36 BYTE 0
    field45_0x37 BYTE 0
    field46_0x38 BYTE 0
    field47_0x39 BYTE 0
    field48_0x3a BYTE 0
    field49_0x3b BYTE 0
    field50_0x3c BYTE 0
    field51_0x3d BYTE 0
    field52_0x3e BYTE 0
    field53_0x3f BYTE 0
    field54_0x40 BYTE 0
    field55_0x41 BYTE 0
    field56_0x42 BYTE 0
    field57_0x43 BYTE 0
    field58_0x44 BYTE 0
    field59_0x45 BYTE 0
    field60_0x46 BYTE 0
    field61_0x47 BYTE 0
    field62_0x48 BYTE 0
    field63_0x49 BYTE 0
    field64_0x4a BYTE 0
    field65_0x4b BYTE 0
    field66_0x4c BYTE 0
    field67_0x4d BYTE 0
    field68_0x4e BYTE 0
    field69_0x4f BYTE 0
    field70_0x50 BYTE 0
    field71_0x51 BYTE 0
    field72_0x52 BYTE 0
    field73_0x53 BYTE 0
    field74_0x54 BYTE 0
    field75_0x55 BYTE 0
    field76_0x56 BYTE 0
    field77_0x57 BYTE 0
    field78_0x58 BYTE 0
    field79_0x59 BYTE 0
    field80_0x5a BYTE 0
    field81_0x5b BYTE 0
    field82_0x5c BYTE 0
    field83_0x5d BYTE 0
    field84_0x5e BYTE 0
    field85_0x5f BYTE 0
    d3dTexture DWORD 0; D3DTexture *
    field87_0x64 BYTE 0
    field88_0x65 BYTE 0
    field89_0x66 BYTE 0
    field90_0x67 BYTE 0
    field91_0x68 DWORD 0
    field92_0x6c DWORD 0
    field93_0x70 WORD 0
    field94_0x72 WORD 0
TwinsanityTexture ENDS
TextureDesc STRUCT
    field0_0x0 DWORD 0
    widthPower BYTE 0
    field2_0x5 BYTE 0
    heightPower BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 BYTE 0
    field14_0x11 BYTE 0
    field15_0x12 BYTE 0
    field16_0x13 BYTE 0
    field17_0x14 BYTE 0
    field18_0x15 BYTE 0
    field19_0x16 BYTE 0
    field20_0x17 BYTE 0
    field21_0x18 BYTE 0
    field22_0x19 BYTE 0
    field23_0x1a BYTE 0
    field24_0x1b BYTE 0
    field25_0x1c BYTE 0
    field26_0x1d BYTE 0
    field27_0x1e BYTE 0
    field28_0x1f BYTE 0
    field29_0x20 BYTE 0
    field30_0x21 BYTE 0
    field31_0x22 BYTE 0
    field32_0x23 BYTE 0
    field33_0x24 BYTE 0
    field34_0x25 BYTE 0
    field35_0x26 BYTE 0
    field36_0x27 BYTE 0
    field37_0x28 BYTE 0
    field38_0x29 BYTE 0
    field39_0x2a BYTE 0
    field40_0x2b BYTE 0
    field41_0x2c BYTE 0
    field42_0x2d BYTE 0
    field43_0x2e BYTE 0
    field44_0x2f BYTE 0
    field45_0x30 BYTE 0
    field46_0x31 BYTE 0
    field47_0x32 BYTE 0
    field48_0x33 BYTE 0
    field49_0x34 BYTE 0
    field50_0x35 BYTE 0
    field51_0x36 BYTE 0
    field52_0x37 BYTE 0
    field53_0x38 BYTE 0
    field54_0x39 BYTE 0
    field55_0x3a BYTE 0
    field56_0x3b BYTE 0
    field57_0x3c BYTE 0
    field58_0x3d BYTE 0
    field59_0x3e BYTE 0
    field60_0x3f BYTE 0
    field61_0x40 BYTE 0
    field62_0x41 BYTE 0
    field63_0x42 BYTE 0
    field64_0x43 BYTE 0
    field65_0x44 BYTE 0
    field66_0x45 BYTE 0
    field67_0x46 BYTE 0
    field68_0x47 BYTE 0
    field69_0x48 BYTE 0
    field70_0x49 BYTE 0
    field71_0x4a BYTE 0
    field72_0x4b BYTE 0
    field73_0x4c BYTE 0
    field74_0x4d BYTE 0
    field75_0x4e BYTE 0
    field76_0x4f BYTE 0
    field77_0x50 BYTE 0
    field78_0x51 BYTE 0
    field79_0x52 BYTE 0
    field80_0x53 BYTE 0
    texture BYTE 4 dup (0)
    format DWORD 0
    field83_0x5c BYTE 0
    field84_0x5d BYTE 0
    field85_0x5e BYTE 0
    field86_0x5f BYTE 0
    unkInt1 DWORD 0
    field88_0x64 BYTE 0
    field89_0x65 BYTE 0
    unkShort1 WORD 0
TextureDesc ENDS
TwinsanityMaterial STRUCT
    field0_0x0 WORD 0
    field1_0x2 WORD 0
    id DWORD 0
    shader DWORD 0; TwinsanityMaterialShader *
    field4_0xc DWORD 0
TwinsanityMaterial ENDS
SectionReaderAbstract STRUCT
    vtable DWORD 0; SectionReaderAbstract_VTable *
SectionReaderAbstract ENDS
SectionReaderUnknownX STRUCT
    parent SectionReaderAbstract {}
    someIndex DWORD 0
    oleg DWORD 0; Oleg *
SectionReaderUnknownX ENDS
SectionDataGameObjectBase STRUCT
    parent CodeSectionDataAbstract {}
    elementsCount DWORD 0
    elements DWORD 0; GameObject * *
    indexes DWORD 0; short *
    field4_0x10 DWORD 0
    gameObjectList DWORD 0; ResourceListGameObject *
SectionDataGameObjectBase ENDS
SectionDataAnimationBase STRUCT
    parent CodeSectionDataAbstract {}
    flags DWORD 0
    elements DWORD 0; Animation * *
    indexes DWORD 0; short *
    field4_0x10 DWORD 0
    animationList DWORD 0; ResourceListAnimation *
SectionDataAnimationBase ENDS
SectionDataScriptBase STRUCT
    parent CodeSectionDataAbstract {}
    flags DWORD 0
    elements DWORD 0; ScriptAbstract * *
    indexes DWORD 0; short *
    field4_0x10 DWORD 0
    scriptList DWORD 0; ResourceListScript *
SectionDataScriptBase ENDS
SectionDataCodeModelBase STRUCT
    parent CodeSectionDataAbstract {}
    flags DWORD 0
    elements DWORD 0; CodeModel * *
    indexes DWORD 0; short *
    field4_0x10 DWORD 0
    codeModelList DWORD 0; ResourceListCodeModel *
SectionDataCodeModelBase ENDS
SectionDataOGIBase STRUCT
    parent CodeSectionDataAbstract {}
    flags DWORD 0
    elements DWORD 0; OGI * *
    indexes DWORD 0; short *
    field4_0x10 DWORD 0
    ogiList DWORD 0; ResourceListOGI *
SectionDataOGIBase ENDS
Credits STRUCT
    flags DWORD 0
    font DWORD 0; Font *
    stream MemoryStream {}
    lines DWORD 0; char * *
    field4_0x20 REAL4 0.0;
    field5_0x24 REAL4 0.0;
    lineSpacing REAL4 0.0;
    field7_0x2c REAL4 0.0;
    creditsOffset REAL4 0.0;
Credits ENDS
ChunkData STRUCT
    chunkRef DWORD 0; ChunkDataRefCounter *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0; int *
    field4_0x10 Matrix4 {}
    field5_0x50 Matrix4 {}
    field6_0x90 Matrix4 {}
    field7_0xd0 Matrix4 {}
    field8_0x110 BYTE 0
    field9_0x111 BYTE 0
    field10_0x112 BYTE 0
    field11_0x113 BYTE 0
    field12_0x114 DWORD 0
    field13_0x118 REAL4 0.0;
    field14_0x11c REAL4 0.0;
    sceneryFlags DWORD 0
    field16_0x124 DWORD 0
    field17_0x128 BYTE 0
    field18_0x129 BYTE 0
    field19_0x12a BYTE 0
    field20_0x12b BYTE 0
    chunkName TwinString {}
    chunkName2 TwinString {}
    sceneryRoot DWORD 0; void *
    next DWORD 0; ChunkData *
    previous DWORD 0; ChunkData *
    chunkLinksMatrices DWORD 0; void *
    timers DWORD 0; UnkTimePack *
    field28_0x158 DWORD 0
    nodes DWORD 0; AutoClass4 *
    array769 BYTE 4 dup (0)
    field31_0x164 DWORD 0; ushort *
    field32_0x168 BYTE 0
    field33_0x169 BYTE 0
    field34_0x16a BYTE 0
    field35_0x16b BYTE 0
    field36_0x16c BYTE 0
    field37_0x16d BYTE 0
    field38_0x16e BYTE 0
    field39_0x16f BYTE 0
    field40_0x170 BYTE 0
    field41_0x171 BYTE 0
    field42_0x172 BYTE 0
    field43_0x173 BYTE 0
    field44_0x174 BYTE 0
    field45_0x175 BYTE 0
    field46_0x176 BYTE 0
    field47_0x177 BYTE 0
    field48_0x178 BYTE 0
    field49_0x179 BYTE 0
    field50_0x17a BYTE 0
    field51_0x17b BYTE 0
    field52_0x17c BYTE 0
    field53_0x17d BYTE 0
    field54_0x17e BYTE 0
    field55_0x17f BYTE 0
    field56_0x180 BYTE 0
    field57_0x181 BYTE 0
    field58_0x182 BYTE 0
    field59_0x183 BYTE 0
    field60_0x184 BYTE 0
    field61_0x185 BYTE 0
    field62_0x186 BYTE 0
    field63_0x187 BYTE 0
    field64_0x188 BYTE 0
    field65_0x189 BYTE 0
    field66_0x18a BYTE 0
    field67_0x18b BYTE 0
    field68_0x18c BYTE 0
    field69_0x18d BYTE 0
    field70_0x18e BYTE 0
    field71_0x18f BYTE 0
    field72_0x190 BYTE 0
    field73_0x191 BYTE 0
    field74_0x192 BYTE 0
    field75_0x193 BYTE 0
    field76_0x194 BYTE 0
    field77_0x195 BYTE 0
    field78_0x196 BYTE 0
    field79_0x197 BYTE 0
    field80_0x198 BYTE 0
    field81_0x199 BYTE 0
    field82_0x19a BYTE 0
    field83_0x19b BYTE 0
    field84_0x19c BYTE 0
    field85_0x19d BYTE 0
    field86_0x19e BYTE 0
    field87_0x19f BYTE 0
    field88_0x1a0 BYTE 0
    field89_0x1a1 BYTE 0
    field90_0x1a2 BYTE 0
    field91_0x1a3 BYTE 0
    field92_0x1a4 BYTE 0
    field93_0x1a5 BYTE 0
    field94_0x1a6 BYTE 0
    field95_0x1a7 BYTE 0
    field96_0x1a8 BYTE 0
    field97_0x1a9 BYTE 0
    field98_0x1aa BYTE 0
    field99_0x1ab BYTE 0
    field100_0x1ac BYTE 0
    field101_0x1ad BYTE 0
    field102_0x1ae BYTE 0
    field103_0x1af BYTE 0
    field104_0x1b0 BYTE 0
    field105_0x1b1 BYTE 0
    field106_0x1b2 BYTE 0
    field107_0x1b3 BYTE 0
    field108_0x1b4 BYTE 0
    field109_0x1b5 BYTE 0
    field110_0x1b6 BYTE 0
    field111_0x1b7 BYTE 0
    field112_0x1b8 BYTE 0
    field113_0x1b9 BYTE 0
    field114_0x1ba BYTE 0
    field115_0x1bb BYTE 0
    collisionData DWORD 0; CollisionData *
    chunkLightController DWORD 0; LightController *
    str1 TwinString {}
    skydomeID DWORD 0
    skydome DWORD 0; void *
    field121_0x1d8 DWORD 0; void *
    field122_0x1dc DWORD 0; AutoClass5 *
    field123_0x1e0 DWORD 0
    dynamicScenery DWORD 0; void *
    field125_0x1e8 BYTE 0
    field126_0x1e9 BYTE 0
    field127_0x1ea BYTE 0
    field128_0x1eb BYTE 0
    field129_0x1ec BYTE 0
    field130_0x1ed BYTE 0
    field131_0x1ee BYTE 0
    field132_0x1ef BYTE 0
ChunkData ENDS
UnkFamily10BaseSub STRUCT
    ptrArray DWORD 0; UnkFamily8Abstract * *
    cnt DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
UnkFamily10BaseSub ENDS
UnkFamily10Base STRUCT
    vtable DWORD 0; UnkFamily10Base_VTable *
    name DWORD 0; char *
    buffer1 DWORD 0; byte *
    buffer1length DWORD 0
    buffer2 DWORD 0; byte *
    buffer2length DWORD 0
    field6_0x18 DWORD 0
    field7_0x1c DWORD 0
    field8_0x20 DWORD 0
    field9_0x24 DWORD 0
    field10_0x28 DWORD 0
    field11_0x2c DWORD 0
    field12_0x30 DWORD 0
    field13_0x34 DWORD 0
    field14_0x38 DWORD 0
    field15_0x3c DWORD 0
    field16_0x40 UnkFamily10BaseSub {}
UnkFamily10Base ENDS
UnkFamily10Z STRUCT
    parent UnkFamily10Base {}
    field1_0x50 DWORD 0; pointer
UnkFamily10Z ENDS
UnkFamily10ZA STRUCT
    parent UnkFamily10Z {}
    field1_0x50 DWORD 0
    field2_0x54 DWORD 0
    field3_0x58 DWORD 0; void *
    field4_0x5c DWORD 0; void *
UnkFamily10ZA ENDS
UnkFamily10S STRUCT
    parent UnkFamily10Base {}
    field1_0x50 DWORD 0; undefined4 *
UnkFamily10S ENDS
UnkFamily10VJ STRUCT
    parent UnkFamily10Base {}
UnkFamily10VJ ENDS
UnkFamily10V STRUCT
    parent UnkFamily10Base {}
UnkFamily10V ENDS
UnkFamily10VK STRUCT
    parent UnkFamily10V {}
UnkFamily10VK ENDS
UnkFamily10Y STRUCT
    parent UnkFamily10Base {}
UnkFamily10Y ENDS
UnkFamily10R STRUCT
    parent UnkFamily10Base {}
    field1_0x50 UnkFamily10VJ {}
    field2_0xa0 UnkFamily10VK {}
    field3_0xf0 BYTE 0
    field4_0xf1 BYTE 0
    field5_0xf2 BYTE 0
    field6_0xf3 BYTE 0
    field7_0xf4 UnkFamily10Y {}
UnkFamily10R ENDS
UnkFamily10Q STRUCT
    parent UnkFamily10Base {}
    field1_0x50 BYTE 0
    field2_0x51 BYTE 0
    field3_0x52 BYTE 0
    field4_0x53 BYTE 0
    field5_0x54 BYTE 0
    field6_0x55 BYTE 0
    field7_0x56 BYTE 0
    field8_0x57 BYTE 0
    field9_0x58 BYTE 0
    field10_0x59 BYTE 0
    field11_0x5a BYTE 0
    field12_0x5b BYTE 0
    field13_0x5c BYTE 0
    field14_0x5d BYTE 0
    field15_0x5e BYTE 0
    field16_0x5f BYTE 0
    field17_0x60 BYTE 0
    field18_0x61 BYTE 0
    field19_0x62 BYTE 0
    field20_0x63 BYTE 0
    field21_0x64 DWORD 0; OlegModuleA *
    field22_0x68 BYTE 0
    field23_0x69 BYTE 0
    field24_0x6a BYTE 0
    field25_0x6b BYTE 0
    field26_0x6c BYTE 0
    field27_0x6d BYTE 0
    field28_0x6e BYTE 0
    field29_0x6f BYTE 0
    field30_0x70 BYTE 0
    field31_0x71 BYTE 0
    field32_0x72 BYTE 0
    field33_0x73 BYTE 0
    field34_0x74 BYTE 0
    field35_0x75 BYTE 0
    field36_0x76 BYTE 0
    field37_0x77 BYTE 0
UnkFamily10Q ENDS
UnkTimePack STRUCT
    flags DWORD 0
    time1 DWORD 0
    time2 DWORD 0
UnkTimePack ENDS
AutoClass53 STRUCT
    flags DWORD 0
    _str TwinString {}
    index WORD 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    unkStruct1 AutoClass52 {}
    unkStruct2 AutoClass52 {}
AutoClass53 ENDS
IteratorAAbstract STRUCT
    vtable DWORD 0; IteratorTypeABase_VTable *
IteratorAAbstract ENDS
IteratorA5Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA5Abstract ENDS
IteratorA5 STRUCT
    parent IteratorA5Abstract {}
    stringCollection DWORD 0; StringCollection *
    strIndex DWORD 0
IteratorA5 ENDS
GameObjectScriptPack STRUCT
    cnt DWORD 0
    actionList DWORD 0; ActionAbstract *
GameObjectScriptPack ENDS
GameObjectIdListShort STRUCT
    idList DWORD 0; short *
    count DWORD 0
GameObjectIdListShort ENDS
GameObject STRUCT
    field0_0x0 DWORD 0; int *
    index DWORD 0
    field2_0x8 BYTE 12 dup (0)
    gameObjectName TwinString {}
    parameters DWORD 0; ParameterTable *
    references DWORD 0; GameObjectResourceReferences *
    scriptPack GameObjectScriptPack {}
    triggerScripts GameObjectIdListShort {}
    ogiSlots GameObjectIdListShort {}
    animationSlots GameObjectIdListShort {}
    scriptSlots GameObjectIdListShort {}
    objectSlots GameObjectIdListShort {}
    soundSlots GameObjectIdListShort {}
GameObject ENDS
BaseBuilder STRUCT
    vtable DWORD 0; BaseBuilder_VTable *
BaseBuilder ENDS
FileResourceDescB STRUCT
    parent FileResourceDescAbstract {}
    buffer DWORD 0
    _size DWORD 0
FileResourceDescB ENDS
AutoClass23 STRUCT
    stream DWORD 0; MemoryStream *
    dataStream DWORD 0; short *
    waveFcc DWORD 0
    waveOffset DWORD 0
AutoClass23 ENDS
RIFFContainer STRUCT
    fourcc DWORD 0
    parentRiff DWORD 0; RIFFContainer *
    streamDataPtr DWORD 0; byte *
    waveOffset DWORD 0
    wave DWORD 0
    field5_0x14 DWORD 0
RIFFContainer ENDS
WaveHeader STRUCT
    streamData1 DWORD 0; byte *
    riff RIFFContainer {}
    fmt RIFFContainer {}
    data RIFFContainer {}
WaveHeader ENDS
InputBinding2 STRUCT
    field0_0x0 BYTE 4 dup (0)
    flags DWORD 0
InputBinding2 ENDS
InputBinding1 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    flags DWORD 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
InputBinding1 ENDS
AutoClass58SubCollection STRUCT
    array DWORD 0; RendererText * *
    count DWORD 0
    capacity DWORD 0
    step DWORD 0
AutoClass58SubCollection ENDS
AutoClass58 STRUCT
    font DWORD 0; Font *
    textRendererCollection AutoClass58SubCollection {}
AutoClass58 ENDS
BHTable STRUCT
    collection DWORD 0; BHRecord *
    cnt WORD 0
    field2_0x6 WORD 0
    step WORD 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc DWORD 0
    stringCollection StringCollection {}
    packageName TwinString {}
BHTable ENDS
SectionReaderBH STRUCT
    parent SectionReaderAbstract {}
    bhTable DWORD 0; BHTable *
    packageName TwinString {}
SectionReaderBH ENDS
FileResourceDescF STRUCT
    parent FileResourceDescAbstract {}
    fname TwinString {}
    field2_0x14 BYTE 0
    flag1 BYTE 0
    flag2 BYTE 0
    field5_0x17 BYTE 0
FileResourceDescF ENDS
AutoClass14 STRUCT
    array DWORD 0; InstanceContext * *
    field1_0x4 WORD 0
    cnt WORD 0
    field3_0x8 DWORD 0
    field4_0xc DWORD 0
    field5_0x10 DWORD 0
    field6_0x14 DWORD 0
    field7_0x18 DWORD 0
    field8_0x1c DWORD 0
    field9_0x20 DWORD 0
AutoClass14 ENDS
AutoClass62 STRUCT
    vtable DWORD 0; undefined * *
    maxValue REAL4 0.0;
    currentValue REAL4 0.0;
    arg REAL4 0.0;
    field4_0x10 DWORD 0
    next DWORD 0; AutoClass62 *
    field6_0x18 BYTE 0
    field7_0x19 BYTE 0
    field8_0x1a BYTE 0
    field9_0x1b BYTE 0
    field10_0x1c BYTE 0
    field11_0x1d BYTE 0
    field12_0x1e BYTE 0
    field13_0x1f BYTE 0
AutoClass62 ENDS
UnkFamily15Abstract STRUCT
    vtable DWORD 0; UnkFamily15Abstract_VT *
UnkFamily15Abstract ENDS
UnkFamily15A STRUCT
    parent UnkFamily15Abstract {}
    array BYTE 32 dup (0)
UnkFamily15A ENDS
AutoClass16 STRUCT
    levelName TwinString {}
    strCnt WORD 0
    field2_0xe BYTE 0
    field3_0xf BYTE 0
    defaultRm DWORD 0; UnkFamily16A *
    chunkData DWORD 0; ChunkDataRefCounter *
    indexToIdList DWORD 0; IndexToIdList *
    field7_0x1c DWORD 0; UnkFamily15A *
    field8_0x20 DWORD 0; UnkFamily15A *
    field9_0x24 WORD 0
    field10_0x26 BYTE 0
    field11_0x27 BYTE 0
    field12_0x28 DWORD 0; UnkFamily12Base *
    field13_0x2c DWORD 0
    field14_0x30 DWORD 0
    field15_0x34 DWORD 0
AutoClass16 ENDS
SectionReaderRM STRUCT
    parent SectionReaderAbstract {}
    sectionId DWORD 0
    unkPointer DWORD 0; pointer
    data DWORD 0; SectionRM *
SectionReaderRM ENDS
CollisionData STRUCT
    buffer DWORD 0; pointer *
    triggerCnt DWORD 0
    groupCnt DWORD 0
    polysCnt DWORD 0
    vertexCnt DWORD 0
    triggersIndex DWORD 0
    groupsIndex DWORD 0
    polysIndex DWORD 0
    vertexesIndex DWORD 0
    field9_0x24 BYTE 0
    field10_0x25 BYTE 0
    field11_0x26 BYTE 0
    field12_0x27 BYTE 0
CollisionData ENDS
SectionReaderCollisionData STRUCT
    parent SectionReaderAbstract {}
    unkField BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    sectionOffset DWORD 0
    data DWORD 0; CollisionData *
SectionReaderCollisionData ENDS
UnkStruct4 STRUCT
    textureId DWORD 0
    materialId DWORD 0
    field2_0x8 DWORD 0; TwinsanityMaterial *
    field3_0xc DWORD 0; void *
    field4_0x10 DWORD 0; void *
    field5_0x14 DWORD 0; TwinsanityMaterialShader *
    field6_0x18 DWORD 0; void *
UnkStruct4 ENDS
CollectionInstanceTemplateWrapper STRUCT
    collectionPtr DWORD 0; CollectionInstanceTemplate *
CollectionInstanceTemplateWrapper ENDS
CollectionInstanceWrapper STRUCT
    collectionPtr DWORD 0; CollectionInstance *
CollectionInstanceWrapper ENDS
CollectionAiPositionWrapper STRUCT
    collectionPtr DWORD 0; CollectionAiPosition *
CollectionAiPositionWrapper ENDS
CollectionAiPathWrapper STRUCT
    collectionPtr DWORD 0; CollectionAiPath *
CollectionAiPathWrapper ENDS
CollectionPositionWrapper STRUCT
    collectionPtr DWORD 0; CollectionPosition *
CollectionPositionWrapper ENDS
CollectionPathWrapper STRUCT
    collectionPtr DWORD 0; CollectionPath *
CollectionPathWrapper ENDS
CollectionTriggerWrapper STRUCT
    collectionPtr DWORD 0; CollectionTrigger *
CollectionTriggerWrapper ENDS
CollectionCameraTriggerWrapper STRUCT
    collectionPtr DWORD 0; CollectionCameraTrigger *
CollectionCameraTriggerWrapper ENDS
CollectionCollisionSurfaceWrapper STRUCT
    collectionPtr DWORD 0; CollectionCollisionSurface *
CollectionCollisionSurfaceWrapper ENDS
InstanceSectionResources STRUCT
    flags DWORD 0
    gameResources DWORD 0; GameResources *
    chunkMeta DWORD 0; ChunkMeta *
    instanceTemplates CollectionInstanceTemplateWrapper {}
    instances CollectionInstanceWrapper {}
    aiPositions CollectionAiPositionWrapper {}
    aiPaths CollectionAiPathWrapper {}
    positions CollectionPositionWrapper {}
    paths CollectionPathWrapper {}
    triggers CollectionTriggerWrapper {}
    cameras CollectionCameraTriggerWrapper {}
    collisionSurfaces CollectionCollisionSurfaceWrapper {}
    ctxList DWORD 0; InstanceContextList *
    field13_0x34 DWORD 0
    collectionPosition DWORD 0; CollectionPosition *
    collectionPath DWORD 0; CollectionPath *
InstanceSectionResources ENDS
SectionInstanceTemplate STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    instanceTemplates DWORD 0; CollectionInstanceTemplateWrapper *
    cnt DWORD 0
SectionInstanceTemplate ENDS
SectionInstanceInstance STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    instances DWORD 0; CollectionInstanceWrapper *
    cnt DWORD 0
SectionInstanceInstance ENDS
SectionInstanceAiPosition STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    aiPositions DWORD 0; CollectionAiPositionWrapper *
    cnt DWORD 0
SectionInstanceAiPosition ENDS
SectionInstanceAiPath STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    aiPaths DWORD 0; CollectionAiPathWrapper *
    cnt DWORD 0
SectionInstanceAiPath ENDS
SectionInstancePosition STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionPosition DWORD 0; CollectionPositionWrapper *
    cnt DWORD 0
SectionInstancePosition ENDS
SectionInstancePath STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionPath DWORD 0; CollectionPathWrapper *
    cnt DWORD 0
SectionInstancePath ENDS
SectionInstanceTrigger STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionTrigger DWORD 0; CollectionTriggerWrapper *
    cnt DWORD 0
SectionInstanceTrigger ENDS
SectionInstanceCamera STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    colectionCameraTrigger DWORD 0; CollectionCameraTriggerWrapper *
    cnt DWORD 0
SectionInstanceCamera ENDS
SectionInstanceCollisionSurface STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionCollisionSurface DWORD 0; CollectionCollisionSurfaceWrapper *
    cnt DWORD 0
SectionInstanceCollisionSurface ENDS
SectionInstance STRUCT
    parent SectionAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    instanceTemplateSection SectionInstanceTemplate {}
    instanceSection SectionInstanceInstance {}
    aiPositionSection SectionInstanceAiPosition {}
    aiPathSection SectionInstanceAiPath {}
    positionSection SectionInstancePosition {}
    pathSection SectionInstancePath {}
    triggerSection SectionInstanceTrigger {}
    cameraSection SectionInstanceCamera {}
    collisionSurfaceSection SectionInstanceCollisionSurface {}
SectionInstance ENDS
PerceptAbstract STRUCT
    vtable DWORD 0; undefined * *
    PerceptID DWORD 0
    Interval REAL4 0.0;
    Threshold REAL4 0.0;
    ThresholdInverse REAL4 0.0;
PerceptAbstract ENDS
PerceptTimeInUnit STRUCT
    parent PerceptAbstract {}
PerceptTimeInUnit ENDS
PerceptNext STRUCT
    parent PerceptAbstract {}
PerceptNext ENDS
PerceptElse STRUCT
    parent PerceptAbstract {}
PerceptElse ENDS
PerceptRandom STRUCT
    parent PerceptAbstract {}
PerceptRandom ENDS
PerceptIsCollidable STRUCT
    parent PerceptAbstract {}
PerceptIsCollidable ENDS
PerceptIsVisible STRUCT
    parent PerceptAbstract {}
PerceptIsVisible ENDS
PerceptIsInExternalScript STRUCT
    parent PerceptAbstract {}
PerceptIsInExternalScript ENDS
PerceptAnimationFinished STRUCT
    parent PerceptAbstract {}
PerceptAnimationFinished ENDS
PerceptIsPathComplete STRUCT
    parent PerceptAbstract {}
PerceptIsPathComplete ENDS
PerceptMeToInitPosSqrDist STRUCT
    parent PerceptAbstract {}
PerceptMeToInitPosSqrDist ENDS
PerceptMeToFocusSqrDist STRUCT
    parent PerceptAbstract {}
PerceptMeToFocusSqrDist ENDS
PerceptCurrentKey STRUCT
    parent PerceptAbstract {}
PerceptCurrentKey ENDS
PerceptIsLoadZoneStateSet STRUCT
    parent PerceptAbstract {}
PerceptIsLoadZoneStateSet ENDS
PerceptGotRoute STRUCT
    parent PerceptAbstract {}
PerceptGotRoute ENDS
PerceptGotKeys STRUCT
    parent PerceptAbstract {}
PerceptGotKeys ENDS
PerceptInsideEdgeStartNode STRUCT
    parent PerceptAbstract {}
PerceptInsideEdgeStartNode ENDS
PerceptInsideEdgeEndNode STRUCT
    parent PerceptAbstract {}
PerceptInsideEdgeEndNode ENDS
PerceptMeFacingFocus STRUCT
    parent PerceptAbstract {}
PerceptMeFacingFocus ENDS
PerceptFocusFacingMe STRUCT
    parent PerceptAbstract {}
PerceptFocusFacingMe ENDS
PerceptClearLineOfSightToFocus STRUCT
    parent PerceptAbstract {}
PerceptClearLineOfSightToFocus ENDS
PerceptFocusAgentCanSeeMe STRUCT
    parent PerceptAbstract {}
PerceptFocusAgentCanSeeMe ENDS
PerceptCanSeeFocus STRUCT
    parent PerceptAbstract {}
PerceptCanSeeFocus ENDS
PerceptMeFacingRouteNode STRUCT
    parent PerceptAbstract {}
PerceptMeFacingRouteNode ENDS
PerceptClearLineOfSightToRouteNode STRUCT
    parent PerceptAbstract {}
PerceptClearLineOfSightToRouteNode ENDS
PerceptHeightAboveFocus STRUCT
    parent PerceptAbstract {}
PerceptHeightAboveFocus ENDS
PerceptMeFacingCamera STRUCT
    parent PerceptAbstract {}
PerceptMeFacingCamera ENDS
PerceptCameraFacingMe STRUCT
    parent PerceptAbstract {}
PerceptCameraFacingMe ENDS
PerceptInCameraFrustrum STRUCT
    parent PerceptAbstract {}
PerceptInCameraFrustrum ENDS
PerceptClearLineOfSightToCamera STRUCT
    parent PerceptAbstract {}
PerceptClearLineOfSightToCamera ENDS
PerceptCameraCanSeeMe STRUCT
    parent PerceptAbstract {}
PerceptCameraCanSeeMe ENDS
PerceptHeadLookingAtFocus STRUCT
    parent PerceptAbstract {}
PerceptHeadLookingAtFocus ENDS
PerceptHeadCanSeeFocus STRUCT
    parent PerceptAbstract {}
PerceptHeadCanSeeFocus ENDS
PerceptHeadLookingAtRouteNode STRUCT
    parent PerceptAbstract {}
PerceptHeadLookingAtRouteNode ENDS
PerceptFocusHeadLookingAtMe STRUCT
    parent PerceptAbstract {}
PerceptFocusHeadLookingAtMe ENDS
PerceptFocusHeadCanSeeMe STRUCT
    parent PerceptAbstract {}
PerceptFocusHeadCanSeeMe ENDS
PerceptGotAnyFocus STRUCT
    parent PerceptAbstract {}
PerceptGotAnyFocus ENDS
PerceptFocusActorEquals STRUCT
    parent PerceptAbstract {}
PerceptFocusActorEquals ENDS
PerceptActorSubtypeEquals STRUCT
    parent PerceptAbstract {}
PerceptActorSubtypeEquals ENDS
PerceptAttachedToAnAgent STRUCT
    parent PerceptAbstract {}
PerceptAttachedToAnAgent ENDS
PerceptGotAttachedObject STRUCT
    parent PerceptAbstract {}
PerceptGotAttachedObject ENDS
PerceptGotAnyUserMessage STRUCT
    parent PerceptAbstract {}
PerceptGotAnyUserMessage ENDS
PerceptGotUserMessageEquals STRUCT
    parent PerceptAbstract {}
PerceptGotUserMessageEquals ENDS
PerceptCurrentKeyEquals STRUCT
    parent PerceptAbstract {}
PerceptCurrentKeyEquals ENDS
PerceptTouchingTerrain STRUCT
    parent PerceptAbstract {}
PerceptTouchingTerrain ENDS
PerceptTouchingAnyAgent STRUCT
    parent PerceptAbstract {}
PerceptTouchingAnyAgent ENDS
PerceptGotAttachmentOnExit STRUCT
    parent PerceptAbstract {}
PerceptGotAttachmentOnExit ENDS
PerceptGotFocusObject STRUCT
    parent PerceptAbstract {}
PerceptGotFocusObject ENDS
PerceptGotFocusPosition STRUCT
    parent PerceptAbstract {}
PerceptGotFocusPosition ENDS
PerceptGetAnimationTimeRemaining STRUCT
    parent PerceptAbstract {}
PerceptGetAnimationTimeRemaining ENDS
PerceptCounterValue STRUCT
    parent PerceptAbstract {}
PerceptCounterValue ENDS
PerceptCounterValueEqualsThreshold STRUCT
    parent PerceptAbstract {}
PerceptCounterValueEqualsThreshold ENDS
PerceptIsResting STRUCT
    parent PerceptAbstract {}
PerceptIsResting ENDS
PerceptSqrMoveSpeed STRUCT
    parent PerceptAbstract {}
PerceptSqrMoveSpeed ENDS
PerceptFocusHasAttachment STRUCT
    parent PerceptAbstract {}
PerceptFocusHasAttachment ENDS
PerceptLostAllAttachments STRUCT
    parent PerceptAbstract {}
PerceptLostAllAttachments ENDS
PerceptIsBusy STRUCT
    parent PerceptAbstract {}
PerceptIsBusy ENDS
PerceptFocusIsBusy STRUCT
    parent PerceptAbstract {}
PerceptFocusIsBusy ENDS
PerceptSoftFlagSet STRUCT
    parent PerceptAbstract {}
PerceptSoftFlagSet ENDS
PerceptSpeedTowardsNextKey STRUCT
    parent PerceptAbstract {}
PerceptSpeedTowardsNextKey ENDS
PerceptBoxAboveIsOverlapped STRUCT
    parent PerceptAbstract {}
PerceptBoxAboveIsOverlapped ENDS
PerceptGotLinkedObject STRUCT
    parent PerceptAbstract {}
PerceptGotLinkedObject ENDS
PerceptXCycle STRUCT
    parent PerceptAbstract {}
PerceptXCycle ENDS
PerceptYCycle STRUCT
    parent PerceptAbstract {}
PerceptYCycle ENDS
PerceptZCycle STRUCT
    parent PerceptAbstract {}
PerceptZCycle ENDS
PerceptMeToCurrentKeySqrDist STRUCT
    parent PerceptAbstract {}
PerceptMeToCurrentKeySqrDist ENDS
Percept0x04D STRUCT
    parent PerceptAbstract {}
Percept0x04D ENDS
Percept0x04E STRUCT
    parent PerceptAbstract {}
Percept0x04E ENDS
Percept0x04F STRUCT
    parent PerceptAbstract {}
Percept0x04F ENDS
Percept0x050 STRUCT
    parent PerceptAbstract {}
Percept0x050 ENDS
Percept0x051 STRUCT
    parent PerceptAbstract {}
Percept0x051 ENDS
Percept0x052 STRUCT
    parent PerceptAbstract {}
Percept0x052 ENDS
Percept0x053 STRUCT
    parent PerceptAbstract {}
Percept0x053 ENDS
Percept0x054 STRUCT
    parent PerceptAbstract {}
Percept0x054 ENDS
Percept0x055 STRUCT
    parent PerceptAbstract {}
Percept0x055 ENDS
Percept0x056 STRUCT
    parent PerceptAbstract {}
Percept0x056 ENDS
Percept0x057 STRUCT
    parent PerceptAbstract {}
Percept0x057 ENDS
Percept0x058 STRUCT
    parent PerceptAbstract {}
Percept0x058 ENDS
Percept0x059 STRUCT
    parent PerceptAbstract {}
Percept0x059 ENDS
Percept0x05A STRUCT
    parent PerceptAbstract {}
Percept0x05A ENDS
Percept0x05B STRUCT
    parent PerceptAbstract {}
Percept0x05B ENDS
Percept0x05C STRUCT
    parent PerceptAbstract {}
Percept0x05C ENDS
Percept0x05D STRUCT
    parent PerceptAbstract {}
Percept0x05D ENDS
Percept0x05E STRUCT
    parent PerceptAbstract {}
Percept0x05E ENDS
Percept0x05F STRUCT
    parent PerceptAbstract {}
Percept0x05F ENDS
Percept0x060 STRUCT
    parent PerceptAbstract {}
Percept0x060 ENDS
Percept0x061 STRUCT
    parent PerceptAbstract {}
Percept0x061 ENDS
Percept0x062 STRUCT
    parent PerceptAbstract {}
Percept0x062 ENDS
Percept0x063 STRUCT
    parent PerceptAbstract {}
Percept0x063 ENDS
Percept0x064 STRUCT
    parent PerceptAbstract {}
Percept0x064 ENDS
Percept0x065 STRUCT
    parent PerceptAbstract {}
Percept0x065 ENDS
Percept0x066 STRUCT
    parent PerceptAbstract {}
Percept0x066 ENDS
Percept0x067 STRUCT
    parent PerceptAbstract {}
Percept0x067 ENDS
Percept0x068 STRUCT
    parent PerceptAbstract {}
Percept0x068 ENDS
Percept0x069 STRUCT
    parent PerceptAbstract {}
Percept0x069 ENDS
Percept0x06A STRUCT
    parent PerceptAbstract {}
Percept0x06A ENDS
Percept0x06B STRUCT
    parent PerceptAbstract {}
Percept0x06B ENDS
Percept0x06C STRUCT
    parent PerceptAbstract {}
Percept0x06C ENDS
Percept0x06D STRUCT
    parent PerceptAbstract {}
Percept0x06D ENDS
Percept0x06E STRUCT
    parent PerceptAbstract {}
Percept0x06E ENDS
Percept0x06F STRUCT
    parent PerceptAbstract {}
Percept0x06F ENDS
Percept0x070 STRUCT
    parent PerceptAbstract {}
Percept0x070 ENDS
Percept0x071 STRUCT
    parent PerceptAbstract {}
Percept0x071 ENDS
Percept0x072 STRUCT
    parent PerceptAbstract {}
Percept0x072 ENDS
Percept0x073 STRUCT
    parent PerceptAbstract {}
Percept0x073 ENDS
Percept0x074 STRUCT
    parent PerceptAbstract {}
Percept0x074 ENDS
Percept0x075 STRUCT
    parent PerceptAbstract {}
Percept0x075 ENDS
Percept0x076 STRUCT
    parent PerceptAbstract {}
Percept0x076 ENDS
Percept0x077 STRUCT
    parent PerceptAbstract {}
Percept0x077 ENDS
Percept0x078 STRUCT
    parent PerceptAbstract {}
Percept0x078 ENDS
Percept0x079 STRUCT
    parent PerceptAbstract {}
Percept0x079 ENDS
Percept0x07A STRUCT
    parent PerceptAbstract {}
Percept0x07A ENDS
Percept0x07B STRUCT
    parent PerceptAbstract {}
Percept0x07B ENDS
Percept0x07C STRUCT
    parent PerceptAbstract {}
Percept0x07C ENDS
Percept0x07D STRUCT
    parent PerceptAbstract {}
Percept0x07D ENDS
Percept0x07E STRUCT
    parent PerceptAbstract {}
Percept0x07E ENDS
Percept0x07F STRUCT
    parent PerceptAbstract {}
Percept0x07F ENDS
Percept0x080 STRUCT
    parent PerceptAbstract {}
    field1_0x14 DWORD 0
    field2_0x18 DWORD 0
Percept0x080 ENDS
Percept0x081 STRUCT
    parent PerceptAbstract {}
Percept0x081 ENDS
Percept0x082 STRUCT
    parent PerceptAbstract {}
Percept0x082 ENDS
Percept0x083 STRUCT
    parent PerceptAbstract {}
Percept0x083 ENDS
Percept0x084 STRUCT
    parent PerceptAbstract {}
Percept0x084 ENDS
Percept0x085 STRUCT
    parent PerceptAbstract {}
Percept0x085 ENDS
Percept0x086 STRUCT
    parent PerceptAbstract {}
Percept0x086 ENDS
Percept0x087 STRUCT
    parent PerceptAbstract {}
Percept0x087 ENDS
Percept0x088 STRUCT
    parent PerceptAbstract {}
Percept0x088 ENDS
Percept0x089 STRUCT
    parent PerceptAbstract {}
Percept0x089 ENDS
Percept0x08A STRUCT
    parent PerceptAbstract {}
Percept0x08A ENDS
Percept0x08B STRUCT
    parent PerceptAbstract {}
Percept0x08B ENDS
Percept0x08C STRUCT
    parent PerceptAbstract {}
Percept0x08C ENDS
Percept0x08D STRUCT
    parent PerceptAbstract {}
Percept0x08D ENDS
Percept0x08E STRUCT
    parent PerceptAbstract {}
Percept0x08E ENDS
Percept0x08F STRUCT
    parent PerceptAbstract {}
Percept0x08F ENDS
Percept0x090 STRUCT
    parent PerceptAbstract {}
Percept0x090 ENDS
Percept0x091 STRUCT
    parent PerceptAbstract {}
Percept0x091 ENDS
Percept0x092 STRUCT
    parent PerceptAbstract {}
Percept0x092 ENDS
Percept0x093 STRUCT
    parent PerceptAbstract {}
Percept0x093 ENDS
Percept0x094 STRUCT
    parent PerceptAbstract {}
Percept0x094 ENDS
Percept0x095 STRUCT
    parent PerceptAbstract {}
Percept0x095 ENDS
Percept0x096 STRUCT
    parent PerceptAbstract {}
Percept0x096 ENDS
Percept0x097 STRUCT
    parent PerceptAbstract {}
Percept0x097 ENDS
Percept0x098 STRUCT
    parent PerceptAbstract {}
Percept0x098 ENDS
Percept0x099 STRUCT
    parent PerceptAbstract {}
Percept0x099 ENDS
Percept0x09A STRUCT
    parent PerceptAbstract {}
Percept0x09A ENDS
Percept0x09B STRUCT
    parent PerceptAbstract {}
Percept0x09B ENDS
Percept0x09C STRUCT
    parent PerceptAbstract {}
Percept0x09C ENDS
Percept0x09D STRUCT
    parent PerceptAbstract {}
Percept0x09D ENDS
Percept0x09E STRUCT
    parent PerceptAbstract {}
Percept0x09E ENDS
Percept0x09F STRUCT
    parent PerceptAbstract {}
Percept0x09F ENDS
Percept0x0A0 STRUCT
    parent PerceptAbstract {}
Percept0x0A0 ENDS
Percept0x0A1 STRUCT
    parent PerceptAbstract {}
Percept0x0A1 ENDS
Percept0x0A2 STRUCT
    parent PerceptAbstract {}
Percept0x0A2 ENDS
Percept0x0A3 STRUCT
    parent PerceptAbstract {}
    unkField DWORD 0
Percept0x0A3 ENDS
Percept0x0A4 STRUCT
    parent PerceptAbstract {}
Percept0x0A4 ENDS
Percept0x0A6 STRUCT
    parent PerceptAbstract {}
Percept0x0A6 ENDS
Percept0x0A7 STRUCT
    parent PerceptAbstract {}
Percept0x0A7 ENDS
Percept0x0A8 STRUCT
    parent PerceptAbstract {}
Percept0x0A8 ENDS
Percept0x0A9 STRUCT
    parent PerceptAbstract {}
Percept0x0A9 ENDS
Percept0x0AA STRUCT
    parent PerceptAbstract {}
Percept0x0AA ENDS
Percept0x0AB STRUCT
    parent PerceptAbstract {}
Percept0x0AB ENDS
Percept0x0AC STRUCT
    parent PerceptAbstract {}
Percept0x0AC ENDS
Percept0x0AD STRUCT
    parent PerceptAbstract {}
Percept0x0AD ENDS
Percept0x0AE STRUCT
    parent PerceptAbstract {}
Percept0x0AE ENDS
Percept0x0AF STRUCT
    parent PerceptAbstract {}
Percept0x0AF ENDS
Percept0x0B0 STRUCT
    parent PerceptAbstract {}
Percept0x0B0 ENDS
PerceptPlayerHitPoints STRUCT
    parent PerceptAbstract {}
PerceptPlayerHitPoints ENDS
PerceptPlayerIsCrouching STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsCrouching ENDS
PerceptPlayerIsGrounded STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsGrounded ENDS
PerceptMeToPlayerSqrDist STRUCT
    parent PerceptAbstract {}
PerceptMeToPlayerSqrDist ENDS
PerceptCanJumpForwards STRUCT
    parent PerceptAbstract {}
PerceptCanJumpForwards ENDS
PerceptPlayerToMyFocusSqrDist STRUCT
    parent PerceptAbstract {}
PerceptPlayerToMyFocusSqrDist ENDS
PerceptPlayerIsMoving STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsMoving ENDS
PerceptPlayerIsWalking STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsWalking ENDS
PerceptPlayerIsRunning STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsRunning ENDS
PerceptPlayerIsCrawling STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsCrawling ENDS
PerceptPlayerIsFalling STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsFalling ENDS
PerceptPlayerIsCoOpLinked STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsCoOpLinked ENDS
PerceptPlayerHoldingMultiTool STRUCT
    parent PerceptAbstract {}
PerceptPlayerHoldingMultiTool ENDS
PerceptPlayerIsSlamming STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsSlamming ENDS
PerceptPlayerIsSpinning STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsSpinning ENDS
PerceptPlayerIsJumping STRUCT
    parent PerceptAbstract {}
PerceptPlayerIsJumping ENDS
PerceptHeadCanSeePlayerUnblocked STRUCT
    parent PerceptAbstract {}
PerceptHeadCanSeePlayerUnblocked ENDS
Percept0x241 STRUCT
    parent PerceptAbstract {}
Percept0x241 ENDS
Percept0x242 STRUCT
    parent PerceptAbstract {}
Percept0x242 ENDS
Percept0x24A STRUCT
    parent PerceptAbstract {}
Percept0x24A ENDS
Percept0x24B STRUCT
    parent PerceptAbstract {}
Percept0x24B ENDS
Percept0x268 STRUCT
    parent PerceptAbstract {}
Percept0x268 ENDS
Percept0x27B STRUCT
    parent PerceptAbstract {}
Percept0x27B ENDS
Percept0x282 STRUCT
    parent PerceptAbstract {}
Percept0x282 ENDS
Percept0x284 STRUCT
    parent PerceptAbstract {}
Percept0x284 ENDS
PerceptAgentIsOnGround STRUCT
    parent PerceptAbstract {}
PerceptAgentIsOnGround ENDS
PerceptCrateHasRedWumpa STRUCT
    parent PerceptAbstract {}
PerceptCrateHasRedWumpa ENDS
PerceptAgentWasTouched STRUCT
    parent PerceptAbstract {}
PerceptAgentWasTouched ENDS
PerceptAgentWasSpun STRUCT
    parent PerceptAbstract {}
PerceptAgentWasSpun ENDS
PerceptAgentWasKneeDropped STRUCT
    parent PerceptAbstract {}
PerceptAgentWasKneeDropped ENDS
PerceptAgentWasSlid STRUCT
    parent PerceptAbstract {}
PerceptAgentWasSlid ENDS
PerceptAgentHitPoints STRUCT
    parent PerceptAbstract {}
PerceptAgentHitPoints ENDS
PerceptCanMoveForward STRUCT
    parent PerceptAbstract {}
PerceptCanMoveForward ENDS
PerceptCanMoveBackwards STRUCT
    parent PerceptAbstract {}
PerceptCanMoveBackwards ENDS
PerceptCanStrafeLeft STRUCT
    parent PerceptAbstract {}
PerceptCanStrafeLeft ENDS
PerceptCanStrafeRight STRUCT
    parent PerceptAbstract {}
PerceptCanStrafeRight ENDS
PerceptCanFall STRUCT
    parent PerceptAbstract {}
PerceptCanFall ENDS
PerceptWillHitWall STRUCT
    parent PerceptAbstract {}
PerceptWillHitWall ENDS
PerceptWillRunOffClif STRUCT
    parent PerceptAbstract {}
PerceptWillRunOffClif ENDS
PerceptAgentWasAttacked STRUCT
    parent PerceptAbstract {}
PerceptAgentWasAttacked ENDS
PerceptAgentWasJumpedOn STRUCT
    parent PerceptAbstract {}
PerceptAgentWasJumpedOn ENDS
PerceptAgentWasWalkedInto STRUCT
    parent PerceptAbstract {}
PerceptAgentWasWalkedInto ENDS
PerceptAgentWasHeadbutted STRUCT
    parent PerceptAbstract {}
PerceptAgentWasHeadbutted ENDS
PerceptWumpaNeededForPayGate STRUCT
    parent PerceptAbstract {}
PerceptWumpaNeededForPayGate ENDS
PerceptMeFacingPlayer STRUCT
    parent PerceptAbstract {}
PerceptMeFacingPlayer ENDS
PerceptPlayerFacingMe STRUCT
    parent PerceptAbstract {}
PerceptPlayerFacingMe ENDS
PerceptClearLineOfSightToPlayer STRUCT
    parent PerceptAbstract {}
PerceptClearLineOfSightToPlayer ENDS
PerceptCanSeePlayer STRUCT
    parent PerceptAbstract {}
PerceptCanSeePlayer ENDS
PerceptPlayerCanSeeMe STRUCT
    parent PerceptAbstract {}
PerceptPlayerCanSeeMe ENDS
PerceptNodeTraffic STRUCT
    parent PerceptAbstract {}
PerceptNodeTraffic ENDS
PerceptNodeIsAirborne STRUCT
    parent PerceptAbstract {}
PerceptNodeIsAirborne ENDS
PerceptEdgeNeedsJump STRUCT
    parent PerceptAbstract {}
PerceptEdgeNeedsJump ENDS
PerceptEdgeNeedsFlying STRUCT
    parent PerceptAbstract {}
PerceptEdgeNeedsFlying ENDS
PerceptEdgeNeedsLongJump STRUCT
    parent PerceptAbstract {}
PerceptEdgeNeedsLongJump ENDS
PerceptEdgeNeedsHighJump STRUCT
    parent PerceptAbstract {}
PerceptEdgeNeedsHighJump ENDS
PerceptHeightAbovePlayer STRUCT
    parent PerceptAbstract {}
PerceptHeightAbovePlayer ENDS
PerceptHeadLookingAtPlayer STRUCT
    parent PerceptAbstract {}
PerceptHeadLookingAtPlayer ENDS
PerceptHeadCanSeePlayer STRUCT
    parent PerceptAbstract {}
PerceptHeadCanSeePlayer ENDS
PerceptPlayerHeadLookingAtMe STRUCT
    parent PerceptAbstract {}
PerceptPlayerHeadLookingAtMe ENDS
PerceptPlayerHeadCanSeeMe STRUCT
    parent PerceptAbstract {}
PerceptPlayerHeadCanSeeMe ENDS
PerceptAmIHarmful STRUCT
    parent PerceptAbstract {}
PerceptAmIHarmful ENDS
Percept0x239 STRUCT
    parent PerceptAbstract {}
Percept0x239 ENDS
Percept0x23A STRUCT
    parent PerceptAbstract {}
Percept0x23A ENDS
Percept0x23B STRUCT
    parent PerceptAbstract {}
Percept0x23B ENDS
Percept0x23C STRUCT
    parent PerceptAbstract {}
Percept0x23C ENDS
Percept0x23D STRUCT
    parent PerceptAbstract {}
Percept0x23D ENDS
Percept0x23E STRUCT
    parent PerceptAbstract {}
Percept0x23E ENDS
Percept0x23F STRUCT
    parent PerceptAbstract {}
Percept0x23F ENDS
Percept0x240 STRUCT
    parent PerceptAbstract {}
Percept0x240 ENDS
Percept0x243 STRUCT
    parent PerceptAbstract {}
Percept0x243 ENDS
Percept0x244 STRUCT
    parent PerceptAbstract {}
Percept0x244 ENDS
Percept0x245 STRUCT
    parent PerceptAbstract {}
Percept0x245 ENDS
Percept0x246 STRUCT
    parent PerceptAbstract {}
Percept0x246 ENDS
Percept0x247 STRUCT
    parent PerceptAbstract {}
Percept0x247 ENDS
Percept0x248 STRUCT
    parent PerceptAbstract {}
Percept0x248 ENDS
Percept0x249 STRUCT
    parent PerceptAbstract {}
Percept0x249 ENDS
Percept0x24C STRUCT
    parent PerceptAbstract {}
Percept0x24C ENDS
Percept0x24D STRUCT
    parent PerceptAbstract {}
Percept0x24D ENDS
Percept0x24E STRUCT
    parent PerceptAbstract {}
Percept0x24E ENDS
Percept0x24F STRUCT
    parent PerceptAbstract {}
Percept0x24F ENDS
Percept0x250 STRUCT
    parent PerceptAbstract {}
Percept0x250 ENDS
Percept0x251 STRUCT
    parent PerceptAbstract {}
Percept0x251 ENDS
Percept0x252 STRUCT
    parent PerceptAbstract {}
Percept0x252 ENDS
Percept0x253 STRUCT
    parent PerceptAbstract {}
Percept0x253 ENDS
Percept0x254 STRUCT
    parent PerceptAbstract {}
Percept0x254 ENDS
Percept0x255 STRUCT
    parent PerceptAbstract {}
Percept0x255 ENDS
Percept0x256 STRUCT
    parent PerceptAbstract {}
Percept0x256 ENDS
Percept0x257 STRUCT
    parent PerceptAbstract {}
Percept0x257 ENDS
Percept0x258 STRUCT
    parent PerceptAbstract {}
Percept0x258 ENDS
Percept0x259 STRUCT
    parent PerceptAbstract {}
Percept0x259 ENDS
Percept0x25A STRUCT
    parent PerceptAbstract {}
Percept0x25A ENDS
Percept0x25B STRUCT
    parent PerceptAbstract {}
Percept0x25B ENDS
Percept0x25C STRUCT
    parent PerceptAbstract {}
Percept0x25C ENDS
Percept0x25D STRUCT
    parent PerceptAbstract {}
Percept0x25D ENDS
Percept0x25E STRUCT
    parent PerceptAbstract {}
Percept0x25E ENDS
Percept0x25F STRUCT
    parent PerceptAbstract {}
Percept0x25F ENDS
Percept0x260 STRUCT
    parent PerceptAbstract {}
Percept0x260 ENDS
Percept0x261 STRUCT
    parent PerceptAbstract {}
Percept0x261 ENDS
Percept0x262 STRUCT
    parent PerceptAbstract {}
Percept0x262 ENDS
Percept0x263 STRUCT
    parent PerceptAbstract {}
Percept0x263 ENDS
Percept0x264 STRUCT
    parent PerceptAbstract {}
Percept0x264 ENDS
Percept0x265 STRUCT
    parent PerceptAbstract {}
Percept0x265 ENDS
Percept0x266 STRUCT
    parent PerceptAbstract {}
Percept0x266 ENDS
Percept0x267 STRUCT
    parent PerceptAbstract {}
Percept0x267 ENDS
Percept0x269 STRUCT
    parent PerceptAbstract {}
Percept0x269 ENDS
Percept0x26A STRUCT
    parent PerceptAbstract {}
Percept0x26A ENDS
Percept0x26B STRUCT
    parent PerceptAbstract {}
Percept0x26B ENDS
Percept0x26C STRUCT
    parent PerceptAbstract {}
Percept0x26C ENDS
Percept0x26D STRUCT
    parent PerceptAbstract {}
Percept0x26D ENDS
Percept0x26E STRUCT
    parent PerceptAbstract {}
Percept0x26E ENDS
Percept0x26F STRUCT
    parent PerceptAbstract {}
Percept0x26F ENDS
Percept0x270 STRUCT
    parent PerceptAbstract {}
Percept0x270 ENDS
Percept0x271 STRUCT
    parent PerceptAbstract {}
Percept0x271 ENDS
Percept0x272 STRUCT
    parent PerceptAbstract {}
Percept0x272 ENDS
Percept0x273 STRUCT
    parent PerceptAbstract {}
Percept0x273 ENDS
Percept0x274 STRUCT
    parent PerceptAbstract {}
Percept0x274 ENDS
Percept0x275 STRUCT
    parent PerceptAbstract {}
Percept0x275 ENDS
Percept0x276 STRUCT
    parent PerceptAbstract {}
Percept0x276 ENDS
Percept0x277 STRUCT
    parent PerceptAbstract {}
Percept0x277 ENDS
Percept0x278 STRUCT
    parent PerceptAbstract {}
Percept0x278 ENDS
Percept0x279 STRUCT
    parent PerceptAbstract {}
Percept0x279 ENDS
Percept0x27A STRUCT
    parent PerceptAbstract {}
Percept0x27A ENDS
Percept0x27C STRUCT
    parent PerceptAbstract {}
Percept0x27C ENDS
Percept0x27D STRUCT
    parent PerceptAbstract {}
Percept0x27D ENDS
Percept0x27E STRUCT
    parent PerceptAbstract {}
Percept0x27E ENDS
Percept0x27F STRUCT
    parent PerceptAbstract {}
Percept0x27F ENDS
Percept0x280 STRUCT
    parent PerceptAbstract {}
Percept0x280 ENDS
Percept0x281 STRUCT
    parent PerceptAbstract {}
Percept0x281 ENDS
Percept0x283 STRUCT
    parent PerceptAbstract {}
Percept0x283 ENDS
ActionAbstract STRUCT
    vtable DWORD 0; ActionAbstract_VTable *
    field1_0x4 DWORD 0
    nextAction DWORD 0; ActionAbstract *
ActionAbstract ENDS
ActionClearTrail STRUCT
    parent ActionAbstract {}
ActionClearTrail ENDS
ActionPickUpWumpa STRUCT
    parent ActionAbstract {}
    wumpaAmount DWORD 0
ActionPickUpWumpa ENDS
ActionNextKey STRUCT
    parent ActionAbstract {}
ActionNextKey ENDS
ActionAddTrail STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionAddTrail ENDS
ActionPosWarp STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionPosWarp ENDS
ActionSetKey STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetKey ENDS
ActionRestartPrevious STRUCT
    parent ActionAbstract {}
ActionRestartPrevious ENDS
ActionSpawnResidentAgent STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSpawnResidentAgent ENDS
ActionDoAnim STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDoAnim ENDS
ActionDoParticle STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDoParticle ENDS
ActionDoSound STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDoSound ENDS
ActionSetWoble STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetWoble ENDS
ActionClearWobble STRUCT
    parent ActionAbstract {}
ActionClearWobble ENDS
ActionNowMoveForwards STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowMoveForwards ENDS
ActionNowMoveBackwards STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowMoveBackwards ENDS
ActionNowStrafeLeft STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowStrafeLeft ENDS
ActionNowStrafeRight STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowStrafeRight ENDS
ActionNowTurnLeft STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowTurnLeft ENDS
ActionNowTransformJoint STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowTransformJoint ENDS
ActionStoreCurrentSpace STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionStoreCurrentSpace ENDS
ActionSetFocusToKey STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetFocusToKey ENDS
ActionRotWarp STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionRotWarp ENDS
ActionClearThreats STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionClearThreats ENDS
ActionTriggerLinkedObjects STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionTriggerLinkedObjects ENDS
ActionSetState STRUCT
    parent ActionAbstract {}
    arr DWORD 0; void *
ActionSetState ENDS
ActionToggleState STRUCT
    parent ActionAbstract {}
ActionToggleState ENDS
ActionNextRouteNode STRUCT
    parent ActionAbstract {}
ActionNextRouteNode ENDS
ActionDiscardRoute STRUCT
    parent ActionAbstract {}
ActionDiscardRoute ENDS
ActionSetLogicalRadius STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionSetLogicalRadius ENDS
ActionSetBehaviourPriority STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetBehaviourPriority ENDS
ActionSetCollisions STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetCollisions ENDS
ActionSetFocusToAgent STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetFocusToAgent ENDS
ActionAttachFocusObject STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionAttachFocusObject ENDS
ActionDropAttachedObject STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDropAttachedObject ENDS
ActionThrowAttachedObject STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionThrowAttachedObject ENDS
ActionUnsupportOverFocus STRUCT
    parent ActionAbstract {}
ActionUnsupportOverFocus ENDS
ActionUnsupportAbove STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionUnsupportAbove ENDS
ActionClearFocus STRUCT
    parent ActionAbstract {}
ActionClearFocus ENDS
ActionClearCollisions STRUCT
    parent ActionAbstract {}
ActionClearCollisions ENDS
ActionSendUserMessage STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSendUserMessage ENDS
ActionBroadcastUserMessage STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionBroadcastUserMessage ENDS
ActionClearAnim STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionClearAnim ENDS
ActionRequestAttachmentFocus STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionRequestAttachmentFocus ENDS
ActionRequestMessagersFocus STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionRequestMessagersFocus ENDS
ActionSetFocusPosition STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetFocusPosition ENDS
ActionStopMoving STRUCT
    parent ActionAbstract {}
ActionStopMoving ENDS
US002 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 REAL4 0.0;
US002 ENDS
ActionAddNoiseToFocusPos STRUCT
    parent ActionAbstract {}
     DWORD 0
    field2_0x10 US002 {}
     REAL4 0.0;
     REAL4 0.0;
ActionAddNoiseToFocusPos ENDS
ActionRestartDefaultBehaviour STRUCT
    parent ActionAbstract {}
ActionRestartDefaultBehaviour ENDS
ActionClearUserMessage STRUCT
    parent ActionAbstract {}
ActionClearUserMessage ENDS
ActionRequestMessSourceAsFocus STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionRequestMessSourceAsFocus ENDS
ActionSetCounter STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionSetCounter ENDS
ActionModifyCounter STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
ActionModifyCounter ENDS
ActionContinueColliderMotion STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionContinueColliderMotion ENDS
ActionRevertColliderMotion STRUCT
    parent ActionAbstract {}
ActionRevertColliderMotion ENDS
ActionColliderLaunchNow STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionColliderLaunchNow ENDS
ActionForceAnimUpdate STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionForceAnimUpdate ENDS
ActionDestroySpawnedAttachment STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionDestroySpawnedAttachment ENDS
ActionApplyImpulse STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionApplyImpulse ENDS
ActionRequestDetach STRUCT
    parent ActionAbstract {}
ActionRequestDetach ENDS
ActionSetObject STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionSetObject ENDS
ActionKeep STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionKeep ENDS
ActionAttachSpring STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionAttachSpring ENDS
ActionDetachAllSprings STRUCT
    parent ActionAbstract {}
ActionDetachAllSprings ENDS
ActionSetContactSpringy STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetContactSpringy ENDS
ActionClearContactResponse STRUCT
    parent ActionAbstract {}
ActionClearContactResponse ENDS
ActionDestroyMe STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionDestroyMe ENDS
ActionSetSound STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetSound ENDS
ActionAlertWobblePhase STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionAlertWobblePhase ENDS
ActionBeginMusic STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionBeginMusic ENDS
ActionEndContextMusic STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionEndContextMusic ENDS
ActionPickUpExtraLife STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionPickUpExtraLife ENDS
Action0x05F STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x05F ENDS
Action0x060 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x060 ENDS
Action0x061 STRUCT
    parent ActionAbstract {}
Action0x061 ENDS
Action0x062 STRUCT
    parent ActionAbstract {}
Action0x062 ENDS
Action0x06E STRUCT
    parent ActionAbstract {}
Action0x06E ENDS
Action0x06F STRUCT
    field0_0x0 ActionAbstract {}
Action0x06F ENDS
Action0x071 STRUCT
    parent ActionAbstract {}
     DWORD 0
     REAL4 0.0;
     REAL4 0.0;
     REAL4 0.0;
Action0x071 ENDS
Action0x072 STRUCT
    parent ActionAbstract {}
Action0x072 ENDS
Action0x073 STRUCT
    parent ActionAbstract {}
Action0x073 ENDS
Action0x074 STRUCT
    parent ActionAbstract {}
Action0x074 ENDS
Action0x075 STRUCT
    parent ActionAbstract {}
    param1 REAL4 0.0;
    param2 REAL4 0.0;
Action0x075 ENDS
Action0x076 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x076 ENDS
Action0x077 STRUCT
    parent ActionAbstract {}
Action0x077 ENDS
Action0x078 STRUCT
    parent ActionAbstract {}
Action0x078 ENDS
Action0x079 STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
     DWORD 0
Action0x079 ENDS
Action0x07A STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x07A ENDS
Action0x07B STRUCT
    parent ActionAbstract {}
Action0x07B ENDS
ActionRunScriptSlot STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionRunScriptSlot ENDS
Action0x07D STRUCT
    parent ActionAbstract {}
     DWORD 0
     REAL4 0.0;
     REAL4 0.0;
     REAL4 0.0;
     DWORD 0
Action0x07D ENDS
Action0x07E STRUCT
    parent ActionAbstract {}
Action0x07E ENDS
Action0x07F STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
Action0x07F ENDS
Action0x080 STRUCT
    parent ActionAbstract {}
Action0x080 ENDS
Action0x081 STRUCT
    parent ActionAbstract {}
Action0x081 ENDS
Action0x082 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x082 ENDS
Action0x083 STRUCT
    parent ActionAbstract {}
Action0x083 ENDS
Action0x084 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x084 ENDS
Action0x085 STRUCT
    parent ActionAbstract {}
Action0x085 ENDS
Action0x086 STRUCT
    parent ActionAbstract {}
Action0x086 ENDS
Action0x087 STRUCT
    parent ActionAbstract {}
Action0x087 ENDS
Action0x088 STRUCT
    parent ActionAbstract {}
     DWORD 0
     REAL4 0.0;
Action0x088 ENDS
Action0x089 STRUCT
    parent ActionAbstract {}
     DWORD 0
     REAL4 0.0;
Action0x089 ENDS
Action0x08A STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x08A ENDS
Action0x08B STRUCT
    parent ActionAbstract {}
    param REAL4 0.0;
Action0x08B ENDS
Action0x08C STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
Action0x08C ENDS
Action0x08D STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x08D ENDS
Action0x08E STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x08E ENDS
Action0x08F STRUCT
    parent ActionAbstract {}
Action0x08F ENDS
Action0x090 STRUCT
    parent ActionAbstract {}
Action0x090 ENDS
Action0x091 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x091 ENDS
Action0x092 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x092 ENDS
Action0x093 STRUCT
    parent ActionAbstract {}
Action0x093 ENDS
Action0x094 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x094 ENDS
Action0x095 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x095 ENDS
Action0x096 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x096 ENDS
Action0x097 STRUCT
    parent ActionAbstract {}
Action0x097 ENDS
Action0x098 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x098 ENDS
Action0x099 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x099 ENDS
Action0x09C STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x09C ENDS
Action0x09D STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x09D ENDS
Action0x09E STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x09E ENDS
Action0x09F STRUCT
    parent ActionAbstract {}
Action0x09F ENDS
Action0x0A0 STRUCT
    parent ActionAbstract {}
Action0x0A0 ENDS
Action0x0A1 STRUCT
    parent ActionAbstract {}
Action0x0A1 ENDS
Action0x0A2 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0A2 ENDS
Action0x0A3 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0A3 ENDS
Action0x0A4 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0A4 ENDS
ActionForceVolumeController STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionForceVolumeController ENDS
Action0x0A6 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x0A6 ENDS
ActionSetSurface STRUCT
    parent ActionAbstract {}
    field1_0xc DWORD 0
ActionSetSurface ENDS
Action0x0A8 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0A8 ENDS
Action0x0A9 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0A9 ENDS
Action0x0AA STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0AA ENDS
Action0x0AB STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0AB ENDS
Action0x0AC STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0AC ENDS
Action0x0AD STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x0AD ENDS
Action0x0AE STRUCT
    parent ActionAbstract {}
Action0x0AE ENDS
Action0x0AF STRUCT
    parent ActionAbstract {}
Action0x0AF ENDS
Action0x0B0 STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
     DWORD 0
Action0x0B0 ENDS
Action0x0B1 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0B1 ENDS
Action0x0B2 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0B2 ENDS
Action0x0B4 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0B4 ENDS
Action0x0B5 STRUCT
    parent ActionAbstract {}
Action0x0B5 ENDS
Action0x0B6 STRUCT
    parent ActionAbstract {}
Action0x0B6 ENDS
Action0x0B7 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x0B7 ENDS
Action0x0B8 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0B8 ENDS
Action0x0B9 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0B9 ENDS
ActionSetShadow STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetShadow ENDS
ActionSetShadowCircle STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetShadowCircle ENDS
ActionSetShadowMesh STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetShadowMesh ENDS
ActionShadowToggle STRUCT
    parent ActionAbstract {}
    field1_0xc DWORD 0
ActionShadowToggle ENDS
Action0x0C0 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x0C0 ENDS
Action0x0C1 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0C1 ENDS
Action0x0C2 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0C2 ENDS
Action0x0C3 STRUCT
    parent ActionAbstract {}
Action0x0C3 ENDS
Action0x0C4 STRUCT
    parent ActionAbstract {}
Action0x0C4 ENDS
ActionDummy197 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDummy197 ENDS
Action0x0C6 STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
     REAL4 0.0;
     REAL4 0.0;
Action0x0C6 ENDS
Action0x0C7 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0C7 ENDS
Action0x0C8 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0C8 ENDS
Action0x0CA STRUCT
    parent ActionAbstract {}
Action0x0CA ENDS
Action0x0CB STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
Action0x0CB ENDS
Action0x0CC STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0CC ENDS
Action0x0CD STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
     REAL4 0.0;
Action0x0CD ENDS
Action0x0CE STRUCT
    parent ActionAbstract {}
Action0x0CE ENDS
Action0x0CF STRUCT
    parent ActionAbstract {}
Action0x0CF ENDS
Action0x0D0 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x0D0 ENDS
Action0x0D1 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x0D1 ENDS
Action0x0D2 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x0D2 ENDS
Action0x0D3 STRUCT
    parent ActionAbstract {}
Action0x0D3 ENDS
Action0x0D4 STRUCT
    parent ActionAbstract {}
Action0x0D4 ENDS
Action0x0D5 STRUCT
    parent ActionAbstract {}
Action0x0D5 ENDS
ActionControllerRumble STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
ActionControllerRumble ENDS
Action0x0D7 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x0D7 ENDS
ActionCreateCrateContents STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionCreateCrateContents ENDS
ActionCreateDamage STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionCreateDamage ENDS
ActionSetAgent STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetAgent ENDS
ActionSetPlayRespawnPosition STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetPlayRespawnPosition ENDS
ActionResetGame STRUCT
    parent ActionAbstract {}
ActionResetGame ENDS
ActionSetCrate STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionSetCrate ENDS
ActionTriggerBalancedCrateFalling STRUCT
    parent ActionAbstract {}
ActionTriggerBalancedCrateFalling ENDS
ActionPickUpHealth STRUCT
    parent ActionAbstract {}
ActionPickUpHealth ENDS
ActionSetPlayerInput STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionSetPlayerInput ENDS
ActionTriggerAllNitroCrates STRUCT
    parent ActionAbstract {}
ActionTriggerAllNitroCrates ENDS
ActionApplyVelocity STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionApplyVelocity ENDS
ActionSetKeyNearestPlayer STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetKeyNearestPlayer ENDS
ActionRaycastFocusPosition STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionRaycastFocusPosition ENDS
ActionApplyVelocityToSelf STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionApplyVelocityToSelf ENDS
ActionSetChiChiGrass STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetChiChiGrass ENDS
ActionReduceHitPoints STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionReduceHitPoints ENDS
ActionSetHitPoints STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetHitPoints ENDS
ActionSetRayTests STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetRayTests ENDS
ActionNowGoForwardCollidable STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowGoForwardCollidable ENDS
ActionNowGoBackCollidable STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionNowGoBackCollidable ENDS
Action0x216 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x216 ENDS
ActionPickUpCrystal STRUCT
    parent ActionAbstract {}
ActionPickUpCrystal ENDS
ActionDummy536 STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionDummy536 ENDS
ActionPickUpGem STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionPickUpGem ENDS
ActionDummy538 STRUCT
    parent ActionAbstract {}
ActionDummy538 ENDS
ActionSetPickup STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetPickup ENDS
ActionSetProjectile STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetProjectile ENDS
ActionShoot STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionShoot ENDS
ActionGetShortRoute STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionGetShortRoute ENDS
ActionFuelPayGate STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionFuelPayGate ENDS
ActionOpenAllLinkedFurniture STRUCT
    parent ActionAbstract {}
ActionOpenAllLinkedFurniture ENDS
ActionCloseAllLinkedFurniture STRUCT
    parent ActionAbstract {}
ActionCloseAllLinkedFurniture ENDS
ActionAttachAllLinkedAgents STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionAttachAllLinkedAgents ENDS
ActionDetachAllLinkedAgents STRUCT
    parent ActionAbstract {}
ActionDetachAllLinkedAgents ENDS
ActionSetVehicleHumiliskate STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetVehicleHumiliskate ENDS
ActionSetFocusToPlayer STRUCT
    parent ActionAbstract {}
ActionSetFocusToPlayer ENDS
ActionRequestFocus STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionRequestFocus ENDS
ActionSetFocusProperties STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetFocusProperties ENDS
ActionSetCamera STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetCamera ENDS
ActionRestoreCameraDefaults STRUCT
    parent ActionAbstract {}
ActionRestoreCameraDefaults ENDS
ActionLinkToFocusCharacter STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionLinkToFocusCharacter ENDS
ActionUnlinkCharacters STRUCT
    parent ActionAbstract {}
ActionUnlinkCharacters ENDS
ActionDamageOriginator STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDamageOriginator ENDS
Action0x236 STRUCT
    parent ActionAbstract {}
Action0x236 ENDS
Action0x237 STRUCT
    parent ActionAbstract {}
Action0x237 ENDS
ActionDummy568 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDummy568 ENDS
ActionExitVehicleMode STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionExitVehicleMode ENDS
ActionSetVehicleRollerbrawl STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetVehicleRollerbrawl ENDS
ActionSetVehicleHoverboard STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionSetVehicleHoverboard ENDS
Action0x23C STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x23C ENDS
Action0x23D STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x23D ENDS
Action0x23E STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x23E ENDS
Action0x23F STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x23F ENDS
Action0x240 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x240 ENDS
ActionBecomeSticky STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionBecomeSticky ENDS
Action0x242 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x242 ENDS
Action0x243 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x243 ENDS
Action0x244 STRUCT
    parent ActionAbstract {}
     DWORD 0
     REAL4 0.0;
     REAL4 0.0;
     REAL4 0.0;
     REAL4 0.0;
Action0x244 ENDS
ActionBecomeNormal STRUCT
    parent ActionAbstract {}
     BYTE 0
    field2_0xd BYTE 0
    field3_0xe BYTE 0
    field4_0xf BYTE 0
ActionBecomeNormal ENDS
Action0x246 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x246 ENDS
Action0x247 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x247 ENDS
ActionDummy584 STRUCT
    parent ActionAbstract {}
ActionDummy584 ENDS
ActionDummy586 STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionDummy586 ENDS
Action0x24B STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x24B ENDS
ActionPlayerFaceTowardsCamera STRUCT
    parent ActionAbstract {}
ActionPlayerFaceTowardsCamera ENDS
ActionCutsceneStart STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
ActionCutsceneStart ENDS
ActionCutsceneEnd STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
ActionCutsceneEnd ENDS
Action0x24F STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     REAL4 0.0;
     DWORD 0
     DWORD 0
Action0x24F ENDS
ActionCameraSaveLoadParams STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionCameraSaveLoadParams ENDS
ActionToggleCutsceneCamera STRUCT
    parent ActionAbstract {}
    arg1 DWORD 0
    arg2 DWORD 0
ActionToggleCutsceneCamera ENDS
Action0x253 STRUCT
    parent ActionAbstract {}
    arg1 DWORD 0
    arg2 DWORD 0
    arg3 DWORD 0
Action0x253 ENDS
ActionStartWhackaworm STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
ActionStartWhackaworm ENDS
ActionProgressWhackaworm STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionProgressWhackaworm ENDS
ActionEndWhackaworm STRUCT
    parent ActionAbstract {}
ActionEndWhackaworm ENDS
Action0x257 STRUCT
    parent ActionAbstract {}
Action0x257 ENDS
Action0x258 STRUCT
    parent ActionAbstract {}
Action0x258 ENDS
ActionSetVehicleWrestleCreature STRUCT
    parent ActionAbstract {}
ActionSetVehicleWrestleCreature ENDS
ActionFadeoutScreen STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionFadeoutScreen ENDS
ActionDisplayBottomText STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDisplayBottomText ENDS
ActionClearBottomText STRUCT
    parent ActionAbstract {}
ActionClearBottomText ENDS
ActionDismissCharacter STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionDismissCharacter ENDS
Action0x25E STRUCT
    parent ActionAbstract {}
Action0x25E ENDS
Action0x25F STRUCT
    parent ActionAbstract {}
Action0x25F ENDS
ActionDummy609 STRUCT
    parent ActionAbstract {}
ActionDummy609 ENDS
ActionDummy610 STRUCT
    parent ActionAbstract {}
ActionDummy610 ENDS
Action0x263 STRUCT
    parent ActionAbstract {}
Action0x263 ENDS
Action0x264 STRUCT
    parent ActionAbstract {}
Action0x264 ENDS
ActionDisablePlayerControl STRUCT
    parent ActionAbstract {}
ActionDisablePlayerControl ENDS
Action0x266 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x266 ENDS
Action0x267 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x267 ENDS
Action0x268 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x268 ENDS
Action0x269 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x269 ENDS
ActionForceGameOver STRUCT
    parent ActionAbstract {}
ActionForceGameOver ENDS
ActionShowBottomText STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
ActionShowBottomText ENDS
ActionHideBottomText STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
ActionHideBottomText ENDS
Action0x26D STRUCT
    parent ActionAbstract {}
Action0x26D ENDS
ActionCharacterSoundProxy STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionCharacterSoundProxy ENDS
Action0x26F STRUCT
    parent ActionAbstract {}
Action0x26F ENDS
Action0x270 STRUCT
    parent ActionAbstract {}
Action0x270 ENDS
ActionSwitchCharacter STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionSwitchCharacter ENDS
Action0x272 STRUCT
    parent ActionAbstract {}
Action0x272 ENDS
Action0x273 STRUCT
    parent ActionAbstract {}
Action0x273 ENDS
Action0x274 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x274 ENDS
Action0x275 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
Action0x275 ENDS
Action0x276 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x276 ENDS
ActionPlayerVehicleBounce STRUCT
    parent ActionAbstract {}
     REAL4 0.0;
ActionPlayerVehicleBounce ENDS
Action0x278 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x278 ENDS
ActionSetPlayerMode STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
ActionSetPlayerMode ENDS
ActionPlayMovie STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
ActionPlayMovie ENDS
ActionAddAmmo STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionAddAmmo ENDS
Action0x27D STRUCT
    parent ActionAbstract {}
Action0x27D ENDS
ActionEnableBossMode STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
ActionEnableBossMode ENDS
ActionDamageBossMode STRUCT
    parent ActionAbstract {}
     DWORD 0
ActionDamageBossMode ENDS
ActionExitBossMode STRUCT
    parent ActionAbstract {}
ActionExitBossMode ENDS
Action0x281 STRUCT
    parent ActionAbstract {}
     DWORD 0
    subtype DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x281 ENDS
Action0x285 STRUCT
    parent ActionAbstract {}
    arg DWORD 0
Action0x285 ENDS
Action0x286 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x286 ENDS
Action0x287 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
Action0x287 ENDS
Action0x288 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x288 ENDS
Action0x289 STRUCT
    parent ActionAbstract {}
Action0x289 ENDS
Action0x28A STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x28A ENDS
Action0x28B STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x28B ENDS
ActionCameraTopdownMode STRUCT
    parent ActionAbstract {}
ActionCameraTopdownMode ENDS
ActionPlayCredits STRUCT
    parent ActionAbstract {}
ActionPlayCredits ENDS
Action0x28F STRUCT
    parent ActionAbstract {}
    argListStart DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
    argIdCount DWORD 0
Action0x28F ENDS
Action0x290 STRUCT
    parent ActionAbstract {}
Action0x290 ENDS
ActionDisplayBottomTextInstance STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
ActionDisplayBottomTextInstance ENDS
Action0x292 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x292 ENDS
Action0x294 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x294 ENDS
Action0x295 STRUCT
    parent ActionAbstract {}
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
     DWORD 0
Action0x295 ENDS
ActionResetCamera STRUCT
    parent ActionAbstract {}
ActionResetCamera ENDS
Action0x293 STRUCT
    parent ActionAbstract {}
     DWORD 0
Action0x293 ENDS
SectionRigidModel2 STRUCT
    parent SectionAbstract {}
    data DWORD 0; SectionDataRigidModel *
SectionRigidModel2 ENDS
SectionDataEntriesLod STRUCT
    elements DWORD 0; EntryDescriptorLod *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesLod ENDS
SectionDataLod STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesLod {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    lodList DWORD 0; ResourceListTwinsanityLod *
SectionDataLod ENDS
SectionDataEntriesSkydome STRUCT
    elements DWORD 0; pointer
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesSkydome ENDS
SectionDataSkydome STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesSkydome {}
    field2_0xe WORD 0
    pool DWORD 0; pointer
    skydomeList DWORD 0; ResourceListTwinsanitySkydome *
SectionDataSkydome ENDS
SectionReaderGraphics STRUCT
    parent SectionReaderAbstract {}
    sectionId DWORD 0
    _size DWORD 0
    section DWORD 0; SectionGraphics *
SectionReaderGraphics ENDS
SectionReaderBlendSkin STRUCT
    parent SectionReaderAbstract {}
    blendSkin DWORD 0; TwinsanityBlendSkin *
    data DWORD 0; SectionDataBlendSkin *
SectionReaderBlendSkin ENDS
SectionReaderLod STRUCT
    parent SectionReaderAbstract {}
    lod DWORD 0; TwinsanityLod *
    data DWORD 0; SectionDataLod *
SectionReaderLod ENDS
SectionReaderMaterial STRUCT
    parent SectionReaderAbstract {}
    material DWORD 0; TwinsanityMaterial *
    data DWORD 0; SectionDataMaterial *
SectionReaderMaterial ENDS
SectionReaderCode STRUCT
    parent SectionReaderAbstract {}
    sectionId DWORD 0
    unkPointer DWORD 0; pointer
    section DWORD 0; SectionCode *
SectionReaderCode ENDS
SectionReaderInstance STRUCT
    parent SectionReaderAbstract {}
    data DWORD 0; SectionInstance *
    sectionId DWORD 0
    sectionOffset DWORD 0
SectionReaderInstance ENDS
SectionReaderGameObject STRUCT
    parent SectionReaderAbstract {}
    cnt DWORD 0
    cnt_ DWORD 0
    collection DWORD 0; SectionDataGameObjectBase *
    indexList DWORD 0; IndexToIdList *
SectionReaderGameObject ENDS
SectionReaderScript STRUCT
    parent SectionReaderAbstract {}
    cnt DWORD 0
    field2_0x8 DWORD 0; pointer
    data DWORD 0; SectionDataScriptBase *
    indexList DWORD 0; int *
SectionReaderScript ENDS
SectionReaderAnimation STRUCT
    parent SectionReaderAbstract {}
    cnt DWORD 0
    cnt_ DWORD 0
    collection DWORD 0; SectionDataAnimationBase *
    section DWORD 0; SectionAnimation *
SectionReaderAnimation ENDS
SectionReaderOGI STRUCT
    parent SectionReaderAbstract {}
    cnt DWORD 0
    field2_0x8 DWORD 0; pointer
    field3_0xc DWORD 0; pointer
    data DWORD 0; SectionOGI *
SectionReaderOGI ENDS
SectionReaderCodeModel STRUCT
    parent SectionReaderAbstract {}
    cnt DWORD 0
    field2_0x8 DWORD 0; pointer
    data DWORD 0; SectionDataCodeModelBase *
    idArray DWORD 0; int *
SectionReaderCodeModel ENDS
SectionReaderModel STRUCT
    parent SectionReaderAbstract {}
    model DWORD 0; TwinsanityModel *
    data DWORD 0; SectionDataModel *
SectionReaderModel ENDS
SectionReaderRigidModel STRUCT
    parent SectionReaderAbstract {}
    rigidModel DWORD 0; TwinsanityRigidModel *
    data DWORD 0; SectionDataRigidModel *
SectionReaderRigidModel ENDS
SectionReaderSfx STRUCT
    parent SectionReaderAbstract {}
    cnt DWORD 0
    field2_0x8 DWORD 0; pointer
    sounds DWORD 0; SectionDataSfx *
    _ptr DWORD 0; int *
SectionReaderSfx ENDS
SectionReaderSkydome STRUCT
    parent SectionReaderAbstract {}
    skydome DWORD 0; TwinsanitySkydome *
    data DWORD 0; SectionDataSkydome *
SectionReaderSkydome ENDS
SectionReaderTexture STRUCT
    parent SectionReaderAbstract {}
    texture DWORD 0; TwinsanityTexture *
    data DWORD 0; SectionDataTexture *
SectionReaderTexture ENDS
SectionReaderSkin STRUCT
    parent SectionReaderAbstract {}
    skin DWORD 0; TwinsanitySkin *
    data DWORD 0; SectionDataSkin *
SectionReaderSkin ENDS
SectionReaderInstanceTemplate STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionInstanceTemplate DWORD 0; CollectionInstanceTemplateWrapper *
    cnt DWORD 0
SectionReaderInstanceTemplate ENDS
SectionReaderInstanceInstance STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionInstance DWORD 0; CollectionInstanceWrapper *
    number DWORD 0
SectionReaderInstanceInstance ENDS
SectionReaderInstanceAiPosition STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionAiPosition DWORD 0; CollectionAiPositionWrapper *
    cnt DWORD 0
SectionReaderInstanceAiPosition ENDS
SectionReaderInstanceAiPath STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionAiPath DWORD 0; CollectionAiPathWrapper *
    cnt DWORD 0
SectionReaderInstanceAiPath ENDS
SectionReaderInstancePosition STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collection DWORD 0; CollectionPositionWrapper *
    cnt DWORD 0
SectionReaderInstancePosition ENDS
SectionReaderInstancePath STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collection DWORD 0; CollectionPathWrapper *
    cnt DWORD 0
SectionReaderInstancePath ENDS
SectionReaderInstanceTrigger STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collectionTrigger DWORD 0; CollectionTriggerWrapper *
    cnt DWORD 0
SectionReaderInstanceTrigger ENDS
SectionReaderInstanceCamera STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collection DWORD 0; CollectionCameraTriggerWrapper *
    cnt DWORD 0
SectionReaderInstanceCamera ENDS
SectionReaderInstanceCollisionSurface STRUCT
    parent SectionReaderAbstract {}
    instanceResources DWORD 0; InstanceSectionResources *
    collection DWORD 0; CollectionCollisionSurfaceWrapper *
    cnt DWORD 0
SectionReaderInstanceCollisionSurface ENDS
SectionReaderSM STRUCT
    parent SectionReaderAbstract {}
    section DWORD 0; SectionAbstract *
    _size DWORD 0
    flag BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
SectionReaderSM ENDS
CollectionFractions STRUCT
    fraction DWORD 0; uint *
    fractionCnt DWORD 0
CollectionFractions ENDS
CollectionFloats STRUCT
    floats DWORD 0; float *
    floatsCnt DWORD 0
CollectionFloats ENDS
CollectionInts STRUCT
    ints DWORD 0; int *
    intsCnt DWORD 0
CollectionInts ENDS
ParameterTable STRUCT
    vtable DWORD 0; pointer *
    instancePropsHeader DWORD 0
    stateFlags DWORD 0
    fractions CollectionFractions {}
    floats CollectionFloats {}
    ints CollectionInts {}
ParameterTable ENDS
InstanceTemplateIdList STRUCT
    idList DWORD 0; short *
    amount DWORD 0
    allocationAmount DWORD 0
    header2 DWORD 0
InstanceTemplateIdList ENDS
InstanceTemplate STRUCT
    objectName TwinString {}
    unkByte3 BYTE 0
    unkByte4 BYTE 0
    objectId WORD 0
    unkByte1 BYTE 0
    unkByte2 BYTE 0
    field6_0x12 BYTE 0
    field7_0x13 BYTE 0
    idList InstanceTemplateIdList {}
    unkStruct ParameterTable {}
InstanceTemplate ENDS
Rotation STRUCT
    x DWORD 0
    y DWORD 0
    z DWORD 0
Rotation ENDS
InstanceIdList STRUCT
    list DWORD 0; UNV018 *
    cnt DWORD 0
    allocation DWORD 0
    related DWORD 0
InstanceIdList ENDS
Instance STRUCT
    position Vector4 {}
    rotation Rotation {}
    instances InstanceIdList {}
    positions InstanceIdList {}
    paths InstanceIdList {}
    parameters DWORD 0; ParameterTable *
    objectId WORD 0
    refListIndex WORD 0
    onSpawnScriptId WORD 0
    parametersInited BYTE 0
    field10_0x57 BYTE 0
    field11_0x58 BYTE 0
    field12_0x59 BYTE 0
    field13_0x5a BYTE 0
    field14_0x5b BYTE 0
    field15_0x5c BYTE 0
    field16_0x5d BYTE 0
    field17_0x5e BYTE 0
    field18_0x5f BYTE 0
Instance ENDS
CollectionInstance STRUCT
    list DWORD 0; Instance * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionInstance ENDS
AiPosition STRUCT
    position Vector4 {}
    field1_0x10 DWORD 0
    field2_0x14 DWORD 0
    field3_0x18 BYTE 0
    field4_0x19 BYTE 0
    field5_0x1a BYTE 0
    field6_0x1b BYTE 0
    nodeType WORD 0
    field8_0x1e BYTE 0
    field9_0x1f BYTE 0
AiPosition ENDS
CollectionAiPosition STRUCT
    list DWORD 0; AiPosition * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionAiPosition ENDS
ChunkDataRefCounter STRUCT
    chunk DWORD 0; ChunkData *
    refCount DWORD 0
ChunkDataRefCounter ENDS
SectionReaderChunk STRUCT
    parent SectionReaderAbstract {}
    chunkDataRef DWORD 0; ChunkDataRefCounter *
    someID DWORD 0
SectionReaderChunk ENDS
AiPath STRUCT
    node1 WORD 0
    node2 WORD 0
    arg1 WORD 0
    arg2 WORD 0
    arg3 WORD 0
AiPath ENDS
CollectionAiPath STRUCT
    list DWORD 0; AiPath * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionAiPath ENDS
Position STRUCT
    position Vector4 {}
Position ENDS
CollectionPosition STRUCT
    list DWORD 0; Position * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionPosition ENDS
PathBase STRUCT
    vtable DWORD 0; PathBase_VTable *
    pointCnt DWORD 0
    points DWORD 0; Vector4 *
PathBase ENDS
Path STRUCT
    parent PathBase {}
    parameters DWORD 0; float *
    lastParameter DWORD 0; float *
    field3_0x14 DWORD 0
    field4_0x18 DWORD 0
    field5_0x1c DWORD 0
    field6_0x20 Vector4 {}
    field7_0x30 Vector4 {}
    field8_0x40 REAL4 0.0;
    field9_0x44 REAL4 0.0;
    num DWORD 0
    field11_0x4c DWORD 0
Path ENDS
CollectionPath STRUCT
    list DWORD 0; Path * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionPath ENDS
TriggerAbstract STRUCT
    vtable DWORD 0; TriggerAbstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    header DWORD 0
    objectActivatorMask DWORD 0
    unkFloat REAL4 0.0;
    field16_0x1c BYTE 0
    field17_0x1d BYTE 0
    field18_0x1e BYTE 0
    field19_0x1f BYTE 0
    rotation Vector4 {}
    position Vector4 {}
    scale Vector4 {}
    idList InstanceIdList {}
TriggerAbstract ENDS
Trigger STRUCT
    parent TriggerAbstract {}
    arg1 WORD 0
    arg2 WORD 0
    arg3 WORD 0
    arg4 WORD 0
    field5_0x68 BYTE 0
    field6_0x69 BYTE 0
    field7_0x6a BYTE 0
    field8_0x6b BYTE 0
    field9_0x6c BYTE 0
    field10_0x6d BYTE 0
    field11_0x6e BYTE 0
    field12_0x6f BYTE 0
Trigger ENDS
CollectionTrigger STRUCT
    list DWORD 0; Trigger * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionTrigger ENDS
CameraTrigger STRUCT
    parent TriggerAbstract {}
    camera DWORD 0; Camera *
    field2_0x64 BYTE 0
    field3_0x65 BYTE 0
    field4_0x66 BYTE 0
    field5_0x67 BYTE 0
    field6_0x68 BYTE 0
    field7_0x69 BYTE 0
    field8_0x6a BYTE 0
    field9_0x6b BYTE 0
    field10_0x6c BYTE 0
    field11_0x6d BYTE 0
    field12_0x6e BYTE 0
    field13_0x6f BYTE 0
CameraTrigger ENDS
Camera STRUCT
    field0_0x0 DWORD 0
    field1_0x4 WORD 0
    field2_0x6 BYTE 0
    field3_0x7 BYTE 0
    mainCamera1 BYTE 0
    field5_0x9 BYTE 0
    field6_0xa BYTE 0
    field7_0xb BYTE 0
    mainCamera2 BYTE 0
    field9_0xd BYTE 0
    field10_0xe BYTE 0
    field11_0xf BYTE 0
    unkFloat1 REAL4 0.0;
    field13_0x14 BYTE 0
    field14_0x15 BYTE 0
    field15_0x16 BYTE 0
    field16_0x17 BYTE 0
    field17_0x18 BYTE 0
    field18_0x19 BYTE 0
    field19_0x1a BYTE 0
    field20_0x1b BYTE 0
    field21_0x1c BYTE 0
    field22_0x1d BYTE 0
    field23_0x1e BYTE 0
    field24_0x1f BYTE 0
    unkVector1 Vector4 {}
    unkVector2 Vector4 {}
    unkFloat2 REAL4 0.0;
    unkFloat3 REAL4 0.0;
    unkInt1 DWORD 0
    unkInt2 DWORD 0
    unkInt3 DWORD 0
    unkInt4 DWORD 0
    unkInt5 DWORD 0
    unkInt6 DWORD 0
    unkFloat4 REAL4 0.0;
    unkFloat5 REAL4 0.0;
    unkFloat6 REAL4 0.0;
    unkFloat7 REAL4 0.0;
    unkInt7 DWORD 0
    unkInt8 DWORD 0
    unkInt9 DWORD 0
    unkFloat8 REAL4 0.0;
    field43_0x80 DWORD 0
    field44_0x84 BYTE 0
    field45_0x85 BYTE 0
    field46_0x86 BYTE 0
    field47_0x87 BYTE 0
    field48_0x88 BYTE 0
    field49_0x89 BYTE 0
    field50_0x8a BYTE 0
    field51_0x8b BYTE 0
    field52_0x8c BYTE 0
    field53_0x8d BYTE 0
    field54_0x8e BYTE 0
    field55_0x8f BYTE 0
Camera ENDS
CollectionCameraTrigger STRUCT
    list DWORD 0; CameraTrigger * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionCameraTrigger ENDS
CollectionCollisionSurface STRUCT
    list DWORD 0; CollisionSurface * *
    cnt DWORD 0
    capacity DWORD 0
    expansion DWORD 0
CollectionCollisionSurface ENDS
BoundingBox STRUCT
    v1 Vector4 {}
    v2 Vector4 {}
BoundingBox ENDS
CollisionSurface STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    flags DWORD 0
    floatParam6 REAL4 0.0;
    floatParam7 REAL4 0.0;
    floatParam8 REAL4 0.0;
    unkFloat1 REAL4 0.0;
    unkFloat2 REAL4 0.0;
    floatParam9 REAL4 0.0;
    floatParam10 REAL4 0.0;
    field16_0x28 BYTE 0
    field17_0x29 BYTE 0
    field18_0x2a BYTE 0
    field19_0x2b BYTE 0
    field20_0x2c BYTE 0
    field21_0x2d BYTE 0
    field22_0x2e BYTE 0
    field23_0x2f BYTE 0
    unkVector DWORD 0
    field25_0x34 BYTE 0
    field26_0x35 BYTE 0
    field27_0x36 BYTE 0
    field28_0x37 BYTE 0
    field29_0x38 BYTE 0
    field30_0x39 BYTE 0
    field31_0x3a BYTE 0
    field32_0x3b BYTE 0
    field33_0x3c BYTE 0
    field34_0x3d BYTE 0
    field35_0x3e BYTE 0
    field36_0x3f BYTE 0
    boundingBox BoundingBox {}
    surfaceId WORD 0
    landSoundId1 WORD 0
    unkSoundId2 WORD 0
    unkSoundId WORD 0
    stepSoundId1 WORD 0
    stepSoundId2 WORD 0
    landSoundId2 WORD 0
    particleId1 WORD 0
    particleId2 WORD 0
    particleId3 WORD 0
    floatParam1 REAL4 0.0;
    floatParam2 REAL4 0.0;
    floatParam3 REAL4 0.0;
    floatParam4 REAL4 0.0;
    floatParam5 REAL4 0.0;
    field53_0x88 BYTE 0
    field54_0x89 BYTE 0
    field55_0x8a BYTE 0
    field56_0x8b BYTE 0
    field57_0x8c BYTE 0
    field58_0x8d BYTE 0
    field59_0x8e BYTE 0
    field60_0x8f BYTE 0
CollisionSurface ENDS
GameObjectIdListUInt STRUCT
    idList DWORD 0; uint *
    count DWORD 0
GameObjectIdListUInt ENDS
GameObjectResourceReferences STRUCT
    flags DWORD 0
    refObjects DWORD 0; GameObjectReferenceList *
    refOgis DWORD 0; GameObjectReferenceList *
    refAnimations DWORD 0; GameObjectReferenceList *
    refCodeModels DWORD 0; GameObjectReferenceList *
    refScripts DWORD 0; GameObjectReferenceList *
    refUnknown DWORD 0; GameObjectReferenceList *
    refSounds DWORD 0; GameObjectReferenceList *
GameObjectResourceReferences ENDS
GameObjectReferenceList STRUCT
    next DWORD 0; GameObjectReferenceList *
    idArray BYTE 32 dup (0)
GameObjectReferenceList ENDS
UnkBuilder1ItemAbstract STRUCT
    vtable DWORD 0; undefined * *
    name TwinString {}
    field2_0x10 BYTE 0
    field3_0x11 BYTE 0
    field4_0x12 BYTE 0
    field5_0x13 BYTE 0
    field6_0x14 DWORD 0
    field7_0x18 DWORD 0
    field8_0x1c BYTE 0
    field9_0x1d BYTE 0
    field10_0x1e BYTE 0
    field11_0x1f BYTE 0
UnkBuilder1ItemAbstract ENDS
UnkBuilder1Item0x1B0B STRUCT
    parent UnkBuilder1ItemAbstract {}
    field1_0x20 BYTE 0
    field2_0x21 BYTE 0
    field3_0x22 BYTE 0
    field4_0x23 BYTE 0
    field5_0x24 BYTE 0
    field6_0x25 BYTE 0
    field7_0x26 BYTE 0
    field8_0x27 BYTE 0
    field9_0x28 BYTE 0
    field10_0x29 BYTE 0
    field11_0x2a BYTE 0
    field12_0x2b BYTE 0
    field13_0x2c BYTE 0
    field14_0x2d BYTE 0
    field15_0x2e BYTE 0
    field16_0x2f BYTE 0
    field17_0x30 BYTE 0
    field18_0x31 BYTE 0
    field19_0x32 BYTE 0
    field20_0x33 BYTE 0
    field21_0x34 BYTE 0
    field22_0x35 BYTE 0
    field23_0x36 BYTE 0
    field24_0x37 BYTE 0
    field25_0x38 BYTE 0
    field26_0x39 BYTE 0
    field27_0x3a BYTE 0
    field28_0x3b BYTE 0
    field29_0x3c BYTE 0
    field30_0x3d BYTE 0
    field31_0x3e BYTE 0
    field32_0x3f BYTE 0
    field33_0x40 BYTE 0
    field34_0x41 BYTE 0
    field35_0x42 BYTE 0
    field36_0x43 BYTE 0
    field37_0x44 BYTE 0
    field38_0x45 BYTE 0
    field39_0x46 BYTE 0
    field40_0x47 BYTE 0
    field41_0x48 BYTE 0
    field42_0x49 BYTE 0
    field43_0x4a BYTE 0
    field44_0x4b BYTE 0
    field45_0x4c BYTE 0
    field46_0x4d BYTE 0
    field47_0x4e BYTE 0
    field48_0x4f BYTE 0
    field49_0x50 BYTE 0
    field50_0x51 BYTE 0
    field51_0x52 BYTE 0
    field52_0x53 BYTE 0
    field53_0x54 BYTE 0
    field54_0x55 BYTE 0
    field55_0x56 BYTE 0
    field56_0x57 BYTE 0
    field57_0x58 BYTE 0
    field58_0x59 BYTE 0
    field59_0x5a BYTE 0
    field60_0x5b BYTE 0
    field61_0x5c BYTE 0
    field62_0x5d BYTE 0
    field63_0x5e BYTE 0
    field64_0x5f BYTE 0
    field65_0x60 BYTE 0
    field66_0x61 BYTE 0
    field67_0x62 BYTE 0
    field68_0x63 BYTE 0
    field69_0x64 BYTE 0
    field70_0x65 BYTE 0
    field71_0x66 BYTE 0
    field72_0x67 BYTE 0
    field73_0x68 BYTE 0
    field74_0x69 BYTE 0
    field75_0x6a BYTE 0
    field76_0x6b BYTE 0
    field77_0x6c BYTE 0
    field78_0x6d BYTE 0
    field79_0x6e BYTE 0
    field80_0x6f BYTE 0
    field81_0x70 BYTE 0
    field82_0x71 BYTE 0
    field83_0x72 BYTE 0
    field84_0x73 BYTE 0
    field85_0x74 BYTE 0
    field86_0x75 BYTE 0
    field87_0x76 BYTE 0
    field88_0x77 BYTE 0
    field89_0x78 BYTE 0
    field90_0x79 BYTE 0
    field91_0x7a BYTE 0
    field92_0x7b BYTE 0
    field93_0x7c BYTE 0
    field94_0x7d BYTE 0
    field95_0x7e BYTE 0
    field96_0x7f BYTE 0
    field97_0x80 BYTE 0
    field98_0x81 BYTE 0
    field99_0x82 BYTE 0
    field100_0x83 BYTE 0
    field101_0x84 BYTE 0
    field102_0x85 BYTE 0
    field103_0x86 BYTE 0
    field104_0x87 BYTE 0
    field105_0x88 BYTE 0
    field106_0x89 BYTE 0
    field107_0x8a BYTE 0
    field108_0x8b BYTE 0
    field109_0x8c BYTE 0
    field110_0x8d BYTE 0
    field111_0x8e BYTE 0
    field112_0x8f BYTE 0
    field113_0x90 BYTE 0
    field114_0x91 BYTE 0
    field115_0x92 BYTE 0
    field116_0x93 BYTE 0
    field117_0x94 BYTE 0
    field118_0x95 BYTE 0
    field119_0x96 BYTE 0
    field120_0x97 BYTE 0
    field121_0x98 BYTE 0
    field122_0x99 BYTE 0
    field123_0x9a BYTE 0
    field124_0x9b BYTE 0
    field125_0x9c BYTE 0
    field126_0x9d BYTE 0
    field127_0x9e BYTE 0
    field128_0x9f BYTE 0
UnkBuilder1Item0x1B0B ENDS
UnkBuilder1Item0x1B14 STRUCT
    parent UnkBuilder1ItemAbstract {}
    field1_0x20 WORD 0
    field2_0x22 WORD 0
    field3_0x24 WORD 0
    field4_0x26 WORD 0
UnkBuilder1Item0x1B14 ENDS
UnkBuilder1Item0x1B16 STRUCT
    parent UnkBuilder1ItemAbstract {}
    field1_0x20 BYTE 0
    field2_0x21 BYTE 0
    field3_0x22 BYTE 0
    field4_0x23 BYTE 0
    field5_0x24 BYTE 0
    field6_0x25 BYTE 0
    field7_0x26 BYTE 0
    field8_0x27 BYTE 0
    field9_0x28 BYTE 0
    field10_0x29 BYTE 0
    field11_0x2a BYTE 0
    field12_0x2b BYTE 0
    field13_0x2c BYTE 0
    field14_0x2d BYTE 0
    field15_0x2e BYTE 0
    field16_0x2f BYTE 0
    field17_0x30 BYTE 0
    field18_0x31 BYTE 0
    field19_0x32 BYTE 0
    field20_0x33 BYTE 0
    field21_0x34 BYTE 0
    field22_0x35 BYTE 0
    field23_0x36 BYTE 0
    field24_0x37 BYTE 0
    field25_0x38 BYTE 0
    field26_0x39 BYTE 0
    field27_0x3a BYTE 0
    field28_0x3b BYTE 0
    field29_0x3c BYTE 0
    field30_0x3d BYTE 0
    field31_0x3e BYTE 0
    field32_0x3f BYTE 0
    field33_0x40 DWORD 0
    field34_0x44 BYTE 0
    field35_0x45 BYTE 0
    field36_0x46 BYTE 0
    field37_0x47 BYTE 0
    field38_0x48 BYTE 0
    field39_0x49 BYTE 0
    field40_0x4a BYTE 0
    field41_0x4b BYTE 0
    field42_0x4c BYTE 0
    field43_0x4d BYTE 0
    field44_0x4e BYTE 0
    field45_0x4f BYTE 0
UnkBuilder1Item0x1B16 ENDS
AnimationBlob STRUCT
    _size DWORD 0
    parameter WORD 0
    field2_0x6 BYTE 0
    field3_0x7 BYTE 0
    animationBuffer DWORD 0
AnimationBlob ENDS
Animation STRUCT
    field0_0x0 DWORD 0
    index DWORD 0
    flags DWORD 0
    blob1 AnimationBlob {}
    blob2 AnimationBlob {}
Animation ENDS
OGI STRUCT
    field0_0x0 DWORD 0
    index DWORD 0
    unkVec Vector4 {}
    field3_0x18 BYTE 0
    field4_0x19 BYTE 0
    field5_0x1a BYTE 0
    field6_0x1b BYTE 0
    field7_0x1c BYTE 0
    field8_0x1d BYTE 0
    field9_0x1e BYTE 0
    field10_0x1f BYTE 0
    field11_0x20 BoundingBox {}
    header BYTE 16 dup (0)
    field13_0x50 DWORD 0
    field14_0x54 DWORD 0
    field15_0x58 DWORD 0
    rigidModelRelatedList DWORD 0; byte *
    matrixArray DWORD 0; Matrix4 *
    rigidBodyIds DWORD 0; uint *
    field19_0x68 DWORD 0
    field20_0x6c DWORD 0
    type1List DWORD 0; OGIType1 * *
    type2list DWORD 0; OGIType2 * *
    field23_0x78 BYTE 0
    field24_0x79 BYTE 0
    field25_0x7a BYTE 0
    field26_0x7b BYTE 0
    field27_0x7c BYTE 0
    field28_0x7d BYTE 0
    field29_0x7e BYTE 0
    field30_0x7f BYTE 0
    rigidModelReferences DWORD 0; uint *
    field32_0x84 BYTE 0
    field33_0x85 BYTE 0
    field34_0x86 BYTE 0
    field35_0x87 BYTE 0
    field36_0x88 BYTE 0
    field37_0x89 BYTE 0
    field38_0x8a BYTE 0
    field39_0x8b BYTE 0
    field40_0x8c BYTE 0
    field41_0x8d BYTE 0
    field42_0x8e BYTE 0
    field43_0x8f BYTE 0
OGI ENDS
OGIType1 STRUCT
    unkVec BYTE 80 dup (0)
    unkByte1 BYTE 0
    unkByte2 BYTE 0
    unkByte3 BYTE 0
    field4_0x53 BYTE 0
    field5_0x54 BYTE 0
    field6_0x55 BYTE 0
    field7_0x56 BYTE 0
    field8_0x57 BYTE 0
    field9_0x58 BYTE 0
    field10_0x59 BYTE 0
    field11_0x5a BYTE 0
    field12_0x5b BYTE 0
    field13_0x5c BYTE 0
    field14_0x5d BYTE 0
    field15_0x5e BYTE 0
    field16_0x5f BYTE 0
OGIType1 ENDS
CodeModel STRUCT
    field0_0x0 DWORD 0
    index DWORD 0
    header DWORD 0
    scriptPackArray DWORD 0; GameObjectScriptPack *
    firstAction DWORD 0; ActionAbstract *
    packIds DWORD 0; short *
CodeModel ENDS
ScriptAbstract STRUCT
    vtable DWORD 0; ScriptAbstract_VTable *
    field1_0x4 DWORD 0
    index DWORD 0
    flags DWORD 0
    name TwinString {}
ScriptAbstract ENDS
ScriptMain STRUCT
    parent ScriptAbstract {}
    _sub DWORD 0; ScriptMainSub *
ScriptMain ENDS
ScriptHeader STRUCT
    parent ScriptAbstract {}
    amount DWORD 0
    pairArray DWORD 0; ScriptHeaderPair *
    field3_0x24 BYTE 0
    field4_0x25 BYTE 0
    field5_0x26 BYTE 0
    field6_0x27 BYTE 0
    field7_0x28 BYTE 0
    field8_0x29 BYTE 0
    field9_0x2a BYTE 0
    field10_0x2b BYTE 0
    field11_0x2c BYTE 0
    field12_0x2d BYTE 0
    field13_0x2e BYTE 0
    field14_0x2f BYTE 0
    field15_0x30 BYTE 0
    field16_0x31 BYTE 0
    field17_0x32 BYTE 0
    field18_0x33 BYTE 0
    field19_0x34 BYTE 0
    field20_0x35 BYTE 0
    field21_0x36 BYTE 0
    field22_0x37 BYTE 0
    field23_0x38 BYTE 0
    field24_0x39 BYTE 0
    field25_0x3a BYTE 0
    field26_0x3b BYTE 0
ScriptHeader ENDS
ScriptMainSub STRUCT
    field0_0x0 DWORD 0
    currentState DWORD 0; ScriptMainState *
    name TwinString {}
    firstState DWORD 0; ScriptMainState *
ScriptMainSub ENDS
ScriptMainState STRUCT
    flags DWORD 0
    arguments DWORD 0; ScriptMainAgrumentsWrapper *
    stateBody DWORD 0; ScriptMainStateBody *
    nextState DWORD 0; ScriptMainState *
ScriptMainState ENDS
ScriptMainAgrumentsWrapper STRUCT
    flags DWORD 0
    unkInt DWORD 0
    arguments DWORD 0; byte *
ScriptMainAgrumentsWrapper ENDS
ScriptMainStateBody STRUCT
    flags DWORD 0
    percept DWORD 0; PerceptAbstract *
    stateToJump DWORD 0
    action DWORD 0; ActionAbstract *
    next DWORD 0; ScriptMainStateBody *
ScriptMainStateBody ENDS
InstanceNodeInstanceBBody STRUCT
    parent InstanceNodeInstanceBody {}
    field1_0xcc DWORD 0
    field2_0xd0 DWORD 0
    field3_0xd4 DWORD 0
    field4_0xd8 DWORD 0
    field5_0xdc BYTE 0
    field6_0xdd BYTE 0
    field7_0xde BYTE 0
    field8_0xdf BYTE 0
    field9_0xe0 REAL4 0.0;
    field10_0xe4 BYTE 0
    field11_0xe5 BYTE 0
    field12_0xe6 BYTE 0
    field13_0xe7 BYTE 0
    field14_0xe8 BYTE 0
    field15_0xe9 BYTE 0
    field16_0xea BYTE 0
    field17_0xeb BYTE 0
InstanceNodeInstanceBBody ENDS
InstanceNodeInstanceB STRUCT
    vtable DWORD 0; InstanceNodeInstance_VTable *
    body InstanceNodeInstanceBBody {}
InstanceNodeInstanceB ENDS
InstanceNodeInstanceABody STRUCT
    parent InstanceNodeInstanceBody {}
InstanceNodeInstanceABody ENDS
InstanceNodeInstanceA STRUCT
    vtable DWORD 0; InstanceNodeInstance_VTable *
    body InstanceNodeInstanceABody {}
InstanceNodeInstanceA ENDS
AutoClass2 STRUCT
    ctx DWORD 0; InstanceContext *
    field1_0x4 DWORD 0; AutoClass40 *
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0; InstanceContext *
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    matrix1 DWORD 0; Matrix4 *
    field8_0x20 BYTE 0
    field9_0x21 BYTE 0
    field10_0x22 BYTE 0
    field11_0x23 BYTE 0
    field12_0x24 BYTE 0
    field13_0x25 BYTE 0
    field14_0x26 BYTE 0
    field15_0x27 BYTE 0
    field16_0x28 BYTE 0
    field17_0x29 BYTE 0
    field18_0x2a BYTE 0
    field19_0x2b BYTE 0
    field20_0x2c BYTE 0
    field21_0x2d BYTE 0
    field22_0x2e BYTE 0
    field23_0x2f BYTE 0
    matrix2 Matrix4 {}
    field25_0x70 DWORD 0
    matrixArray DWORD 0; Matrix4 *
    field27_0x78 DWORD 0
    field28_0x7c DWORD 0
    field29_0x80 DWORD 0; void *
AutoClass2 ENDS
InstanceContextBase STRUCT
    vtable DWORD 0; InstanceContext_VTable *
    ctx DWORD 0; InstanceContext *
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 DWORD 0
    flags DWORD 0
    transform DWORD 0; InstanceTransform *
    field13_0x1c DWORD 0; InstanceContext *
    field14_0x20 AutoClass2 {}
    field15_0xa4 BYTE 0
    field16_0xa5 BYTE 0
    field17_0xa6 BYTE 0
    field18_0xa7 BYTE 0
    field19_0xa8 BYTE 0
    field20_0xa9 BYTE 0
    field21_0xaa BYTE 0
    field22_0xab BYTE 0
    field23_0xac BYTE 0
    field24_0xad BYTE 0
    field25_0xae BYTE 0
    field26_0xaf BYTE 0
    chunkData DWORD 0; ChunkData *
InstanceContextBase ENDS
InstanceDataList STRUCT
    cnt DWORD 0
    array BYTE 96 dup (0)
InstanceDataList ENDS
InstanceContext STRUCT
    parent InstanceContextBase {}
    field1_0xb4 BYTE 0
    field2_0xb5 BYTE 0
    field3_0xb6 BYTE 0
    field4_0xb7 BYTE 0
    field5_0xb8 BYTE 0
    field6_0xb9 BYTE 0
    field7_0xba BYTE 0
    field8_0xbb BYTE 0
    field9_0xbc BYTE 0
    field10_0xbd BYTE 0
    field11_0xbe BYTE 0
    field12_0xbf BYTE 0
    smartPtr InstanceContextSmartPtr {}
    field14_0xc4 BYTE 0
    field15_0xc5 BYTE 0
    field16_0xc6 BYTE 0
    field17_0xc7 BYTE 0
    field18_0xc8 BYTE 0
    field19_0xc9 BYTE 0
    field20_0xca BYTE 0
    field21_0xcb BYTE 0
    field22_0xcc BYTE 0
    field23_0xcd BYTE 0
    field24_0xce BYTE 0
    field25_0xcf BYTE 0
    vec Vector4 {}
    field27_0xe0 DWORD 0
    nodes InstanceDataList {}
    findMe DWORD 0; pointer
    subPtr DWORD 0; InstanceContextSub *
    prev DWORD 0; InstanceContext *
    next DWORD 0; InstanceContext *
    field33_0x158 DWORD 0
    field34_0x15c DWORD 0
    field35_0x160 DWORD 0
    someIndex DWORD 0
    field37_0x168 BYTE 0
    field38_0x169 BYTE 0
    field39_0x16a BYTE 0
    field40_0x16b BYTE 0
    field41_0x16c BYTE 0
    field42_0x16d BYTE 0
    field43_0x16e BYTE 0
    field44_0x16f BYTE 0
InstanceContext ENDS
InstanceNodeInstanceCBody STRUCT
    parent InstanceNodeInstanceBody {}
    field1_0xcc BYTE 0
    field2_0xcd BYTE 0
    field3_0xce BYTE 0
    field4_0xcf BYTE 0
InstanceNodeInstanceCBody ENDS
InstanceNodeInstanceC STRUCT
    vtable DWORD 0; InstanceNodeInstance_VTable *
    body InstanceNodeInstanceCBody {}
InstanceNodeInstanceC ENDS
InstanceContextRefCounter STRUCT
    ctx DWORD 0; InstanceContext *
    refCount DWORD 0
InstanceContextRefCounter ENDS
InstanceNodeObjectLink STRUCT
    parent_ DWORD 0; undefined * *
    field1_0x4 DWORD 0; InstanceContext *
    field2_0x8 WORD 0
    field3_0xa WORD 0
    field4_0xc DWORD 0
    field5_0x10 DWORD 0
    field6_0x14 DWORD 0
    field7_0x18 DWORD 0
    field8_0x1c DWORD 0
    field9_0x20 InstanceContextRefCounter {}
    field10_0x28 BYTE 0
    field11_0x29 BYTE 0
    field12_0x2a BYTE 0
    field13_0x2b BYTE 0
    field14_0x2c BYTE 0
    field15_0x2d BYTE 0
    field16_0x2e BYTE 0
    field17_0x2f BYTE 0
    field18_0x30 BYTE 0
    field19_0x31 BYTE 0
    field20_0x32 BYTE 0
    field21_0x33 BYTE 0
    field22_0x34 BYTE 0
    field23_0x35 BYTE 0
    field24_0x36 BYTE 0
    field25_0x37 BYTE 0
    field26_0x38 BYTE 0
    field27_0x39 BYTE 0
    field28_0x3a BYTE 0
    field29_0x3b BYTE 0
    field30_0x3c BYTE 0
    field31_0x3d BYTE 0
    field32_0x3e BYTE 0
    field33_0x3f BYTE 0
    field34_0x40 BYTE 0
    field35_0x41 BYTE 0
    field36_0x42 BYTE 0
    field37_0x43 BYTE 0
    field38_0x44 BYTE 0
    field39_0x45 BYTE 0
    field40_0x46 BYTE 0
    field41_0x47 BYTE 0
    field42_0x48 BYTE 0
    field43_0x49 BYTE 0
    field44_0x4a BYTE 0
    field45_0x4b BYTE 0
    field46_0x4c BYTE 0
    field47_0x4d BYTE 0
    field48_0x4e BYTE 0
    field49_0x4f BYTE 0
    field50_0x50 BYTE 0
    field51_0x51 BYTE 0
    field52_0x52 BYTE 0
    field53_0x53 BYTE 0
    field54_0x54 BYTE 0
    field55_0x55 BYTE 0
    field56_0x56 BYTE 0
    field57_0x57 BYTE 0
    field58_0x58 BYTE 0
    field59_0x59 BYTE 0
    field60_0x5a BYTE 0
    field61_0x5b BYTE 0
    field62_0x5c BYTE 0
    field63_0x5d BYTE 0
    field64_0x5e BYTE 0
    field65_0x5f BYTE 0
    vec Vector4 {}
    field67_0x70 DWORD 0; UNV009 *
InstanceNodeObjectLink ENDS
SectionReaderBase2 STRUCT
    vtable DWORD 0; undefined * *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 DWORD 0
    field6_0xc BYTE 0
SectionReaderBase2 ENDS
ReferenceHelperAbstract STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    references DWORD 0; GameObjectReferenceList *
    index DWORD 0
ReferenceHelperAbstract ENDS
ReferenceHelper STRUCT
    parent ReferenceHelperAbstract {}
ReferenceHelper ENDS
InstanceTransform STRUCT
    matrix Matrix4 {}
    position Vector4 {}
    rotation Vector4 {}
    field3_0x60 REAL4 0.0;
    field4_0x64 REAL4 0.0;
    field5_0x68 REAL4 0.0;
    field6_0x6c REAL4 0.0;
InstanceTransform ENDS
InstanceContextSub STRUCT
    cnt DWORD 0
    chunkName TwinString {}
    field2_0x10 BYTE 384 dup (0)
InstanceContextSub ENDS
InstanceNodeInput STRUCT
    parent InstanceNodeAbstract {}
    input DWORD 0; InputStruct *
    field2_0x1c BYTE 0
    field3_0x1d BYTE 0
    field4_0x1e BYTE 0
    field5_0x1f BYTE 0
    field6_0x20 BYTE 0
    field7_0x21 BYTE 0
    field8_0x22 BYTE 0
    field9_0x23 BYTE 0
    field10_0x24 BYTE 0
    field11_0x25 BYTE 0
    field12_0x26 BYTE 0
    field13_0x27 BYTE 0
    field14_0x28 BYTE 0
    field15_0x29 BYTE 0
    field16_0x2a BYTE 0
    field17_0x2b BYTE 0
    field18_0x2c DWORD 0
    field19_0x30 DWORD 0
InstanceNodeInput ENDS
InstanceNodeKSubModule2B STRUCT
    parent InstanceNodeKSubModule2Abstract {}
    field1_0x72 BYTE 0
    field2_0x73 BYTE 0
    field3_0x74 BYTE 0
    field4_0x75 BYTE 0
    field5_0x76 BYTE 0
    field6_0x77 BYTE 0
    field7_0x78 BYTE 0
    field8_0x79 BYTE 0
    field9_0x7a BYTE 0
    field10_0x7b BYTE 0
    field11_0x7c BYTE 0
    field12_0x7d BYTE 0
    field13_0x7e BYTE 0
    field14_0x7f BYTE 0
    field15_0x80 DWORD 0
    field16_0x84 DWORD 0; InstanceContextRefCounter *
    field17_0x88 BYTE 0
    field18_0x89 BYTE 0
    field19_0x8a BYTE 0
    field20_0x8b BYTE 0
    field21_0x8c BYTE 0
    field22_0x8d BYTE 0
    field23_0x8e BYTE 0
    field24_0x8f BYTE 0
    field25_0x90 Vector4 {}
    field26_0xa0 Vector4 {}
    field27_0xb0 Vector4 {}
    field28_0xc0 Vector4 {}
    field29_0xd0 Vector4 {}
    field30_0xe0 BYTE 0
    field31_0xe1 BYTE 0
    field32_0xe2 BYTE 0
    field33_0xe3 BYTE 0
    field34_0xe4 BYTE 0
    field35_0xe5 BYTE 0
    field36_0xe6 BYTE 0
    field37_0xe7 BYTE 0
    field38_0xe8 BYTE 0
    field39_0xe9 BYTE 0
    field40_0xea BYTE 0
    field41_0xeb BYTE 0
    field42_0xec BYTE 0
    field43_0xed BYTE 0
    field44_0xee BYTE 0
    field45_0xef BYTE 0
    field46_0xf0 BYTE 0
    field47_0xf1 BYTE 0
    field48_0xf2 BYTE 0
    field49_0xf3 BYTE 0
    field50_0xf4 BYTE 0
    field51_0xf5 BYTE 0
    field52_0xf6 BYTE 0
    field53_0xf7 BYTE 0
    field54_0xf8 BYTE 0
    field55_0xf9 BYTE 0
    field56_0xfa BYTE 0
    field57_0xfb BYTE 0
    field58_0xfc BYTE 0
    field59_0xfd BYTE 0
    field60_0xfe BYTE 0
    field61_0xff BYTE 0
    field62_0x100 Vector4 {}
    field63_0x110 Vector4 {}
    field64_0x120 Vector4 {}
    field65_0x130 Vector4 {}
    field66_0x140 Vector4 {}
    field67_0x150 Vector4 {}
    field68_0x160 Vector4 {}
    field69_0x170 Vector4 {}
    field70_0x180 DWORD 0
    field71_0x184 BYTE 0
    field72_0x185 BYTE 0
    field73_0x186 BYTE 0
    field74_0x187 BYTE 0
    field75_0x188 BYTE 0
    field76_0x189 BYTE 0
    field77_0x18a BYTE 0
    field78_0x18b BYTE 0
    field79_0x18c BYTE 0
    field80_0x18d BYTE 0
    field81_0x18e BYTE 0
    field82_0x18f BYTE 0
    field83_0x190 DWORD 0
    field84_0x194 WORD 0
    field85_0x196 BYTE 0
    field86_0x197 BYTE 0
    field87_0x198 DWORD 0
    field88_0x19c DWORD 0
    field89_0x1a0 REAL4 0.0;
    field90_0x1a4 BYTE 0
    field91_0x1a5 BYTE 0
    field92_0x1a6 BYTE 0
    field93_0x1a7 BYTE 0
    field94_0x1a8 BYTE 0
    field95_0x1a9 BYTE 0
    field96_0x1aa BYTE 0
    field97_0x1ab BYTE 0
    field98_0x1ac BYTE 0
    field99_0x1ad BYTE 0
    field100_0x1ae BYTE 0
    field101_0x1af BYTE 0
    field102_0x1b0 BYTE 0
    field103_0x1b1 BYTE 0
    field104_0x1b2 BYTE 0
    field105_0x1b3 BYTE 0
    field106_0x1b4 BYTE 0
    field107_0x1b5 BYTE 0
    field108_0x1b6 BYTE 0
    field109_0x1b7 BYTE 0
    field110_0x1b8 BYTE 0
    field111_0x1b9 BYTE 0
    field112_0x1ba BYTE 0
    field113_0x1bb BYTE 0
    field114_0x1bc BYTE 0
    field115_0x1bd BYTE 0
    field116_0x1be BYTE 0
    field117_0x1bf BYTE 0
    field118_0x1c0 BYTE 0
    field119_0x1c1 BYTE 0
    field120_0x1c2 BYTE 0
    field121_0x1c3 BYTE 0
    field122_0x1c4 BYTE 0
    field123_0x1c5 BYTE 0
    field124_0x1c6 BYTE 0
    field125_0x1c7 BYTE 0
    field126_0x1c8 BYTE 0
    field127_0x1c9 BYTE 0
    field128_0x1ca BYTE 0
    field129_0x1cb BYTE 0
    field130_0x1cc BYTE 0
    field131_0x1cd BYTE 0
    field132_0x1ce BYTE 0
    field133_0x1cf BYTE 0
    field134_0x1d0 BYTE 0
    field135_0x1d1 BYTE 0
    field136_0x1d2 BYTE 0
    field137_0x1d3 BYTE 0
    field138_0x1d4 BYTE 0
    field139_0x1d5 BYTE 0
    field140_0x1d6 BYTE 0
    field141_0x1d7 BYTE 0
    field142_0x1d8 BYTE 0
    field143_0x1d9 BYTE 0
    field144_0x1da BYTE 0
    field145_0x1db BYTE 0
    field146_0x1dc BYTE 0
    field147_0x1dd BYTE 0
    field148_0x1de BYTE 0
    field149_0x1df BYTE 0
    field150_0x1e0 BYTE 0
    field151_0x1e1 BYTE 0
    field152_0x1e2 BYTE 0
    field153_0x1e3 BYTE 0
    field154_0x1e4 BYTE 0
    field155_0x1e5 BYTE 0
    field156_0x1e6 BYTE 0
    field157_0x1e7 BYTE 0
    field158_0x1e8 BYTE 0
    field159_0x1e9 BYTE 0
    field160_0x1ea BYTE 0
    field161_0x1eb BYTE 0
    field162_0x1ec BYTE 0
    field163_0x1ed BYTE 0
    field164_0x1ee BYTE 0
    field165_0x1ef BYTE 0
    field166_0x1f0 BYTE 0
    field167_0x1f1 BYTE 0
    field168_0x1f2 BYTE 0
    field169_0x1f3 BYTE 0
    field170_0x1f4 BYTE 0
    field171_0x1f5 BYTE 0
    field172_0x1f6 BYTE 0
    field173_0x1f7 BYTE 0
    field174_0x1f8 BYTE 0
    field175_0x1f9 BYTE 0
    field176_0x1fa BYTE 0
    field177_0x1fb BYTE 0
    field178_0x1fc BYTE 0
    field179_0x1fd BYTE 0
    field180_0x1fe BYTE 0
    field181_0x1ff BYTE 0
    field182_0x200 BYTE 0
    field183_0x201 BYTE 0
    field184_0x202 BYTE 0
    field185_0x203 BYTE 0
    field186_0x204 BYTE 0
    field187_0x205 BYTE 0
    field188_0x206 BYTE 0
    field189_0x207 BYTE 0
    field190_0x208 BYTE 0
    field191_0x209 BYTE 0
    field192_0x20a BYTE 0
    field193_0x20b BYTE 0
    field194_0x20c BYTE 0
    field195_0x20d BYTE 0
    field196_0x20e BYTE 0
    field197_0x20f BYTE 0
    field198_0x210 BYTE 0
    field199_0x211 BYTE 0
    field200_0x212 BYTE 0
    field201_0x213 BYTE 0
InstanceNodeKSubModule2B ENDS
InstanceNodeKSubModule3B STRUCT
    parent InstanceNodeKSubModule3Abstract {}
    field1_0x44 BYTE 0
    field2_0x45 BYTE 0
    field3_0x46 BYTE 0
    field4_0x47 BYTE 0
    field5_0x48 BYTE 0
    field6_0x49 BYTE 0
    field7_0x4a BYTE 0
    field8_0x4b BYTE 0
    field9_0x4c BYTE 0
    field10_0x4d BYTE 0
    field11_0x4e BYTE 0
    field12_0x4f BYTE 0
    field13_0x50 DWORD 0
    field14_0x54 WORD 0
    field15_0x56 BYTE 0
    field16_0x57 BYTE 0
    field17_0x58 WORD 0
    field18_0x5a BYTE 0
    field19_0x5b BYTE 0
    field20_0x5c DWORD 0
    field21_0x60 DWORD 0
    field22_0x64 DWORD 0
    field23_0x68 BYTE 0
    field24_0x69 BYTE 0
    field25_0x6a BYTE 0
    field26_0x6b BYTE 0
    field27_0x6c REAL4 0.0;
    field28_0x70 DWORD 0
    field29_0x74 BYTE 0
    field30_0x75 BYTE 0
    field31_0x76 BYTE 0
    field32_0x77 BYTE 0
    field33_0x78 BYTE 0
    field34_0x79 BYTE 0
    field35_0x7a BYTE 0
    field36_0x7b BYTE 0
    field37_0x7c BYTE 0
    field38_0x7d BYTE 0
    field39_0x7e BYTE 0
    field40_0x7f BYTE 0
    field41_0x80 DWORD 0
    field42_0x84 BYTE 0
    field43_0x85 BYTE 0
    field44_0x86 BYTE 0
    field45_0x87 BYTE 0
    field46_0x88 DWORD 0
    field47_0x8c DWORD 0
    field48_0x90 DWORD 0
    field49_0x94 BYTE 0
    field50_0x95 BYTE 0
    field51_0x96 BYTE 0
    field52_0x97 BYTE 0
    field53_0x98 DWORD 0
    field54_0x9c DWORD 0
    field55_0xa0 DWORD 0
    field56_0xa4 DWORD 0
    field57_0xa8 BYTE 0
    field58_0xa9 BYTE 0
    field59_0xaa BYTE 0
    field60_0xab BYTE 0
    field61_0xac BYTE 0
    field62_0xad BYTE 0
    field63_0xae BYTE 0
    field64_0xaf BYTE 0
    field65_0xb0 BYTE 0
    field66_0xb1 BYTE 0
    field67_0xb2 BYTE 0
    field68_0xb3 BYTE 0
    field69_0xb4 BYTE 0
    field70_0xb5 BYTE 0
    field71_0xb6 BYTE 0
    field72_0xb7 BYTE 0
    field73_0xb8 BYTE 0
    field74_0xb9 BYTE 0
    field75_0xba BYTE 0
    field76_0xbb BYTE 0
    field77_0xbc BYTE 0
    field78_0xbd BYTE 0
    field79_0xbe BYTE 0
    field80_0xbf BYTE 0
    fov REAL4 0.0;
    field82_0xc4 BYTE 0
    field83_0xc5 BYTE 0
    field84_0xc6 BYTE 0
    field85_0xc7 BYTE 0
    field86_0xc8 BYTE 0
    field87_0xc9 BYTE 0
    field88_0xca BYTE 0
    field89_0xcb BYTE 0
    field90_0xcc BYTE 0
    field91_0xcd BYTE 0
    field92_0xce BYTE 0
    field93_0xcf BYTE 0
    field94_0xd0 BYTE 0
    field95_0xd1 BYTE 0
    field96_0xd2 BYTE 0
    field97_0xd3 BYTE 0
    field98_0xd4 BYTE 0
    field99_0xd5 BYTE 0
    field100_0xd6 BYTE 0
    field101_0xd7 BYTE 0
    field102_0xd8 DWORD 0
    field103_0xdc DWORD 0
    field104_0xe0 DWORD 0
    field105_0xe4 BYTE 0
    field106_0xe5 BYTE 0
    field107_0xe6 BYTE 0
    field108_0xe7 BYTE 0
    fovVector Vector4 {}
    field110_0xf8 BYTE 0
    field111_0xf9 BYTE 0
    field112_0xfa BYTE 0
    field113_0xfb BYTE 0
    field114_0xfc BYTE 0
    field115_0xfd BYTE 0
    field116_0xfe BYTE 0
    field117_0xff BYTE 0
    field118_0x100 BYTE 0
    field119_0x101 BYTE 0
    field120_0x102 BYTE 0
    field121_0x103 BYTE 0
    field122_0x104 DWORD 0
    field123_0x108 BYTE 0
    field124_0x109 BYTE 0
    field125_0x10a BYTE 0
    field126_0x10b BYTE 0
    field127_0x10c REAL4 0.0;
    field128_0x110 BYTE 0
    field129_0x111 BYTE 0
    field130_0x112 BYTE 0
    field131_0x113 BYTE 0
    field132_0x114 BYTE 0
    field133_0x115 BYTE 0
    field134_0x116 BYTE 0
    field135_0x117 BYTE 0
    field136_0x118 BYTE 0
    field137_0x119 BYTE 0
    field138_0x11a BYTE 0
    field139_0x11b BYTE 0
    field140_0x11c BYTE 0
    field141_0x11d BYTE 0
    field142_0x11e BYTE 0
    field143_0x11f BYTE 0
    field144_0x120 DWORD 0
    field145_0x124 BYTE 0
    field146_0x125 BYTE 0
    field147_0x126 BYTE 0
    field148_0x127 BYTE 0
    field149_0x128 DWORD 0
    field150_0x12c DWORD 0
    field151_0x130 DWORD 0
    field152_0x134 BYTE 0
    field153_0x135 BYTE 0
    field154_0x136 BYTE 0
    field155_0x137 BYTE 0
    field156_0x138 DWORD 0
    field157_0x13c DWORD 0
    field158_0x140 DWORD 0
    field159_0x144 DWORD 0
    field160_0x148 BYTE 0
    field161_0x149 BYTE 0
    field162_0x14a BYTE 0
    field163_0x14b BYTE 0
    field164_0x14c BYTE 0
    field165_0x14d BYTE 0
    field166_0x14e BYTE 0
    field167_0x14f BYTE 0
    field168_0x150 BYTE 0
    field169_0x151 BYTE 0
    field170_0x152 BYTE 0
    field171_0x153 BYTE 0
    field172_0x154 BYTE 0
    field173_0x155 BYTE 0
    field174_0x156 BYTE 0
    field175_0x157 BYTE 0
    field176_0x158 REAL4 0.0;
    field177_0x15c REAL4 0.0;
    field178_0x160 REAL4 0.0;
    field179_0x164 REAL4 0.0;
    field180_0x168 REAL4 0.0;
    field181_0x16c REAL4 0.0;
    field182_0x170 BYTE 0
    field183_0x171 BYTE 0
    field184_0x172 BYTE 0
    field185_0x173 BYTE 0
    field186_0x174 BYTE 0
    field187_0x175 BYTE 0
    field188_0x176 BYTE 0
    field189_0x177 BYTE 0
    field190_0x178 REAL4 0.0;
    field191_0x17c REAL4 0.0;
    field192_0x180 REAL4 0.0;
    field193_0x184 BYTE 0
    field194_0x185 BYTE 0
    field195_0x186 BYTE 0
    field196_0x187 BYTE 0
    field197_0x188 REAL4 0.0;
    field198_0x18c REAL4 0.0;
    field199_0x190 REAL4 0.0;
    field200_0x194 REAL4 0.0;
    field201_0x198 REAL4 0.0;
    field202_0x19c REAL4 0.0;
    field203_0x1a0 BYTE 0
    field204_0x1a1 BYTE 0
    field205_0x1a2 BYTE 0
    field206_0x1a3 BYTE 0
    field207_0x1a4 BYTE 0
    field208_0x1a5 BYTE 0
    field209_0x1a6 BYTE 0
    field210_0x1a7 BYTE 0
    field211_0x1a8 BYTE 0
    field212_0x1a9 BYTE 0
    field213_0x1aa BYTE 0
    field214_0x1ab BYTE 0
    field215_0x1ac BYTE 0
    field216_0x1ad BYTE 0
    field217_0x1ae BYTE 0
    field218_0x1af BYTE 0
    field219_0x1b0 Vector4 {}
    field220_0x1c0 BYTE 0
    field221_0x1c1 BYTE 0
    field222_0x1c2 BYTE 0
    field223_0x1c3 BYTE 0
    field224_0x1c4 BYTE 0
    field225_0x1c5 BYTE 0
    field226_0x1c6 BYTE 0
    field227_0x1c7 BYTE 0
    field228_0x1c8 BYTE 0
    field229_0x1c9 BYTE 0
    field230_0x1ca BYTE 0
    field231_0x1cb BYTE 0
    field232_0x1cc BYTE 0
    field233_0x1cd BYTE 0
    field234_0x1ce BYTE 0
    field235_0x1cf BYTE 0
    field236_0x1d0 BYTE 0
    field237_0x1d1 BYTE 0
    field238_0x1d2 BYTE 0
    field239_0x1d3 BYTE 0
    field240_0x1d4 BYTE 0
    field241_0x1d5 BYTE 0
    field242_0x1d6 BYTE 0
    field243_0x1d7 BYTE 0
    field244_0x1d8 REAL4 0.0;
    field245_0x1dc DWORD 0
    field246_0x1e0 DWORD 0
    field247_0x1e4 BYTE 0
    field248_0x1e5 BYTE 0
    field249_0x1e6 BYTE 0
    field250_0x1e7 BYTE 0
    field251_0x1e8 REAL4 0.0;
    field252_0x1ec REAL4 0.0;
    field253_0x1f0 REAL4 0.0;
    field254_0x1f4 REAL4 0.0;
    field255_0x1f8 REAL4 0.0;
    field256_0x1fc REAL4 0.0;
    field257_0x200 REAL4 0.0;
    field258_0x204 REAL4 0.0;
    field259_0x208 REAL4 0.0;
    field260_0x20c REAL4 0.0;
    field261_0x210 REAL4 0.0;
    field262_0x214 REAL4 0.0;
    field263_0x218 REAL4 0.0;
    field264_0x21c REAL4 0.0;
    field265_0x220 REAL4 0.0;
    field266_0x224 REAL4 0.0;
    field267_0x228 BYTE 0
    field268_0x229 BYTE 0
    field269_0x22a BYTE 0
    field270_0x22b BYTE 0
    field271_0x22c BYTE 0
    field272_0x22d BYTE 0
    field273_0x22e BYTE 0
    field274_0x22f BYTE 0
    field275_0x230 Vector4 {}
    field276_0x240 Vector4 {}
    field277_0x250 Vector4 {}
    field278_0x260 Vector4 {}
    field279_0x270 BYTE 0
    field280_0x271 BYTE 0
    field281_0x272 BYTE 0
    field282_0x273 BYTE 0
    field283_0x274 BYTE 0
    field284_0x275 BYTE 0
    field285_0x276 BYTE 0
    field286_0x277 BYTE 0
    field287_0x278 BYTE 0
    field288_0x279 BYTE 0
    field289_0x27a BYTE 0
    field290_0x27b BYTE 0
    field291_0x27c BYTE 0
    field292_0x27d BYTE 0
    field293_0x27e BYTE 0
    field294_0x27f BYTE 0
    field295_0x280 BYTE 0
    field296_0x281 BYTE 0
    field297_0x282 BYTE 0
    field298_0x283 BYTE 0
    field299_0x284 BYTE 0
    field300_0x285 BYTE 0
    field301_0x286 BYTE 0
    field302_0x287 BYTE 0
    field303_0x288 BYTE 0
    field304_0x289 BYTE 0
    field305_0x28a BYTE 0
    field306_0x28b BYTE 0
    field307_0x28c BYTE 0
    field308_0x28d BYTE 0
    field309_0x28e BYTE 0
    field310_0x28f BYTE 0
    field311_0x290 BYTE 0
    field312_0x291 BYTE 0
    field313_0x292 BYTE 0
    field314_0x293 BYTE 0
    field315_0x294 BYTE 0
    field316_0x295 BYTE 0
    field317_0x296 BYTE 0
    field318_0x297 BYTE 0
    field319_0x298 BYTE 0
    field320_0x299 BYTE 0
    field321_0x29a BYTE 0
    field322_0x29b BYTE 0
    field323_0x29c BYTE 0
    field324_0x29d BYTE 0
    field325_0x29e BYTE 0
    field326_0x29f BYTE 0
    field327_0x2a0 BYTE 0
    field328_0x2a1 BYTE 0
    field329_0x2a2 BYTE 0
    field330_0x2a3 BYTE 0
    field331_0x2a4 BYTE 0
    field332_0x2a5 BYTE 0
    field333_0x2a6 BYTE 0
    field334_0x2a7 BYTE 0
    field335_0x2a8 BYTE 0
    field336_0x2a9 BYTE 0
    field337_0x2aa BYTE 0
    field338_0x2ab BYTE 0
    field339_0x2ac BYTE 0
    field340_0x2ad BYTE 0
    field341_0x2ae BYTE 0
    field342_0x2af BYTE 0
    field343_0x2b0 BYTE 0
    field344_0x2b1 BYTE 0
    field345_0x2b2 BYTE 0
    field346_0x2b3 BYTE 0
    field347_0x2b4 BYTE 0
    field348_0x2b5 BYTE 0
    field349_0x2b6 BYTE 0
    field350_0x2b7 BYTE 0
    field351_0x2b8 BYTE 0
    field352_0x2b9 BYTE 0
    field353_0x2ba BYTE 0
    field354_0x2bb BYTE 0
    field355_0x2bc BYTE 0
    field356_0x2bd BYTE 0
    field357_0x2be BYTE 0
    field358_0x2bf BYTE 0
    field359_0x2c0 BYTE 0
    field360_0x2c1 BYTE 0
    field361_0x2c2 BYTE 0
    field362_0x2c3 BYTE 0
    field363_0x2c4 BYTE 0
    field364_0x2c5 BYTE 0
    field365_0x2c6 BYTE 0
    field366_0x2c7 BYTE 0
    field367_0x2c8 BYTE 0
    field368_0x2c9 BYTE 0
    field369_0x2ca BYTE 0
    field370_0x2cb BYTE 0
    field371_0x2cc BYTE 0
    field372_0x2cd BYTE 0
    field373_0x2ce BYTE 0
    field374_0x2cf BYTE 0
    field375_0x2d0 BYTE 0
    field376_0x2d1 BYTE 0
    field377_0x2d2 BYTE 0
    field378_0x2d3 BYTE 0
    field379_0x2d4 BYTE 0
    field380_0x2d5 BYTE 0
    field381_0x2d6 BYTE 0
    field382_0x2d7 BYTE 0
    field383_0x2d8 BYTE 0
    field384_0x2d9 BYTE 0
    field385_0x2da BYTE 0
    field386_0x2db BYTE 0
    field387_0x2dc BYTE 0
    field388_0x2dd BYTE 0
    field389_0x2de BYTE 0
    field390_0x2df BYTE 0
    field391_0x2e0 BYTE 0
    field392_0x2e1 BYTE 0
    field393_0x2e2 BYTE 0
    field394_0x2e3 BYTE 0
    field395_0x2e4 BYTE 0
    field396_0x2e5 BYTE 0
    field397_0x2e6 BYTE 0
    field398_0x2e7 BYTE 0
    field399_0x2e8 BYTE 0
    field400_0x2e9 BYTE 0
    field401_0x2ea BYTE 0
    field402_0x2eb BYTE 0
    field403_0x2ec BYTE 0
    field404_0x2ed BYTE 0
    field405_0x2ee BYTE 0
    field406_0x2ef BYTE 0
    field407_0x2f0 BYTE 0
    field408_0x2f1 BYTE 0
    field409_0x2f2 BYTE 0
    field410_0x2f3 BYTE 0
    field411_0x2f4 BYTE 0
    field412_0x2f5 BYTE 0
    field413_0x2f6 BYTE 0
    field414_0x2f7 BYTE 0
    field415_0x2f8 BYTE 0
    field416_0x2f9 BYTE 0
    field417_0x2fa BYTE 0
    field418_0x2fb BYTE 0
    field419_0x2fc BYTE 0
    field420_0x2fd BYTE 0
    field421_0x2fe BYTE 0
    field422_0x2ff BYTE 0
    field423_0x300 DWORD 0
    field424_0x304 WORD 0
    field425_0x306 BYTE 0
    field426_0x307 BYTE 0
    field427_0x308 DWORD 0
    field428_0x30c DWORD 0
    field429_0x310 REAL4 0.0;
    field430_0x314 BYTE 0
    field431_0x315 BYTE 0
    field432_0x316 BYTE 0
    field433_0x317 BYTE 0
    field434_0x318 BYTE 0
    field435_0x319 BYTE 0
    field436_0x31a BYTE 0
    field437_0x31b BYTE 0
    field438_0x31c BYTE 0
    field439_0x31d BYTE 0
    field440_0x31e BYTE 0
    field441_0x31f BYTE 0
    field442_0x320 BYTE 0
    field443_0x321 BYTE 0
    field444_0x322 BYTE 0
    field445_0x323 BYTE 0
    field446_0x324 BYTE 0
    field447_0x325 BYTE 0
    field448_0x326 BYTE 0
    field449_0x327 BYTE 0
    field450_0x328 BYTE 0
    field451_0x329 BYTE 0
    field452_0x32a BYTE 0
    field453_0x32b BYTE 0
    field454_0x32c BYTE 0
    field455_0x32d BYTE 0
    field456_0x32e BYTE 0
    field457_0x32f BYTE 0
    field458_0x330 BYTE 0
    field459_0x331 BYTE 0
    field460_0x332 BYTE 0
    field461_0x333 BYTE 0
    field462_0x334 BYTE 0
    field463_0x335 BYTE 0
    field464_0x336 BYTE 0
    field465_0x337 BYTE 0
    field466_0x338 BYTE 0
    field467_0x339 BYTE 0
    field468_0x33a BYTE 0
    field469_0x33b BYTE 0
    field470_0x33c BYTE 0
    field471_0x33d BYTE 0
    field472_0x33e BYTE 0
    field473_0x33f BYTE 0
    field474_0x340 BYTE 0
    field475_0x341 BYTE 0
    field476_0x342 BYTE 0
    field477_0x343 BYTE 0
    field478_0x344 BYTE 0
    field479_0x345 BYTE 0
    field480_0x346 BYTE 0
    field481_0x347 BYTE 0
    field482_0x348 BYTE 0
    field483_0x349 BYTE 0
    field484_0x34a BYTE 0
    field485_0x34b BYTE 0
    field486_0x34c BYTE 0
    field487_0x34d BYTE 0
    field488_0x34e BYTE 0
    field489_0x34f BYTE 0
    field490_0x350 BYTE 0
    field491_0x351 BYTE 0
    field492_0x352 BYTE 0
    field493_0x353 BYTE 0
    field494_0x354 BYTE 0
    field495_0x355 BYTE 0
    field496_0x356 BYTE 0
    field497_0x357 BYTE 0
    field498_0x358 BYTE 0
    field499_0x359 BYTE 0
    field500_0x35a BYTE 0
    field501_0x35b BYTE 0
    field502_0x35c BYTE 0
    field503_0x35d BYTE 0
    field504_0x35e BYTE 0
    field505_0x35f BYTE 0
    field506_0x360 BYTE 0
    field507_0x361 BYTE 0
    field508_0x362 BYTE 0
    field509_0x363 BYTE 0
    field510_0x364 BYTE 0
    field511_0x365 BYTE 0
    field512_0x366 BYTE 0
    field513_0x367 BYTE 0
    field514_0x368 BYTE 0
    field515_0x369 BYTE 0
    field516_0x36a BYTE 0
    field517_0x36b BYTE 0
    field518_0x36c BYTE 0
    field519_0x36d BYTE 0
    field520_0x36e BYTE 0
    field521_0x36f BYTE 0
    field522_0x370 BYTE 0
    field523_0x371 BYTE 0
    field524_0x372 BYTE 0
    field525_0x373 BYTE 0
    field526_0x374 BYTE 0
    field527_0x375 BYTE 0
    field528_0x376 BYTE 0
    field529_0x377 BYTE 0
    field530_0x378 BYTE 0
    field531_0x379 BYTE 0
    field532_0x37a BYTE 0
    field533_0x37b BYTE 0
    field534_0x37c BYTE 0
    field535_0x37d BYTE 0
    field536_0x37e BYTE 0
    field537_0x37f BYTE 0
    field538_0x380 BYTE 0
    field539_0x381 BYTE 0
    field540_0x382 BYTE 0
    field541_0x383 BYTE 0
    field542_0x384 BYTE 0
    field543_0x385 BYTE 0
    field544_0x386 BYTE 0
    field545_0x387 BYTE 0
    field546_0x388 BYTE 0
    field547_0x389 BYTE 0
    field548_0x38a BYTE 0
    field549_0x38b BYTE 0
    field550_0x38c BYTE 0
    field551_0x38d BYTE 0
    field552_0x38e BYTE 0
    field553_0x38f BYTE 0
    field554_0x390 DWORD 0
    field555_0x394 BYTE 0
    field556_0x395 BYTE 0
    field557_0x396 BYTE 0
    field558_0x397 BYTE 0
    field559_0x398 REAL4 0.0;
    field560_0x39c BYTE 0
    field561_0x39d BYTE 0
    field562_0x39e BYTE 0
    field563_0x39f BYTE 0
    field564_0x3a0 REAL4 0.0;
    field565_0x3a4 REAL4 0.0;
    field566_0x3a8 REAL4 0.0;
    field567_0x3ac BYTE 0
    field568_0x3ad BYTE 0
    field569_0x3ae BYTE 0
    field570_0x3af BYTE 0
    field571_0x3b0 BYTE 0
    field572_0x3b1 BYTE 0
    field573_0x3b2 BYTE 0
    field574_0x3b3 BYTE 0
    field575_0x3b4 BYTE 0
    field576_0x3b5 BYTE 0
    field577_0x3b6 BYTE 0
    field578_0x3b7 BYTE 0
    field579_0x3b8 BYTE 0
    field580_0x3b9 BYTE 0
    field581_0x3ba BYTE 0
    field582_0x3bb BYTE 0
    field583_0x3bc BYTE 0
    field584_0x3bd BYTE 0
    field585_0x3be BYTE 0
    field586_0x3bf BYTE 0
    field587_0x3c0 BYTE 0
    field588_0x3c1 BYTE 0
    field589_0x3c2 BYTE 0
    field590_0x3c3 BYTE 0
    field591_0x3c4 BYTE 0
    field592_0x3c5 BYTE 0
    field593_0x3c6 BYTE 0
    field594_0x3c7 BYTE 0
    field595_0x3c8 BYTE 0
    field596_0x3c9 BYTE 0
    field597_0x3ca BYTE 0
    field598_0x3cb BYTE 0
    field599_0x3cc BYTE 0
    field600_0x3cd BYTE 0
    field601_0x3ce BYTE 0
    field602_0x3cf BYTE 0
    field603_0x3d0 BYTE 0
    field604_0x3d1 BYTE 0
    field605_0x3d2 BYTE 0
    field606_0x3d3 BYTE 0
    field607_0x3d4 BYTE 0
    field608_0x3d5 BYTE 0
    field609_0x3d6 BYTE 0
    field610_0x3d7 BYTE 0
    field611_0x3d8 DWORD 0
    field612_0x3dc BYTE 0
    field613_0x3dd BYTE 0
    field614_0x3de BYTE 0
    field615_0x3df BYTE 0
InstanceNodeKSubModule3B ENDS
InstanceNodeKSubB STRUCT
    parent InstanceNodeKSubBase {}
    field1_0x4c BYTE 0
    field2_0x4d BYTE 0
    field3_0x4e BYTE 0
    field4_0x4f BYTE 0
    field5_0x50 DWORD 0
    inputVal1 REAL4 0.0;
    inputVal2 REAL4 0.0;
    inputVal3 REAL4 0.0;
    inputVal4 REAL4 0.0;
    inputVal5 REAL4 0.0;
    inputVal6 REAL4 0.0;
    inputVal7 REAL4 0.0;
    inputVal8 REAL4 0.0;
    field14_0x74 BYTE 0
    field15_0x75 BYTE 0
    field16_0x76 BYTE 0
    field17_0x77 BYTE 0
    field18_0x78 BYTE 0
    field19_0x79 BYTE 0
    field20_0x7a BYTE 0
    field21_0x7b BYTE 0
    field22_0x7c BYTE 0
    field23_0x7d BYTE 0
    field24_0x7e BYTE 0
    field25_0x7f BYTE 0
    struct1 InstanceNodeKSubModuleA {}
    field27_0xa8 BYTE 0
    field28_0xa9 BYTE 0
    field29_0xaa BYTE 0
    field30_0xab BYTE 0
    field31_0xac BYTE 0
    field32_0xad BYTE 0
    field33_0xae BYTE 0
    field34_0xaf BYTE 0
    struct2 InstanceNodeKSubModuleA {}
    field36_0xd8 BYTE 0
    field37_0xd9 BYTE 0
    field38_0xda BYTE 0
    field39_0xdb BYTE 0
    field40_0xdc BYTE 0
    field41_0xdd BYTE 0
    field42_0xde BYTE 0
    field43_0xdf BYTE 0
    struct3 InstanceNodeKSubModule2B {}
    field45_0x2f4 BYTE 0
    field46_0x2f5 BYTE 0
    field47_0x2f6 BYTE 0
    field48_0x2f7 BYTE 0
    field49_0x2f8 BYTE 0
    field50_0x2f9 BYTE 0
    field51_0x2fa BYTE 0
    field52_0x2fb BYTE 0
    field53_0x2fc BYTE 0
    field54_0x2fd BYTE 0
    field55_0x2fe BYTE 0
    field56_0x2ff BYTE 0
    struct4 InstanceNodeKSubModule3B {}
    field58_0x6e0 BYTE 0
    field59_0x6e1 BYTE 0
    field60_0x6e2 BYTE 0
    field61_0x6e3 BYTE 0
    field62_0x6e4 BYTE 0
    field63_0x6e5 BYTE 0
    field64_0x6e6 BYTE 0
    field65_0x6e7 BYTE 0
    field66_0x6e8 BYTE 0
    field67_0x6e9 BYTE 0
    field68_0x6ea BYTE 0
    field69_0x6eb BYTE 0
    field70_0x6ec BYTE 0
    field71_0x6ed BYTE 0
    field72_0x6ee BYTE 0
    field73_0x6ef BYTE 0
    field74_0x6f0 BYTE 0
    field75_0x6f1 BYTE 0
    field76_0x6f2 BYTE 0
    field77_0x6f3 BYTE 0
    field78_0x6f4 BYTE 0
    field79_0x6f5 BYTE 0
    field80_0x6f6 BYTE 0
    field81_0x6f7 BYTE 0
    field82_0x6f8 BYTE 0
    field83_0x6f9 BYTE 0
    field84_0x6fa BYTE 0
    field85_0x6fb BYTE 0
    field86_0x6fc BYTE 0
    field87_0x6fd BYTE 0
    field88_0x6fe BYTE 0
    field89_0x6ff BYTE 0
    ctx DWORD 0; InstanceContext *
    field91_0x704 BYTE 0
    field92_0x705 BYTE 0
    field93_0x706 BYTE 0
    field94_0x707 BYTE 0
    field95_0x708 BYTE 0
    field96_0x709 BYTE 0
    field97_0x70a BYTE 0
    field98_0x70b BYTE 0
    field99_0x70c BYTE 0
    field100_0x70d BYTE 0
    field101_0x70e BYTE 0
    field102_0x70f BYTE 0
    field103_0x710 DWORD 0
InstanceNodeKSubB ENDS
InstanceNodeKSubWrapper STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    _struct InstanceNodeKSubB {}
InstanceNodeKSubWrapper ENDS
InstanceNodeCamera STRUCT
    vtable DWORD 0; pointer *
    ctx DWORD 0; InstanceContext *
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 DWORD 0
    chunkMeta DWORD 0; ChunkMeta *
    ctxPtr DWORD 0; InstanceContextRefCounter *
    field21_0x24 BYTE 0
    field22_0x25 BYTE 0
    field23_0x26 BYTE 0
    field24_0x27 BYTE 0
    field25_0x28 BYTE 0
    field26_0x29 BYTE 0
    field27_0x2a BYTE 0
    field28_0x2b BYTE 0
    field29_0x2c BYTE 0
    field30_0x2d BYTE 0
    field31_0x2e BYTE 0
    field32_0x2f BYTE 0
    _struct InstanceNodeKSubWrapper {}
    field34_0x764 BYTE 0
    field35_0x765 BYTE 0
    field36_0x766 BYTE 0
    field37_0x767 BYTE 0
    field38_0x768 BYTE 0
    field39_0x769 BYTE 0
    field40_0x76a BYTE 0
    field41_0x76b BYTE 0
    field42_0x76c BYTE 0
    field43_0x76d BYTE 0
    field44_0x76e BYTE 0
    field45_0x76f BYTE 0
    field46_0x770 BYTE 0
    field47_0x771 BYTE 0
    field48_0x772 BYTE 0
    field49_0x773 BYTE 0
    field50_0x774 BYTE 0
    field51_0x775 BYTE 0
    field52_0x776 BYTE 0
    field53_0x777 BYTE 0
    field54_0x778 BYTE 0
    field55_0x779 BYTE 0
    field56_0x77a BYTE 0
    field57_0x77b BYTE 0
    field58_0x77c BYTE 0
    field59_0x77d BYTE 0
    field60_0x77e BYTE 0
    field61_0x77f BYTE 0
    field62_0x780 BYTE 0
    field63_0x781 BYTE 0
    field64_0x782 BYTE 0
    field65_0x783 BYTE 0
    field66_0x784 BYTE 0
    field67_0x785 BYTE 0
    field68_0x786 BYTE 0
    field69_0x787 BYTE 0
    field70_0x788 BYTE 0
    field71_0x789 BYTE 0
    field72_0x78a BYTE 0
    field73_0x78b BYTE 0
    field74_0x78c BYTE 0
    field75_0x78d BYTE 0
    field76_0x78e BYTE 0
    field77_0x78f BYTE 0
InstanceNodeCamera ENDS
InstanceNodeA STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2Abstract *
InstanceNodeA ENDS
InstanceNodeChiChi STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2B *
InstanceNodeChiChi ENDS
InstanceNodeCharacter STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2C *
InstanceNodeCharacter ENDS
InstanceNodeCrate STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2D *
InstanceNodeCrate ENDS
InstanceNodeF STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2F *
InstanceNodeF ENDS
InstanceNodeFurniture STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2G *
InstanceNodeFurniture ENDS
InstanceNodePayGate STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2H *
InstanceNodePayGate ENDS
InstanceNodeI STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; NodeRelated2I *
InstanceNodeI ENDS
InstanceNodeL STRUCT
    parent InstanceNodeAbstract {}
InstanceNodeL ENDS
InstanceNodeShadow STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0
    array BYTE 16 dup (0)
InstanceNodeShadow ENDS
InstanceNodeOGI STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0
    ogi DWORD 0; OGI *
    field3_0x20 DWORD 0
    field4_0x24 DWORD 0; InstanceNodeOGISub *
    field5_0x28 DWORD 0
    field6_0x2c DWORD 0
InstanceNodeOGI ENDS
InstanceNodeO STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0
    field2_0x1c DWORD 0
    field3_0x20 DWORD 0
    field4_0x24 DWORD 0
    field5_0x28 DWORD 0; UNV014 *
    field6_0x2c DWORD 0; UNV015 *
InstanceNodeO ENDS
InstanceNodeTriggerAbstractBody STRUCT
    parent InstanceNodeAbstractBody {}
    field1_0x14 DWORD 0
    field2_0x18 DWORD 0
    field3_0x1c DWORD 0
    field4_0x20 DWORD 0
    field5_0x24 DWORD 0
    field6_0x28 DWORD 0
    field7_0x2c AutoClass52 {}
    field8_0x5c DWORD 0
    field9_0x60 DWORD 0
    field10_0x64 DWORD 0
    field11_0x68 DWORD 0
    field12_0x6c DWORD 0
    field13_0x70 DWORD 0
    field14_0x74 DWORD 0
    field15_0x78 DWORD 0
    field16_0x7c DWORD 0
    field17_0x80 DWORD 0
    field18_0x84 DWORD 0
    field19_0x88 DWORD 0
    field20_0x8c DWORD 0
    field21_0x90 DWORD 0
    field22_0x94 DWORD 0
    field23_0x98 DWORD 0
    field24_0x9c DWORD 0
    field25_0xa0 DWORD 0
    field26_0xa4 DWORD 0
    field27_0xa8 DWORD 0
    field28_0xac DWORD 0
    field29_0xb0 DWORD 0
    field30_0xb4 DWORD 0
    field31_0xb8 DWORD 0
    field32_0xbc DWORD 0
    field33_0xc0 DWORD 0
    field34_0xc4 DWORD 0
    field35_0xc8 DWORD 0
    field36_0xcc DWORD 0
    field37_0xd0 DWORD 0
    field38_0xd4 DWORD 0
    field39_0xd8 DWORD 0
    field40_0xdc DWORD 0
InstanceNodeTriggerAbstractBody ENDS
InstanceNodeTriggerAbstract STRUCT
    vtable DWORD 0; InstanceNodeTrigger_VTable *
    body InstanceNodeTriggerAbstractBody {}
InstanceNodeTriggerAbstract ENDS
InstanceNodeR STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0
    fov REAL4 0.0;
    field3_0x20 REAL4 0.0;
    _near REAL4 0.0;
    _far REAL4 0.0;
    field6_0x2c DWORD 0; pointer
    field7_0x30 DWORD 0; pointer
    field8_0x34 DWORD 0
    field9_0x38 DWORD 0
InstanceNodeR ENDS
InstanceNodePhysicsBody STRUCT
    parent InstanceNodeAbstractBody {}
    field1_0x14 DWORD 0
    field2_0x18 REAL4 0.0;
    field3_0x1c Vector4 {}
    field4_0x2c Vector4 {}
    field5_0x3c Vector4 {}
    field6_0x4c Vector4 {}
    field7_0x5c REAL4 0.0;
    field8_0x60 DWORD 0
    field9_0x64 BYTE 0
    field10_0x65 BYTE 0
    field11_0x66 BYTE 0
    field12_0x67 BYTE 0
    field13_0x68 BYTE 0
    field14_0x69 BYTE 0
    field15_0x6a BYTE 0
    field16_0x6b BYTE 0
    field17_0x6c Vector4 {}
    field18_0x7c Vector4 {}
    field19_0x8c Vector4 {}
    field20_0x9c DWORD 0
    field21_0xa0 DWORD 0
    field22_0xa4 BYTE 0
    field23_0xa5 BYTE 0
    field24_0xa6 BYTE 0
    field25_0xa7 BYTE 0
    field26_0xa8 BYTE 0
    field27_0xa9 BYTE 0
    field28_0xaa BYTE 0
    field29_0xab BYTE 0
    matrix1 Matrix4 {}
    matrix2 Matrix4 {}
    field32_0x12c DWORD 0
    field33_0x130 DWORD 0
    field34_0x134 DWORD 0
    field35_0x138 DWORD 0
    field36_0x13c Vector4 {}
    field37_0x14c Vector4 {}
    field38_0x15c Vector4 {}
    field39_0x16c Matrix4 {}
    field40_0x1ac Vector4 {}
    field41_0x1bc Vector4 {}
    field42_0x1cc Vector4 {}
    field43_0x1dc Vector4 {}
    field44_0x1ec Vector4 {}
    field45_0x1fc Vector4 {}
    field46_0x20c REAL4 0.0;
    field47_0x210 BYTE 0
    field48_0x211 BYTE 0
    field49_0x212 BYTE 0
    field50_0x213 BYTE 0
    field51_0x214 BYTE 0
    field52_0x215 BYTE 0
    field53_0x216 BYTE 0
    field54_0x217 BYTE 0
    field55_0x218 BYTE 0
    field56_0x219 BYTE 0
    field57_0x21a BYTE 0
    field58_0x21b BYTE 0
    field59_0x21c DWORD 0
    field60_0x220 BYTE 0
    field61_0x221 BYTE 0
    field62_0x222 BYTE 0
    field63_0x223 BYTE 0
    field64_0x224 BYTE 0
    field65_0x225 BYTE 0
    field66_0x226 BYTE 0
    field67_0x227 BYTE 0
    field68_0x228 BYTE 0
    field69_0x229 BYTE 0
    field70_0x22a BYTE 0
    field71_0x22b BYTE 0
    field72_0x22c BYTE 0
    field73_0x22d BYTE 0
    field74_0x22e BYTE 0
    field75_0x22f BYTE 0
    field76_0x230 BYTE 0
    field77_0x231 BYTE 0
    field78_0x232 BYTE 0
    field79_0x233 BYTE 0
    field80_0x234 BYTE 0
    field81_0x235 BYTE 0
    field82_0x236 BYTE 0
    field83_0x237 BYTE 0
    field84_0x238 BYTE 0
    field85_0x239 BYTE 0
    field86_0x23a BYTE 0
    field87_0x23b BYTE 0
    field88_0x23c Vector4 {}
    field89_0x24c BYTE 0
    field90_0x24d BYTE 0
    field91_0x24e BYTE 0
    field92_0x24f BYTE 0
    field93_0x250 BYTE 0
    field94_0x251 BYTE 0
    field95_0x252 BYTE 0
    field96_0x253 BYTE 0
    field97_0x254 BYTE 0
    field98_0x255 BYTE 0
    field99_0x256 BYTE 0
    field100_0x257 BYTE 0
    field101_0x258 BYTE 0
    field102_0x259 BYTE 0
    field103_0x25a BYTE 0
    field104_0x25b BYTE 0
    field105_0x25c BYTE 0
    field106_0x25d BYTE 0
    field107_0x25e BYTE 0
    field108_0x25f BYTE 0
    field109_0x260 BYTE 0
    field110_0x261 BYTE 0
    field111_0x262 BYTE 0
    field112_0x263 BYTE 0
    field113_0x264 BYTE 0
    field114_0x265 BYTE 0
    field115_0x266 BYTE 0
    field116_0x267 BYTE 0
    field117_0x268 BYTE 0
    field118_0x269 BYTE 0
    field119_0x26a BYTE 0
    field120_0x26b BYTE 0
    field121_0x26c BYTE 0
    field122_0x26d BYTE 0
    field123_0x26e BYTE 0
    field124_0x26f BYTE 0
    field125_0x270 BYTE 0
    field126_0x271 BYTE 0
    field127_0x272 BYTE 0
    field128_0x273 BYTE 0
    field129_0x274 BYTE 0
    field130_0x275 BYTE 0
    field131_0x276 BYTE 0
    field132_0x277 BYTE 0
    field133_0x278 BYTE 0
    field134_0x279 BYTE 0
    field135_0x27a BYTE 0
    field136_0x27b BYTE 0
    field137_0x27c BYTE 0
    field138_0x27d BYTE 0
    field139_0x27e BYTE 0
    field140_0x27f BYTE 0
    field141_0x280 BYTE 0
    field142_0x281 BYTE 0
    field143_0x282 BYTE 0
    field144_0x283 BYTE 0
    field145_0x284 BYTE 0
    field146_0x285 BYTE 0
    field147_0x286 BYTE 0
    field148_0x287 BYTE 0
    field149_0x288 BYTE 0
    field150_0x289 BYTE 0
    field151_0x28a BYTE 0
    field152_0x28b BYTE 0
    field153_0x28c BYTE 0
    field154_0x28d BYTE 0
    field155_0x28e BYTE 0
    field156_0x28f BYTE 0
    field157_0x290 BYTE 0
    field158_0x291 BYTE 0
    field159_0x292 BYTE 0
    field160_0x293 BYTE 0
    field161_0x294 BYTE 0
    field162_0x295 BYTE 0
    field163_0x296 BYTE 0
    field164_0x297 BYTE 0
    field165_0x298 BYTE 0
    field166_0x299 BYTE 0
    field167_0x29a BYTE 0
    field168_0x29b BYTE 0
    field169_0x29c BYTE 0
    field170_0x29d BYTE 0
    field171_0x29e BYTE 0
    field172_0x29f BYTE 0
    field173_0x2a0 BYTE 0
    field174_0x2a1 BYTE 0
    field175_0x2a2 BYTE 0
    field176_0x2a3 BYTE 0
    field177_0x2a4 BYTE 0
    field178_0x2a5 BYTE 0
    field179_0x2a6 BYTE 0
    field180_0x2a7 BYTE 0
    field181_0x2a8 BYTE 0
    field182_0x2a9 BYTE 0
    field183_0x2aa BYTE 0
    field184_0x2ab BYTE 0
    field185_0x2ac BYTE 0
    field186_0x2ad BYTE 0
    field187_0x2ae BYTE 0
    field188_0x2af BYTE 0
    field189_0x2b0 BYTE 0
    field190_0x2b1 BYTE 0
    field191_0x2b2 BYTE 0
    field192_0x2b3 BYTE 0
    field193_0x2b4 BYTE 0
    field194_0x2b5 BYTE 0
    field195_0x2b6 BYTE 0
    field196_0x2b7 BYTE 0
    field197_0x2b8 BYTE 0
    field198_0x2b9 BYTE 0
    field199_0x2ba BYTE 0
    field200_0x2bb BYTE 0
    field201_0x2bc BYTE 0
    field202_0x2bd BYTE 0
    field203_0x2be BYTE 0
    field204_0x2bf BYTE 0
    field205_0x2c0 BYTE 0
    field206_0x2c1 BYTE 0
    field207_0x2c2 BYTE 0
    field208_0x2c3 BYTE 0
    field209_0x2c4 BYTE 0
    field210_0x2c5 BYTE 0
    field211_0x2c6 BYTE 0
    field212_0x2c7 BYTE 0
    field213_0x2c8 BYTE 0
    field214_0x2c9 BYTE 0
    field215_0x2ca BYTE 0
    field216_0x2cb BYTE 0
    mePtr DWORD 0; InstanceNodePhysics *
InstanceNodePhysicsBody ENDS
InstanceNodePhysics STRUCT
    vtable DWORD 0; InstanceNodePhysics_VTable *
    body InstanceNodePhysicsBody {}
InstanceNodePhysics ENDS
InstanceNodeT STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 DWORD 0; pointer
    field2_0x1c DWORD 0
InstanceNodeT ENDS
InstanceNodeAA STRUCT
    parent InstanceNodeA {}
InstanceNodeAA ENDS
InstanceNodeTriggerBody STRUCT
    parent InstanceNodeTriggerAbstractBody {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 BYTE 0
    field18_0xf1 BYTE 0
    field19_0xf2 BYTE 0
    field20_0xf3 BYTE 0
    field21_0xf4 BYTE 0
    field22_0xf5 BYTE 0
    field23_0xf6 BYTE 0
    field24_0xf7 BYTE 0
    field25_0xf8 BYTE 0
    field26_0xf9 BYTE 0
    field27_0xfa BYTE 0
    field28_0xfb BYTE 0
    field29_0xfc BYTE 0
    field30_0xfd BYTE 0
    field31_0xfe BYTE 0
    field32_0xff BYTE 0
    field33_0x100 BYTE 0
    field34_0x101 BYTE 0
    field35_0x102 BYTE 0
    field36_0x103 BYTE 0
    field37_0x104 BYTE 0
    field38_0x105 BYTE 0
    field39_0x106 BYTE 0
    field40_0x107 BYTE 0
    field41_0x108 BYTE 0
    field42_0x109 BYTE 0
    field43_0x10a BYTE 0
    field44_0x10b BYTE 0
    field45_0x10c BYTE 0
    field46_0x10d BYTE 0
    field47_0x10e BYTE 0
    field48_0x10f BYTE 0
    field49_0x110 BYTE 0
    field50_0x111 BYTE 0
    field51_0x112 BYTE 0
    field52_0x113 BYTE 0
    field53_0x114 BYTE 0
    field54_0x115 BYTE 0
    field55_0x116 BYTE 0
    field56_0x117 BYTE 0
    field57_0x118 BYTE 0
    field58_0x119 BYTE 0
    field59_0x11a BYTE 0
    field60_0x11b BYTE 0
    field61_0x11c BYTE 0
    field62_0x11d BYTE 0
    field63_0x11e BYTE 0
    field64_0x11f BYTE 0
    field65_0x120 BYTE 0
    field66_0x121 BYTE 0
    field67_0x122 BYTE 0
    field68_0x123 BYTE 0
    field69_0x124 BYTE 0
    field70_0x125 BYTE 0
    field71_0x126 BYTE 0
    field72_0x127 BYTE 0
    field73_0x128 BYTE 0
    field74_0x129 BYTE 0
    field75_0x12a BYTE 0
    field76_0x12b BYTE 0
    field77_0x12c BYTE 0
    field78_0x12d BYTE 0
    field79_0x12e BYTE 0
    field80_0x12f BYTE 0
    field81_0x130 BYTE 0
    field82_0x131 BYTE 0
    field83_0x132 BYTE 0
    field84_0x133 BYTE 0
    field85_0x134 BYTE 0
    field86_0x135 BYTE 0
    field87_0x136 BYTE 0
    field88_0x137 BYTE 0
    field89_0x138 BYTE 0
    field90_0x139 BYTE 0
    field91_0x13a BYTE 0
    field92_0x13b BYTE 0
    field93_0x13c BYTE 0
    field94_0x13d BYTE 0
    field95_0x13e BYTE 0
    field96_0x13f BYTE 0
    field97_0x140 BYTE 0
    field98_0x141 BYTE 0
    field99_0x142 BYTE 0
    field100_0x143 BYTE 0
    field101_0x144 BYTE 0
    field102_0x145 BYTE 0
    field103_0x146 BYTE 0
    field104_0x147 BYTE 0
    field105_0x148 BYTE 0
    field106_0x149 BYTE 0
    field107_0x14a BYTE 0
    field108_0x14b BYTE 0
    field109_0x14c BYTE 0
    field110_0x14d BYTE 0
    field111_0x14e BYTE 0
    field112_0x14f BYTE 0
    field113_0x150 BYTE 0
    field114_0x151 BYTE 0
    field115_0x152 BYTE 0
    field116_0x153 BYTE 0
    field117_0x154 BYTE 0
    field118_0x155 BYTE 0
    field119_0x156 BYTE 0
    field120_0x157 BYTE 0
    field121_0x158 BYTE 0
    field122_0x159 BYTE 0
    field123_0x15a BYTE 0
    field124_0x15b BYTE 0
    field125_0x15c BYTE 0
    field126_0x15d BYTE 0
    field127_0x15e BYTE 0
    field128_0x15f BYTE 0
    field129_0x160 BYTE 0
    field130_0x161 BYTE 0
    field131_0x162 BYTE 0
    field132_0x163 BYTE 0
    field133_0x164 BYTE 0
    field134_0x165 BYTE 0
    field135_0x166 BYTE 0
    field136_0x167 BYTE 0
    field137_0x168 BYTE 0
    field138_0x169 BYTE 0
    field139_0x16a BYTE 0
    field140_0x16b BYTE 0
    field141_0x16c Vector4 {}
    field142_0x17c BYTE 0
    field143_0x17d BYTE 0
    field144_0x17e BYTE 0
    field145_0x17f BYTE 0
    field146_0x180 BYTE 0
    field147_0x181 BYTE 0
    field148_0x182 BYTE 0
    field149_0x183 BYTE 0
    field150_0x184 BYTE 0
    field151_0x185 BYTE 0
    field152_0x186 BYTE 0
    field153_0x187 BYTE 0
    field154_0x188 Vector4 {}
    field155_0x198 BYTE 0
    field156_0x199 BYTE 0
    field157_0x19a BYTE 0
    field158_0x19b BYTE 0
InstanceNodeTriggerBody ENDS
InstanceNodeTrigger STRUCT
    vtable DWORD 0; InstanceNodeTrigger_VTable *
    body InstanceNodeTriggerBody {}
InstanceNodeTrigger ENDS
InstanceNodeCameraTriggerBody STRUCT
    parent InstanceNodeTriggerAbstractBody {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 BYTE 0
    field18_0xf1 BYTE 0
    field19_0xf2 BYTE 0
    field20_0xf3 BYTE 0
    field21_0xf4 BYTE 0
    field22_0xf5 BYTE 0
    field23_0xf6 BYTE 0
    field24_0xf7 BYTE 0
    field25_0xf8 BYTE 0
    field26_0xf9 BYTE 0
    field27_0xfa BYTE 0
    field28_0xfb BYTE 0
    field29_0xfc BYTE 0
    field30_0xfd BYTE 0
    field31_0xfe BYTE 0
    field32_0xff BYTE 0
    field33_0x100 BYTE 0
    field34_0x101 BYTE 0
    field35_0x102 BYTE 0
    field36_0x103 BYTE 0
    field37_0x104 BYTE 0
    field38_0x105 BYTE 0
    field39_0x106 BYTE 0
    field40_0x107 BYTE 0
    field41_0x108 BYTE 0
    field42_0x109 BYTE 0
    field43_0x10a BYTE 0
    field44_0x10b BYTE 0
    field45_0x10c BYTE 0
    field46_0x10d BYTE 0
    field47_0x10e BYTE 0
    field48_0x10f BYTE 0
    field49_0x110 BYTE 0
    field50_0x111 BYTE 0
    field51_0x112 BYTE 0
    field52_0x113 BYTE 0
    field53_0x114 BYTE 0
    field54_0x115 BYTE 0
    field55_0x116 BYTE 0
    field56_0x117 BYTE 0
    field57_0x118 BYTE 0
    field58_0x119 BYTE 0
    field59_0x11a BYTE 0
    field60_0x11b BYTE 0
    field61_0x11c BYTE 0
    field62_0x11d BYTE 0
    field63_0x11e BYTE 0
    field64_0x11f BYTE 0
    field65_0x120 BYTE 0
    field66_0x121 BYTE 0
    field67_0x122 BYTE 0
    field68_0x123 BYTE 0
    field69_0x124 BYTE 0
    field70_0x125 BYTE 0
    field71_0x126 BYTE 0
    field72_0x127 BYTE 0
    field73_0x128 BYTE 0
    field74_0x129 BYTE 0
    field75_0x12a BYTE 0
    field76_0x12b BYTE 0
    field77_0x12c BYTE 0
    field78_0x12d BYTE 0
    field79_0x12e BYTE 0
    field80_0x12f BYTE 0
    field81_0x130 BYTE 0
    field82_0x131 BYTE 0
    field83_0x132 BYTE 0
    field84_0x133 BYTE 0
    field85_0x134 BYTE 0
    field86_0x135 BYTE 0
    field87_0x136 BYTE 0
    field88_0x137 BYTE 0
    field89_0x138 BYTE 0
    field90_0x139 BYTE 0
    field91_0x13a BYTE 0
    field92_0x13b BYTE 0
    field93_0x13c BYTE 0
    field94_0x13d BYTE 0
    field95_0x13e BYTE 0
    field96_0x13f BYTE 0
    field97_0x140 BYTE 0
    field98_0x141 BYTE 0
    field99_0x142 BYTE 0
    field100_0x143 BYTE 0
    field101_0x144 BYTE 0
    field102_0x145 BYTE 0
    field103_0x146 BYTE 0
    field104_0x147 BYTE 0
    field105_0x148 BYTE 0
    field106_0x149 BYTE 0
    field107_0x14a BYTE 0
    field108_0x14b BYTE 0
    field109_0x14c BYTE 0
    field110_0x14d BYTE 0
    field111_0x14e BYTE 0
    field112_0x14f BYTE 0
    field113_0x150 BYTE 0
    field114_0x151 BYTE 0
    field115_0x152 BYTE 0
    field116_0x153 BYTE 0
    field117_0x154 BYTE 0
    field118_0x155 BYTE 0
    field119_0x156 BYTE 0
    field120_0x157 BYTE 0
    field121_0x158 BYTE 0
    field122_0x159 BYTE 0
    field123_0x15a BYTE 0
    field124_0x15b BYTE 0
    field125_0x15c BYTE 0
    field126_0x15d BYTE 0
    field127_0x15e BYTE 0
    field128_0x15f BYTE 0
    field129_0x160 BYTE 0
    field130_0x161 BYTE 0
    field131_0x162 BYTE 0
    field132_0x163 BYTE 0
    field133_0x164 BYTE 0
    field134_0x165 BYTE 0
    field135_0x166 BYTE 0
    field136_0x167 BYTE 0
    field137_0x168 BYTE 0
    field138_0x169 BYTE 0
    field139_0x16a BYTE 0
    field140_0x16b BYTE 0
    field141_0x16c BYTE 0
    field142_0x16d BYTE 0
    field143_0x16e BYTE 0
    field144_0x16f BYTE 0
    field145_0x170 DWORD 0; UnkFamily5Base *
    field146_0x174 BYTE 0
    field147_0x175 BYTE 0
    field148_0x176 BYTE 0
    field149_0x177 BYTE 0
    field150_0x178 BYTE 0
    field151_0x179 BYTE 0
    field152_0x17a BYTE 0
    field153_0x17b BYTE 0
InstanceNodeCameraTriggerBody ENDS
InstanceNodeCameraTrigger STRUCT
    vtable DWORD 0; InstanceNodeTrigger_VTable *
    body InstanceNodeCameraTriggerBody {}
InstanceNodeCameraTrigger ENDS
InstanceNodeInstanceDBody STRUCT
    parent InstanceNodeInstanceCBody {}
    field1_0xd0 BYTE 0
    field2_0xd1 BYTE 0
    field3_0xd2 BYTE 0
    field4_0xd3 BYTE 0
    field5_0xd4 BYTE 0
    field6_0xd5 BYTE 0
    field7_0xd6 BYTE 0
    field8_0xd7 BYTE 0
    field9_0xd8 BYTE 0
    field10_0xd9 BYTE 0
    field11_0xda BYTE 0
    field12_0xdb BYTE 0
    field13_0xdc BYTE 0
    field14_0xdd BYTE 0
    field15_0xde BYTE 0
    field16_0xdf BYTE 0
    field17_0xe0 BYTE 0
    field18_0xe1 BYTE 0
    field19_0xe2 BYTE 0
    field20_0xe3 BYTE 0
    field21_0xe4 BYTE 0
    field22_0xe5 BYTE 0
    field23_0xe6 BYTE 0
    field24_0xe7 BYTE 0
    field25_0xe8 BYTE 0
    field26_0xe9 BYTE 0
    field27_0xea BYTE 0
    field28_0xeb BYTE 0
    field29_0xec DWORD 0; pointer
    field30_0xf0 REAL4 0.0;
    field31_0xf4 BYTE 0
    field32_0xf5 BYTE 0
    field33_0xf6 BYTE 0
    field34_0xf7 BYTE 0
    field35_0xf8 BYTE 0
    field36_0xf9 BYTE 0
    field37_0xfa BYTE 0
    field38_0xfb BYTE 0
    field39_0xfc BYTE 0
    field40_0xfd BYTE 0
    field41_0xfe BYTE 0
    field42_0xff BYTE 0
    field43_0x100 DWORD 0; pointer
    field44_0x104 DWORD 0; InstanceNodeInstanceD *
    field45_0x108 BYTE 0
    field46_0x109 BYTE 0
    field47_0x10a BYTE 0
    field48_0x10b BYTE 0
    field49_0x10c DWORD 0; pointer
    field50_0x110 BYTE 0
    field51_0x111 BYTE 0
    field52_0x112 BYTE 0
    field53_0x113 BYTE 0
    field54_0x114 BYTE 0
    field55_0x115 BYTE 0
    field56_0x116 BYTE 0
    field57_0x117 BYTE 0
    field58_0x118 BYTE 0
    field59_0x119 BYTE 0
    field60_0x11a BYTE 0
    field61_0x11b BYTE 0
    field62_0x11c BYTE 0
    field63_0x11d BYTE 0
    field64_0x11e BYTE 0
    field65_0x11f BYTE 0
    field66_0x120 DWORD 0; pointer *
    field67_0x124 BYTE 0
    field68_0x125 BYTE 0
    field69_0x126 BYTE 0
    field70_0x127 BYTE 0
    field71_0x128 DWORD 0; pointer
    field72_0x12c DWORD 0
    field73_0x130 DWORD 0
    field74_0x134 BYTE 0
    field75_0x135 BYTE 0
    field76_0x136 BYTE 0
    field77_0x137 BYTE 0
    field78_0x138 BYTE 0
    field79_0x139 BYTE 0
    field80_0x13a BYTE 0
    field81_0x13b BYTE 0
    field82_0x13c BYTE 0
    field83_0x13d BYTE 0
    field84_0x13e BYTE 0
    field85_0x13f BYTE 0
    field86_0x140 BYTE 0
    field87_0x141 BYTE 0
    field88_0x142 BYTE 0
    field89_0x143 BYTE 0
    field90_0x144 BYTE 0
    field91_0x145 BYTE 0
    field92_0x146 BYTE 0
    field93_0x147 BYTE 0
    field94_0x148 BYTE 0
    field95_0x149 BYTE 0
    field96_0x14a BYTE 0
    field97_0x14b BYTE 0
    field98_0x14c BYTE 0
    field99_0x14d BYTE 0
    field100_0x14e BYTE 0
    field101_0x14f BYTE 0
    field102_0x150 BYTE 0
    field103_0x151 BYTE 0
    field104_0x152 BYTE 0
    field105_0x153 BYTE 0
    field106_0x154 DWORD 0
    field107_0x158 BYTE 0
    field108_0x159 BYTE 0
    field109_0x15a BYTE 0
    field110_0x15b BYTE 0
    field111_0x15c BYTE 0
    field112_0x15d BYTE 0
    field113_0x15e BYTE 0
    field114_0x15f BYTE 0
    field115_0x160 BYTE 0
    field116_0x161 BYTE 0
    field117_0x162 BYTE 0
    field118_0x163 BYTE 0
    field119_0x164 DWORD 0
    field120_0x168 BYTE 0
    field121_0x169 BYTE 0
    field122_0x16a BYTE 0
    field123_0x16b BYTE 0
    field124_0x16c REAL4 0.0;
    field125_0x170 BYTE 0
    field126_0x171 BYTE 0
    field127_0x172 BYTE 0
    field128_0x173 BYTE 0
    field129_0x174 BYTE 0
    field130_0x175 BYTE 0
    field131_0x176 BYTE 0
    field132_0x177 BYTE 0
    field133_0x178 BYTE 0
    field134_0x179 BYTE 0
    field135_0x17a BYTE 0
    field136_0x17b BYTE 0
InstanceNodeInstanceDBody ENDS
InstanceNodeInstanceD STRUCT
    vtable DWORD 0; InstanceNodeInstance_VTable *
    body InstanceNodeInstanceDBody {}
InstanceNodeInstanceD ENDS
InstanceNodePhysicsABody STRUCT
    parent InstanceNodePhysicsBody {}
    field1_0x2d0 BYTE 0
    field2_0x2d1 BYTE 0
    field3_0x2d2 BYTE 0
    field4_0x2d3 BYTE 0
    field5_0x2d4 BYTE 0
    field6_0x2d5 BYTE 0
    field7_0x2d6 BYTE 0
    field8_0x2d7 BYTE 0
    field9_0x2d8 BYTE 0
    field10_0x2d9 BYTE 0
    field11_0x2da BYTE 0
    field12_0x2db BYTE 0
    field13_0x2dc DWORD 0
    field14_0x2e0 DWORD 0
    field15_0x2e4 BYTE 0
    field16_0x2e5 BYTE 0
    field17_0x2e6 BYTE 0
    field18_0x2e7 BYTE 0
    field19_0x2e8 BYTE 0
    field20_0x2e9 BYTE 0
    field21_0x2ea BYTE 0
    field22_0x2eb BYTE 0
    field23_0x2ec DWORD 0
    field24_0x2f0 DWORD 0
    field25_0x2f4 DWORD 0
    field26_0x2f8 REAL4 0.0;
    field27_0x2fc DWORD 0; UNV007 *
    field28_0x300 BYTE 0
    field29_0x301 BYTE 0
    field30_0x302 BYTE 0
    field31_0x303 BYTE 0
    field32_0x304 REAL4 0.0;
    field33_0x308 REAL4 0.0;
    field34_0x30c REAL4 0.0;
    field35_0x310 REAL4 0.0;
    field36_0x314 REAL4 0.0;
    field37_0x318 REAL4 0.0;
    field38_0x31c REAL4 0.0;
    field39_0x320 REAL4 0.0;
    field40_0x324 WORD 0
    field41_0x326 BYTE 0
    field42_0x327 BYTE 0
    field43_0x328 REAL4 0.0;
    field44_0x32c DWORD 0
    field45_0x330 BYTE 0
    field46_0x331 BYTE 0
    field47_0x332 BYTE 0
    field48_0x333 BYTE 0
    field49_0x334 BYTE 0
    field50_0x335 BYTE 0
    field51_0x336 BYTE 0
    field52_0x337 BYTE 0
    field53_0x338 BYTE 0
    field54_0x339 BYTE 0
    field55_0x33a BYTE 0
    field56_0x33b BYTE 0
    field57_0x33c Vector4 {}
    field58_0x34c Vector4 {}
    field59_0x35c DWORD 0
    field60_0x360 DWORD 0
    field61_0x364 BYTE 0
    field62_0x365 BYTE 0
    field63_0x366 BYTE 0
    field64_0x367 BYTE 0
    field65_0x368 DWORD 0
InstanceNodePhysicsABody ENDS
InstanceNodePhysicsA STRUCT
    vtable DWORD 0; InstanceNodePhysics_VTable *
    body InstanceNodePhysicsABody {}
InstanceNodePhysicsA ENDS
InstanceNodePhysicsAABody STRUCT
    parent InstanceNodePhysicsABody {}
    field1_0x36c BYTE 0
    field2_0x36d BYTE 0
    field3_0x36e BYTE 0
    field4_0x36f BYTE 0
    field5_0x370 BYTE 0
    field6_0x371 BYTE 0
    field7_0x372 BYTE 0
    field8_0x373 BYTE 0
    field9_0x374 BYTE 0
    field10_0x375 BYTE 0
    field11_0x376 BYTE 0
    field12_0x377 BYTE 0
    field13_0x378 BYTE 0
    field14_0x379 BYTE 0
    field15_0x37a BYTE 0
    field16_0x37b BYTE 0
    field17_0x37c Vector4 {}
    field18_0x38c BYTE 0
    field19_0x38d BYTE 0
    field20_0x38e BYTE 0
    field21_0x38f BYTE 0
    field22_0x390 BYTE 0
    field23_0x391 BYTE 0
    field24_0x392 BYTE 0
    field25_0x393 BYTE 0
    field26_0x394 BYTE 0
    field27_0x395 BYTE 0
    field28_0x396 BYTE 0
    field29_0x397 BYTE 0
    field30_0x398 BYTE 0
    field31_0x399 BYTE 0
    field32_0x39a BYTE 0
    field33_0x39b BYTE 0
InstanceNodePhysicsAABody ENDS
InstanceNodePhysicsAA STRUCT
    vtable DWORD 0; InstanceNodePhysics_VTable *
    body InstanceNodePhysicsAABody {}
InstanceNodePhysicsAA ENDS
InstanceNodePhysicsABBody STRUCT
    parent InstanceNodePhysicsABody {}
    field1_0x36c BYTE 0
    field2_0x36d BYTE 0
    field3_0x36e BYTE 0
    field4_0x36f BYTE 0
    field5_0x370 BYTE 0
    field6_0x371 BYTE 0
    field7_0x372 BYTE 0
    field8_0x373 BYTE 0
    field9_0x374 BYTE 0
    field10_0x375 BYTE 0
    field11_0x376 BYTE 0
    field12_0x377 BYTE 0
    field13_0x378 BYTE 0
    field14_0x379 BYTE 0
    field15_0x37a BYTE 0
    field16_0x37b BYTE 0
    field17_0x37c BYTE 0
    field18_0x37d BYTE 0
    field19_0x37e BYTE 0
    field20_0x37f BYTE 0
    field21_0x380 BYTE 0
    field22_0x381 BYTE 0
    field23_0x382 BYTE 0
    field24_0x383 BYTE 0
    field25_0x384 BYTE 0
    field26_0x385 BYTE 0
    field27_0x386 BYTE 0
    field28_0x387 BYTE 0
    field29_0x388 BYTE 0
    field30_0x389 BYTE 0
    field31_0x38a BYTE 0
    field32_0x38b BYTE 0
InstanceNodePhysicsABBody ENDS
InstanceNodePhysicsAB STRUCT
    vtable DWORD 0; InstanceNodePhysics_VTable *
    body InstanceNodePhysicsABBody {}
InstanceNodePhysicsAB ENDS
BlackboardC STRUCT
    parent BlackboardAbstract {}
    field1_0x24 BYTE 0
    field2_0x25 BYTE 0
    field3_0x26 BYTE 0
    field4_0x27 BYTE 0
    field5_0x28 BYTE 0
    field6_0x29 BYTE 0
    field7_0x2a BYTE 0
    field8_0x2b BYTE 0
    field9_0x2c BYTE 0
    field10_0x2d BYTE 0
    field11_0x2e BYTE 0
    field12_0x2f BYTE 0
    field13_0x30 BYTE 0
    field14_0x31 BYTE 0
    field15_0x32 BYTE 0
    field16_0x33 BYTE 0
    field17_0x34 BYTE 0
    field18_0x35 BYTE 0
    field19_0x36 BYTE 0
    field20_0x37 BYTE 0
    field21_0x38 BYTE 0
    field22_0x39 BYTE 0
    field23_0x3a BYTE 0
    field24_0x3b BYTE 0
    field25_0x3c BYTE 0
    field26_0x3d BYTE 0
    field27_0x3e BYTE 0
    field28_0x3f BYTE 0
    fractions BYTE 36 dup (0)
    floats BYTE 224 dup (0)
    ints BYTE 12 dup (0)
BlackboardC ENDS
BlackboardD STRUCT
    parent BlackboardAbstract {}
    field1_0x24 BYTE 0
    field2_0x25 BYTE 0
    field3_0x26 BYTE 0
    field4_0x27 BYTE 0
    field5_0x28 BYTE 0
    field6_0x29 BYTE 0
    field7_0x2a BYTE 0
    field8_0x2b BYTE 0
BlackboardD ENDS
BlackboardE STRUCT
    parent BlackboardAbstract {}
    field1_0x24 BYTE 0
    field2_0x25 BYTE 0
    field3_0x26 BYTE 0
    field4_0x27 BYTE 0
    field5_0x28 BYTE 0
    field6_0x29 BYTE 0
    field7_0x2a BYTE 0
    field8_0x2b BYTE 0
    field9_0x2c BYTE 0
    field10_0x2d BYTE 0
    field11_0x2e BYTE 0
    field12_0x2f BYTE 0
    field13_0x30 BYTE 0
    field14_0x31 BYTE 0
    field15_0x32 BYTE 0
    field16_0x33 BYTE 0
    field17_0x34 BYTE 0
    field18_0x35 BYTE 0
    field19_0x36 BYTE 0
    field20_0x37 BYTE 0
    field21_0x38 BYTE 0
    field22_0x39 BYTE 0
    field23_0x3a BYTE 0
    field24_0x3b BYTE 0
    field25_0x3c BYTE 0
    field26_0x3d BYTE 0
    field27_0x3e BYTE 0
    field28_0x3f BYTE 0
BlackboardE ENDS
BlackboardG STRUCT
    parent BlackboardAbstract {}
BlackboardG ENDS
BlackboardB STRUCT
    parent BlackboardAbstract {}
BlackboardB ENDS
BlackboardH STRUCT
    parent BlackboardAbstract {}
BlackboardH ENDS
BlackboardF STRUCT
    parent BlackboardAbstract {}
    field1_0x24 BYTE 0
    field2_0x25 BYTE 0
    field3_0x26 BYTE 0
    field4_0x27 BYTE 0
    field5_0x28 BYTE 0
    field6_0x29 BYTE 0
    field7_0x2a BYTE 0
    field8_0x2b BYTE 0
    field9_0x2c BYTE 0
    field10_0x2d BYTE 0
    field11_0x2e BYTE 0
    field12_0x2f BYTE 0
    field13_0x30 BYTE 0
    field14_0x31 BYTE 0
    field15_0x32 BYTE 0
    field16_0x33 BYTE 0
    field17_0x34 BYTE 0
    field18_0x35 BYTE 0
    field19_0x36 BYTE 0
    field20_0x37 BYTE 0
    field21_0x38 BYTE 0
    field22_0x39 BYTE 0
    field23_0x3a BYTE 0
    field24_0x3b BYTE 0
    field25_0x3c BYTE 0
    field26_0x3d BYTE 0
    field27_0x3e BYTE 0
    field28_0x3f BYTE 0
    field29_0x40 BYTE 0
    field30_0x41 BYTE 0
    field31_0x42 BYTE 0
    field32_0x43 BYTE 0
    field33_0x44 BYTE 0
    field34_0x45 BYTE 0
    field35_0x46 BYTE 0
    field36_0x47 BYTE 0
    field37_0x48 BYTE 0
    field38_0x49 BYTE 0
    field39_0x4a BYTE 0
    field40_0x4b BYTE 0
    field41_0x4c BYTE 0
    field42_0x4d BYTE 0
    field43_0x4e BYTE 0
    field44_0x4f BYTE 0
    field45_0x50 BYTE 0
    field46_0x51 BYTE 0
    field47_0x52 BYTE 0
    field48_0x53 BYTE 0
    field49_0x54 BYTE 0
    field50_0x55 BYTE 0
    field51_0x56 BYTE 0
    field52_0x57 BYTE 0
    field53_0x58 BYTE 0
    field54_0x59 BYTE 0
    field55_0x5a BYTE 0
    field56_0x5b BYTE 0
    field57_0x5c BYTE 0
    field58_0x5d BYTE 0
    field59_0x5e BYTE 0
    field60_0x5f BYTE 0
    field61_0x60 BYTE 0
    field62_0x61 BYTE 0
    field63_0x62 BYTE 0
    field64_0x63 BYTE 0
    field65_0x64 BYTE 0
    field66_0x65 BYTE 0
    field67_0x66 BYTE 0
    field68_0x67 BYTE 0
BlackboardF ENDS
BlackboardAA STRUCT
    parent BlackboardAbstract {}
BlackboardAA ENDS
BlackboardI STRUCT
    parent BlackboardAbstract {}
BlackboardI ENDS
NodeRelated1Abstract STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 DWORD 0
    field6_0xc DWORD 0
    field7_0x10 DWORD 0
NodeRelated1Abstract ENDS
NodeRelated1I STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
NodeRelated1I ENDS
NodeRelated1E STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
    field2_0x18 DWORD 0
NodeRelated1E ENDS
NodeRelated1C STRUCT
    parent NodeRelated1E {}
    field1_0x1c DWORD 0
    field2_0x20 DWORD 0
    field3_0x24 DWORD 0
    field4_0x28 DWORD 0
    field5_0x2c DWORD 0
    field6_0x30 DWORD 0
    field7_0x34 DWORD 0
    field8_0x38 BYTE 0
    field9_0x39 BYTE 0
    field10_0x3a BYTE 0
    field11_0x3b BYTE 0
    field12_0x3c BYTE 0
    field13_0x3d BYTE 0
    field14_0x3e BYTE 0
    field15_0x3f BYTE 0
    vec1 Vector4 {}
    vec2 Vector4 {}
NodeRelated1C ENDS
NodeRelated1D STRUCT
    parent NodeRelated1Abstract {}
    wumpaRelated DWORD 0
NodeRelated1D ENDS
NodeRelated1G STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
NodeRelated1G ENDS
NodeRelated1B STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
NodeRelated1B ENDS
NodeRelated1H STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
NodeRelated1H ENDS
NodeRelated1F STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
NodeRelated1F ENDS
NodeRelated1AA STRUCT
    parent NodeRelated1Abstract {}
NodeRelated1AA ENDS
InstanceMasterInfo STRUCT
    instance DWORD 0; Instance *
    gameObject DWORD 0; GameObject *
    ctx DWORD 0; InstanceContext *
InstanceMasterInfo ENDS
NodeRelated2E STRUCT
    parent NodeRelated2Abstract {}
    field1_0x60 Vector4 {}
NodeRelated2E ENDS
NodeRelated2C STRUCT
    parent NodeRelated2E {}
    field1_0x70 DWORD 0
    field2_0x74 BYTE 0
    field3_0x75 BYTE 0
    field4_0x76 BYTE 0
    field5_0x77 BYTE 0
    invulTime DWORD 0
    field7_0x7c DWORD 0
    field8_0x80 Vector4 {}
    field9_0x90 DWORD 0
    field10_0x94 DWORD 0
    field11_0x98 DWORD 0
    field12_0x9c DWORD 0
    field13_0xa0 DWORD 0
    data DWORD 0; US001 *
    field15_0xa8 DWORD 0
    field16_0xac DWORD 0
    field17_0xb0 DWORD 0; UnkFamily3D *
    field18_0xb4 BYTE 0
    field19_0xb5 BYTE 0
    field20_0xb6 BYTE 0
    field21_0xb7 BYTE 0
    field22_0xb8 DWORD 0; pointer
    field23_0xbc BYTE 0
    field24_0xbd BYTE 0
    field25_0xbe BYTE 0
    field26_0xbf BYTE 0
    field27_0xc0 DWORD 0; UNV039 *
    field28_0xc4 DWORD 0; AutoClass40 *
    field29_0xc8 DWORD 0; AutoClass40 *
    field30_0xcc BYTE 0
    field31_0xcd BYTE 0
    field32_0xce BYTE 0
    field33_0xcf BYTE 0
    position Vector4 {}
    field35_0xe0 Vector4 {}
    field36_0xf0 DWORD 0
    field37_0xf4 BYTE 0
    field38_0xf5 BYTE 0
    field39_0xf6 BYTE 0
    field40_0xf7 BYTE 0
    field41_0xf8 BYTE 0
    field42_0xf9 BYTE 0
    field43_0xfa BYTE 0
    field44_0xfb BYTE 0
    field45_0xfc BYTE 0
    field46_0xfd BYTE 0
    field47_0xfe BYTE 0
    field48_0xff BYTE 0
    field49_0x100 BYTE 0
    field50_0x101 BYTE 0
    field51_0x102 BYTE 0
    field52_0x103 BYTE 0
    field53_0x104 BYTE 0
    field54_0x105 BYTE 0
    field55_0x106 BYTE 0
    field56_0x107 BYTE 0
    field57_0x108 BYTE 0
    field58_0x109 BYTE 0
    field59_0x10a BYTE 0
    field60_0x10b BYTE 0
    field61_0x10c BYTE 0
    field62_0x10d BYTE 0
    field63_0x10e BYTE 0
    field64_0x10f BYTE 0
    field65_0x110 BYTE 0
    field66_0x111 BYTE 0
    field67_0x112 BYTE 0
    field68_0x113 BYTE 0
    field69_0x114 BYTE 0
    field70_0x115 BYTE 0
    field71_0x116 BYTE 0
    field72_0x117 BYTE 0
    field73_0x118 BYTE 0
    field74_0x119 BYTE 0
    field75_0x11a BYTE 0
    field76_0x11b BYTE 0
    field77_0x11c BYTE 0
    field78_0x11d BYTE 0
    field79_0x11e BYTE 0
    field80_0x11f BYTE 0
    field81_0x120 BYTE 0
    field82_0x121 BYTE 0
    field83_0x122 BYTE 0
    field84_0x123 BYTE 0
    field85_0x124 BYTE 0
    field86_0x125 BYTE 0
    field87_0x126 BYTE 0
    field88_0x127 BYTE 0
    field89_0x128 BYTE 0
    field90_0x129 BYTE 0
    field91_0x12a BYTE 0
    field92_0x12b BYTE 0
    field93_0x12c BYTE 0
    field94_0x12d BYTE 0
    field95_0x12e BYTE 0
    field96_0x12f BYTE 0
    field97_0x130 BYTE 0
    field98_0x131 BYTE 0
    field99_0x132 BYTE 0
    field100_0x133 BYTE 0
    field101_0x134 BYTE 0
    field102_0x135 BYTE 0
    field103_0x136 BYTE 0
    field104_0x137 BYTE 0
    field105_0x138 BYTE 0
    field106_0x139 BYTE 0
    field107_0x13a BYTE 0
    field108_0x13b BYTE 0
    field109_0x13c BYTE 0
    field110_0x13d BYTE 0
    field111_0x13e BYTE 0
    field112_0x13f BYTE 0
    field113_0x140 BYTE 0
    field114_0x141 BYTE 0
    field115_0x142 BYTE 0
    field116_0x143 BYTE 0
    field117_0x144 BYTE 0
    field118_0x145 BYTE 0
    field119_0x146 BYTE 0
    field120_0x147 BYTE 0
    field121_0x148 BYTE 0
    field122_0x149 BYTE 0
    field123_0x14a BYTE 0
    field124_0x14b BYTE 0
    field125_0x14c BYTE 0
    field126_0x14d BYTE 0
    field127_0x14e BYTE 0
    field128_0x14f BYTE 0
    field129_0x150 BYTE 0
    field130_0x151 BYTE 0
    field131_0x152 BYTE 0
    field132_0x153 BYTE 0
    field133_0x154 BYTE 0
    field134_0x155 BYTE 0
    field135_0x156 BYTE 0
    field136_0x157 BYTE 0
    field137_0x158 BYTE 0
    field138_0x159 BYTE 0
    field139_0x15a BYTE 0
    field140_0x15b BYTE 0
    field141_0x15c BYTE 0
    field142_0x15d BYTE 0
    field143_0x15e BYTE 0
    field144_0x15f BYTE 0
    field145_0x160 BYTE 0
    field146_0x161 BYTE 0
    field147_0x162 BYTE 0
    field148_0x163 BYTE 0
    field149_0x164 BYTE 0
    field150_0x165 BYTE 0
    field151_0x166 BYTE 0
    field152_0x167 BYTE 0
    field153_0x168 BYTE 0
    field154_0x169 BYTE 0
    field155_0x16a BYTE 0
    field156_0x16b BYTE 0
    field157_0x16c BYTE 0
    field158_0x16d BYTE 0
    field159_0x16e BYTE 0
    field160_0x16f BYTE 0
    field161_0x170 BYTE 0
    field162_0x171 BYTE 0
    field163_0x172 BYTE 0
    field164_0x173 BYTE 0
    field165_0x174 BYTE 0
    field166_0x175 BYTE 0
    field167_0x176 BYTE 0
    field168_0x177 BYTE 0
    field169_0x178 BYTE 0
    field170_0x179 BYTE 0
    field171_0x17a BYTE 0
    field172_0x17b BYTE 0
    field173_0x17c BYTE 0
    field174_0x17d BYTE 0
    field175_0x17e BYTE 0
    field176_0x17f BYTE 0
    field177_0x180 BYTE 0
    field178_0x181 BYTE 0
    field179_0x182 BYTE 0
    field180_0x183 BYTE 0
    field181_0x184 BYTE 0
    field182_0x185 BYTE 0
    field183_0x186 BYTE 0
    field184_0x187 BYTE 0
    field185_0x188 BYTE 0
    field186_0x189 BYTE 0
    field187_0x18a BYTE 0
    field188_0x18b BYTE 0
    field189_0x18c BYTE 0
    field190_0x18d BYTE 0
    field191_0x18e BYTE 0
    field192_0x18f BYTE 0
    field193_0x190 BYTE 0
    field194_0x191 BYTE 0
    field195_0x192 BYTE 0
    field196_0x193 BYTE 0
    field197_0x194 BYTE 0
    field198_0x195 BYTE 0
    field199_0x196 BYTE 0
    field200_0x197 BYTE 0
    field201_0x198 BYTE 0
    field202_0x199 BYTE 0
    field203_0x19a BYTE 0
    field204_0x19b BYTE 0
    field205_0x19c BYTE 0
    field206_0x19d BYTE 0
    field207_0x19e BYTE 0
    field208_0x19f BYTE 0
    field209_0x1a0 Vector4 {}
    field210_0x1b0 BYTE 0
    field211_0x1b1 BYTE 0
    field212_0x1b2 BYTE 0
    field213_0x1b3 BYTE 0
    field214_0x1b4 BYTE 0
    field215_0x1b5 BYTE 0
    field216_0x1b6 BYTE 0
    field217_0x1b7 BYTE 0
    field218_0x1b8 BYTE 0
    field219_0x1b9 BYTE 0
    field220_0x1ba BYTE 0
    field221_0x1bb BYTE 0
    field222_0x1bc BYTE 0
    field223_0x1bd BYTE 0
    field224_0x1be BYTE 0
    field225_0x1bf BYTE 0
    field226_0x1c0 BYTE 0
    field227_0x1c1 BYTE 0
    field228_0x1c2 BYTE 0
    field229_0x1c3 BYTE 0
    field230_0x1c4 BYTE 0
    field231_0x1c5 BYTE 0
    field232_0x1c6 BYTE 0
    field233_0x1c7 BYTE 0
    field234_0x1c8 BYTE 0
    field235_0x1c9 BYTE 0
    field236_0x1ca BYTE 0
    field237_0x1cb BYTE 0
    field238_0x1cc BYTE 0
    field239_0x1cd BYTE 0
    field240_0x1ce BYTE 0
    field241_0x1cf BYTE 0
    field242_0x1d0 BYTE 0
    field243_0x1d1 BYTE 0
    field244_0x1d2 BYTE 0
    field245_0x1d3 BYTE 0
    field246_0x1d4 BYTE 0
    field247_0x1d5 BYTE 0
    field248_0x1d6 BYTE 0
    field249_0x1d7 BYTE 0
    field250_0x1d8 BYTE 0
    field251_0x1d9 BYTE 0
    field252_0x1da BYTE 0
    field253_0x1db BYTE 0
    field254_0x1dc BYTE 0
    field255_0x1dd BYTE 0
    field256_0x1de BYTE 0
    field257_0x1df BYTE 0
    field258_0x1e0 BYTE 0
    field259_0x1e1 BYTE 0
    field260_0x1e2 BYTE 0
    field261_0x1e3 BYTE 0
    field262_0x1e4 BYTE 0
    field263_0x1e5 BYTE 0
    field264_0x1e6 BYTE 0
    field265_0x1e7 BYTE 0
    field266_0x1e8 BYTE 0
    field267_0x1e9 BYTE 0
    field268_0x1ea BYTE 0
    field269_0x1eb BYTE 0
    field270_0x1ec BYTE 0
    field271_0x1ed BYTE 0
    field272_0x1ee BYTE 0
    field273_0x1ef BYTE 0
    field274_0x1f0 BYTE 0
    field275_0x1f1 BYTE 0
    field276_0x1f2 BYTE 0
    field277_0x1f3 BYTE 0
    field278_0x1f4 BYTE 0
    field279_0x1f5 BYTE 0
    field280_0x1f6 BYTE 0
    field281_0x1f7 BYTE 0
    field282_0x1f8 BYTE 0
    field283_0x1f9 BYTE 0
    field284_0x1fa BYTE 0
    field285_0x1fb BYTE 0
    field286_0x1fc BYTE 0
    field287_0x1fd BYTE 0
    field288_0x1fe BYTE 0
    field289_0x1ff BYTE 0
    field290_0x200 InstanceContextSmartPtr {}
    field291_0x204 BYTE 0
    field292_0x205 BYTE 0
    field293_0x206 BYTE 0
    field294_0x207 BYTE 0
    field295_0x208 BYTE 0
    field296_0x209 BYTE 0
    field297_0x20a BYTE 0
    field298_0x20b BYTE 0
    field299_0x20c BYTE 0
    field300_0x20d BYTE 0
    field301_0x20e BYTE 0
    field302_0x20f BYTE 0
    field303_0x210 BYTE 0
    field304_0x211 BYTE 0
    field305_0x212 BYTE 0
    field306_0x213 BYTE 0
    field307_0x214 BYTE 0
    field308_0x215 BYTE 0
    field309_0x216 BYTE 0
    field310_0x217 BYTE 0
    field311_0x218 BYTE 0
    field312_0x219 BYTE 0
    field313_0x21a BYTE 0
    field314_0x21b BYTE 0
    field315_0x21c BYTE 0
    field316_0x21d BYTE 0
    field317_0x21e BYTE 0
    field318_0x21f BYTE 0
    field319_0x220 BYTE 0
    field320_0x221 BYTE 0
    field321_0x222 BYTE 0
    field322_0x223 BYTE 0
    field323_0x224 BYTE 0
    field324_0x225 BYTE 0
    field325_0x226 BYTE 0
    field326_0x227 BYTE 0
    field327_0x228 BYTE 0
    field328_0x229 BYTE 0
    field329_0x22a BYTE 0
    field330_0x22b BYTE 0
    field331_0x22c BYTE 0
    field332_0x22d BYTE 0
    field333_0x22e BYTE 0
    field334_0x22f BYTE 0
    field335_0x230 BYTE 0
    field336_0x231 BYTE 0
    field337_0x232 BYTE 0
    field338_0x233 BYTE 0
    field339_0x234 BYTE 0
    field340_0x235 BYTE 0
    field341_0x236 BYTE 0
    field342_0x237 BYTE 0
    field343_0x238 BYTE 0
    field344_0x239 BYTE 0
    field345_0x23a BYTE 0
    field346_0x23b BYTE 0
    field347_0x23c BYTE 0
    field348_0x23d BYTE 0
    field349_0x23e BYTE 0
    field350_0x23f BYTE 0
    field351_0x240 BYTE 0
    field352_0x241 BYTE 0
    field353_0x242 BYTE 0
    field354_0x243 BYTE 0
    field355_0x244 BYTE 0
    field356_0x245 BYTE 0
    field357_0x246 BYTE 0
    field358_0x247 BYTE 0
    field359_0x248 BYTE 0
    field360_0x249 BYTE 0
    field361_0x24a BYTE 0
    field362_0x24b BYTE 0
    field363_0x24c BYTE 0
    field364_0x24d BYTE 0
    field365_0x24e BYTE 0
    field366_0x24f BYTE 0
    field367_0x250 BYTE 0
    field368_0x251 BYTE 0
    field369_0x252 BYTE 0
    field370_0x253 BYTE 0
    field371_0x254 BYTE 0
    field372_0x255 BYTE 0
    field373_0x256 BYTE 0
    field374_0x257 BYTE 0
    field375_0x258 BYTE 0
    field376_0x259 BYTE 0
    field377_0x25a BYTE 0
    field378_0x25b BYTE 0
    field379_0x25c BYTE 0
    field380_0x25d BYTE 0
    field381_0x25e BYTE 0
    field382_0x25f BYTE 0
    field383_0x260 BYTE 0
    field384_0x261 BYTE 0
    field385_0x262 BYTE 0
    field386_0x263 BYTE 0
    field387_0x264 BYTE 0
    field388_0x265 BYTE 0
    field389_0x266 BYTE 0
    field390_0x267 BYTE 0
    field391_0x268 BYTE 0
    field392_0x269 BYTE 0
    field393_0x26a BYTE 0
    field394_0x26b BYTE 0
    field395_0x26c BYTE 0
    field396_0x26d BYTE 0
    field397_0x26e BYTE 0
    field398_0x26f BYTE 0
    field399_0x270 BYTE 0
    field400_0x271 BYTE 0
    field401_0x272 BYTE 0
    field402_0x273 BYTE 0
    field403_0x274 BYTE 0
    field404_0x275 BYTE 0
    field405_0x276 BYTE 0
    field406_0x277 BYTE 0
    field407_0x278 BYTE 0
    field408_0x279 BYTE 0
    field409_0x27a BYTE 0
    field410_0x27b BYTE 0
    field411_0x27c BYTE 0
    field412_0x27d BYTE 0
    field413_0x27e BYTE 0
    field414_0x27f BYTE 0
    field415_0x280 Vector4 {}
    field416_0x290 InstanceContextSmartPtr {}
    field417_0x294 BYTE 0
    field418_0x295 BYTE 0
    field419_0x296 BYTE 0
    field420_0x297 BYTE 0
    field421_0x298 InstanceContextSmartPtr {}
    field422_0x29c BYTE 0
    field423_0x29d BYTE 0
    field424_0x29e BYTE 0
    field425_0x29f BYTE 0
    field426_0x2a0 BYTE 0
    field427_0x2a1 BYTE 0
    field428_0x2a2 BYTE 0
    field429_0x2a3 BYTE 0
    field430_0x2a4 BYTE 0
    field431_0x2a5 BYTE 0
    field432_0x2a6 BYTE 0
    field433_0x2a7 BYTE 0
    field434_0x2a8 BYTE 0
    field435_0x2a9 BYTE 0
    field436_0x2aa BYTE 0
    field437_0x2ab BYTE 0
    field438_0x2ac BYTE 0
    field439_0x2ad BYTE 0
    field440_0x2ae BYTE 0
    field441_0x2af BYTE 0
    field442_0x2b0 BYTE 0
    field443_0x2b1 BYTE 0
    field444_0x2b2 BYTE 0
    field445_0x2b3 BYTE 0
    field446_0x2b4 BYTE 0
    field447_0x2b5 BYTE 0
    field448_0x2b6 BYTE 0
    field449_0x2b7 BYTE 0
    field450_0x2b8 BYTE 0
    field451_0x2b9 BYTE 0
    field452_0x2ba BYTE 0
    field453_0x2bb BYTE 0
    field454_0x2bc BYTE 0
    field455_0x2bd BYTE 0
    field456_0x2be BYTE 0
    field457_0x2bf BYTE 0
    field458_0x2c0 BYTE 0
    field459_0x2c1 BYTE 0
    field460_0x2c2 BYTE 0
    field461_0x2c3 BYTE 0
    field462_0x2c4 BYTE 0
    field463_0x2c5 BYTE 0
    field464_0x2c6 BYTE 0
    field465_0x2c7 BYTE 0
    field466_0x2c8 BYTE 0
    field467_0x2c9 BYTE 0
    field468_0x2ca BYTE 0
    field469_0x2cb BYTE 0
    field470_0x2cc BYTE 0
    field471_0x2cd BYTE 0
    field472_0x2ce BYTE 0
    field473_0x2cf BYTE 0
    field474_0x2d0 BYTE 0
    field475_0x2d1 BYTE 0
    field476_0x2d2 BYTE 0
    field477_0x2d3 BYTE 0
    field478_0x2d4 BYTE 0
    field479_0x2d5 BYTE 0
    field480_0x2d6 BYTE 0
    field481_0x2d7 BYTE 0
    field482_0x2d8 BYTE 0
    field483_0x2d9 BYTE 0
    field484_0x2da BYTE 0
    field485_0x2db BYTE 0
    field486_0x2dc BYTE 0
    field487_0x2dd BYTE 0
    field488_0x2de BYTE 0
    field489_0x2df BYTE 0
    field490_0x2e0 BYTE 0
    field491_0x2e1 BYTE 0
    field492_0x2e2 BYTE 0
    field493_0x2e3 BYTE 0
    field494_0x2e4 BYTE 0
    field495_0x2e5 BYTE 0
    field496_0x2e6 BYTE 0
    field497_0x2e7 BYTE 0
    field498_0x2e8 BYTE 0
    field499_0x2e9 BYTE 0
    field500_0x2ea BYTE 0
    field501_0x2eb BYTE 0
    field502_0x2ec BYTE 0
    field503_0x2ed BYTE 0
    field504_0x2ee BYTE 0
    field505_0x2ef BYTE 0
    field506_0x2f0 BYTE 0
    field507_0x2f1 BYTE 0
    field508_0x2f2 BYTE 0
    field509_0x2f3 BYTE 0
    field510_0x2f4 BYTE 0
    field511_0x2f5 BYTE 0
    field512_0x2f6 BYTE 0
    field513_0x2f7 BYTE 0
    field514_0x2f8 BYTE 0
    field515_0x2f9 BYTE 0
    field516_0x2fa BYTE 0
    field517_0x2fb BYTE 0
    field518_0x2fc BYTE 0
    field519_0x2fd BYTE 0
    field520_0x2fe BYTE 0
    field521_0x2ff BYTE 0
    field522_0x300 BYTE 0
    field523_0x301 BYTE 0
    field524_0x302 BYTE 0
    field525_0x303 BYTE 0
    field526_0x304 BYTE 0
    field527_0x305 BYTE 0
    field528_0x306 BYTE 0
    field529_0x307 BYTE 0
    field530_0x308 BYTE 0
    field531_0x309 BYTE 0
    field532_0x30a BYTE 0
    field533_0x30b BYTE 0
    field534_0x30c BYTE 0
    field535_0x30d BYTE 0
    field536_0x30e BYTE 0
    field537_0x30f BYTE 0
NodeRelated2C ENDS
NodeRelated2D STRUCT
    parent NodeRelated2Abstract {}
    field1_0x60 BYTE 0
    field2_0x61 BYTE 0
    field3_0x62 BYTE 0
    field4_0x63 BYTE 0
    field5_0x64 BYTE 0
    field6_0x65 BYTE 0
    field7_0x66 BYTE 0
    field8_0x67 BYTE 0
    field9_0x68 BYTE 0
    field10_0x69 BYTE 0
    field11_0x6a BYTE 0
    field12_0x6b BYTE 0
    field13_0x6c BYTE 0
    field14_0x6d BYTE 0
    field15_0x6e BYTE 0
    field16_0x6f BYTE 0
NodeRelated2D ENDS
NodeRelated2G STRUCT
    parent NodeRelated2Abstract {}
NodeRelated2G ENDS
NodeRelated2B STRUCT
    parent NodeRelated2Abstract {}
NodeRelated2B ENDS
NodeRelated2H STRUCT
    parent NodeRelated2Abstract {}
NodeRelated2H ENDS
NodeRelated2J STRUCT
    parent NodeRelated2Abstract {}
NodeRelated2J ENDS
NodeRelated2F STRUCT
    parent NodeRelated2J {}
    field1_0x60 DWORD 0
    field2_0x64 BYTE 0
    field3_0x65 BYTE 0
    field4_0x66 BYTE 0
    field5_0x67 BYTE 0
    field6_0x68 BYTE 0
    field7_0x69 BYTE 0
    field8_0x6a BYTE 0
    field9_0x6b BYTE 0
    field10_0x6c BYTE 0
    field11_0x6d BYTE 0
    field12_0x6e BYTE 0
    field13_0x6f BYTE 0
    field14_0x70 BYTE 0
    field15_0x71 BYTE 0
    field16_0x72 BYTE 0
    field17_0x73 BYTE 0
    field18_0x74 BYTE 0
    field19_0x75 BYTE 0
    field20_0x76 BYTE 0
    field21_0x77 BYTE 0
    field22_0x78 BYTE 0
    field23_0x79 BYTE 0
    field24_0x7a BYTE 0
    field25_0x7b BYTE 0
    field26_0x7c BYTE 0
    field27_0x7d BYTE 0
    field28_0x7e BYTE 0
    field29_0x7f BYTE 0
    field30_0x80 BYTE 0
    field31_0x81 BYTE 0
    field32_0x82 BYTE 0
    field33_0x83 BYTE 0
    field34_0x84 BYTE 0
    field35_0x85 BYTE 0
    field36_0x86 BYTE 0
    field37_0x87 BYTE 0
    field38_0x88 BYTE 0
    field39_0x89 BYTE 0
    field40_0x8a BYTE 0
    field41_0x8b BYTE 0
    field42_0x8c BYTE 0
    field43_0x8d BYTE 0
    field44_0x8e BYTE 0
    field45_0x8f BYTE 0
NodeRelated2F ENDS
NodeRelated2AA STRUCT
    parent NodeRelated2Abstract {}
NodeRelated2AA ENDS
NodeRelated2I STRUCT
    parent NodeRelated2Abstract {}
    field1_0x60 BYTE 0
    field2_0x61 BYTE 0
    field3_0x62 BYTE 0
    field4_0x63 BYTE 0
    field5_0x64 BYTE 0
    field6_0x65 BYTE 0
    field7_0x66 BYTE 0
    field8_0x67 BYTE 0
    field9_0x68 BYTE 0
    field10_0x69 BYTE 0
    field11_0x6a BYTE 0
    field12_0x6b BYTE 0
    field13_0x6c BYTE 0
    field14_0x6d BYTE 0
    field15_0x6e BYTE 0
    field16_0x6f BYTE 0
NodeRelated2I ENDS
BlackboardSub STRUCT
    flagsCnt BYTE 0
    floatsCnt BYTE 0
    intsCnt BYTE 0
    field3_0x3 BYTE 0
    array BYTE 28 dup (0)
BlackboardSub ENDS
InstanceNodeOGISub STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    ogi DWORD 0; OGI *
    field5_0x8 DWORD 0; pointer
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    matrixArray2 DWORD 0; Matrix4Array *
    genericArray DWORD 0; GenericArray *
    matrixArray DWORD 0; Matrix4Array *
    genericArray2 DWORD 0; GenericArray *
    field14_0x20 BYTE 0
    field15_0x21 BYTE 0
    field16_0x22 BYTE 0
    field17_0x23 BYTE 0
    field18_0x24 BYTE 0
    field19_0x25 BYTE 0
    field20_0x26 BYTE 0
    field21_0x27 BYTE 0
    field22_0x28 BYTE 0
    field23_0x29 BYTE 0
    field24_0x2a BYTE 0
    field25_0x2b BYTE 0
    field26_0x2c BYTE 0
    field27_0x2d BYTE 0
    field28_0x2e BYTE 0
    field29_0x2f BYTE 0
    field30_0x30 BYTE 0
    field31_0x31 BYTE 0
    field32_0x32 BYTE 0
    field33_0x33 BYTE 0
    field34_0x34 BYTE 0
    field35_0x35 BYTE 0
    field36_0x36 BYTE 0
    field37_0x37 BYTE 0
    field38_0x38 BYTE 0
    field39_0x39 BYTE 0
    field40_0x3a BYTE 0
    field41_0x3b BYTE 0
    field42_0x3c BYTE 0
    field43_0x3d BYTE 0
    field44_0x3e BYTE 0
    field45_0x3f BYTE 0
InstanceNodeOGISub ENDS
NodeInputAbstract STRUCT
    vtable DWORD 0; pointer *
    inputWrapper InputWrapper {}
NodeInputAbstract ENDS
NodeInputA STRUCT
    parent NodeInputAbstract {}
NodeInputA ENDS
ActionSetShadowRectangle STRUCT
    parent ActionAbstract {}
    field1_0xc DWORD 0
    field2_0x10 DWORD 0
    field3_0x14 DWORD 0
    field4_0x18 DWORD 0
    field5_0x1c DWORD 0
    field6_0x20 DWORD 0
ActionSetShadowRectangle ENDS
IteratorA5AbstractEx STRUCT
    parent IteratorA5Abstract {}
IteratorA5AbstractEx ENDS
UnkFamily3B STRUCT
    parent UnkFamily3Abstract {}
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc DWORD 0
    field10_0x10 DWORD 0
    field11_0x14 DWORD 0
    field12_0x18 BYTE 0
    field13_0x19 BYTE 0
    field14_0x1a BYTE 0
    field15_0x1b BYTE 0
    field16_0x1c BYTE 0
    field17_0x1d BYTE 0
    field18_0x1e BYTE 0
    field19_0x1f BYTE 0
    field20_0x20 Vector4 {}
    field21_0x30 BYTE 0
    field22_0x31 BYTE 0
    field23_0x32 BYTE 0
    field24_0x33 BYTE 0
    field25_0x34 DWORD 0
    field26_0x38 DWORD 0
    field27_0x3c REAL4 0.0;
    field28_0x40 REAL4 0.0;
    field29_0x44 BYTE 0
    field30_0x45 BYTE 0
    field31_0x46 BYTE 0
    field32_0x47 BYTE 0
    field33_0x48 REAL4 0.0;
    field34_0x4c REAL4 0.0;
    field35_0x50 DWORD 0
    field36_0x54 DWORD 0
    field37_0x58 DWORD 0
    field38_0x5c DWORD 0
    field39_0x60 BYTE 0
    field40_0x61 BYTE 0
    field41_0x62 BYTE 0
    field42_0x63 BYTE 0
    field43_0x64 BYTE 0
    field44_0x65 BYTE 0
    field45_0x66 BYTE 0
    field46_0x67 BYTE 0
    field47_0x68 BYTE 0
    field48_0x69 BYTE 0
    field49_0x6a BYTE 0
    field50_0x6b BYTE 0
    field51_0x6c BYTE 0
    field52_0x6d BYTE 0
    field53_0x6e BYTE 0
    field54_0x6f BYTE 0
    field55_0x70 Vector4 {}
    field56_0x80 Vector4 {}
    field57_0x90 BYTE 0
    field58_0x91 BYTE 0
    field59_0x92 BYTE 0
    field60_0x93 BYTE 0
    field61_0x94 DWORD 0
    field62_0x98 DWORD 0
    field63_0x9c DWORD 0
    field64_0xa0 DWORD 0
    field65_0xa4 DWORD 0
    field66_0xa8 DWORD 0
    field67_0xac DWORD 0
    field68_0xb0 DWORD 0
    field69_0xb4 DWORD 0
    field70_0xb8 DWORD 0
    field71_0xbc DWORD 0
    field72_0xc0 DWORD 0
    field73_0xc4 DWORD 0
    field74_0xc8 DWORD 0
    field75_0xcc DWORD 0
UnkFamily3B ENDS
UnkFamily3C STRUCT
    parent UnkFamily3Abstract {}
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 BYTE 0
    field14_0x11 BYTE 0
    field15_0x12 BYTE 0
    field16_0x13 BYTE 0
    field17_0x14 BYTE 0
    field18_0x15 BYTE 0
    field19_0x16 BYTE 0
    field20_0x17 BYTE 0
    field21_0x18 BYTE 0
    field22_0x19 BYTE 0
    field23_0x1a BYTE 0
    field24_0x1b BYTE 0
    field25_0x1c BYTE 0
    field26_0x1d BYTE 0
    field27_0x1e BYTE 0
    field28_0x1f BYTE 0
    field29_0x20 BYTE 0
    field30_0x21 BYTE 0
    field31_0x22 BYTE 0
    field32_0x23 BYTE 0
    field33_0x24 BYTE 0
    field34_0x25 BYTE 0
    field35_0x26 BYTE 0
    field36_0x27 BYTE 0
    field37_0x28 BYTE 0
    field38_0x29 BYTE 0
    field39_0x2a BYTE 0
    field40_0x2b BYTE 0
    field41_0x2c BYTE 0
    field42_0x2d BYTE 0
    field43_0x2e BYTE 0
    field44_0x2f BYTE 0
UnkFamily3C ENDS
UnkFamily3D STRUCT
    parent UnkFamily3Abstract {}
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 DWORD 0; NodeRelated2C *
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 BYTE 0
    field27_0x21 BYTE 0
    field28_0x22 BYTE 0
    field29_0x23 BYTE 0
    field30_0x24 BYTE 0
    field31_0x25 BYTE 0
    field32_0x26 BYTE 0
    field33_0x27 BYTE 0
    field34_0x28 BYTE 0
    field35_0x29 BYTE 0
    field36_0x2a BYTE 0
    field37_0x2b BYTE 0
    field38_0x2c BYTE 0
    field39_0x2d BYTE 0
    field40_0x2e BYTE 0
    field41_0x2f BYTE 0
    field42_0x30 BYTE 0
    field43_0x31 BYTE 0
    field44_0x32 BYTE 0
    field45_0x33 BYTE 0
    field46_0x34 BYTE 0
    field47_0x35 BYTE 0
    field48_0x36 BYTE 0
    field49_0x37 BYTE 0
    field50_0x38 BYTE 0
    field51_0x39 BYTE 0
    field52_0x3a BYTE 0
    field53_0x3b BYTE 0
    field54_0x3c BYTE 0
    field55_0x3d BYTE 0
    field56_0x3e BYTE 0
    field57_0x3f BYTE 0
    field58_0x40 BYTE 0
    field59_0x41 BYTE 0
    field60_0x42 BYTE 0
    field61_0x43 BYTE 0
    field62_0x44 BYTE 0
    field63_0x45 BYTE 0
    field64_0x46 BYTE 0
    field65_0x47 BYTE 0
    field66_0x48 BYTE 0
    field67_0x49 BYTE 0
    field68_0x4a BYTE 0
    field69_0x4b BYTE 0
    field70_0x4c BYTE 0
    field71_0x4d BYTE 0
    field72_0x4e BYTE 0
    field73_0x4f BYTE 0
    field74_0x50 REAL4 0.0;
    field75_0x54 BYTE 0
    field76_0x55 BYTE 0
    field77_0x56 BYTE 0
    field78_0x57 BYTE 0
    field79_0x58 BYTE 0
    field80_0x59 BYTE 0
    field81_0x5a BYTE 0
    field82_0x5b BYTE 0
    field83_0x5c BYTE 0
    field84_0x5d BYTE 0
    field85_0x5e BYTE 0
    field86_0x5f BYTE 0
    field87_0x60 BYTE 0
    field88_0x61 BYTE 0
    field89_0x62 BYTE 0
    field90_0x63 BYTE 0
    field91_0x64 BYTE 0
    field92_0x65 BYTE 0
    field93_0x66 BYTE 0
    field94_0x67 BYTE 0
    field95_0x68 BYTE 0
    field96_0x69 BYTE 0
    field97_0x6a BYTE 0
    field98_0x6b BYTE 0
    field99_0x6c BYTE 0
    field100_0x6d BYTE 0
    field101_0x6e BYTE 0
    field102_0x6f BYTE 0
    field103_0x70 BYTE 0
    field104_0x71 BYTE 0
    field105_0x72 BYTE 0
    field106_0x73 BYTE 0
    field107_0x74 BYTE 0
    field108_0x75 BYTE 0
    field109_0x76 BYTE 0
    field110_0x77 BYTE 0
    field111_0x78 BYTE 0
    field112_0x79 BYTE 0
    field113_0x7a BYTE 0
    field114_0x7b BYTE 0
    field115_0x7c BYTE 0
    field116_0x7d BYTE 0
    field117_0x7e BYTE 0
    field118_0x7f BYTE 0
    field119_0x80 Vector4 {}
    field120_0x90 BYTE 0
    field121_0x91 BYTE 0
    field122_0x92 BYTE 0
    field123_0x93 BYTE 0
    field124_0x94 BYTE 0
    field125_0x95 BYTE 0
    field126_0x96 BYTE 0
    field127_0x97 BYTE 0
    field128_0x98 BYTE 0
    field129_0x99 BYTE 0
    field130_0x9a BYTE 0
    field131_0x9b BYTE 0
    field132_0x9c BYTE 0
    field133_0x9d BYTE 0
    field134_0x9e BYTE 0
    field135_0x9f BYTE 0
    field136_0xa0 BYTE 0
    field137_0xa1 BYTE 0
    field138_0xa2 BYTE 0
    field139_0xa3 BYTE 0
    field140_0xa4 BYTE 0
    field141_0xa5 BYTE 0
    field142_0xa6 BYTE 0
    field143_0xa7 BYTE 0
    field144_0xa8 BYTE 0
    field145_0xa9 BYTE 0
    field146_0xaa BYTE 0
    field147_0xab BYTE 0
    field148_0xac BYTE 0
    field149_0xad BYTE 0
    field150_0xae BYTE 0
    field151_0xaf BYTE 0
    field152_0xb0 BYTE 0
    field153_0xb1 BYTE 0
    field154_0xb2 BYTE 0
    field155_0xb3 BYTE 0
    field156_0xb4 BYTE 0
    field157_0xb5 BYTE 0
    field158_0xb6 BYTE 0
    field159_0xb7 BYTE 0
    field160_0xb8 BYTE 0
    field161_0xb9 BYTE 0
    field162_0xba BYTE 0
    field163_0xbb BYTE 0
    field164_0xbc BYTE 0
    field165_0xbd BYTE 0
    field166_0xbe BYTE 0
    field167_0xbf BYTE 0
    field168_0xc0 BYTE 0
    field169_0xc1 BYTE 0
    field170_0xc2 BYTE 0
    field171_0xc3 BYTE 0
    field172_0xc4 BYTE 0
    field173_0xc5 BYTE 0
    field174_0xc6 BYTE 0
    field175_0xc7 BYTE 0
    field176_0xc8 BYTE 0
    field177_0xc9 BYTE 0
    field178_0xca BYTE 0
    field179_0xcb BYTE 0
    field180_0xcc BYTE 0
    field181_0xcd BYTE 0
    field182_0xce BYTE 0
    field183_0xcf BYTE 0
    field184_0xd0 BYTE 0
    field185_0xd1 BYTE 0
    field186_0xd2 BYTE 0
    field187_0xd3 BYTE 0
    field188_0xd4 BYTE 0
    field189_0xd5 BYTE 0
    field190_0xd6 BYTE 0
    field191_0xd7 BYTE 0
    field192_0xd8 BYTE 0
    field193_0xd9 BYTE 0
    field194_0xda BYTE 0
    field195_0xdb BYTE 0
    field196_0xdc BYTE 0
    field197_0xdd BYTE 0
    field198_0xde BYTE 0
    field199_0xdf BYTE 0
    field200_0xe0 BYTE 0
    field201_0xe1 BYTE 0
    field202_0xe2 BYTE 0
    field203_0xe3 BYTE 0
    field204_0xe4 BYTE 0
    field205_0xe5 BYTE 0
    field206_0xe6 BYTE 0
    field207_0xe7 BYTE 0
    field208_0xe8 BYTE 0
    field209_0xe9 BYTE 0
    field210_0xea BYTE 0
    field211_0xeb BYTE 0
    field212_0xec BYTE 0
    field213_0xed BYTE 0
    field214_0xee BYTE 0
    field215_0xef BYTE 0
    field216_0xf0 Vector4 {}
    field217_0x100 Vector4 {}
    field218_0x110 BYTE 0
    field219_0x111 BYTE 0
    field220_0x112 BYTE 0
    field221_0x113 BYTE 0
    field222_0x114 BYTE 0
    field223_0x115 BYTE 0
    field224_0x116 BYTE 0
    field225_0x117 BYTE 0
    field226_0x118 BYTE 0
    field227_0x119 BYTE 0
    field228_0x11a BYTE 0
    field229_0x11b BYTE 0
    field230_0x11c BYTE 0
    field231_0x11d BYTE 0
    field232_0x11e BYTE 0
    field233_0x11f BYTE 0
    field234_0x120 BYTE 0
    field235_0x121 BYTE 0
    field236_0x122 BYTE 0
    field237_0x123 BYTE 0
    field238_0x124 BYTE 0
    field239_0x125 BYTE 0
    field240_0x126 BYTE 0
    field241_0x127 BYTE 0
    field242_0x128 BYTE 0
    field243_0x129 BYTE 0
    field244_0x12a BYTE 0
    field245_0x12b BYTE 0
    field246_0x12c BYTE 0
    field247_0x12d BYTE 0
    field248_0x12e BYTE 0
    field249_0x12f BYTE 0
    field250_0x130 BYTE 0
    field251_0x131 BYTE 0
    field252_0x132 BYTE 0
    field253_0x133 BYTE 0
    field254_0x134 BYTE 0
    field255_0x135 BYTE 0
    field256_0x136 BYTE 0
    field257_0x137 BYTE 0
    field258_0x138 BYTE 0
    field259_0x139 BYTE 0
    field260_0x13a BYTE 0
    field261_0x13b BYTE 0
    field262_0x13c BYTE 0
    field263_0x13d BYTE 0
    field264_0x13e BYTE 0
    field265_0x13f BYTE 0
    field266_0x140 BYTE 0
    field267_0x141 BYTE 0
    field268_0x142 BYTE 0
    field269_0x143 BYTE 0
    field270_0x144 BYTE 0
    field271_0x145 BYTE 0
    field272_0x146 BYTE 0
    field273_0x147 BYTE 0
    field274_0x148 BYTE 0
    field275_0x149 BYTE 0
    field276_0x14a BYTE 0
    field277_0x14b BYTE 0
    field278_0x14c BYTE 0
    field279_0x14d BYTE 0
    field280_0x14e BYTE 0
    field281_0x14f BYTE 0
    field282_0x150 BYTE 0
    field283_0x151 BYTE 0
    field284_0x152 BYTE 0
    field285_0x153 BYTE 0
    field286_0x154 BYTE 0
    field287_0x155 BYTE 0
    field288_0x156 BYTE 0
    field289_0x157 BYTE 0
    field290_0x158 BYTE 0
    field291_0x159 BYTE 0
    field292_0x15a BYTE 0
    field293_0x15b BYTE 0
    field294_0x15c BYTE 0
    field295_0x15d BYTE 0
    field296_0x15e BYTE 0
    field297_0x15f BYTE 0
    field298_0x160 BYTE 0
    field299_0x161 BYTE 0
    field300_0x162 BYTE 0
    field301_0x163 BYTE 0
    field302_0x164 BYTE 0
    field303_0x165 BYTE 0
    field304_0x166 BYTE 0
    field305_0x167 BYTE 0
    field306_0x168 BYTE 0
    field307_0x169 BYTE 0
    field308_0x16a BYTE 0
    field309_0x16b BYTE 0
    field310_0x16c BYTE 0
    field311_0x16d BYTE 0
    field312_0x16e BYTE 0
    field313_0x16f BYTE 0
    field314_0x170 BYTE 0
    field315_0x171 BYTE 0
    field316_0x172 BYTE 0
    field317_0x173 BYTE 0
    field318_0x174 BYTE 0
    field319_0x175 BYTE 0
    field320_0x176 BYTE 0
    field321_0x177 BYTE 0
    field322_0x178 BYTE 0
    field323_0x179 BYTE 0
    field324_0x17a BYTE 0
    field325_0x17b BYTE 0
    field326_0x17c BYTE 0
    field327_0x17d BYTE 0
    field328_0x17e BYTE 0
    field329_0x17f BYTE 0
    field330_0x180 BYTE 0
    field331_0x181 BYTE 0
    field332_0x182 BYTE 0
    field333_0x183 BYTE 0
    field334_0x184 BYTE 0
    field335_0x185 BYTE 0
    field336_0x186 BYTE 0
    field337_0x187 BYTE 0
    field338_0x188 BYTE 0
    field339_0x189 BYTE 0
    field340_0x18a BYTE 0
    field341_0x18b BYTE 0
    field342_0x18c BYTE 0
    field343_0x18d BYTE 0
    field344_0x18e BYTE 0
    field345_0x18f BYTE 0
    field346_0x190 BYTE 0
    field347_0x191 BYTE 0
    field348_0x192 BYTE 0
    field349_0x193 BYTE 0
    field350_0x194 BYTE 0
    field351_0x195 BYTE 0
    field352_0x196 BYTE 0
    field353_0x197 BYTE 0
    field354_0x198 BYTE 0
    field355_0x199 BYTE 0
    field356_0x19a BYTE 0
    field357_0x19b BYTE 0
    field358_0x19c BYTE 0
    field359_0x19d BYTE 0
    field360_0x19e BYTE 0
    field361_0x19f BYTE 0
    field362_0x1a0 BYTE 0
    field363_0x1a1 BYTE 0
    field364_0x1a2 BYTE 0
    field365_0x1a3 BYTE 0
    field366_0x1a4 DWORD 0
    field367_0x1a8 DWORD 0
    field368_0x1ac BYTE 0
    field369_0x1ad BYTE 0
    field370_0x1ae BYTE 0
    field371_0x1af BYTE 0
    field372_0x1b0 BYTE 0
    field373_0x1b1 BYTE 0
    field374_0x1b2 BYTE 0
    field375_0x1b3 BYTE 0
    field376_0x1b4 BYTE 0
    field377_0x1b5 BYTE 0
    field378_0x1b6 BYTE 0
    field379_0x1b7 BYTE 0
    field380_0x1b8 BYTE 0
    field381_0x1b9 BYTE 0
    field382_0x1ba BYTE 0
    field383_0x1bb BYTE 0
    field384_0x1bc BYTE 0
    field385_0x1bd BYTE 0
    field386_0x1be BYTE 0
    field387_0x1bf BYTE 0
    field388_0x1c0 BYTE 0
    field389_0x1c1 BYTE 0
    field390_0x1c2 BYTE 0
    field391_0x1c3 BYTE 0
    field392_0x1c4 BYTE 0
    field393_0x1c5 BYTE 0
    field394_0x1c6 BYTE 0
    field395_0x1c7 BYTE 0
    field396_0x1c8 BYTE 0
    field397_0x1c9 BYTE 0
    field398_0x1ca BYTE 0
    field399_0x1cb BYTE 0
    field400_0x1cc BYTE 0
    field401_0x1cd BYTE 0
    field402_0x1ce BYTE 0
    field403_0x1cf BYTE 0
    field404_0x1d0 BYTE 0
    field405_0x1d1 BYTE 0
    field406_0x1d2 BYTE 0
    field407_0x1d3 BYTE 0
    field408_0x1d4 BYTE 0
    field409_0x1d5 BYTE 0
    field410_0x1d6 BYTE 0
    field411_0x1d7 BYTE 0
    field412_0x1d8 BYTE 0
    field413_0x1d9 BYTE 0
    field414_0x1da BYTE 0
    field415_0x1db BYTE 0
    field416_0x1dc BYTE 0
    field417_0x1dd BYTE 0
    field418_0x1de BYTE 0
    field419_0x1df BYTE 0
    field420_0x1e0 BYTE 0
    field421_0x1e1 BYTE 0
    field422_0x1e2 BYTE 0
    field423_0x1e3 BYTE 0
    field424_0x1e4 BYTE 0
    field425_0x1e5 BYTE 0
    field426_0x1e6 BYTE 0
    field427_0x1e7 BYTE 0
    field428_0x1e8 BYTE 0
    field429_0x1e9 BYTE 0
    field430_0x1ea BYTE 0
    field431_0x1eb BYTE 0
    field432_0x1ec BYTE 0
    field433_0x1ed BYTE 0
    field434_0x1ee BYTE 0
    field435_0x1ef BYTE 0
    field436_0x1f0 Vector4 {}
    field437_0x200 DWORD 0
    field438_0x204 DWORD 0
    field439_0x208 DWORD 0
    field440_0x20c REAL4 0.0;
    field441_0x210 REAL4 0.0;
    field442_0x214 BYTE 0
    field443_0x215 BYTE 0
    field444_0x216 BYTE 0
    field445_0x217 BYTE 0
    field446_0x218 BYTE 0
    field447_0x219 BYTE 0
    field448_0x21a BYTE 0
    field449_0x21b BYTE 0
    field450_0x21c BYTE 0
    field451_0x21d BYTE 0
    field452_0x21e BYTE 0
    field453_0x21f BYTE 0
    field454_0x220 BYTE 0
    field455_0x221 BYTE 0
    field456_0x222 BYTE 0
    field457_0x223 BYTE 0
    field458_0x224 BYTE 0
    field459_0x225 BYTE 0
    field460_0x226 BYTE 0
    field461_0x227 BYTE 0
    field462_0x228 BYTE 0
    field463_0x229 BYTE 0
UnkFamily3D ENDS
UnkFamily3EAbstract STRUCT
    parent UnkFamily3Abstract {}
    field1_0x4 DWORD 0
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 BYTE 0
    field27_0x21 BYTE 0
    field28_0x22 BYTE 0
    field29_0x23 BYTE 0
    field30_0x24 BYTE 0
    field31_0x25 BYTE 0
    field32_0x26 BYTE 0
    field33_0x27 BYTE 0
    field34_0x28 BYTE 0
    field35_0x29 BYTE 0
    field36_0x2a BYTE 0
    field37_0x2b BYTE 0
    field38_0x2c BYTE 0
    field39_0x2d BYTE 0
    field40_0x2e BYTE 0
    field41_0x2f BYTE 0
    field42_0x30 BYTE 0
    field43_0x31 BYTE 0
    field44_0x32 BYTE 0
    field45_0x33 BYTE 0
    field46_0x34 BYTE 0
    field47_0x35 BYTE 0
    field48_0x36 BYTE 0
    field49_0x37 BYTE 0
    field50_0x38 BYTE 0
    field51_0x39 BYTE 0
    field52_0x3a BYTE 0
    field53_0x3b BYTE 0
    field54_0x3c BYTE 0
    field55_0x3d BYTE 0
    field56_0x3e BYTE 0
    field57_0x3f BYTE 0
    field58_0x40 BYTE 0
    field59_0x41 BYTE 0
    field60_0x42 BYTE 0
    field61_0x43 BYTE 0
    field62_0x44 BYTE 0
    field63_0x45 BYTE 0
    field64_0x46 BYTE 0
    field65_0x47 BYTE 0
    field66_0x48 BYTE 0
    field67_0x49 BYTE 0
    field68_0x4a BYTE 0
    field69_0x4b BYTE 0
    field70_0x4c BYTE 0
    field71_0x4d BYTE 0
    field72_0x4e BYTE 0
    field73_0x4f BYTE 0
    field74_0x50 BYTE 0
    field75_0x51 BYTE 0
    field76_0x52 BYTE 0
    field77_0x53 BYTE 0
    field78_0x54 BYTE 0
    field79_0x55 BYTE 0
    field80_0x56 BYTE 0
    field81_0x57 BYTE 0
    field82_0x58 BYTE 0
    field83_0x59 BYTE 0
    field84_0x5a BYTE 0
    field85_0x5b BYTE 0
    field86_0x5c BYTE 0
    field87_0x5d BYTE 0
    field88_0x5e BYTE 0
    field89_0x5f BYTE 0
    field90_0x60 BYTE 0
    field91_0x61 BYTE 0
    field92_0x62 BYTE 0
    field93_0x63 BYTE 0
UnkFamily3EAbstract ENDS
UnkFamily3EA STRUCT
    parent UnkFamily3EAbstract {}
    field1_0x64 BYTE 0
    field2_0x65 BYTE 0
    field3_0x66 BYTE 0
    field4_0x67 BYTE 0
    field5_0x68 BYTE 0
    field6_0x69 BYTE 0
    field7_0x6a BYTE 0
    field8_0x6b BYTE 0
    field9_0x6c BYTE 0
    field10_0x6d BYTE 0
    field11_0x6e BYTE 0
    field12_0x6f BYTE 0
    field13_0x70 BYTE 0
    field14_0x71 BYTE 0
    field15_0x72 BYTE 0
    field16_0x73 BYTE 0
    field17_0x74 BYTE 0
    field18_0x75 BYTE 0
    field19_0x76 BYTE 0
    field20_0x77 BYTE 0
    field21_0x78 BYTE 0
    field22_0x79 BYTE 0
    field23_0x7a BYTE 0
    field24_0x7b BYTE 0
    field25_0x7c BYTE 0
    field26_0x7d BYTE 0
    field27_0x7e BYTE 0
    field28_0x7f BYTE 0
    field29_0x80 BYTE 0
    field30_0x81 BYTE 0
    field31_0x82 BYTE 0
    field32_0x83 BYTE 0
    field33_0x84 BYTE 0
    field34_0x85 BYTE 0
    field35_0x86 BYTE 0
    field36_0x87 BYTE 0
    field37_0x88 BYTE 0
    field38_0x89 BYTE 0
    field39_0x8a BYTE 0
    field40_0x8b BYTE 0
    field41_0x8c BYTE 0
    field42_0x8d BYTE 0
    field43_0x8e BYTE 0
    field44_0x8f BYTE 0
    field45_0x90 BYTE 0
    field46_0x91 BYTE 0
    field47_0x92 BYTE 0
    field48_0x93 BYTE 0
    field49_0x94 BYTE 0
    field50_0x95 BYTE 0
    field51_0x96 BYTE 0
    field52_0x97 BYTE 0
    field53_0x98 BYTE 0
    field54_0x99 BYTE 0
    field55_0x9a BYTE 0
    field56_0x9b BYTE 0
    field57_0x9c BYTE 0
    field58_0x9d BYTE 0
    field59_0x9e BYTE 0
    field60_0x9f BYTE 0
    field61_0xa0 BYTE 0
    field62_0xa1 BYTE 0
    field63_0xa2 BYTE 0
    field64_0xa3 BYTE 0
    field65_0xa4 BYTE 0
    field66_0xa5 BYTE 0
    field67_0xa6 BYTE 0
    field68_0xa7 BYTE 0
    field69_0xa8 BYTE 0
    field70_0xa9 BYTE 0
    field71_0xaa BYTE 0
    field72_0xab BYTE 0
    field73_0xac BYTE 0
    field74_0xad BYTE 0
    field75_0xae BYTE 0
    field76_0xaf BYTE 0
    field77_0xb0 BYTE 0
    field78_0xb1 BYTE 0
    field79_0xb2 BYTE 0
    field80_0xb3 BYTE 0
    field81_0xb4 BYTE 0
    field82_0xb5 BYTE 0
    field83_0xb6 BYTE 0
    field84_0xb7 BYTE 0
    field85_0xb8 BYTE 0
    field86_0xb9 BYTE 0
    field87_0xba BYTE 0
    field88_0xbb BYTE 0
    field89_0xbc BYTE 0
    field90_0xbd BYTE 0
    field91_0xbe BYTE 0
    field92_0xbf BYTE 0
    field93_0xc0 BYTE 0
    field94_0xc1 BYTE 0
    field95_0xc2 BYTE 0
    field96_0xc3 BYTE 0
    field97_0xc4 BYTE 0
    field98_0xc5 BYTE 0
    field99_0xc6 BYTE 0
    field100_0xc7 BYTE 0
    field101_0xc8 BYTE 0
    field102_0xc9 BYTE 0
    field103_0xca BYTE 0
    field104_0xcb BYTE 0
    field105_0xcc BYTE 0
    field106_0xcd BYTE 0
    field107_0xce BYTE 0
    field108_0xcf BYTE 0
    field109_0xd0 BYTE 0
    field110_0xd1 BYTE 0
    field111_0xd2 BYTE 0
    field112_0xd3 BYTE 0
    field113_0xd4 BYTE 0
    field114_0xd5 BYTE 0
    field115_0xd6 BYTE 0
    field116_0xd7 BYTE 0
    field117_0xd8 BYTE 0
    field118_0xd9 BYTE 0
    field119_0xda BYTE 0
    field120_0xdb BYTE 0
    field121_0xdc BYTE 0
    field122_0xdd BYTE 0
    field123_0xde BYTE 0
    field124_0xdf BYTE 0
    field125_0xe0 BYTE 0
    field126_0xe1 BYTE 0
    field127_0xe2 BYTE 0
    field128_0xe3 BYTE 0
UnkFamily3EA ENDS
UnkFamily3F STRUCT
    parent UnkFamily3Abstract {}
    field1_0x4 DWORD 0; InstanceContext *
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 BYTE 0
    field27_0x21 BYTE 0
    field28_0x22 BYTE 0
    field29_0x23 BYTE 0
    field30_0x24 BYTE 0
    field31_0x25 BYTE 0
    field32_0x26 BYTE 0
    field33_0x27 BYTE 0
    field34_0x28 BYTE 0
    field35_0x29 BYTE 0
    field36_0x2a BYTE 0
    field37_0x2b BYTE 0
    field38_0x2c BYTE 0
    field39_0x2d BYTE 0
    field40_0x2e BYTE 0
    field41_0x2f BYTE 0
    field42_0x30 BYTE 0
    field43_0x31 BYTE 0
    field44_0x32 BYTE 0
    field45_0x33 BYTE 0
    field46_0x34 BYTE 0
    field47_0x35 BYTE 0
    field48_0x36 BYTE 0
    field49_0x37 BYTE 0
    field50_0x38 BYTE 0
    field51_0x39 BYTE 0
    field52_0x3a BYTE 0
    field53_0x3b BYTE 0
    field54_0x3c BYTE 0
    field55_0x3d BYTE 0
    field56_0x3e BYTE 0
    field57_0x3f BYTE 0
    field58_0x40 Matrix4 {}
    field59_0x80 BYTE 0
    field60_0x81 BYTE 0
    field61_0x82 BYTE 0
    field62_0x83 BYTE 0
    field63_0x84 BYTE 0
    field64_0x85 BYTE 0
    field65_0x86 BYTE 0
    field66_0x87 BYTE 0
    field67_0x88 BYTE 0
    field68_0x89 BYTE 0
    field69_0x8a BYTE 0
    field70_0x8b BYTE 0
    field71_0x8c BYTE 0
    field72_0x8d BYTE 0
    field73_0x8e BYTE 0
    field74_0x8f BYTE 0
    field75_0x90 BYTE 0
    field76_0x91 BYTE 0
    field77_0x92 BYTE 0
    field78_0x93 BYTE 0
    field79_0x94 BYTE 0
    field80_0x95 BYTE 0
    field81_0x96 BYTE 0
    field82_0x97 BYTE 0
    field83_0x98 BYTE 0
    field84_0x99 BYTE 0
    field85_0x9a BYTE 0
    field86_0x9b BYTE 0
    field87_0x9c BYTE 0
    field88_0x9d BYTE 0
    field89_0x9e BYTE 0
    field90_0x9f BYTE 0
    field91_0xa0 BYTE 0
    field92_0xa1 BYTE 0
    field93_0xa2 BYTE 0
    field94_0xa3 BYTE 0
    field95_0xa4 BYTE 0
    field96_0xa5 BYTE 0
    field97_0xa6 BYTE 0
    field98_0xa7 BYTE 0
    field99_0xa8 BYTE 0
    field100_0xa9 BYTE 0
    field101_0xaa BYTE 0
    field102_0xab BYTE 0
UnkFamily3F ENDS
UnkFamily3FA STRUCT
    parent UnkFamily3F {}
    field1_0xac BYTE 0
    field2_0xad BYTE 0
    field3_0xae BYTE 0
    field4_0xaf BYTE 0
    field5_0xb0 BYTE 0
    field6_0xb1 BYTE 0
    field7_0xb2 BYTE 0
    field8_0xb3 BYTE 0
    field9_0xb4 BYTE 0
    field10_0xb5 BYTE 0
    field11_0xb6 BYTE 0
    field12_0xb7 BYTE 0
    field13_0xb8 BYTE 0
    field14_0xb9 BYTE 0
    field15_0xba BYTE 0
    field16_0xbb BYTE 0
    field17_0xbc BYTE 0
    field18_0xbd BYTE 0
    field19_0xbe BYTE 0
    field20_0xbf BYTE 0
    field21_0xc0 BYTE 0
    field22_0xc1 BYTE 0
    field23_0xc2 BYTE 0
    field24_0xc3 BYTE 0
    field25_0xc4 BYTE 0
    field26_0xc5 BYTE 0
    field27_0xc6 BYTE 0
    field28_0xc7 BYTE 0
    field29_0xc8 BYTE 0
    field30_0xc9 BYTE 0
    field31_0xca BYTE 0
    field32_0xcb BYTE 0
    field33_0xcc BYTE 0
    field34_0xcd BYTE 0
    field35_0xce BYTE 0
    field36_0xcf BYTE 0
    field37_0xd0 BYTE 0
    field38_0xd1 BYTE 0
    field39_0xd2 BYTE 0
    field40_0xd3 BYTE 0
    field41_0xd4 BYTE 0
    field42_0xd5 BYTE 0
    field43_0xd6 BYTE 0
    field44_0xd7 BYTE 0
    field45_0xd8 BYTE 0
    field46_0xd9 BYTE 0
    field47_0xda BYTE 0
    field48_0xdb BYTE 0
    field49_0xdc BYTE 0
    field50_0xdd BYTE 0
    field51_0xde BYTE 0
    field52_0xdf BYTE 0
UnkFamily3FA ENDS
IteratorEAbstract STRUCT
    vtable DWORD 0; IteratorEBase_VTable *
IteratorEAbstract ENDS
IteratorE2Abstract STRUCT
    parent IteratorEAbstract {}
IteratorE2Abstract ENDS
IteratorE2 STRUCT
    parent IteratorE2Abstract {}
    field1_0x4 DWORD 0
    collection DWORD 0; pointer
    index DWORD 0
IteratorE2 ENDS
UnkFamily5SomeStruct STRUCT
    _ptr DWORD 0; UnkFamily5Ptr *
UnkFamily5SomeStruct ENDS
UnkFamily5Base STRUCT
    vtable DWORD 0; pointer *
    someStruct UnkFamily5SomeStruct {}
    field2_0x8 WORD 0
    field3_0xa WORD 0
    field4_0xc DWORD 0
    field5_0x10 DWORD 0; InstanceContextRefCounter *
UnkFamily5Base ENDS
UnkFamily5A STRUCT
    parent UnkFamily5Base {}
UnkFamily5A ENDS
UnkFamily5B STRUCT
    parent UnkFamily5Base {}
UnkFamily5B ENDS
UnkFamily5C STRUCT
    parent UnkFamily5Base {}
    field1_0x14 DWORD 0
UnkFamily5C ENDS
UnkFamily5CA STRUCT
    parent UnkFamily5C {}
UnkFamily5CA ENDS
UnkFamily6Abstract STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 DWORD 0
    field14_0x14 DWORD 0
    field15_0x18 DWORD 0
    field16_0x1c BYTE 0
    field17_0x1d BYTE 0
    field18_0x1e BYTE 0
    field19_0x1f BYTE 0
    field20_0x20 Matrix4 {}
    field21_0x60 Matrix4 {}
    field22_0xa0 Matrix4 {}
UnkFamily6Abstract ENDS
UnkFamily6A STRUCT
    parent UnkFamily6Abstract {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 Matrix4 {}
    field18_0x130 Vector4 {}
    field19_0x140 AutoClass40 {}
    field20_0x160 BYTE 0
    field21_0x161 BYTE 0
    field22_0x162 BYTE 0
    field23_0x163 BYTE 0
    field24_0x164 BYTE 0
    field25_0x165 BYTE 0
    field26_0x166 BYTE 0
    field27_0x167 BYTE 0
    field28_0x168 BYTE 0
    field29_0x169 BYTE 0
    field30_0x16a BYTE 0
    field31_0x16b BYTE 0
    field32_0x16c BYTE 0
    field33_0x16d BYTE 0
    field34_0x16e BYTE 0
    field35_0x16f BYTE 0
UnkFamily6A ENDS
UnkFamily6B STRUCT
    parent UnkFamily6Abstract {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 BYTE 0
    field18_0xf1 BYTE 0
    field19_0xf2 BYTE 0
    field20_0xf3 BYTE 0
    field21_0xf4 BYTE 0
    field22_0xf5 BYTE 0
    field23_0xf6 BYTE 0
    field24_0xf7 BYTE 0
    field25_0xf8 BYTE 0
    field26_0xf9 BYTE 0
    field27_0xfa BYTE 0
    field28_0xfb BYTE 0
    field29_0xfc BYTE 0
    field30_0xfd BYTE 0
    field31_0xfe BYTE 0
    field32_0xff BYTE 0
    field33_0x100 BYTE 0
    field34_0x101 BYTE 0
    field35_0x102 BYTE 0
    field36_0x103 BYTE 0
    field37_0x104 BYTE 0
    field38_0x105 BYTE 0
    field39_0x106 BYTE 0
    field40_0x107 BYTE 0
    field41_0x108 BYTE 0
    field42_0x109 BYTE 0
    field43_0x10a BYTE 0
    field44_0x10b BYTE 0
    field45_0x10c BYTE 0
    field46_0x10d BYTE 0
    field47_0x10e BYTE 0
    field48_0x10f BYTE 0
    field49_0x110 Vector4 {}
    field50_0x120 BYTE 0
    field51_0x121 BYTE 0
    field52_0x122 BYTE 0
    field53_0x123 BYTE 0
    field54_0x124 BYTE 0
    field55_0x125 BYTE 0
    field56_0x126 BYTE 0
    field57_0x127 BYTE 0
    field58_0x128 BYTE 0
    field59_0x129 BYTE 0
    field60_0x12a BYTE 0
    field61_0x12b BYTE 0
    field62_0x12c BYTE 0
    field63_0x12d BYTE 0
    field64_0x12e BYTE 0
    field65_0x12f BYTE 0
    field66_0x130 BYTE 0
    field67_0x131 BYTE 0
    field68_0x132 BYTE 0
    field69_0x133 BYTE 0
    field70_0x134 BYTE 0
    field71_0x135 BYTE 0
    field72_0x136 BYTE 0
    field73_0x137 BYTE 0
    field74_0x138 BYTE 0
    field75_0x139 BYTE 0
    field76_0x13a BYTE 0
    field77_0x13b BYTE 0
    field78_0x13c BYTE 0
    field79_0x13d BYTE 0
    field80_0x13e BYTE 0
    field81_0x13f BYTE 0
    field82_0x140 Vector4 {}
    field83_0x150 BYTE 0
    field84_0x151 BYTE 0
    field85_0x152 BYTE 0
    field86_0x153 BYTE 0
    field87_0x154 BYTE 0
    field88_0x155 BYTE 0
    field89_0x156 BYTE 0
    field90_0x157 BYTE 0
    field91_0x158 BYTE 0
    field92_0x159 BYTE 0
    field93_0x15a BYTE 0
    field94_0x15b BYTE 0
    field95_0x15c BYTE 0
    field96_0x15d BYTE 0
    field97_0x15e BYTE 0
    field98_0x15f BYTE 0
    field99_0x160 Vector4 {}
    field100_0x170 Vector4 {}
    field101_0x180 Vector4 {}
    field102_0x190 BYTE 0
    field103_0x191 BYTE 0
    field104_0x192 BYTE 0
    field105_0x193 BYTE 0
    field106_0x194 BYTE 0
    field107_0x195 BYTE 0
    field108_0x196 BYTE 0
    field109_0x197 BYTE 0
    field110_0x198 BYTE 0
    field111_0x199 BYTE 0
    field112_0x19a BYTE 0
    field113_0x19b BYTE 0
    field114_0x19c BYTE 0
    field115_0x19d BYTE 0
    field116_0x19e BYTE 0
    field117_0x19f BYTE 0
    field118_0x1a0 BYTE 0
    field119_0x1a1 BYTE 0
    field120_0x1a2 BYTE 0
    field121_0x1a3 BYTE 0
    field122_0x1a4 BYTE 0
    field123_0x1a5 BYTE 0
    field124_0x1a6 BYTE 0
    field125_0x1a7 BYTE 0
    field126_0x1a8 BYTE 0
    field127_0x1a9 BYTE 0
    field128_0x1aa BYTE 0
    field129_0x1ab BYTE 0
    field130_0x1ac BYTE 0
    field131_0x1ad BYTE 0
    field132_0x1ae BYTE 0
    field133_0x1af BYTE 0
    field134_0x1b0 BYTE 0
    field135_0x1b1 BYTE 0
    field136_0x1b2 BYTE 0
    field137_0x1b3 BYTE 0
    field138_0x1b4 BYTE 0
    field139_0x1b5 BYTE 0
    field140_0x1b6 BYTE 0
    field141_0x1b7 BYTE 0
    field142_0x1b8 BYTE 0
    field143_0x1b9 BYTE 0
    field144_0x1ba BYTE 0
    field145_0x1bb BYTE 0
    field146_0x1bc BYTE 0
    field147_0x1bd BYTE 0
    field148_0x1be BYTE 0
    field149_0x1bf BYTE 0
    field150_0x1c0 BYTE 0
    field151_0x1c1 BYTE 0
    field152_0x1c2 BYTE 0
    field153_0x1c3 BYTE 0
    field154_0x1c4 BYTE 0
    field155_0x1c5 BYTE 0
    field156_0x1c6 BYTE 0
    field157_0x1c7 BYTE 0
    field158_0x1c8 BYTE 0
    field159_0x1c9 BYTE 0
    field160_0x1ca BYTE 0
    field161_0x1cb BYTE 0
    field162_0x1cc BYTE 0
    field163_0x1cd BYTE 0
    field164_0x1ce BYTE 0
    field165_0x1cf BYTE 0
    field166_0x1d0 Vector4 {}
    field167_0x1e0 BYTE 0
    field168_0x1e1 BYTE 0
    field169_0x1e2 BYTE 0
    field170_0x1e3 BYTE 0
    field171_0x1e4 BYTE 0
    field172_0x1e5 BYTE 0
    field173_0x1e6 BYTE 0
    field174_0x1e7 BYTE 0
    field175_0x1e8 BYTE 0
    field176_0x1e9 BYTE 0
    field177_0x1ea BYTE 0
    field178_0x1eb BYTE 0
    field179_0x1ec BYTE 0
    field180_0x1ed BYTE 0
    field181_0x1ee BYTE 0
    field182_0x1ef BYTE 0
    field183_0x1f0 BYTE 0
    field184_0x1f1 BYTE 0
    field185_0x1f2 BYTE 0
    field186_0x1f3 BYTE 0
    field187_0x1f4 BYTE 0
    field188_0x1f5 BYTE 0
    field189_0x1f6 BYTE 0
    field190_0x1f7 BYTE 0
    field191_0x1f8 BYTE 0
    field192_0x1f9 BYTE 0
    field193_0x1fa BYTE 0
    field194_0x1fb BYTE 0
    field195_0x1fc BYTE 0
    field196_0x1fd BYTE 0
    field197_0x1fe BYTE 0
    field198_0x1ff BYTE 0
    field199_0x200 BYTE 0
    field200_0x201 BYTE 0
    field201_0x202 BYTE 0
    field202_0x203 BYTE 0
    field203_0x204 BYTE 0
    field204_0x205 BYTE 0
    field205_0x206 BYTE 0
    field206_0x207 BYTE 0
    field207_0x208 BYTE 0
    field208_0x209 BYTE 0
    field209_0x20a BYTE 0
    field210_0x20b BYTE 0
    field211_0x20c BYTE 0
    field212_0x20d BYTE 0
    field213_0x20e BYTE 0
    field214_0x20f BYTE 0
    field215_0x210 BYTE 0
    field216_0x211 BYTE 0
    field217_0x212 BYTE 0
    field218_0x213 BYTE 0
    field219_0x214 BYTE 0
    field220_0x215 BYTE 0
    field221_0x216 BYTE 0
    field222_0x217 BYTE 0
    field223_0x218 BYTE 0
    field224_0x219 BYTE 0
    field225_0x21a BYTE 0
    field226_0x21b BYTE 0
    field227_0x21c BYTE 0
    field228_0x21d BYTE 0
    field229_0x21e BYTE 0
    field230_0x21f BYTE 0
    field231_0x220 Vector4 {}
    field232_0x230 Vector4 {}
    field233_0x240 BYTE 0
    field234_0x241 BYTE 0
    field235_0x242 BYTE 0
    field236_0x243 BYTE 0
    field237_0x244 BYTE 0
    field238_0x245 BYTE 0
    field239_0x246 BYTE 0
    field240_0x247 BYTE 0
    field241_0x248 BYTE 0
    field242_0x249 BYTE 0
    field243_0x24a BYTE 0
    field244_0x24b BYTE 0
    field245_0x24c BYTE 0
    field246_0x24d BYTE 0
    field247_0x24e BYTE 0
    field248_0x24f BYTE 0
    field249_0x250 BYTE 0
    field250_0x251 BYTE 0
    field251_0x252 BYTE 0
    field252_0x253 BYTE 0
    field253_0x254 BYTE 0
    field254_0x255 BYTE 0
    field255_0x256 BYTE 0
    field256_0x257 BYTE 0
    field257_0x258 BYTE 0
    field258_0x259 BYTE 0
    field259_0x25a BYTE 0
    field260_0x25b BYTE 0
    field261_0x25c BYTE 0
    field262_0x25d BYTE 0
    field263_0x25e BYTE 0
    field264_0x25f BYTE 0
UnkFamily6B ENDS
UnkFamily6C STRUCT
    parent UnkFamily6Abstract {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 BYTE 0
    field18_0xf1 BYTE 0
    field19_0xf2 BYTE 0
    field20_0xf3 BYTE 0
    field21_0xf4 BYTE 0
    field22_0xf5 BYTE 0
    field23_0xf6 BYTE 0
    field24_0xf7 BYTE 0
    field25_0xf8 BYTE 0
    field26_0xf9 BYTE 0
    field27_0xfa BYTE 0
    field28_0xfb BYTE 0
    field29_0xfc BYTE 0
    field30_0xfd BYTE 0
    field31_0xfe BYTE 0
    field32_0xff BYTE 0
    field33_0x100 BYTE 0
    field34_0x101 BYTE 0
    field35_0x102 BYTE 0
    field36_0x103 BYTE 0
    field37_0x104 BYTE 0
    field38_0x105 BYTE 0
    field39_0x106 BYTE 0
    field40_0x107 BYTE 0
    field41_0x108 BYTE 0
    field42_0x109 BYTE 0
    field43_0x10a BYTE 0
    field44_0x10b BYTE 0
    field45_0x10c BYTE 0
    field46_0x10d BYTE 0
    field47_0x10e BYTE 0
    field48_0x10f BYTE 0
    field49_0x110 BYTE 0
    field50_0x111 BYTE 0
    field51_0x112 BYTE 0
    field52_0x113 BYTE 0
    field53_0x114 BYTE 0
    field54_0x115 BYTE 0
    field55_0x116 BYTE 0
    field56_0x117 BYTE 0
    field57_0x118 BYTE 0
    field58_0x119 BYTE 0
    field59_0x11a BYTE 0
    field60_0x11b BYTE 0
    field61_0x11c BYTE 0
    field62_0x11d BYTE 0
    field63_0x11e BYTE 0
    field64_0x11f BYTE 0
    field65_0x120 BYTE 0
    field66_0x121 BYTE 0
    field67_0x122 BYTE 0
    field68_0x123 BYTE 0
    field69_0x124 BYTE 0
    field70_0x125 BYTE 0
    field71_0x126 BYTE 0
    field72_0x127 BYTE 0
    field73_0x128 BYTE 0
    field74_0x129 BYTE 0
    field75_0x12a BYTE 0
    field76_0x12b BYTE 0
    field77_0x12c BYTE 0
    field78_0x12d BYTE 0
    field79_0x12e BYTE 0
    field80_0x12f BYTE 0
    field81_0x130 BYTE 0
    field82_0x131 BYTE 0
    field83_0x132 BYTE 0
    field84_0x133 BYTE 0
    field85_0x134 BYTE 0
    field86_0x135 BYTE 0
    field87_0x136 BYTE 0
    field88_0x137 BYTE 0
    field89_0x138 BYTE 0
    field90_0x139 BYTE 0
    field91_0x13a BYTE 0
    field92_0x13b BYTE 0
    field93_0x13c BYTE 0
    field94_0x13d BYTE 0
    field95_0x13e BYTE 0
    field96_0x13f BYTE 0
    field97_0x140 BYTE 0
    field98_0x141 BYTE 0
    field99_0x142 BYTE 0
    field100_0x143 BYTE 0
    field101_0x144 BYTE 0
    field102_0x145 BYTE 0
    field103_0x146 BYTE 0
    field104_0x147 BYTE 0
    field105_0x148 BYTE 0
    field106_0x149 BYTE 0
    field107_0x14a BYTE 0
    field108_0x14b BYTE 0
    field109_0x14c BYTE 0
    field110_0x14d BYTE 0
    field111_0x14e BYTE 0
    field112_0x14f BYTE 0
    field113_0x150 BYTE 0
    field114_0x151 BYTE 0
    field115_0x152 BYTE 0
    field116_0x153 BYTE 0
    field117_0x154 BYTE 0
    field118_0x155 BYTE 0
    field119_0x156 BYTE 0
    field120_0x157 BYTE 0
    field121_0x158 BYTE 0
    field122_0x159 BYTE 0
    field123_0x15a BYTE 0
    field124_0x15b BYTE 0
    field125_0x15c BYTE 0
    field126_0x15d BYTE 0
    field127_0x15e BYTE 0
    field128_0x15f BYTE 0
    field129_0x160 BYTE 0
    field130_0x161 BYTE 0
    field131_0x162 BYTE 0
    field132_0x163 BYTE 0
    field133_0x164 BYTE 0
    field134_0x165 BYTE 0
    field135_0x166 BYTE 0
    field136_0x167 BYTE 0
    field137_0x168 BYTE 0
    field138_0x169 BYTE 0
    field139_0x16a BYTE 0
    field140_0x16b BYTE 0
    field141_0x16c BYTE 0
    field142_0x16d BYTE 0
    field143_0x16e BYTE 0
    field144_0x16f BYTE 0
    field145_0x170 BYTE 0
    field146_0x171 BYTE 0
    field147_0x172 BYTE 0
    field148_0x173 BYTE 0
    field149_0x174 BYTE 0
    field150_0x175 BYTE 0
    field151_0x176 BYTE 0
    field152_0x177 BYTE 0
    field153_0x178 BYTE 0
    field154_0x179 BYTE 0
    field155_0x17a BYTE 0
    field156_0x17b BYTE 0
    field157_0x17c BYTE 0
    field158_0x17d BYTE 0
    field159_0x17e BYTE 0
    field160_0x17f BYTE 0
    field161_0x180 BYTE 0
    field162_0x181 BYTE 0
    field163_0x182 BYTE 0
    field164_0x183 BYTE 0
    field165_0x184 BYTE 0
    field166_0x185 BYTE 0
    field167_0x186 BYTE 0
    field168_0x187 BYTE 0
    field169_0x188 BYTE 0
    field170_0x189 BYTE 0
    field171_0x18a BYTE 0
    field172_0x18b BYTE 0
    field173_0x18c BYTE 0
    field174_0x18d BYTE 0
    field175_0x18e BYTE 0
    field176_0x18f BYTE 0
    field177_0x190 BYTE 0
    field178_0x191 BYTE 0
    field179_0x192 BYTE 0
    field180_0x193 BYTE 0
    field181_0x194 BYTE 0
    field182_0x195 BYTE 0
    field183_0x196 BYTE 0
    field184_0x197 BYTE 0
    field185_0x198 BYTE 0
    field186_0x199 BYTE 0
    field187_0x19a BYTE 0
    field188_0x19b BYTE 0
    field189_0x19c BYTE 0
    field190_0x19d BYTE 0
    field191_0x19e BYTE 0
    field192_0x19f BYTE 0
    field193_0x1a0 BYTE 0
    field194_0x1a1 BYTE 0
    field195_0x1a2 BYTE 0
    field196_0x1a3 BYTE 0
    field197_0x1a4 BYTE 0
    field198_0x1a5 BYTE 0
    field199_0x1a6 BYTE 0
    field200_0x1a7 BYTE 0
    field201_0x1a8 BYTE 0
    field202_0x1a9 BYTE 0
    field203_0x1aa BYTE 0
    field204_0x1ab BYTE 0
    field205_0x1ac BYTE 0
    field206_0x1ad BYTE 0
    field207_0x1ae BYTE 0
    field208_0x1af BYTE 0
    field209_0x1b0 BYTE 0
    field210_0x1b1 BYTE 0
    field211_0x1b2 BYTE 0
    field212_0x1b3 BYTE 0
    field213_0x1b4 BYTE 0
    field214_0x1b5 BYTE 0
    field215_0x1b6 BYTE 0
    field216_0x1b7 BYTE 0
    field217_0x1b8 BYTE 0
    field218_0x1b9 BYTE 0
    field219_0x1ba BYTE 0
    field220_0x1bb BYTE 0
    field221_0x1bc BYTE 0
    field222_0x1bd BYTE 0
    field223_0x1be BYTE 0
    field224_0x1bf BYTE 0
    field225_0x1c0 BYTE 0
    field226_0x1c1 BYTE 0
    field227_0x1c2 BYTE 0
    field228_0x1c3 BYTE 0
    field229_0x1c4 BYTE 0
    field230_0x1c5 BYTE 0
    field231_0x1c6 BYTE 0
    field232_0x1c7 BYTE 0
    field233_0x1c8 BYTE 0
    field234_0x1c9 BYTE 0
    field235_0x1ca BYTE 0
    field236_0x1cb BYTE 0
    field237_0x1cc BYTE 0
    field238_0x1cd BYTE 0
    field239_0x1ce BYTE 0
    field240_0x1cf BYTE 0
    field241_0x1d0 BYTE 0
    field242_0x1d1 BYTE 0
    field243_0x1d2 BYTE 0
    field244_0x1d3 BYTE 0
    field245_0x1d4 BYTE 0
    field246_0x1d5 BYTE 0
    field247_0x1d6 BYTE 0
    field248_0x1d7 BYTE 0
    field249_0x1d8 BYTE 0
    field250_0x1d9 BYTE 0
    field251_0x1da BYTE 0
    field252_0x1db BYTE 0
    field253_0x1dc BYTE 0
    field254_0x1dd BYTE 0
    field255_0x1de BYTE 0
    field256_0x1df BYTE 0
    field257_0x1e0 BYTE 0
    field258_0x1e1 BYTE 0
    field259_0x1e2 BYTE 0
    field260_0x1e3 BYTE 0
    field261_0x1e4 BYTE 0
    field262_0x1e5 BYTE 0
    field263_0x1e6 BYTE 0
    field264_0x1e7 BYTE 0
    field265_0x1e8 BYTE 0
    field266_0x1e9 BYTE 0
    field267_0x1ea BYTE 0
    field268_0x1eb BYTE 0
    field269_0x1ec BYTE 0
    field270_0x1ed BYTE 0
    field271_0x1ee BYTE 0
    field272_0x1ef BYTE 0
    field273_0x1f0 BYTE 0
    field274_0x1f1 BYTE 0
    field275_0x1f2 BYTE 0
    field276_0x1f3 BYTE 0
    field277_0x1f4 BYTE 0
    field278_0x1f5 BYTE 0
    field279_0x1f6 BYTE 0
    field280_0x1f7 BYTE 0
    field281_0x1f8 BYTE 0
    field282_0x1f9 BYTE 0
    field283_0x1fa BYTE 0
    field284_0x1fb BYTE 0
    field285_0x1fc BYTE 0
    field286_0x1fd BYTE 0
    field287_0x1fe BYTE 0
    field288_0x1ff BYTE 0
    field289_0x200 BYTE 0
    field290_0x201 BYTE 0
    field291_0x202 BYTE 0
    field292_0x203 BYTE 0
    field293_0x204 BYTE 0
    field294_0x205 BYTE 0
    field295_0x206 BYTE 0
    field296_0x207 BYTE 0
    field297_0x208 BYTE 0
    field298_0x209 BYTE 0
    field299_0x20a BYTE 0
    field300_0x20b BYTE 0
    field301_0x20c BYTE 0
    field302_0x20d BYTE 0
    field303_0x20e BYTE 0
    field304_0x20f BYTE 0
    field305_0x210 BYTE 0
    field306_0x211 BYTE 0
    field307_0x212 BYTE 0
    field308_0x213 BYTE 0
    field309_0x214 BYTE 0
    field310_0x215 BYTE 0
    field311_0x216 BYTE 0
    field312_0x217 BYTE 0
    field313_0x218 BYTE 0
    field314_0x219 BYTE 0
    field315_0x21a BYTE 0
    field316_0x21b BYTE 0
    field317_0x21c BYTE 0
    field318_0x21d BYTE 0
    field319_0x21e BYTE 0
    field320_0x21f BYTE 0
    field321_0x220 BYTE 0
    field322_0x221 BYTE 0
    field323_0x222 BYTE 0
    field324_0x223 BYTE 0
    field325_0x224 BYTE 0
    field326_0x225 BYTE 0
    field327_0x226 BYTE 0
    field328_0x227 BYTE 0
    field329_0x228 BYTE 0
    field330_0x229 BYTE 0
    field331_0x22a BYTE 0
    field332_0x22b BYTE 0
    field333_0x22c BYTE 0
    field334_0x22d BYTE 0
    field335_0x22e BYTE 0
    field336_0x22f BYTE 0
    field337_0x230 BYTE 0
    field338_0x231 BYTE 0
    field339_0x232 BYTE 0
    field340_0x233 BYTE 0
    field341_0x234 BYTE 0
    field342_0x235 BYTE 0
    field343_0x236 BYTE 0
    field344_0x237 BYTE 0
    field345_0x238 BYTE 0
    field346_0x239 BYTE 0
    field347_0x23a BYTE 0
    field348_0x23b BYTE 0
    field349_0x23c BYTE 0
    field350_0x23d BYTE 0
    field351_0x23e BYTE 0
    field352_0x23f BYTE 0
    field353_0x240 BYTE 0
    field354_0x241 BYTE 0
    field355_0x242 BYTE 0
    field356_0x243 BYTE 0
    field357_0x244 BYTE 0
    field358_0x245 BYTE 0
    field359_0x246 BYTE 0
    field360_0x247 BYTE 0
    field361_0x248 BYTE 0
    field362_0x249 BYTE 0
    field363_0x24a BYTE 0
    field364_0x24b BYTE 0
    field365_0x24c BYTE 0
    field366_0x24d BYTE 0
    field367_0x24e BYTE 0
    field368_0x24f BYTE 0
    field369_0x250 BYTE 0
    field370_0x251 BYTE 0
    field371_0x252 BYTE 0
    field372_0x253 BYTE 0
    field373_0x254 BYTE 0
    field374_0x255 BYTE 0
    field375_0x256 BYTE 0
    field376_0x257 BYTE 0
    field377_0x258 BYTE 0
    field378_0x259 BYTE 0
    field379_0x25a BYTE 0
    field380_0x25b BYTE 0
    field381_0x25c BYTE 0
    field382_0x25d BYTE 0
    field383_0x25e BYTE 0
    field384_0x25f BYTE 0
    field385_0x260 BYTE 0
    field386_0x261 BYTE 0
    field387_0x262 BYTE 0
    field388_0x263 BYTE 0
    field389_0x264 BYTE 0
    field390_0x265 BYTE 0
    field391_0x266 BYTE 0
    field392_0x267 BYTE 0
    field393_0x268 BYTE 0
    field394_0x269 BYTE 0
    field395_0x26a BYTE 0
    field396_0x26b BYTE 0
    field397_0x26c BYTE 0
    field398_0x26d BYTE 0
    field399_0x26e BYTE 0
    field400_0x26f BYTE 0
    field401_0x270 BYTE 0
    field402_0x271 BYTE 0
    field403_0x272 BYTE 0
    field404_0x273 BYTE 0
    field405_0x274 BYTE 0
    field406_0x275 BYTE 0
    field407_0x276 BYTE 0
    field408_0x277 BYTE 0
    field409_0x278 BYTE 0
    field410_0x279 BYTE 0
    field411_0x27a BYTE 0
    field412_0x27b BYTE 0
    field413_0x27c BYTE 0
    field414_0x27d BYTE 0
    field415_0x27e BYTE 0
    field416_0x27f BYTE 0
    field417_0x280 BYTE 0
    field418_0x281 BYTE 0
    field419_0x282 BYTE 0
    field420_0x283 BYTE 0
    field421_0x284 BYTE 0
    field422_0x285 BYTE 0
    field423_0x286 BYTE 0
    field424_0x287 BYTE 0
    field425_0x288 BYTE 0
    field426_0x289 BYTE 0
    field427_0x28a BYTE 0
    field428_0x28b BYTE 0
    field429_0x28c BYTE 0
    field430_0x28d BYTE 0
    field431_0x28e BYTE 0
    field432_0x28f BYTE 0
    field433_0x290 BYTE 0
    field434_0x291 BYTE 0
    field435_0x292 BYTE 0
    field436_0x293 BYTE 0
    field437_0x294 BYTE 0
    field438_0x295 BYTE 0
    field439_0x296 BYTE 0
    field440_0x297 BYTE 0
    field441_0x298 BYTE 0
    field442_0x299 BYTE 0
    field443_0x29a BYTE 0
    field444_0x29b BYTE 0
    field445_0x29c BYTE 0
    field446_0x29d BYTE 0
    field447_0x29e BYTE 0
    field448_0x29f BYTE 0
    field449_0x2a0 BYTE 0
    field450_0x2a1 BYTE 0
    field451_0x2a2 BYTE 0
    field452_0x2a3 BYTE 0
    field453_0x2a4 BYTE 0
    field454_0x2a5 BYTE 0
    field455_0x2a6 BYTE 0
    field456_0x2a7 BYTE 0
    field457_0x2a8 BYTE 0
    field458_0x2a9 BYTE 0
    field459_0x2aa BYTE 0
    field460_0x2ab BYTE 0
    field461_0x2ac BYTE 0
    field462_0x2ad BYTE 0
    field463_0x2ae BYTE 0
    field464_0x2af BYTE 0
    field465_0x2b0 BYTE 0
    field466_0x2b1 BYTE 0
    field467_0x2b2 BYTE 0
    field468_0x2b3 BYTE 0
    field469_0x2b4 BYTE 0
    field470_0x2b5 BYTE 0
    field471_0x2b6 BYTE 0
    field472_0x2b7 BYTE 0
    field473_0x2b8 BYTE 0
    field474_0x2b9 BYTE 0
    field475_0x2ba BYTE 0
    field476_0x2bb BYTE 0
    field477_0x2bc BYTE 0
    field478_0x2bd BYTE 0
    field479_0x2be BYTE 0
    field480_0x2bf BYTE 0
    field481_0x2c0 BYTE 0
    field482_0x2c1 BYTE 0
    field483_0x2c2 BYTE 0
    field484_0x2c3 BYTE 0
    field485_0x2c4 BYTE 0
    field486_0x2c5 BYTE 0
    field487_0x2c6 BYTE 0
    field488_0x2c7 BYTE 0
    field489_0x2c8 BYTE 0
    field490_0x2c9 BYTE 0
    field491_0x2ca BYTE 0
    field492_0x2cb BYTE 0
    field493_0x2cc BYTE 0
    field494_0x2cd BYTE 0
    field495_0x2ce BYTE 0
    field496_0x2cf BYTE 0
    field497_0x2d0 BYTE 0
    field498_0x2d1 BYTE 0
    field499_0x2d2 BYTE 0
    field500_0x2d3 BYTE 0
    field501_0x2d4 BYTE 0
    field502_0x2d5 BYTE 0
    field503_0x2d6 BYTE 0
    field504_0x2d7 BYTE 0
    field505_0x2d8 BYTE 0
    field506_0x2d9 BYTE 0
    field507_0x2da BYTE 0
    field508_0x2db BYTE 0
    field509_0x2dc BYTE 0
    field510_0x2dd BYTE 0
    field511_0x2de BYTE 0
    field512_0x2df BYTE 0
    field513_0x2e0 BYTE 0
    field514_0x2e1 BYTE 0
    field515_0x2e2 BYTE 0
    field516_0x2e3 BYTE 0
    field517_0x2e4 BYTE 0
    field518_0x2e5 BYTE 0
    field519_0x2e6 BYTE 0
    field520_0x2e7 BYTE 0
    field521_0x2e8 BYTE 0
    field522_0x2e9 BYTE 0
    field523_0x2ea BYTE 0
    field524_0x2eb BYTE 0
    field525_0x2ec BYTE 0
    field526_0x2ed BYTE 0
    field527_0x2ee BYTE 0
    field528_0x2ef BYTE 0
    field529_0x2f0 BYTE 0
    field530_0x2f1 BYTE 0
    field531_0x2f2 BYTE 0
    field532_0x2f3 BYTE 0
    field533_0x2f4 BYTE 0
    field534_0x2f5 BYTE 0
    field535_0x2f6 BYTE 0
    field536_0x2f7 BYTE 0
    field537_0x2f8 BYTE 0
    field538_0x2f9 BYTE 0
    field539_0x2fa BYTE 0
    field540_0x2fb BYTE 0
    field541_0x2fc BYTE 0
    field542_0x2fd BYTE 0
    field543_0x2fe BYTE 0
    field544_0x2ff BYTE 0
    field545_0x300 BYTE 0
    field546_0x301 BYTE 0
    field547_0x302 BYTE 0
    field548_0x303 BYTE 0
    field549_0x304 BYTE 0
    field550_0x305 BYTE 0
    field551_0x306 BYTE 0
    field552_0x307 BYTE 0
    field553_0x308 BYTE 0
    field554_0x309 BYTE 0
    field555_0x30a BYTE 0
    field556_0x30b BYTE 0
    field557_0x30c BYTE 0
    field558_0x30d BYTE 0
    field559_0x30e BYTE 0
    field560_0x30f BYTE 0
    field561_0x310 BYTE 0
    field562_0x311 BYTE 0
    field563_0x312 BYTE 0
    field564_0x313 BYTE 0
    field565_0x314 BYTE 0
    field566_0x315 BYTE 0
    field567_0x316 BYTE 0
    field568_0x317 BYTE 0
    field569_0x318 BYTE 0
    field570_0x319 BYTE 0
    field571_0x31a BYTE 0
    field572_0x31b BYTE 0
    field573_0x31c BYTE 0
    field574_0x31d BYTE 0
    field575_0x31e BYTE 0
    field576_0x31f BYTE 0
    field577_0x320 BYTE 0
    field578_0x321 BYTE 0
    field579_0x322 BYTE 0
    field580_0x323 BYTE 0
    field581_0x324 BYTE 0
    field582_0x325 BYTE 0
    field583_0x326 BYTE 0
    field584_0x327 BYTE 0
    field585_0x328 BYTE 0
    field586_0x329 BYTE 0
    field587_0x32a BYTE 0
    field588_0x32b BYTE 0
    field589_0x32c BYTE 0
    field590_0x32d BYTE 0
    field591_0x32e BYTE 0
    field592_0x32f BYTE 0
    field593_0x330 BYTE 0
    field594_0x331 BYTE 0
    field595_0x332 BYTE 0
    field596_0x333 BYTE 0
    field597_0x334 BYTE 0
    field598_0x335 BYTE 0
    field599_0x336 BYTE 0
    field600_0x337 BYTE 0
    field601_0x338 BYTE 0
    field602_0x339 BYTE 0
    field603_0x33a BYTE 0
    field604_0x33b BYTE 0
    field605_0x33c BYTE 0
    field606_0x33d BYTE 0
    field607_0x33e BYTE 0
    field608_0x33f BYTE 0
    field609_0x340 BYTE 0
    field610_0x341 BYTE 0
    field611_0x342 BYTE 0
    field612_0x343 BYTE 0
    field613_0x344 BYTE 0
    field614_0x345 BYTE 0
    field615_0x346 BYTE 0
    field616_0x347 BYTE 0
    field617_0x348 BYTE 0
    field618_0x349 BYTE 0
    field619_0x34a BYTE 0
    field620_0x34b BYTE 0
    field621_0x34c BYTE 0
    field622_0x34d BYTE 0
    field623_0x34e BYTE 0
    field624_0x34f BYTE 0
    field625_0x350 BYTE 0
    field626_0x351 BYTE 0
    field627_0x352 BYTE 0
    field628_0x353 BYTE 0
    field629_0x354 BYTE 0
    field630_0x355 BYTE 0
    field631_0x356 BYTE 0
    field632_0x357 BYTE 0
    field633_0x358 BYTE 0
    field634_0x359 BYTE 0
    field635_0x35a BYTE 0
    field636_0x35b BYTE 0
    field637_0x35c BYTE 0
    field638_0x35d BYTE 0
    field639_0x35e BYTE 0
    field640_0x35f BYTE 0
    field641_0x360 BYTE 0
    field642_0x361 BYTE 0
    field643_0x362 BYTE 0
    field644_0x363 BYTE 0
    field645_0x364 BYTE 0
    field646_0x365 BYTE 0
    field647_0x366 BYTE 0
    field648_0x367 BYTE 0
    field649_0x368 BYTE 0
    field650_0x369 BYTE 0
    field651_0x36a BYTE 0
    field652_0x36b BYTE 0
    field653_0x36c BYTE 0
    field654_0x36d BYTE 0
    field655_0x36e BYTE 0
    field656_0x36f BYTE 0
    field657_0x370 BYTE 0
    field658_0x371 BYTE 0
    field659_0x372 BYTE 0
    field660_0x373 BYTE 0
    field661_0x374 BYTE 0
    field662_0x375 BYTE 0
    field663_0x376 BYTE 0
    field664_0x377 BYTE 0
    field665_0x378 BYTE 0
    field666_0x379 BYTE 0
    field667_0x37a BYTE 0
    field668_0x37b BYTE 0
    field669_0x37c BYTE 0
    field670_0x37d BYTE 0
    field671_0x37e BYTE 0
    field672_0x37f BYTE 0
    field673_0x380 BYTE 0
    field674_0x381 BYTE 0
    field675_0x382 BYTE 0
    field676_0x383 BYTE 0
    field677_0x384 BYTE 0
    field678_0x385 BYTE 0
    field679_0x386 BYTE 0
    field680_0x387 BYTE 0
    field681_0x388 BYTE 0
    field682_0x389 BYTE 0
    field683_0x38a BYTE 0
    field684_0x38b BYTE 0
    field685_0x38c BYTE 0
    field686_0x38d BYTE 0
    field687_0x38e BYTE 0
    field688_0x38f BYTE 0
    field689_0x390 BYTE 0
    field690_0x391 BYTE 0
    field691_0x392 BYTE 0
    field692_0x393 BYTE 0
    field693_0x394 BYTE 0
    field694_0x395 BYTE 0
    field695_0x396 BYTE 0
    field696_0x397 BYTE 0
    field697_0x398 BYTE 0
    field698_0x399 BYTE 0
    field699_0x39a BYTE 0
    field700_0x39b BYTE 0
    field701_0x39c BYTE 0
    field702_0x39d BYTE 0
    field703_0x39e BYTE 0
    field704_0x39f BYTE 0
    field705_0x3a0 BYTE 0
    field706_0x3a1 BYTE 0
    field707_0x3a2 BYTE 0
    field708_0x3a3 BYTE 0
    field709_0x3a4 BYTE 0
    field710_0x3a5 BYTE 0
    field711_0x3a6 BYTE 0
    field712_0x3a7 BYTE 0
    field713_0x3a8 BYTE 0
    field714_0x3a9 BYTE 0
    field715_0x3aa BYTE 0
    field716_0x3ab BYTE 0
    field717_0x3ac BYTE 0
    field718_0x3ad BYTE 0
    field719_0x3ae BYTE 0
    field720_0x3af BYTE 0
    field721_0x3b0 BYTE 0
    field722_0x3b1 BYTE 0
    field723_0x3b2 BYTE 0
    field724_0x3b3 BYTE 0
    field725_0x3b4 BYTE 0
    field726_0x3b5 BYTE 0
    field727_0x3b6 BYTE 0
    field728_0x3b7 BYTE 0
    field729_0x3b8 BYTE 0
    field730_0x3b9 BYTE 0
    field731_0x3ba BYTE 0
    field732_0x3bb BYTE 0
    field733_0x3bc BYTE 0
    field734_0x3bd BYTE 0
    field735_0x3be BYTE 0
    field736_0x3bf BYTE 0
    field737_0x3c0 BYTE 0
    field738_0x3c1 BYTE 0
    field739_0x3c2 BYTE 0
    field740_0x3c3 BYTE 0
    field741_0x3c4 BYTE 0
    field742_0x3c5 BYTE 0
    field743_0x3c6 BYTE 0
    field744_0x3c7 BYTE 0
    field745_0x3c8 BYTE 0
    field746_0x3c9 BYTE 0
    field747_0x3ca BYTE 0
    field748_0x3cb BYTE 0
    field749_0x3cc BYTE 0
    field750_0x3cd BYTE 0
    field751_0x3ce BYTE 0
    field752_0x3cf BYTE 0
    field753_0x3d0 BYTE 0
    field754_0x3d1 BYTE 0
    field755_0x3d2 BYTE 0
    field756_0x3d3 BYTE 0
    field757_0x3d4 BYTE 0
    field758_0x3d5 BYTE 0
    field759_0x3d6 BYTE 0
    field760_0x3d7 BYTE 0
    field761_0x3d8 BYTE 0
    field762_0x3d9 BYTE 0
    field763_0x3da BYTE 0
    field764_0x3db BYTE 0
    field765_0x3dc BYTE 0
    field766_0x3dd BYTE 0
    field767_0x3de BYTE 0
    field768_0x3df BYTE 0
    field769_0x3e0 BYTE 0
    field770_0x3e1 BYTE 0
    field771_0x3e2 BYTE 0
    field772_0x3e3 BYTE 0
    field773_0x3e4 BYTE 0
    field774_0x3e5 BYTE 0
    field775_0x3e6 BYTE 0
    field776_0x3e7 BYTE 0
    field777_0x3e8 BYTE 0
    field778_0x3e9 BYTE 0
    field779_0x3ea BYTE 0
    field780_0x3eb BYTE 0
    field781_0x3ec BYTE 0
    field782_0x3ed BYTE 0
    field783_0x3ee BYTE 0
    field784_0x3ef BYTE 0
    field785_0x3f0 BYTE 0
    field786_0x3f1 BYTE 0
    field787_0x3f2 BYTE 0
    field788_0x3f3 BYTE 0
    field789_0x3f4 BYTE 0
    field790_0x3f5 BYTE 0
    field791_0x3f6 BYTE 0
    field792_0x3f7 BYTE 0
    field793_0x3f8 BYTE 0
    field794_0x3f9 BYTE 0
    field795_0x3fa BYTE 0
    field796_0x3fb BYTE 0
    field797_0x3fc BYTE 0
    field798_0x3fd BYTE 0
    field799_0x3fe BYTE 0
    field800_0x3ff BYTE 0
    field801_0x400 BYTE 0
    field802_0x401 BYTE 0
    field803_0x402 BYTE 0
    field804_0x403 BYTE 0
    field805_0x404 BYTE 0
    field806_0x405 BYTE 0
    field807_0x406 BYTE 0
    field808_0x407 BYTE 0
    field809_0x408 BYTE 0
    field810_0x409 BYTE 0
    field811_0x40a BYTE 0
    field812_0x40b BYTE 0
    field813_0x40c BYTE 0
    field814_0x40d BYTE 0
    field815_0x40e BYTE 0
    field816_0x40f BYTE 0
    field817_0x410 BYTE 0
    field818_0x411 BYTE 0
    field819_0x412 BYTE 0
    field820_0x413 BYTE 0
    field821_0x414 BYTE 0
    field822_0x415 BYTE 0
    field823_0x416 BYTE 0
    field824_0x417 BYTE 0
    field825_0x418 BYTE 0
    field826_0x419 BYTE 0
    field827_0x41a BYTE 0
    field828_0x41b BYTE 0
    field829_0x41c BYTE 0
    field830_0x41d BYTE 0
    field831_0x41e BYTE 0
    field832_0x41f BYTE 0
    field833_0x420 BYTE 0
    field834_0x421 BYTE 0
    field835_0x422 BYTE 0
    field836_0x423 BYTE 0
    field837_0x424 BYTE 0
    field838_0x425 BYTE 0
    field839_0x426 BYTE 0
    field840_0x427 BYTE 0
    field841_0x428 BYTE 0
    field842_0x429 BYTE 0
    field843_0x42a BYTE 0
    field844_0x42b BYTE 0
    field845_0x42c BYTE 0
    field846_0x42d BYTE 0
    field847_0x42e BYTE 0
    field848_0x42f BYTE 0
    field849_0x430 BYTE 0
    field850_0x431 BYTE 0
    field851_0x432 BYTE 0
    field852_0x433 BYTE 0
    field853_0x434 BYTE 0
    field854_0x435 BYTE 0
    field855_0x436 BYTE 0
    field856_0x437 BYTE 0
    field857_0x438 BYTE 0
    field858_0x439 BYTE 0
    field859_0x43a BYTE 0
    field860_0x43b BYTE 0
    field861_0x43c BYTE 0
    field862_0x43d BYTE 0
    field863_0x43e BYTE 0
    field864_0x43f BYTE 0
    field865_0x440 BYTE 0
    field866_0x441 BYTE 0
    field867_0x442 BYTE 0
    field868_0x443 BYTE 0
    field869_0x444 BYTE 0
    field870_0x445 BYTE 0
    field871_0x446 BYTE 0
    field872_0x447 BYTE 0
    field873_0x448 BYTE 0
    field874_0x449 BYTE 0
    field875_0x44a BYTE 0
    field876_0x44b BYTE 0
    field877_0x44c BYTE 0
    field878_0x44d BYTE 0
    field879_0x44e BYTE 0
    field880_0x44f BYTE 0
    field881_0x450 BYTE 0
    field882_0x451 BYTE 0
    field883_0x452 BYTE 0
    field884_0x453 BYTE 0
    field885_0x454 BYTE 0
    field886_0x455 BYTE 0
    field887_0x456 BYTE 0
    field888_0x457 BYTE 0
    field889_0x458 BYTE 0
    field890_0x459 BYTE 0
    field891_0x45a BYTE 0
    field892_0x45b BYTE 0
    field893_0x45c BYTE 0
    field894_0x45d BYTE 0
    field895_0x45e BYTE 0
    field896_0x45f BYTE 0
    field897_0x460 BYTE 0
    field898_0x461 BYTE 0
    field899_0x462 BYTE 0
    field900_0x463 BYTE 0
    field901_0x464 BYTE 0
    field902_0x465 BYTE 0
    field903_0x466 BYTE 0
    field904_0x467 BYTE 0
    field905_0x468 BYTE 0
    field906_0x469 BYTE 0
    field907_0x46a BYTE 0
    field908_0x46b BYTE 0
    field909_0x46c BYTE 0
    field910_0x46d BYTE 0
    field911_0x46e BYTE 0
    field912_0x46f BYTE 0
    field913_0x470 BYTE 0
    field914_0x471 BYTE 0
    field915_0x472 BYTE 0
    field916_0x473 BYTE 0
    field917_0x474 BYTE 0
    field918_0x475 BYTE 0
    field919_0x476 BYTE 0
    field920_0x477 BYTE 0
    field921_0x478 BYTE 0
    field922_0x479 BYTE 0
    field923_0x47a BYTE 0
    field924_0x47b BYTE 0
    field925_0x47c BYTE 0
    field926_0x47d BYTE 0
    field927_0x47e BYTE 0
    field928_0x47f BYTE 0
    field929_0x480 BYTE 0
    field930_0x481 BYTE 0
    field931_0x482 BYTE 0
    field932_0x483 BYTE 0
    field933_0x484 BYTE 0
    field934_0x485 BYTE 0
    field935_0x486 BYTE 0
    field936_0x487 BYTE 0
    field937_0x488 BYTE 0
    field938_0x489 BYTE 0
    field939_0x48a BYTE 0
    field940_0x48b BYTE 0
    field941_0x48c BYTE 0
    field942_0x48d BYTE 0
    field943_0x48e BYTE 0
    field944_0x48f BYTE 0
    field945_0x490 BYTE 0
    field946_0x491 BYTE 0
    field947_0x492 BYTE 0
    field948_0x493 BYTE 0
    field949_0x494 BYTE 0
    field950_0x495 BYTE 0
    field951_0x496 BYTE 0
    field952_0x497 BYTE 0
    field953_0x498 BYTE 0
    field954_0x499 BYTE 0
    field955_0x49a BYTE 0
    field956_0x49b BYTE 0
    field957_0x49c BYTE 0
    field958_0x49d BYTE 0
    field959_0x49e BYTE 0
    field960_0x49f BYTE 0
    field961_0x4a0 BYTE 0
    field962_0x4a1 BYTE 0
    field963_0x4a2 BYTE 0
    field964_0x4a3 BYTE 0
    field965_0x4a4 BYTE 0
    field966_0x4a5 BYTE 0
    field967_0x4a6 BYTE 0
    field968_0x4a7 BYTE 0
    field969_0x4a8 BYTE 0
    field970_0x4a9 BYTE 0
    field971_0x4aa BYTE 0
    field972_0x4ab BYTE 0
    field973_0x4ac BYTE 0
    field974_0x4ad BYTE 0
    field975_0x4ae BYTE 0
    field976_0x4af BYTE 0
    field977_0x4b0 BYTE 0
    field978_0x4b1 BYTE 0
    field979_0x4b2 BYTE 0
    field980_0x4b3 BYTE 0
    field981_0x4b4 BYTE 0
    field982_0x4b5 BYTE 0
    field983_0x4b6 BYTE 0
    field984_0x4b7 BYTE 0
    field985_0x4b8 BYTE 0
    field986_0x4b9 BYTE 0
    field987_0x4ba BYTE 0
    field988_0x4bb BYTE 0
    field989_0x4bc BYTE 0
    field990_0x4bd BYTE 0
    field991_0x4be BYTE 0
    field992_0x4bf BYTE 0
    field993_0x4c0 BYTE 0
    field994_0x4c1 BYTE 0
    field995_0x4c2 BYTE 0
    field996_0x4c3 BYTE 0
    field997_0x4c4 BYTE 0
    field998_0x4c5 BYTE 0
    field999_0x4c6 BYTE 0
    field1000_0x4c7 BYTE 0
    field1001_0x4c8 BYTE 0
    field1002_0x4c9 BYTE 0
    field1003_0x4ca BYTE 0
    field1004_0x4cb BYTE 0
    field1005_0x4cc BYTE 0
    field1006_0x4cd BYTE 0
    field1007_0x4ce BYTE 0
    field1008_0x4cf BYTE 0
    field1009_0x4d0 BYTE 0
    field1010_0x4d1 BYTE 0
    field1011_0x4d2 BYTE 0
    field1012_0x4d3 BYTE 0
    field1013_0x4d4 BYTE 0
    field1014_0x4d5 BYTE 0
    field1015_0x4d6 BYTE 0
    field1016_0x4d7 BYTE 0
    field1017_0x4d8 BYTE 0
    field1018_0x4d9 BYTE 0
    field1019_0x4da BYTE 0
    field1020_0x4db BYTE 0
    field1021_0x4dc BYTE 0
    field1022_0x4dd BYTE 0
    field1023_0x4de BYTE 0
    field1024_0x4df BYTE 0
    field1025_0x4e0 BYTE 0
    field1026_0x4e1 BYTE 0
    field1027_0x4e2 BYTE 0
    field1028_0x4e3 BYTE 0
    field1029_0x4e4 BYTE 0
    field1030_0x4e5 BYTE 0
    field1031_0x4e6 BYTE 0
    field1032_0x4e7 BYTE 0
    field1033_0x4e8 BYTE 0
    field1034_0x4e9 BYTE 0
    field1035_0x4ea BYTE 0
    field1036_0x4eb BYTE 0
    field1037_0x4ec BYTE 0
    field1038_0x4ed BYTE 0
    field1039_0x4ee BYTE 0
    field1040_0x4ef BYTE 0
    field1041_0x4f0 BYTE 0
    field1042_0x4f1 BYTE 0
    field1043_0x4f2 BYTE 0
    field1044_0x4f3 BYTE 0
    field1045_0x4f4 BYTE 0
    field1046_0x4f5 BYTE 0
    field1047_0x4f6 BYTE 0
    field1048_0x4f7 BYTE 0
    field1049_0x4f8 BYTE 0
    field1050_0x4f9 BYTE 0
    field1051_0x4fa BYTE 0
    field1052_0x4fb BYTE 0
    field1053_0x4fc BYTE 0
    field1054_0x4fd BYTE 0
    field1055_0x4fe BYTE 0
    field1056_0x4ff BYTE 0
    field1057_0x500 BYTE 0
    field1058_0x501 BYTE 0
    field1059_0x502 BYTE 0
    field1060_0x503 BYTE 0
    field1061_0x504 BYTE 0
    field1062_0x505 BYTE 0
    field1063_0x506 BYTE 0
    field1064_0x507 BYTE 0
    field1065_0x508 BYTE 0
    field1066_0x509 BYTE 0
    field1067_0x50a BYTE 0
    field1068_0x50b BYTE 0
    field1069_0x50c BYTE 0
    field1070_0x50d BYTE 0
    field1071_0x50e BYTE 0
    field1072_0x50f BYTE 0
    field1073_0x510 BYTE 0
    field1074_0x511 BYTE 0
    field1075_0x512 BYTE 0
    field1076_0x513 BYTE 0
    field1077_0x514 BYTE 0
    field1078_0x515 BYTE 0
    field1079_0x516 BYTE 0
    field1080_0x517 BYTE 0
    field1081_0x518 BYTE 0
    field1082_0x519 BYTE 0
    field1083_0x51a BYTE 0
    field1084_0x51b BYTE 0
    field1085_0x51c BYTE 0
    field1086_0x51d BYTE 0
    field1087_0x51e BYTE 0
    field1088_0x51f BYTE 0
    field1089_0x520 BYTE 0
    field1090_0x521 BYTE 0
    field1091_0x522 BYTE 0
    field1092_0x523 BYTE 0
    field1093_0x524 BYTE 0
    field1094_0x525 BYTE 0
    field1095_0x526 BYTE 0
    field1096_0x527 BYTE 0
    field1097_0x528 BYTE 0
    field1098_0x529 BYTE 0
    field1099_0x52a BYTE 0
    field1100_0x52b BYTE 0
    field1101_0x52c BYTE 0
    field1102_0x52d BYTE 0
    field1103_0x52e BYTE 0
    field1104_0x52f BYTE 0
    field1105_0x530 BYTE 0
    field1106_0x531 BYTE 0
    field1107_0x532 BYTE 0
    field1108_0x533 BYTE 0
    field1109_0x534 BYTE 0
    field1110_0x535 BYTE 0
    field1111_0x536 BYTE 0
    field1112_0x537 BYTE 0
    field1113_0x538 BYTE 0
    field1114_0x539 BYTE 0
    field1115_0x53a BYTE 0
    field1116_0x53b BYTE 0
    field1117_0x53c BYTE 0
    field1118_0x53d BYTE 0
    field1119_0x53e BYTE 0
    field1120_0x53f BYTE 0
    field1121_0x540 BYTE 0
    field1122_0x541 BYTE 0
    field1123_0x542 BYTE 0
    field1124_0x543 BYTE 0
    field1125_0x544 BYTE 0
    field1126_0x545 BYTE 0
    field1127_0x546 BYTE 0
    field1128_0x547 BYTE 0
    field1129_0x548 BYTE 0
    field1130_0x549 BYTE 0
    field1131_0x54a BYTE 0
    field1132_0x54b BYTE 0
    field1133_0x54c BYTE 0
    field1134_0x54d BYTE 0
    field1135_0x54e BYTE 0
    field1136_0x54f BYTE 0
    field1137_0x550 BYTE 0
    field1138_0x551 BYTE 0
    field1139_0x552 BYTE 0
    field1140_0x553 BYTE 0
    field1141_0x554 BYTE 0
    field1142_0x555 BYTE 0
    field1143_0x556 BYTE 0
    field1144_0x557 BYTE 0
    field1145_0x558 BYTE 0
    field1146_0x559 BYTE 0
    field1147_0x55a BYTE 0
    field1148_0x55b BYTE 0
    field1149_0x55c BYTE 0
    field1150_0x55d BYTE 0
    field1151_0x55e BYTE 0
    field1152_0x55f BYTE 0
    field1153_0x560 BYTE 0
    field1154_0x561 BYTE 0
    field1155_0x562 BYTE 0
    field1156_0x563 BYTE 0
    field1157_0x564 BYTE 0
    field1158_0x565 BYTE 0
    field1159_0x566 BYTE 0
    field1160_0x567 BYTE 0
    field1161_0x568 BYTE 0
    field1162_0x569 BYTE 0
    field1163_0x56a BYTE 0
    field1164_0x56b BYTE 0
    field1165_0x56c BYTE 0
    field1166_0x56d BYTE 0
    field1167_0x56e BYTE 0
    field1168_0x56f BYTE 0
    field1169_0x570 BYTE 0
    field1170_0x571 BYTE 0
    field1171_0x572 BYTE 0
    field1172_0x573 BYTE 0
    field1173_0x574 BYTE 0
    field1174_0x575 BYTE 0
    field1175_0x576 BYTE 0
    field1176_0x577 BYTE 0
    field1177_0x578 BYTE 0
    field1178_0x579 BYTE 0
    field1179_0x57a BYTE 0
    field1180_0x57b BYTE 0
    field1181_0x57c BYTE 0
    field1182_0x57d BYTE 0
    field1183_0x57e BYTE 0
    field1184_0x57f BYTE 0
    field1185_0x580 BYTE 0
    field1186_0x581 BYTE 0
    field1187_0x582 BYTE 0
    field1188_0x583 BYTE 0
    field1189_0x584 BYTE 0
    field1190_0x585 BYTE 0
    field1191_0x586 BYTE 0
    field1192_0x587 BYTE 0
    field1193_0x588 BYTE 0
    field1194_0x589 BYTE 0
    field1195_0x58a BYTE 0
    field1196_0x58b BYTE 0
    field1197_0x58c BYTE 0
    field1198_0x58d BYTE 0
    field1199_0x58e BYTE 0
    field1200_0x58f BYTE 0
    field1201_0x590 BYTE 0
    field1202_0x591 BYTE 0
    field1203_0x592 BYTE 0
    field1204_0x593 BYTE 0
    field1205_0x594 BYTE 0
    field1206_0x595 BYTE 0
    field1207_0x596 BYTE 0
    field1208_0x597 BYTE 0
    field1209_0x598 BYTE 0
    field1210_0x599 BYTE 0
    field1211_0x59a BYTE 0
    field1212_0x59b BYTE 0
    field1213_0x59c BYTE 0
    field1214_0x59d BYTE 0
    field1215_0x59e BYTE 0
    field1216_0x59f BYTE 0
    field1217_0x5a0 BYTE 0
    field1218_0x5a1 BYTE 0
    field1219_0x5a2 BYTE 0
    field1220_0x5a3 BYTE 0
    field1221_0x5a4 BYTE 0
    field1222_0x5a5 BYTE 0
    field1223_0x5a6 BYTE 0
    field1224_0x5a7 BYTE 0
    field1225_0x5a8 BYTE 0
    field1226_0x5a9 BYTE 0
    field1227_0x5aa BYTE 0
    field1228_0x5ab BYTE 0
    field1229_0x5ac BYTE 0
    field1230_0x5ad BYTE 0
    field1231_0x5ae BYTE 0
    field1232_0x5af BYTE 0
UnkFamily6C ENDS
UnkFamily6D STRUCT
    parent UnkFamily6Abstract {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 BYTE 0
    field18_0xf1 BYTE 0
    field19_0xf2 BYTE 0
    field20_0xf3 BYTE 0
    field21_0xf4 BYTE 0
    field22_0xf5 BYTE 0
    field23_0xf6 BYTE 0
    field24_0xf7 BYTE 0
    field25_0xf8 BYTE 0
    field26_0xf9 BYTE 0
    field27_0xfa BYTE 0
    field28_0xfb BYTE 0
    field29_0xfc BYTE 0
    field30_0xfd BYTE 0
    field31_0xfe BYTE 0
    field32_0xff BYTE 0
    field33_0x100 BYTE 0
    field34_0x101 BYTE 0
    field35_0x102 BYTE 0
    field36_0x103 BYTE 0
    field37_0x104 BYTE 0
    field38_0x105 BYTE 0
    field39_0x106 BYTE 0
    field40_0x107 BYTE 0
    field41_0x108 BYTE 0
    field42_0x109 BYTE 0
    field43_0x10a BYTE 0
    field44_0x10b BYTE 0
    field45_0x10c BYTE 0
    field46_0x10d BYTE 0
    field47_0x10e BYTE 0
    field48_0x10f BYTE 0
    field49_0x110 BYTE 0
    field50_0x111 BYTE 0
    field51_0x112 BYTE 0
    field52_0x113 BYTE 0
    field53_0x114 BYTE 0
    field54_0x115 BYTE 0
    field55_0x116 BYTE 0
    field56_0x117 BYTE 0
    field57_0x118 BYTE 0
    field58_0x119 BYTE 0
    field59_0x11a BYTE 0
    field60_0x11b BYTE 0
    field61_0x11c BYTE 0
    field62_0x11d BYTE 0
    field63_0x11e BYTE 0
    field64_0x11f BYTE 0
    field65_0x120 BYTE 0
    field66_0x121 BYTE 0
    field67_0x122 BYTE 0
    field68_0x123 BYTE 0
    field69_0x124 BYTE 0
    field70_0x125 BYTE 0
    field71_0x126 BYTE 0
    field72_0x127 BYTE 0
    field73_0x128 BYTE 0
    field74_0x129 BYTE 0
    field75_0x12a BYTE 0
    field76_0x12b BYTE 0
    field77_0x12c BYTE 0
    field78_0x12d BYTE 0
    field79_0x12e BYTE 0
    field80_0x12f BYTE 0
    field81_0x130 BYTE 0
    field82_0x131 BYTE 0
    field83_0x132 BYTE 0
    field84_0x133 BYTE 0
    field85_0x134 BYTE 0
    field86_0x135 BYTE 0
    field87_0x136 BYTE 0
    field88_0x137 BYTE 0
    field89_0x138 BYTE 0
    field90_0x139 BYTE 0
    field91_0x13a BYTE 0
    field92_0x13b BYTE 0
    field93_0x13c BYTE 0
    field94_0x13d BYTE 0
    field95_0x13e BYTE 0
    field96_0x13f BYTE 0
    field97_0x140 BYTE 0
    field98_0x141 BYTE 0
    field99_0x142 BYTE 0
    field100_0x143 BYTE 0
    field101_0x144 BYTE 0
    field102_0x145 BYTE 0
    field103_0x146 BYTE 0
    field104_0x147 BYTE 0
    field105_0x148 BYTE 0
    field106_0x149 BYTE 0
    field107_0x14a BYTE 0
    field108_0x14b BYTE 0
    field109_0x14c BYTE 0
    field110_0x14d BYTE 0
    field111_0x14e BYTE 0
    field112_0x14f BYTE 0
    field113_0x150 BYTE 0
    field114_0x151 BYTE 0
    field115_0x152 BYTE 0
    field116_0x153 BYTE 0
    field117_0x154 BYTE 0
    field118_0x155 BYTE 0
    field119_0x156 BYTE 0
    field120_0x157 BYTE 0
    field121_0x158 BYTE 0
    field122_0x159 BYTE 0
    field123_0x15a BYTE 0
    field124_0x15b BYTE 0
    field125_0x15c BYTE 0
    field126_0x15d BYTE 0
    field127_0x15e BYTE 0
    field128_0x15f BYTE 0
    field129_0x160 Vector4 {}
    field130_0x170 Vector4 {}
    field131_0x180 BYTE 0
    field132_0x181 BYTE 0
    field133_0x182 BYTE 0
    field134_0x183 BYTE 0
    field135_0x184 BYTE 0
    field136_0x185 BYTE 0
    field137_0x186 BYTE 0
    field138_0x187 BYTE 0
    field139_0x188 BYTE 0
    field140_0x189 BYTE 0
    field141_0x18a BYTE 0
    field142_0x18b BYTE 0
    field143_0x18c BYTE 0
    field144_0x18d BYTE 0
    field145_0x18e BYTE 0
    field146_0x18f BYTE 0
    field147_0x190 BYTE 0
    field148_0x191 BYTE 0
    field149_0x192 BYTE 0
    field150_0x193 BYTE 0
    field151_0x194 BYTE 0
    field152_0x195 BYTE 0
    field153_0x196 BYTE 0
    field154_0x197 BYTE 0
    field155_0x198 BYTE 0
    field156_0x199 BYTE 0
    field157_0x19a BYTE 0
    field158_0x19b BYTE 0
    field159_0x19c BYTE 0
    field160_0x19d BYTE 0
    field161_0x19e BYTE 0
    field162_0x19f BYTE 0
    field163_0x1a0 BYTE 0
    field164_0x1a1 BYTE 0
    field165_0x1a2 BYTE 0
    field166_0x1a3 BYTE 0
    field167_0x1a4 BYTE 0
    field168_0x1a5 BYTE 0
    field169_0x1a6 BYTE 0
    field170_0x1a7 BYTE 0
    field171_0x1a8 BYTE 0
    field172_0x1a9 BYTE 0
    field173_0x1aa BYTE 0
    field174_0x1ab BYTE 0
    field175_0x1ac BYTE 0
    field176_0x1ad BYTE 0
    field177_0x1ae BYTE 0
    field178_0x1af BYTE 0
    field179_0x1b0 BYTE 0
    field180_0x1b1 BYTE 0
    field181_0x1b2 BYTE 0
    field182_0x1b3 BYTE 0
    field183_0x1b4 BYTE 0
    field184_0x1b5 BYTE 0
    field185_0x1b6 BYTE 0
    field186_0x1b7 BYTE 0
    field187_0x1b8 BYTE 0
    field188_0x1b9 BYTE 0
    field189_0x1ba BYTE 0
    field190_0x1bb BYTE 0
    field191_0x1bc BYTE 0
    field192_0x1bd BYTE 0
    field193_0x1be BYTE 0
    field194_0x1bf BYTE 0
    field195_0x1c0 BYTE 0
    field196_0x1c1 BYTE 0
    field197_0x1c2 BYTE 0
    field198_0x1c3 BYTE 0
    field199_0x1c4 BYTE 0
    field200_0x1c5 BYTE 0
    field201_0x1c6 BYTE 0
    field202_0x1c7 BYTE 0
    field203_0x1c8 BYTE 0
    field204_0x1c9 BYTE 0
    field205_0x1ca BYTE 0
    field206_0x1cb BYTE 0
    field207_0x1cc BYTE 0
    field208_0x1cd BYTE 0
    field209_0x1ce BYTE 0
    field210_0x1cf BYTE 0
    field211_0x1d0 BYTE 0
    field212_0x1d1 BYTE 0
    field213_0x1d2 BYTE 0
    field214_0x1d3 BYTE 0
    field215_0x1d4 BYTE 0
    field216_0x1d5 BYTE 0
    field217_0x1d6 BYTE 0
    field218_0x1d7 BYTE 0
    field219_0x1d8 BYTE 0
    field220_0x1d9 BYTE 0
    field221_0x1da BYTE 0
    field222_0x1db BYTE 0
    field223_0x1dc BYTE 0
    field224_0x1dd BYTE 0
    field225_0x1de BYTE 0
    field226_0x1df BYTE 0
    field227_0x1e0 BYTE 0
    field228_0x1e1 BYTE 0
    field229_0x1e2 BYTE 0
    field230_0x1e3 BYTE 0
    field231_0x1e4 BYTE 0
    field232_0x1e5 BYTE 0
    field233_0x1e6 BYTE 0
    field234_0x1e7 BYTE 0
    field235_0x1e8 BYTE 0
    field236_0x1e9 BYTE 0
    field237_0x1ea BYTE 0
    field238_0x1eb BYTE 0
    field239_0x1ec BYTE 0
    field240_0x1ed BYTE 0
    field241_0x1ee BYTE 0
    field242_0x1ef BYTE 0
    field243_0x1f0 BYTE 0
    field244_0x1f1 BYTE 0
    field245_0x1f2 BYTE 0
    field246_0x1f3 BYTE 0
    field247_0x1f4 BYTE 0
    field248_0x1f5 BYTE 0
    field249_0x1f6 BYTE 0
    field250_0x1f7 BYTE 0
    field251_0x1f8 BYTE 0
    field252_0x1f9 BYTE 0
    field253_0x1fa BYTE 0
    field254_0x1fb BYTE 0
    field255_0x1fc BYTE 0
    field256_0x1fd BYTE 0
    field257_0x1fe BYTE 0
    field258_0x1ff BYTE 0
    field259_0x200 BYTE 0
    field260_0x201 BYTE 0
    field261_0x202 BYTE 0
    field262_0x203 BYTE 0
    field263_0x204 BYTE 0
    field264_0x205 BYTE 0
    field265_0x206 BYTE 0
    field266_0x207 BYTE 0
    field267_0x208 BYTE 0
    field268_0x209 BYTE 0
    field269_0x20a BYTE 0
    field270_0x20b BYTE 0
    field271_0x20c BYTE 0
    field272_0x20d BYTE 0
    field273_0x20e BYTE 0
    field274_0x20f BYTE 0
    field275_0x210 BYTE 0
    field276_0x211 BYTE 0
    field277_0x212 BYTE 0
    field278_0x213 BYTE 0
    field279_0x214 BYTE 0
    field280_0x215 BYTE 0
    field281_0x216 BYTE 0
    field282_0x217 BYTE 0
    field283_0x218 BYTE 0
    field284_0x219 BYTE 0
    field285_0x21a BYTE 0
    field286_0x21b BYTE 0
    field287_0x21c BYTE 0
    field288_0x21d BYTE 0
    field289_0x21e BYTE 0
    field290_0x21f BYTE 0
    field291_0x220 BYTE 0
    field292_0x221 BYTE 0
    field293_0x222 BYTE 0
    field294_0x223 BYTE 0
    field295_0x224 BYTE 0
    field296_0x225 BYTE 0
    field297_0x226 BYTE 0
    field298_0x227 BYTE 0
    field299_0x228 BYTE 0
    field300_0x229 BYTE 0
    field301_0x22a BYTE 0
    field302_0x22b BYTE 0
    field303_0x22c BYTE 0
    field304_0x22d BYTE 0
    field305_0x22e BYTE 0
    field306_0x22f BYTE 0
    field307_0x230 BYTE 0
    field308_0x231 BYTE 0
    field309_0x232 BYTE 0
    field310_0x233 BYTE 0
    field311_0x234 BYTE 0
    field312_0x235 BYTE 0
    field313_0x236 BYTE 0
    field314_0x237 BYTE 0
    field315_0x238 BYTE 0
    field316_0x239 BYTE 0
    field317_0x23a BYTE 0
    field318_0x23b BYTE 0
    field319_0x23c BYTE 0
    field320_0x23d BYTE 0
    field321_0x23e BYTE 0
    field322_0x23f BYTE 0
    field323_0x240 BYTE 0
    field324_0x241 BYTE 0
    field325_0x242 BYTE 0
    field326_0x243 BYTE 0
    field327_0x244 BYTE 0
    field328_0x245 BYTE 0
    field329_0x246 BYTE 0
    field330_0x247 BYTE 0
    field331_0x248 BYTE 0
    field332_0x249 BYTE 0
    field333_0x24a BYTE 0
    field334_0x24b BYTE 0
    field335_0x24c BYTE 0
    field336_0x24d BYTE 0
    field337_0x24e BYTE 0
    field338_0x24f BYTE 0
    field339_0x250 BYTE 0
    field340_0x251 BYTE 0
    field341_0x252 BYTE 0
    field342_0x253 BYTE 0
    field343_0x254 BYTE 0
    field344_0x255 BYTE 0
    field345_0x256 BYTE 0
    field346_0x257 BYTE 0
    field347_0x258 BYTE 0
    field348_0x259 BYTE 0
    field349_0x25a BYTE 0
    field350_0x25b BYTE 0
    field351_0x25c BYTE 0
    field352_0x25d BYTE 0
    field353_0x25e BYTE 0
    field354_0x25f BYTE 0
    field355_0x260 BYTE 0
    field356_0x261 BYTE 0
    field357_0x262 BYTE 0
    field358_0x263 BYTE 0
    field359_0x264 BYTE 0
    field360_0x265 BYTE 0
    field361_0x266 BYTE 0
    field362_0x267 BYTE 0
    field363_0x268 BYTE 0
    field364_0x269 BYTE 0
    field365_0x26a BYTE 0
    field366_0x26b BYTE 0
    field367_0x26c BYTE 0
    field368_0x26d BYTE 0
    field369_0x26e BYTE 0
    field370_0x26f BYTE 0
    field371_0x270 BYTE 0
    field372_0x271 BYTE 0
    field373_0x272 BYTE 0
    field374_0x273 BYTE 0
    field375_0x274 BYTE 0
    field376_0x275 BYTE 0
    field377_0x276 BYTE 0
    field378_0x277 BYTE 0
    field379_0x278 BYTE 0
    field380_0x279 BYTE 0
    field381_0x27a BYTE 0
    field382_0x27b BYTE 0
    field383_0x27c BYTE 0
    field384_0x27d BYTE 0
    field385_0x27e BYTE 0
    field386_0x27f BYTE 0
    field387_0x280 BYTE 0
    field388_0x281 BYTE 0
    field389_0x282 BYTE 0
    field390_0x283 BYTE 0
    field391_0x284 BYTE 0
    field392_0x285 BYTE 0
    field393_0x286 BYTE 0
    field394_0x287 BYTE 0
    field395_0x288 BYTE 0
    field396_0x289 BYTE 0
    field397_0x28a BYTE 0
    field398_0x28b BYTE 0
    field399_0x28c BYTE 0
    field400_0x28d BYTE 0
    field401_0x28e BYTE 0
    field402_0x28f BYTE 0
    field403_0x290 BYTE 0
    field404_0x291 BYTE 0
    field405_0x292 BYTE 0
    field406_0x293 BYTE 0
    field407_0x294 BYTE 0
    field408_0x295 BYTE 0
    field409_0x296 BYTE 0
    field410_0x297 BYTE 0
    field411_0x298 BYTE 0
    field412_0x299 BYTE 0
    field413_0x29a BYTE 0
    field414_0x29b BYTE 0
    field415_0x29c BYTE 0
    field416_0x29d BYTE 0
    field417_0x29e BYTE 0
    field418_0x29f BYTE 0
    field419_0x2a0 BYTE 0
    field420_0x2a1 BYTE 0
    field421_0x2a2 BYTE 0
    field422_0x2a3 BYTE 0
    field423_0x2a4 BYTE 0
    field424_0x2a5 BYTE 0
    field425_0x2a6 BYTE 0
    field426_0x2a7 BYTE 0
    field427_0x2a8 BYTE 0
    field428_0x2a9 BYTE 0
    field429_0x2aa BYTE 0
    field430_0x2ab BYTE 0
    field431_0x2ac BYTE 0
    field432_0x2ad BYTE 0
    field433_0x2ae BYTE 0
    field434_0x2af BYTE 0
    field435_0x2b0 BYTE 0
    field436_0x2b1 BYTE 0
    field437_0x2b2 BYTE 0
    field438_0x2b3 BYTE 0
    field439_0x2b4 BYTE 0
    field440_0x2b5 BYTE 0
    field441_0x2b6 BYTE 0
    field442_0x2b7 BYTE 0
    field443_0x2b8 BYTE 0
    field444_0x2b9 BYTE 0
    field445_0x2ba BYTE 0
    field446_0x2bb BYTE 0
    field447_0x2bc BYTE 0
    field448_0x2bd BYTE 0
    field449_0x2be BYTE 0
    field450_0x2bf BYTE 0
    field451_0x2c0 BYTE 0
    field452_0x2c1 BYTE 0
    field453_0x2c2 BYTE 0
    field454_0x2c3 BYTE 0
    field455_0x2c4 BYTE 0
    field456_0x2c5 BYTE 0
    field457_0x2c6 BYTE 0
    field458_0x2c7 BYTE 0
    field459_0x2c8 BYTE 0
    field460_0x2c9 BYTE 0
    field461_0x2ca BYTE 0
    field462_0x2cb BYTE 0
    field463_0x2cc BYTE 0
    field464_0x2cd BYTE 0
    field465_0x2ce BYTE 0
    field466_0x2cf BYTE 0
    field467_0x2d0 BYTE 0
    field468_0x2d1 BYTE 0
    field469_0x2d2 BYTE 0
    field470_0x2d3 BYTE 0
    field471_0x2d4 BYTE 0
    field472_0x2d5 BYTE 0
    field473_0x2d6 BYTE 0
    field474_0x2d7 BYTE 0
    field475_0x2d8 BYTE 0
    field476_0x2d9 BYTE 0
    field477_0x2da BYTE 0
    field478_0x2db BYTE 0
    field479_0x2dc BYTE 0
    field480_0x2dd BYTE 0
    field481_0x2de BYTE 0
    field482_0x2df BYTE 0
    field483_0x2e0 BYTE 0
    field484_0x2e1 BYTE 0
    field485_0x2e2 BYTE 0
    field486_0x2e3 BYTE 0
    field487_0x2e4 BYTE 0
    field488_0x2e5 BYTE 0
    field489_0x2e6 BYTE 0
    field490_0x2e7 BYTE 0
    field491_0x2e8 BYTE 0
    field492_0x2e9 BYTE 0
    field493_0x2ea BYTE 0
    field494_0x2eb BYTE 0
    field495_0x2ec BYTE 0
    field496_0x2ed BYTE 0
    field497_0x2ee BYTE 0
    field498_0x2ef BYTE 0
    field499_0x2f0 BYTE 0
    field500_0x2f1 BYTE 0
    field501_0x2f2 BYTE 0
    field502_0x2f3 BYTE 0
    field503_0x2f4 BYTE 0
    field504_0x2f5 BYTE 0
    field505_0x2f6 BYTE 0
    field506_0x2f7 BYTE 0
    field507_0x2f8 BYTE 0
    field508_0x2f9 BYTE 0
    field509_0x2fa BYTE 0
    field510_0x2fb BYTE 0
    field511_0x2fc BYTE 0
    field512_0x2fd BYTE 0
    field513_0x2fe BYTE 0
    field514_0x2ff BYTE 0
    field515_0x300 BYTE 0
    field516_0x301 BYTE 0
    field517_0x302 BYTE 0
    field518_0x303 BYTE 0
    field519_0x304 BYTE 0
    field520_0x305 BYTE 0
    field521_0x306 BYTE 0
    field522_0x307 BYTE 0
    field523_0x308 BYTE 0
    field524_0x309 BYTE 0
    field525_0x30a BYTE 0
    field526_0x30b BYTE 0
    field527_0x30c BYTE 0
    field528_0x30d BYTE 0
    field529_0x30e BYTE 0
    field530_0x30f BYTE 0
    field531_0x310 BYTE 0
    field532_0x311 BYTE 0
    field533_0x312 BYTE 0
    field534_0x313 BYTE 0
    field535_0x314 BYTE 0
    field536_0x315 BYTE 0
    field537_0x316 BYTE 0
    field538_0x317 BYTE 0
    field539_0x318 BYTE 0
    field540_0x319 BYTE 0
    field541_0x31a BYTE 0
    field542_0x31b BYTE 0
    field543_0x31c BYTE 0
    field544_0x31d BYTE 0
    field545_0x31e BYTE 0
    field546_0x31f BYTE 0
    field547_0x320 BYTE 0
    field548_0x321 BYTE 0
    field549_0x322 BYTE 0
    field550_0x323 BYTE 0
    field551_0x324 BYTE 0
    field552_0x325 BYTE 0
    field553_0x326 BYTE 0
    field554_0x327 BYTE 0
    field555_0x328 BYTE 0
    field556_0x329 BYTE 0
    field557_0x32a BYTE 0
    field558_0x32b BYTE 0
    field559_0x32c BYTE 0
    field560_0x32d BYTE 0
    field561_0x32e BYTE 0
    field562_0x32f BYTE 0
    field563_0x330 BYTE 0
    field564_0x331 BYTE 0
    field565_0x332 BYTE 0
    field566_0x333 BYTE 0
    field567_0x334 BYTE 0
    field568_0x335 BYTE 0
    field569_0x336 BYTE 0
    field570_0x337 BYTE 0
    field571_0x338 BYTE 0
    field572_0x339 BYTE 0
    field573_0x33a BYTE 0
    field574_0x33b BYTE 0
    field575_0x33c BYTE 0
    field576_0x33d BYTE 0
    field577_0x33e BYTE 0
    field578_0x33f BYTE 0
    field579_0x340 BYTE 0
    field580_0x341 BYTE 0
    field581_0x342 BYTE 0
    field582_0x343 BYTE 0
    field583_0x344 BYTE 0
    field584_0x345 BYTE 0
    field585_0x346 BYTE 0
    field586_0x347 BYTE 0
    field587_0x348 BYTE 0
    field588_0x349 BYTE 0
    field589_0x34a BYTE 0
    field590_0x34b BYTE 0
    field591_0x34c BYTE 0
    field592_0x34d BYTE 0
    field593_0x34e BYTE 0
    field594_0x34f BYTE 0
    field595_0x350 BYTE 0
    field596_0x351 BYTE 0
    field597_0x352 BYTE 0
    field598_0x353 BYTE 0
    field599_0x354 BYTE 0
    field600_0x355 BYTE 0
    field601_0x356 BYTE 0
    field602_0x357 BYTE 0
    field603_0x358 BYTE 0
    field604_0x359 BYTE 0
    field605_0x35a BYTE 0
    field606_0x35b BYTE 0
    field607_0x35c BYTE 0
    field608_0x35d BYTE 0
    field609_0x35e BYTE 0
    field610_0x35f BYTE 0
    field611_0x360 BYTE 0
    field612_0x361 BYTE 0
    field613_0x362 BYTE 0
    field614_0x363 BYTE 0
    field615_0x364 BYTE 0
    field616_0x365 BYTE 0
    field617_0x366 BYTE 0
    field618_0x367 BYTE 0
    field619_0x368 BYTE 0
    field620_0x369 BYTE 0
    field621_0x36a BYTE 0
    field622_0x36b BYTE 0
    field623_0x36c BYTE 0
    field624_0x36d BYTE 0
    field625_0x36e BYTE 0
    field626_0x36f BYTE 0
    field627_0x370 BYTE 0
    field628_0x371 BYTE 0
    field629_0x372 BYTE 0
    field630_0x373 BYTE 0
    field631_0x374 BYTE 0
    field632_0x375 BYTE 0
    field633_0x376 BYTE 0
    field634_0x377 BYTE 0
    field635_0x378 BYTE 0
    field636_0x379 BYTE 0
    field637_0x37a BYTE 0
    field638_0x37b BYTE 0
    field639_0x37c BYTE 0
    field640_0x37d BYTE 0
    field641_0x37e BYTE 0
    field642_0x37f BYTE 0
    field643_0x380 BYTE 0
    field644_0x381 BYTE 0
    field645_0x382 BYTE 0
    field646_0x383 BYTE 0
    field647_0x384 BYTE 0
    field648_0x385 BYTE 0
    field649_0x386 BYTE 0
    field650_0x387 BYTE 0
    field651_0x388 BYTE 0
    field652_0x389 BYTE 0
    field653_0x38a BYTE 0
    field654_0x38b BYTE 0
    field655_0x38c BYTE 0
    field656_0x38d BYTE 0
    field657_0x38e BYTE 0
    field658_0x38f BYTE 0
    field659_0x390 BYTE 0
    field660_0x391 BYTE 0
    field661_0x392 BYTE 0
    field662_0x393 BYTE 0
    field663_0x394 BYTE 0
    field664_0x395 BYTE 0
    field665_0x396 BYTE 0
    field666_0x397 BYTE 0
    field667_0x398 BYTE 0
    field668_0x399 BYTE 0
    field669_0x39a BYTE 0
    field670_0x39b BYTE 0
    field671_0x39c BYTE 0
    field672_0x39d BYTE 0
    field673_0x39e BYTE 0
    field674_0x39f BYTE 0
    field675_0x3a0 BYTE 0
    field676_0x3a1 BYTE 0
    field677_0x3a2 BYTE 0
    field678_0x3a3 BYTE 0
    field679_0x3a4 BYTE 0
    field680_0x3a5 BYTE 0
    field681_0x3a6 BYTE 0
    field682_0x3a7 BYTE 0
    field683_0x3a8 BYTE 0
    field684_0x3a9 BYTE 0
    field685_0x3aa BYTE 0
    field686_0x3ab BYTE 0
    field687_0x3ac BYTE 0
    field688_0x3ad BYTE 0
    field689_0x3ae BYTE 0
    field690_0x3af BYTE 0
    field691_0x3b0 BYTE 0
    field692_0x3b1 BYTE 0
    field693_0x3b2 BYTE 0
    field694_0x3b3 BYTE 0
    field695_0x3b4 BYTE 0
    field696_0x3b5 BYTE 0
    field697_0x3b6 BYTE 0
    field698_0x3b7 BYTE 0
    field699_0x3b8 BYTE 0
    field700_0x3b9 BYTE 0
    field701_0x3ba BYTE 0
    field702_0x3bb BYTE 0
    field703_0x3bc BYTE 0
    field704_0x3bd BYTE 0
    field705_0x3be BYTE 0
    field706_0x3bf BYTE 0
    field707_0x3c0 BYTE 0
    field708_0x3c1 BYTE 0
    field709_0x3c2 BYTE 0
    field710_0x3c3 BYTE 0
    field711_0x3c4 BYTE 0
    field712_0x3c5 BYTE 0
    field713_0x3c6 BYTE 0
    field714_0x3c7 BYTE 0
    field715_0x3c8 BYTE 0
    field716_0x3c9 BYTE 0
    field717_0x3ca BYTE 0
    field718_0x3cb BYTE 0
    field719_0x3cc BYTE 0
    field720_0x3cd BYTE 0
    field721_0x3ce BYTE 0
    field722_0x3cf BYTE 0
    field723_0x3d0 BYTE 0
    field724_0x3d1 BYTE 0
    field725_0x3d2 BYTE 0
    field726_0x3d3 BYTE 0
    field727_0x3d4 BYTE 0
    field728_0x3d5 BYTE 0
    field729_0x3d6 BYTE 0
    field730_0x3d7 BYTE 0
    field731_0x3d8 BYTE 0
    field732_0x3d9 BYTE 0
    field733_0x3da BYTE 0
    field734_0x3db BYTE 0
    field735_0x3dc BYTE 0
    field736_0x3dd BYTE 0
    field737_0x3de BYTE 0
    field738_0x3df BYTE 0
    field739_0x3e0 BYTE 0
    field740_0x3e1 BYTE 0
    field741_0x3e2 BYTE 0
    field742_0x3e3 BYTE 0
    field743_0x3e4 BYTE 0
    field744_0x3e5 BYTE 0
    field745_0x3e6 BYTE 0
    field746_0x3e7 BYTE 0
    field747_0x3e8 BYTE 0
    field748_0x3e9 BYTE 0
    field749_0x3ea BYTE 0
    field750_0x3eb BYTE 0
    field751_0x3ec BYTE 0
    field752_0x3ed BYTE 0
    field753_0x3ee BYTE 0
    field754_0x3ef BYTE 0
    field755_0x3f0 BYTE 0
    field756_0x3f1 BYTE 0
    field757_0x3f2 BYTE 0
    field758_0x3f3 BYTE 0
    field759_0x3f4 BYTE 0
    field760_0x3f5 BYTE 0
    field761_0x3f6 BYTE 0
    field762_0x3f7 BYTE 0
    field763_0x3f8 BYTE 0
    field764_0x3f9 BYTE 0
    field765_0x3fa BYTE 0
    field766_0x3fb BYTE 0
    field767_0x3fc BYTE 0
    field768_0x3fd BYTE 0
    field769_0x3fe BYTE 0
    field770_0x3ff BYTE 0
    field771_0x400 BYTE 0
    field772_0x401 BYTE 0
    field773_0x402 BYTE 0
    field774_0x403 BYTE 0
    field775_0x404 BYTE 0
    field776_0x405 BYTE 0
    field777_0x406 BYTE 0
    field778_0x407 BYTE 0
    field779_0x408 BYTE 0
    field780_0x409 BYTE 0
    field781_0x40a BYTE 0
    field782_0x40b BYTE 0
    field783_0x40c BYTE 0
    field784_0x40d BYTE 0
    field785_0x40e BYTE 0
    field786_0x40f BYTE 0
    field787_0x410 BYTE 0
    field788_0x411 BYTE 0
    field789_0x412 BYTE 0
    field790_0x413 BYTE 0
    field791_0x414 BYTE 0
    field792_0x415 BYTE 0
    field793_0x416 BYTE 0
    field794_0x417 BYTE 0
    field795_0x418 BYTE 0
    field796_0x419 BYTE 0
    field797_0x41a BYTE 0
    field798_0x41b BYTE 0
    field799_0x41c BYTE 0
    field800_0x41d BYTE 0
    field801_0x41e BYTE 0
    field802_0x41f BYTE 0
    field803_0x420 BYTE 0
    field804_0x421 BYTE 0
    field805_0x422 BYTE 0
    field806_0x423 BYTE 0
    field807_0x424 BYTE 0
    field808_0x425 BYTE 0
    field809_0x426 BYTE 0
    field810_0x427 BYTE 0
    field811_0x428 BYTE 0
    field812_0x429 BYTE 0
    field813_0x42a BYTE 0
    field814_0x42b BYTE 0
    field815_0x42c BYTE 0
    field816_0x42d BYTE 0
    field817_0x42e BYTE 0
    field818_0x42f BYTE 0
    field819_0x430 BYTE 0
    field820_0x431 BYTE 0
    field821_0x432 BYTE 0
    field822_0x433 BYTE 0
    field823_0x434 BYTE 0
    field824_0x435 BYTE 0
    field825_0x436 BYTE 0
    field826_0x437 BYTE 0
    field827_0x438 BYTE 0
    field828_0x439 BYTE 0
    field829_0x43a BYTE 0
    field830_0x43b BYTE 0
    field831_0x43c BYTE 0
    field832_0x43d BYTE 0
    field833_0x43e BYTE 0
    field834_0x43f BYTE 0
    field835_0x440 BYTE 0
    field836_0x441 BYTE 0
    field837_0x442 BYTE 0
    field838_0x443 BYTE 0
    field839_0x444 BYTE 0
    field840_0x445 BYTE 0
    field841_0x446 BYTE 0
    field842_0x447 BYTE 0
    field843_0x448 BYTE 0
    field844_0x449 BYTE 0
    field845_0x44a BYTE 0
    field846_0x44b BYTE 0
    field847_0x44c BYTE 0
    field848_0x44d BYTE 0
    field849_0x44e BYTE 0
    field850_0x44f BYTE 0
    field851_0x450 BYTE 0
    field852_0x451 BYTE 0
    field853_0x452 BYTE 0
    field854_0x453 BYTE 0
    field855_0x454 BYTE 0
    field856_0x455 BYTE 0
    field857_0x456 BYTE 0
    field858_0x457 BYTE 0
    field859_0x458 BYTE 0
    field860_0x459 BYTE 0
    field861_0x45a BYTE 0
    field862_0x45b BYTE 0
    field863_0x45c BYTE 0
    field864_0x45d BYTE 0
    field865_0x45e BYTE 0
    field866_0x45f BYTE 0
    field867_0x460 BYTE 0
    field868_0x461 BYTE 0
    field869_0x462 BYTE 0
    field870_0x463 BYTE 0
    field871_0x464 BYTE 0
    field872_0x465 BYTE 0
    field873_0x466 BYTE 0
    field874_0x467 BYTE 0
    field875_0x468 BYTE 0
    field876_0x469 BYTE 0
    field877_0x46a BYTE 0
    field878_0x46b BYTE 0
    field879_0x46c BYTE 0
    field880_0x46d BYTE 0
    field881_0x46e BYTE 0
    field882_0x46f BYTE 0
    field883_0x470 BYTE 0
    field884_0x471 BYTE 0
    field885_0x472 BYTE 0
    field886_0x473 BYTE 0
    field887_0x474 BYTE 0
    field888_0x475 BYTE 0
    field889_0x476 BYTE 0
    field890_0x477 BYTE 0
    field891_0x478 BYTE 0
    field892_0x479 BYTE 0
    field893_0x47a BYTE 0
    field894_0x47b BYTE 0
    field895_0x47c BYTE 0
    field896_0x47d BYTE 0
    field897_0x47e BYTE 0
    field898_0x47f BYTE 0
    field899_0x480 BYTE 0
    field900_0x481 BYTE 0
    field901_0x482 BYTE 0
    field902_0x483 BYTE 0
    field903_0x484 BYTE 0
    field904_0x485 BYTE 0
    field905_0x486 BYTE 0
    field906_0x487 BYTE 0
    field907_0x488 BYTE 0
    field908_0x489 BYTE 0
    field909_0x48a BYTE 0
    field910_0x48b BYTE 0
    field911_0x48c BYTE 0
    field912_0x48d BYTE 0
    field913_0x48e BYTE 0
    field914_0x48f BYTE 0
    field915_0x490 BYTE 0
    field916_0x491 BYTE 0
    field917_0x492 BYTE 0
    field918_0x493 BYTE 0
    field919_0x494 BYTE 0
    field920_0x495 BYTE 0
    field921_0x496 BYTE 0
    field922_0x497 BYTE 0
    field923_0x498 BYTE 0
    field924_0x499 BYTE 0
    field925_0x49a BYTE 0
    field926_0x49b BYTE 0
    field927_0x49c BYTE 0
    field928_0x49d BYTE 0
    field929_0x49e BYTE 0
    field930_0x49f BYTE 0
    field931_0x4a0 BYTE 0
    field932_0x4a1 BYTE 0
    field933_0x4a2 BYTE 0
    field934_0x4a3 BYTE 0
    field935_0x4a4 BYTE 0
    field936_0x4a5 BYTE 0
    field937_0x4a6 BYTE 0
    field938_0x4a7 BYTE 0
    field939_0x4a8 BYTE 0
    field940_0x4a9 BYTE 0
    field941_0x4aa BYTE 0
    field942_0x4ab BYTE 0
    field943_0x4ac BYTE 0
    field944_0x4ad BYTE 0
    field945_0x4ae BYTE 0
    field946_0x4af BYTE 0
    field947_0x4b0 BYTE 0
    field948_0x4b1 BYTE 0
    field949_0x4b2 BYTE 0
    field950_0x4b3 BYTE 0
    field951_0x4b4 BYTE 0
    field952_0x4b5 BYTE 0
    field953_0x4b6 BYTE 0
    field954_0x4b7 BYTE 0
    field955_0x4b8 BYTE 0
    field956_0x4b9 BYTE 0
    field957_0x4ba BYTE 0
    field958_0x4bb BYTE 0
    field959_0x4bc BYTE 0
    field960_0x4bd BYTE 0
    field961_0x4be BYTE 0
    field962_0x4bf BYTE 0
    field963_0x4c0 BYTE 0
    field964_0x4c1 BYTE 0
    field965_0x4c2 BYTE 0
    field966_0x4c3 BYTE 0
    field967_0x4c4 BYTE 0
    field968_0x4c5 BYTE 0
    field969_0x4c6 BYTE 0
    field970_0x4c7 BYTE 0
    field971_0x4c8 BYTE 0
    field972_0x4c9 BYTE 0
    field973_0x4ca BYTE 0
    field974_0x4cb BYTE 0
    field975_0x4cc BYTE 0
    field976_0x4cd BYTE 0
    field977_0x4ce BYTE 0
    field978_0x4cf BYTE 0
    field979_0x4d0 BYTE 0
    field980_0x4d1 BYTE 0
    field981_0x4d2 BYTE 0
    field982_0x4d3 BYTE 0
    field983_0x4d4 BYTE 0
    field984_0x4d5 BYTE 0
    field985_0x4d6 BYTE 0
    field986_0x4d7 BYTE 0
    field987_0x4d8 BYTE 0
    field988_0x4d9 BYTE 0
    field989_0x4da BYTE 0
    field990_0x4db BYTE 0
    field991_0x4dc BYTE 0
    field992_0x4dd BYTE 0
    field993_0x4de BYTE 0
    field994_0x4df BYTE 0
    field995_0x4e0 BYTE 0
    field996_0x4e1 BYTE 0
    field997_0x4e2 BYTE 0
    field998_0x4e3 BYTE 0
    field999_0x4e4 BYTE 0
    field1000_0x4e5 BYTE 0
    field1001_0x4e6 BYTE 0
    field1002_0x4e7 BYTE 0
    field1003_0x4e8 BYTE 0
    field1004_0x4e9 BYTE 0
    field1005_0x4ea BYTE 0
    field1006_0x4eb BYTE 0
    field1007_0x4ec BYTE 0
    field1008_0x4ed BYTE 0
    field1009_0x4ee BYTE 0
    field1010_0x4ef BYTE 0
    field1011_0x4f0 BYTE 0
    field1012_0x4f1 BYTE 0
    field1013_0x4f2 BYTE 0
    field1014_0x4f3 BYTE 0
    field1015_0x4f4 BYTE 0
    field1016_0x4f5 BYTE 0
    field1017_0x4f6 BYTE 0
    field1018_0x4f7 BYTE 0
    field1019_0x4f8 BYTE 0
    field1020_0x4f9 BYTE 0
    field1021_0x4fa BYTE 0
    field1022_0x4fb BYTE 0
    field1023_0x4fc BYTE 0
    field1024_0x4fd BYTE 0
    field1025_0x4fe BYTE 0
    field1026_0x4ff BYTE 0
    field1027_0x500 BYTE 0
    field1028_0x501 BYTE 0
    field1029_0x502 BYTE 0
    field1030_0x503 BYTE 0
    field1031_0x504 BYTE 0
    field1032_0x505 BYTE 0
    field1033_0x506 BYTE 0
    field1034_0x507 BYTE 0
    field1035_0x508 BYTE 0
    field1036_0x509 BYTE 0
    field1037_0x50a BYTE 0
    field1038_0x50b BYTE 0
    field1039_0x50c BYTE 0
    field1040_0x50d BYTE 0
    field1041_0x50e BYTE 0
    field1042_0x50f BYTE 0
    field1043_0x510 BYTE 0
    field1044_0x511 BYTE 0
    field1045_0x512 BYTE 0
    field1046_0x513 BYTE 0
    field1047_0x514 BYTE 0
    field1048_0x515 BYTE 0
    field1049_0x516 BYTE 0
    field1050_0x517 BYTE 0
    field1051_0x518 BYTE 0
    field1052_0x519 BYTE 0
    field1053_0x51a BYTE 0
    field1054_0x51b BYTE 0
    field1055_0x51c BYTE 0
    field1056_0x51d BYTE 0
    field1057_0x51e BYTE 0
    field1058_0x51f BYTE 0
    field1059_0x520 BYTE 0
    field1060_0x521 BYTE 0
    field1061_0x522 BYTE 0
    field1062_0x523 BYTE 0
    field1063_0x524 BYTE 0
    field1064_0x525 BYTE 0
    field1065_0x526 BYTE 0
    field1066_0x527 BYTE 0
    field1067_0x528 BYTE 0
    field1068_0x529 BYTE 0
    field1069_0x52a BYTE 0
    field1070_0x52b BYTE 0
    field1071_0x52c BYTE 0
    field1072_0x52d BYTE 0
    field1073_0x52e BYTE 0
    field1074_0x52f BYTE 0
    field1075_0x530 BYTE 0
    field1076_0x531 BYTE 0
    field1077_0x532 BYTE 0
    field1078_0x533 BYTE 0
    field1079_0x534 BYTE 0
    field1080_0x535 BYTE 0
    field1081_0x536 BYTE 0
    field1082_0x537 BYTE 0
    field1083_0x538 BYTE 0
    field1084_0x539 BYTE 0
    field1085_0x53a BYTE 0
    field1086_0x53b BYTE 0
    field1087_0x53c BYTE 0
    field1088_0x53d BYTE 0
    field1089_0x53e BYTE 0
    field1090_0x53f BYTE 0
    field1091_0x540 BYTE 0
    field1092_0x541 BYTE 0
    field1093_0x542 BYTE 0
    field1094_0x543 BYTE 0
    field1095_0x544 BYTE 0
    field1096_0x545 BYTE 0
    field1097_0x546 BYTE 0
    field1098_0x547 BYTE 0
    field1099_0x548 BYTE 0
    field1100_0x549 BYTE 0
    field1101_0x54a BYTE 0
    field1102_0x54b BYTE 0
    field1103_0x54c BYTE 0
    field1104_0x54d BYTE 0
    field1105_0x54e BYTE 0
    field1106_0x54f BYTE 0
    field1107_0x550 BYTE 0
    field1108_0x551 BYTE 0
    field1109_0x552 BYTE 0
    field1110_0x553 BYTE 0
    field1111_0x554 BYTE 0
    field1112_0x555 BYTE 0
    field1113_0x556 BYTE 0
    field1114_0x557 BYTE 0
    field1115_0x558 BYTE 0
    field1116_0x559 BYTE 0
    field1117_0x55a BYTE 0
    field1118_0x55b BYTE 0
    field1119_0x55c BYTE 0
    field1120_0x55d BYTE 0
    field1121_0x55e BYTE 0
    field1122_0x55f BYTE 0
    field1123_0x560 BYTE 0
    field1124_0x561 BYTE 0
    field1125_0x562 BYTE 0
    field1126_0x563 BYTE 0
    field1127_0x564 BYTE 0
    field1128_0x565 BYTE 0
    field1129_0x566 BYTE 0
    field1130_0x567 BYTE 0
    field1131_0x568 BYTE 0
    field1132_0x569 BYTE 0
    field1133_0x56a BYTE 0
    field1134_0x56b BYTE 0
    field1135_0x56c BYTE 0
    field1136_0x56d BYTE 0
    field1137_0x56e BYTE 0
    field1138_0x56f BYTE 0
    field1139_0x570 BYTE 0
    field1140_0x571 BYTE 0
    field1141_0x572 BYTE 0
    field1142_0x573 BYTE 0
    field1143_0x574 BYTE 0
    field1144_0x575 BYTE 0
    field1145_0x576 BYTE 0
    field1146_0x577 BYTE 0
    field1147_0x578 BYTE 0
    field1148_0x579 BYTE 0
    field1149_0x57a BYTE 0
    field1150_0x57b BYTE 0
    field1151_0x57c BYTE 0
    field1152_0x57d BYTE 0
    field1153_0x57e BYTE 0
    field1154_0x57f BYTE 0
    field1155_0x580 BYTE 0
    field1156_0x581 BYTE 0
    field1157_0x582 BYTE 0
    field1158_0x583 BYTE 0
    field1159_0x584 BYTE 0
    field1160_0x585 BYTE 0
    field1161_0x586 BYTE 0
    field1162_0x587 BYTE 0
    field1163_0x588 BYTE 0
    field1164_0x589 BYTE 0
    field1165_0x58a BYTE 0
    field1166_0x58b BYTE 0
    field1167_0x58c BYTE 0
    field1168_0x58d BYTE 0
    field1169_0x58e BYTE 0
    field1170_0x58f BYTE 0
    field1171_0x590 BYTE 0
    field1172_0x591 BYTE 0
    field1173_0x592 BYTE 0
    field1174_0x593 BYTE 0
    field1175_0x594 BYTE 0
    field1176_0x595 BYTE 0
    field1177_0x596 BYTE 0
    field1178_0x597 BYTE 0
    field1179_0x598 BYTE 0
    field1180_0x599 BYTE 0
    field1181_0x59a BYTE 0
    field1182_0x59b BYTE 0
    field1183_0x59c BYTE 0
    field1184_0x59d BYTE 0
    field1185_0x59e BYTE 0
    field1186_0x59f BYTE 0
    field1187_0x5a0 BYTE 0
    field1188_0x5a1 BYTE 0
    field1189_0x5a2 BYTE 0
    field1190_0x5a3 BYTE 0
    field1191_0x5a4 BYTE 0
    field1192_0x5a5 BYTE 0
    field1193_0x5a6 BYTE 0
    field1194_0x5a7 BYTE 0
    field1195_0x5a8 BYTE 0
    field1196_0x5a9 BYTE 0
    field1197_0x5aa BYTE 0
    field1198_0x5ab BYTE 0
    field1199_0x5ac BYTE 0
    field1200_0x5ad BYTE 0
    field1201_0x5ae BYTE 0
    field1202_0x5af BYTE 0
    field1203_0x5b0 BYTE 0
    field1204_0x5b1 BYTE 0
    field1205_0x5b2 BYTE 0
    field1206_0x5b3 BYTE 0
    field1207_0x5b4 BYTE 0
    field1208_0x5b5 BYTE 0
    field1209_0x5b6 BYTE 0
    field1210_0x5b7 BYTE 0
    field1211_0x5b8 BYTE 0
    field1212_0x5b9 BYTE 0
    field1213_0x5ba BYTE 0
    field1214_0x5bb BYTE 0
    field1215_0x5bc BYTE 0
    field1216_0x5bd BYTE 0
    field1217_0x5be BYTE 0
    field1218_0x5bf BYTE 0
    field1219_0x5c0 BYTE 0
    field1220_0x5c1 BYTE 0
    field1221_0x5c2 BYTE 0
    field1222_0x5c3 BYTE 0
    field1223_0x5c4 BYTE 0
    field1224_0x5c5 BYTE 0
    field1225_0x5c6 BYTE 0
    field1226_0x5c7 BYTE 0
    field1227_0x5c8 BYTE 0
    field1228_0x5c9 BYTE 0
    field1229_0x5ca BYTE 0
    field1230_0x5cb BYTE 0
    field1231_0x5cc BYTE 0
    field1232_0x5cd BYTE 0
    field1233_0x5ce BYTE 0
    field1234_0x5cf BYTE 0
    field1235_0x5d0 BYTE 0
    field1236_0x5d1 BYTE 0
    field1237_0x5d2 BYTE 0
    field1238_0x5d3 BYTE 0
    field1239_0x5d4 BYTE 0
    field1240_0x5d5 BYTE 0
    field1241_0x5d6 BYTE 0
    field1242_0x5d7 BYTE 0
    field1243_0x5d8 BYTE 0
    field1244_0x5d9 BYTE 0
    field1245_0x5da BYTE 0
    field1246_0x5db BYTE 0
    field1247_0x5dc BYTE 0
    field1248_0x5dd BYTE 0
    field1249_0x5de BYTE 0
    field1250_0x5df BYTE 0
    field1251_0x5e0 BYTE 0
    field1252_0x5e1 BYTE 0
    field1253_0x5e2 BYTE 0
    field1254_0x5e3 BYTE 0
    field1255_0x5e4 BYTE 0
    field1256_0x5e5 BYTE 0
    field1257_0x5e6 BYTE 0
    field1258_0x5e7 BYTE 0
    field1259_0x5e8 BYTE 0
    field1260_0x5e9 BYTE 0
    field1261_0x5ea BYTE 0
    field1262_0x5eb BYTE 0
    field1263_0x5ec BYTE 0
    field1264_0x5ed BYTE 0
    field1265_0x5ee BYTE 0
    field1266_0x5ef BYTE 0
    field1267_0x5f0 BYTE 0
    field1268_0x5f1 BYTE 0
    field1269_0x5f2 BYTE 0
    field1270_0x5f3 BYTE 0
    field1271_0x5f4 BYTE 0
    field1272_0x5f5 BYTE 0
    field1273_0x5f6 BYTE 0
    field1274_0x5f7 BYTE 0
    field1275_0x5f8 BYTE 0
    field1276_0x5f9 BYTE 0
    field1277_0x5fa BYTE 0
    field1278_0x5fb BYTE 0
    field1279_0x5fc BYTE 0
    field1280_0x5fd BYTE 0
    field1281_0x5fe BYTE 0
    field1282_0x5ff BYTE 0
    field1283_0x600 BYTE 0
    field1284_0x601 BYTE 0
    field1285_0x602 BYTE 0
    field1286_0x603 BYTE 0
    field1287_0x604 BYTE 0
    field1288_0x605 BYTE 0
    field1289_0x606 BYTE 0
    field1290_0x607 BYTE 0
    field1291_0x608 BYTE 0
    field1292_0x609 BYTE 0
    field1293_0x60a BYTE 0
    field1294_0x60b BYTE 0
    field1295_0x60c BYTE 0
    field1296_0x60d BYTE 0
    field1297_0x60e BYTE 0
    field1298_0x60f BYTE 0
    field1299_0x610 BYTE 0
    field1300_0x611 BYTE 0
    field1301_0x612 BYTE 0
    field1302_0x613 BYTE 0
    field1303_0x614 BYTE 0
    field1304_0x615 BYTE 0
    field1305_0x616 BYTE 0
    field1306_0x617 BYTE 0
    field1307_0x618 BYTE 0
    field1308_0x619 BYTE 0
    field1309_0x61a BYTE 0
    field1310_0x61b BYTE 0
    field1311_0x61c BYTE 0
    field1312_0x61d BYTE 0
    field1313_0x61e BYTE 0
    field1314_0x61f BYTE 0
    field1315_0x620 BYTE 0
    field1316_0x621 BYTE 0
    field1317_0x622 BYTE 0
    field1318_0x623 BYTE 0
    field1319_0x624 BYTE 0
    field1320_0x625 BYTE 0
    field1321_0x626 BYTE 0
    field1322_0x627 BYTE 0
    field1323_0x628 BYTE 0
    field1324_0x629 BYTE 0
    field1325_0x62a BYTE 0
    field1326_0x62b BYTE 0
    field1327_0x62c BYTE 0
    field1328_0x62d BYTE 0
    field1329_0x62e BYTE 0
    field1330_0x62f BYTE 0
    field1331_0x630 BYTE 0
    field1332_0x631 BYTE 0
    field1333_0x632 BYTE 0
    field1334_0x633 BYTE 0
    field1335_0x634 BYTE 0
    field1336_0x635 BYTE 0
    field1337_0x636 BYTE 0
    field1338_0x637 BYTE 0
    field1339_0x638 BYTE 0
    field1340_0x639 BYTE 0
    field1341_0x63a BYTE 0
    field1342_0x63b BYTE 0
    field1343_0x63c BYTE 0
    field1344_0x63d BYTE 0
    field1345_0x63e BYTE 0
    field1346_0x63f BYTE 0
    field1347_0x640 BYTE 0
    field1348_0x641 BYTE 0
    field1349_0x642 BYTE 0
    field1350_0x643 BYTE 0
    field1351_0x644 BYTE 0
    field1352_0x645 BYTE 0
    field1353_0x646 BYTE 0
    field1354_0x647 BYTE 0
    field1355_0x648 BYTE 0
    field1356_0x649 BYTE 0
    field1357_0x64a BYTE 0
    field1358_0x64b BYTE 0
    field1359_0x64c BYTE 0
    field1360_0x64d BYTE 0
    field1361_0x64e BYTE 0
    field1362_0x64f BYTE 0
    field1363_0x650 BYTE 0
    field1364_0x651 BYTE 0
    field1365_0x652 BYTE 0
    field1366_0x653 BYTE 0
    field1367_0x654 BYTE 0
    field1368_0x655 BYTE 0
    field1369_0x656 BYTE 0
    field1370_0x657 BYTE 0
    field1371_0x658 BYTE 0
    field1372_0x659 BYTE 0
    field1373_0x65a BYTE 0
    field1374_0x65b BYTE 0
    field1375_0x65c BYTE 0
    field1376_0x65d BYTE 0
    field1377_0x65e BYTE 0
    field1378_0x65f BYTE 0
UnkFamily6D ENDS
UnkFamily6E STRUCT
    parent UnkFamily6Abstract {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 BYTE 0
    field18_0xf1 BYTE 0
    field19_0xf2 BYTE 0
    field20_0xf3 BYTE 0
    field21_0xf4 BYTE 0
    field22_0xf5 BYTE 0
    field23_0xf6 BYTE 0
    field24_0xf7 BYTE 0
    field25_0xf8 BYTE 0
    field26_0xf9 BYTE 0
    field27_0xfa BYTE 0
    field28_0xfb BYTE 0
    field29_0xfc BYTE 0
    field30_0xfd BYTE 0
    field31_0xfe BYTE 0
    field32_0xff BYTE 0
    field33_0x100 BYTE 0
    field34_0x101 BYTE 0
    field35_0x102 BYTE 0
    field36_0x103 BYTE 0
    field37_0x104 BYTE 0
    field38_0x105 BYTE 0
    field39_0x106 BYTE 0
    field40_0x107 BYTE 0
    field41_0x108 BYTE 0
    field42_0x109 BYTE 0
    field43_0x10a BYTE 0
    field44_0x10b BYTE 0
    field45_0x10c BYTE 0
    field46_0x10d BYTE 0
    field47_0x10e BYTE 0
    field48_0x10f BYTE 0
    field49_0x110 BYTE 0
    field50_0x111 BYTE 0
    field51_0x112 BYTE 0
    field52_0x113 BYTE 0
    field53_0x114 BYTE 0
    field54_0x115 BYTE 0
    field55_0x116 BYTE 0
    field56_0x117 BYTE 0
    field57_0x118 BYTE 0
    field58_0x119 BYTE 0
    field59_0x11a BYTE 0
    field60_0x11b BYTE 0
    field61_0x11c BYTE 0
    field62_0x11d BYTE 0
    field63_0x11e BYTE 0
    field64_0x11f BYTE 0
UnkFamily6E ENDS
IteratorBAbstract STRUCT
    vtable DWORD 0; IteratorBBase_VTable *
IteratorBAbstract ENDS
IteratorB6Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB6Abstract ENDS
IteratorB6 STRUCT
    parent IteratorB6Abstract {}
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
IteratorB6 ENDS
UnkFamily8Abstract STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
    field7_0x10 DWORD 0; UnkFamily10Base *
UnkFamily8Abstract ENDS
UnkFamily8A STRUCT
    parent UnkFamily8Abstract {}
    field1_0x14 BYTE 32 dup (0)
    field2_0x34 BYTE 0
    field3_0x35 BYTE 0
    field4_0x36 BYTE 0
    field5_0x37 BYTE 0
    cnt DWORD 0
    field7_0x3c BYTE 0
    field8_0x3d BYTE 0
    field9_0x3e BYTE 0
    field10_0x3f BYTE 0
UnkFamily8A ENDS
UnkFamily8AA STRUCT
    parent UnkFamily8A {}
    field1_0x40 DWORD 0; char *
    field2_0x44 BYTE 0
    field3_0x45 BYTE 0
    field4_0x46 BYTE 0
    field5_0x47 BYTE 0
    array DWORD 0; int *
    cnt DWORD 0
    field8_0x50 BYTE 0
    field9_0x51 BYTE 0
    field10_0x52 BYTE 0
    field11_0x53 BYTE 0
UnkFamily8AA ENDS
UnkFamily8AAA STRUCT
    parent UnkFamily8AA {}
    field1_0x50 DWORD 0
UnkFamily8AAA ENDS
UnkFamily8AAB STRUCT
    parent UnkFamily8AA {}
UnkFamily8AAB ENDS
Action0x25C STRUCT
    field0_0x0 ActionAbstract {}
Action0x25C ENDS
IteratorC5Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC5Abstract ENDS
IteratorC5 STRUCT
    parent IteratorC5Abstract {}
    index1 WORD 0
    index2 WORD 0
    collection DWORD 0; UnkFamily28A *
IteratorC5 ENDS
UnkFamily10VM STRUCT
    parent UnkFamily10V {}
UnkFamily10VM ENDS
UnkFamily8B STRUCT
    parent UnkFamily8Abstract {}
UnkFamily8B ENDS
UnkFamily8BA STRUCT
    parent UnkFamily8B {}
UnkFamily8BA ENDS
UnkFamily10VB STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VB ENDS
UnkFamily10VC STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VC ENDS
UnkFamily10VD STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VD ENDS
UnkFamily10VE STRUCT
    parent UnkFamily10Base {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VE ENDS
UnkFamily10VF STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VF ENDS
UnkFamily10VG STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VG ENDS
UnkFamily10B STRUCT
    parent UnkFamily10Base {}
    gallery1 UnkFamily10VB {}
    gallery2 UnkFamily10VC {}
    gallery3 UnkFamily10VD {}
    gallery4 UnkFamily10VE {}
    gallery5 UnkFamily10VF {}
    gallery6 UnkFamily10VG {}
UnkFamily10B ENDS
UnkFamily8BB STRUCT
    parent UnkFamily8B {}
    field1_0x14 DWORD 0
UnkFamily8BB ENDS
UnkFamily10VI STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VI ENDS
UnkFamily10VH STRUCT
    parent UnkFamily10V {}
    field1_0x50 DWORD 0; UnkFamily8Abstract *
UnkFamily10VH ENDS
UnkFamily10I STRUCT
    parent UnkFamily10Base {}
    page1 UnkFamily10VI {}
    me DWORD 0; UnkFamily10I *
    page2 UnkFamily10VH {}
UnkFamily10I ENDS
UnkFamily8BD STRUCT
    parent UnkFamily8B {}
    field1_0x14 DWORD 0
    name TwinString {}
UnkFamily8BD ENDS
UnkFamily10L STRUCT
    parent UnkFamily10Base {}
UnkFamily10L ENDS
UnkFamily10VA STRUCT
    parent UnkFamily10V {}
UnkFamily10VA ENDS
UnkFamily10M STRUCT
    parent UnkFamily10Base {}
    field1_0x50 UnkFamily10Base {}
    field2_0xa0 BYTE 0
    field3_0xa1 BYTE 0
    field4_0xa2 BYTE 0
    field5_0xa3 BYTE 0
    field6_0xa4 UnkFamily10Base {}
    field7_0xf4 BYTE 0
    field8_0xf5 BYTE 0
    field9_0xf6 BYTE 0
    field10_0xf7 BYTE 0
    field11_0xf8 UnkFamily10VA {}
UnkFamily10M ENDS
UnkFamily10N STRUCT
    parent UnkFamily10Base {}
UnkFamily10N ENDS
UnkFamily10P STRUCT
    parent UnkFamily10Base {}
UnkFamily10P ENDS
UnkFamily10VL STRUCT
    parent UnkFamily10V {}
UnkFamily10VL ENDS
Action0x0BA STRUCT
    field0_0x0 ActionAbstract {}
Action0x0BA ENDS
PerceptWillHitLowWall STRUCT
    field0_0x0 PerceptAbstract {}
PerceptWillHitLowWall ENDS
WorldChunk STRUCT
    field0_0x0 DWORD 0; WorldChunkSub *
    flags DWORD 0
    field2_0x8 DWORD 0
    chunkName TwinString {}
    world DWORD 0; World *
    someState DWORD 0; SomeState *
    RM DWORD 0; LevelHolderRM *
    SM DWORD 0; LevelHolderSM *
    findMe DWORD 0; pointer
    next DWORD 0; WorldChunk *
    prev DWORD 0; WorldChunk *
WorldChunk ENDS
OlegModuleAB STRUCT
    parent OlegModuleA {}
    icons DWORD 0; UIElementImage *
OlegModuleAB ENDS
OlegModuleAI STRUCT
    parent OlegModuleA {}
    field1_0x88 BYTE 0
    field2_0x89 BYTE 0
    field3_0x8a BYTE 0
    field4_0x8b BYTE 0
    field5_0x8c BYTE 0
    field6_0x8d BYTE 0
    field7_0x8e BYTE 0
    field8_0x8f BYTE 0
OlegModuleAI ENDS
OlegModuleAIA STRUCT
    parent OlegModuleAI {}
    field1_0x90 BYTE 0
    field2_0x91 BYTE 0
    field3_0x92 BYTE 0
    field4_0x93 BYTE 0
OlegModuleAIA ENDS
OlegModuleB STRUCT
    parent OlegModuleAbstract {}
    array BYTE 80 dup (0)
OlegModuleB ENDS
ShaderProgramA STRUCT
    parent ShaderProgramAbstract {}
    field1_0x80 BYTE 0
    field2_0x81 BYTE 0
    field3_0x82 BYTE 0
    field4_0x83 BYTE 0
    field5_0x84 BYTE 0
    field6_0x85 BYTE 0
    field7_0x86 BYTE 0
    field8_0x87 BYTE 0
    field9_0x88 BYTE 0
    field10_0x89 BYTE 0
    field11_0x8a BYTE 0
    field12_0x8b BYTE 0
    field13_0x8c BYTE 0
    field14_0x8d BYTE 0
    field15_0x8e BYTE 0
    field16_0x8f BYTE 0
    field17_0x90 BYTE 0
    field18_0x91 BYTE 0
    field19_0x92 BYTE 0
    field20_0x93 BYTE 0
    field21_0x94 BYTE 0
    field22_0x95 BYTE 0
    field23_0x96 BYTE 0
    field24_0x97 BYTE 0
    field25_0x98 BYTE 0
    field26_0x99 BYTE 0
    field27_0x9a BYTE 0
    field28_0x9b BYTE 0
    field29_0x9c BYTE 0
    field30_0x9d BYTE 0
    field31_0x9e BYTE 0
    field32_0x9f BYTE 0
    field33_0xa0 BYTE 0
    field34_0xa1 BYTE 0
    field35_0xa2 BYTE 0
    field36_0xa3 BYTE 0
    field37_0xa4 BYTE 0
    field38_0xa5 BYTE 0
    field39_0xa6 BYTE 0
    field40_0xa7 BYTE 0
    field41_0xa8 BYTE 0
    field42_0xa9 BYTE 0
    field43_0xaa BYTE 0
    field44_0xab BYTE 0
    field45_0xac BYTE 0
    field46_0xad BYTE 0
    field47_0xae BYTE 0
    field48_0xaf BYTE 0
    field49_0xb0 BYTE 0
    field50_0xb1 BYTE 0
    field51_0xb2 BYTE 0
    field52_0xb3 BYTE 0
    field53_0xb4 BYTE 0
    field54_0xb5 BYTE 0
    field55_0xb6 BYTE 0
    field56_0xb7 BYTE 0
    field57_0xb8 BYTE 0
    field58_0xb9 BYTE 0
    field59_0xba BYTE 0
    field60_0xbb BYTE 0
    field61_0xbc BYTE 0
    field62_0xbd BYTE 0
    field63_0xbe BYTE 0
    field64_0xbf BYTE 0
    field65_0xc0 BYTE 0
    field66_0xc1 BYTE 0
    field67_0xc2 BYTE 0
    field68_0xc3 BYTE 0
    field69_0xc4 BYTE 0
    field70_0xc5 BYTE 0
    field71_0xc6 BYTE 0
    field72_0xc7 BYTE 0
    field73_0xc8 BYTE 0
    field74_0xc9 BYTE 0
    field75_0xca BYTE 0
    field76_0xcb BYTE 0
    field77_0xcc BYTE 0
    field78_0xcd BYTE 0
    field79_0xce BYTE 0
    field80_0xcf BYTE 0
    field81_0xd0 BYTE 0
    field82_0xd1 BYTE 0
    field83_0xd2 BYTE 0
    field84_0xd3 BYTE 0
    field85_0xd4 BYTE 0
    field86_0xd5 BYTE 0
    field87_0xd6 BYTE 0
    field88_0xd7 BYTE 0
    field89_0xd8 BYTE 0
    field90_0xd9 BYTE 0
    field91_0xda BYTE 0
    field92_0xdb BYTE 0
    field93_0xdc BYTE 0
    field94_0xdd BYTE 0
    field95_0xde BYTE 0
    field96_0xdf BYTE 0
    field97_0xe0 BYTE 0
    field98_0xe1 BYTE 0
    field99_0xe2 BYTE 0
    field100_0xe3 BYTE 0
    field101_0xe4 BYTE 0
    field102_0xe5 BYTE 0
    field103_0xe6 BYTE 0
    field104_0xe7 BYTE 0
    field105_0xe8 BYTE 0
    field106_0xe9 BYTE 0
    field107_0xea BYTE 0
    field108_0xeb BYTE 0
    field109_0xec BYTE 0
    field110_0xed BYTE 0
    field111_0xee BYTE 0
    field112_0xef BYTE 0
    field113_0xf0 BYTE 0
    field114_0xf1 BYTE 0
    field115_0xf2 BYTE 0
    field116_0xf3 BYTE 0
    field117_0xf4 BYTE 0
    field118_0xf5 BYTE 0
    field119_0xf6 BYTE 0
    field120_0xf7 BYTE 0
    field121_0xf8 BYTE 0
    field122_0xf9 BYTE 0
    field123_0xfa BYTE 0
    field124_0xfb BYTE 0
    field125_0xfc BYTE 0
    field126_0xfd BYTE 0
    field127_0xfe BYTE 0
    field128_0xff BYTE 0
    field129_0x100 BYTE 0
    field130_0x101 BYTE 0
    field131_0x102 BYTE 0
    field132_0x103 BYTE 0
    field133_0x104 BYTE 0
    field134_0x105 BYTE 0
    field135_0x106 BYTE 0
    field136_0x107 BYTE 0
    field137_0x108 BYTE 0
    field138_0x109 BYTE 0
    field139_0x10a BYTE 0
    field140_0x10b BYTE 0
    field141_0x10c BYTE 0
    field142_0x10d BYTE 0
    field143_0x10e BYTE 0
    field144_0x10f BYTE 0
    field145_0x110 BYTE 0
    field146_0x111 BYTE 0
    field147_0x112 BYTE 0
    field148_0x113 BYTE 0
    field149_0x114 BYTE 0
    field150_0x115 BYTE 0
    field151_0x116 BYTE 0
    field152_0x117 BYTE 0
    field153_0x118 BYTE 0
    field154_0x119 BYTE 0
    field155_0x11a BYTE 0
    field156_0x11b BYTE 0
    field157_0x11c BYTE 0
    field158_0x11d BYTE 0
    field159_0x11e BYTE 0
    field160_0x11f BYTE 0
    field161_0x120 BYTE 0
    field162_0x121 BYTE 0
    field163_0x122 BYTE 0
    field164_0x123 BYTE 0
    field165_0x124 BYTE 0
    field166_0x125 BYTE 0
    field167_0x126 BYTE 0
    field168_0x127 BYTE 0
    field169_0x128 BYTE 0
    field170_0x129 BYTE 0
    field171_0x12a BYTE 0
    field172_0x12b BYTE 0
    field173_0x12c BYTE 0
    field174_0x12d BYTE 0
    field175_0x12e BYTE 0
    field176_0x12f BYTE 0
    field177_0x130 BYTE 0
    field178_0x131 BYTE 0
    field179_0x132 BYTE 0
    field180_0x133 BYTE 0
    field181_0x134 BYTE 0
    field182_0x135 BYTE 0
    field183_0x136 BYTE 0
    field184_0x137 BYTE 0
    field185_0x138 BYTE 0
    field186_0x139 BYTE 0
    field187_0x13a BYTE 0
    field188_0x13b BYTE 0
    field189_0x13c BYTE 0
    field190_0x13d BYTE 0
    field191_0x13e BYTE 0
    field192_0x13f BYTE 0
    field193_0x140 BYTE 0
    field194_0x141 BYTE 0
    field195_0x142 BYTE 0
    field196_0x143 BYTE 0
    field197_0x144 BYTE 0
    field198_0x145 BYTE 0
    field199_0x146 BYTE 0
    field200_0x147 BYTE 0
    field201_0x148 BYTE 0
    field202_0x149 BYTE 0
    field203_0x14a BYTE 0
    field204_0x14b BYTE 0
    field205_0x14c BYTE 0
    field206_0x14d BYTE 0
    field207_0x14e BYTE 0
    field208_0x14f BYTE 0
    field209_0x150 BYTE 0
    field210_0x151 BYTE 0
    field211_0x152 BYTE 0
    field212_0x153 BYTE 0
    field213_0x154 BYTE 0
    field214_0x155 BYTE 0
    field215_0x156 BYTE 0
    field216_0x157 BYTE 0
    field217_0x158 BYTE 0
    field218_0x159 BYTE 0
    field219_0x15a BYTE 0
    field220_0x15b BYTE 0
    field221_0x15c BYTE 0
    field222_0x15d BYTE 0
    field223_0x15e BYTE 0
    field224_0x15f BYTE 0
    field225_0x160 BYTE 0
    field226_0x161 BYTE 0
    field227_0x162 BYTE 0
    field228_0x163 BYTE 0
    field229_0x164 BYTE 0
    field230_0x165 BYTE 0
    field231_0x166 BYTE 0
    field232_0x167 BYTE 0
    field233_0x168 BYTE 0
    field234_0x169 BYTE 0
    field235_0x16a BYTE 0
    field236_0x16b BYTE 0
    field237_0x16c BYTE 0
    field238_0x16d BYTE 0
    field239_0x16e BYTE 0
    field240_0x16f BYTE 0
    field241_0x170 BYTE 0
    field242_0x171 BYTE 0
    field243_0x172 BYTE 0
    field244_0x173 BYTE 0
    field245_0x174 BYTE 0
    field246_0x175 BYTE 0
    field247_0x176 BYTE 0
    field248_0x177 BYTE 0
    field249_0x178 BYTE 0
    field250_0x179 BYTE 0
    field251_0x17a BYTE 0
    field252_0x17b BYTE 0
    field253_0x17c BYTE 0
    field254_0x17d BYTE 0
    field255_0x17e BYTE 0
    field256_0x17f BYTE 0
    field257_0x180 BYTE 0
    field258_0x181 BYTE 0
    field259_0x182 BYTE 0
    field260_0x183 BYTE 0
    field261_0x184 BYTE 0
    field262_0x185 BYTE 0
    field263_0x186 BYTE 0
    field264_0x187 BYTE 0
    field265_0x188 BYTE 0
    field266_0x189 BYTE 0
    field267_0x18a BYTE 0
    field268_0x18b BYTE 0
    field269_0x18c BYTE 0
    field270_0x18d BYTE 0
    field271_0x18e BYTE 0
    field272_0x18f BYTE 0
    field273_0x190 BYTE 0
    field274_0x191 BYTE 0
    field275_0x192 BYTE 0
    field276_0x193 BYTE 0
    field277_0x194 BYTE 0
    field278_0x195 BYTE 0
    field279_0x196 BYTE 0
    field280_0x197 BYTE 0
    field281_0x198 BYTE 0
    field282_0x199 BYTE 0
    field283_0x19a BYTE 0
    field284_0x19b BYTE 0
    field285_0x19c BYTE 0
    field286_0x19d BYTE 0
    field287_0x19e BYTE 0
    field288_0x19f BYTE 0
    field289_0x1a0 BYTE 0
    field290_0x1a1 BYTE 0
    field291_0x1a2 BYTE 0
    field292_0x1a3 BYTE 0
    field293_0x1a4 BYTE 0
    field294_0x1a5 BYTE 0
    field295_0x1a6 BYTE 0
    field296_0x1a7 BYTE 0
    field297_0x1a8 BYTE 0
    field298_0x1a9 BYTE 0
    field299_0x1aa BYTE 0
    field300_0x1ab BYTE 0
    field301_0x1ac BYTE 0
    field302_0x1ad BYTE 0
    field303_0x1ae BYTE 0
    field304_0x1af BYTE 0
    field305_0x1b0 BYTE 0
    field306_0x1b1 BYTE 0
    field307_0x1b2 BYTE 0
    field308_0x1b3 BYTE 0
    field309_0x1b4 BYTE 0
    field310_0x1b5 BYTE 0
    field311_0x1b6 BYTE 0
    field312_0x1b7 BYTE 0
    field313_0x1b8 BYTE 0
    field314_0x1b9 BYTE 0
    field315_0x1ba BYTE 0
    field316_0x1bb BYTE 0
    field317_0x1bc BYTE 0
    field318_0x1bd BYTE 0
    field319_0x1be BYTE 0
    field320_0x1bf BYTE 0
    field321_0x1c0 BYTE 0
    field322_0x1c1 BYTE 0
    field323_0x1c2 BYTE 0
    field324_0x1c3 BYTE 0
    field325_0x1c4 BYTE 0
    field326_0x1c5 BYTE 0
    field327_0x1c6 BYTE 0
    field328_0x1c7 BYTE 0
    field329_0x1c8 BYTE 0
    field330_0x1c9 BYTE 0
    field331_0x1ca BYTE 0
    field332_0x1cb BYTE 0
    field333_0x1cc BYTE 0
    field334_0x1cd BYTE 0
    field335_0x1ce BYTE 0
    field336_0x1cf BYTE 0
    field337_0x1d0 BYTE 0
    field338_0x1d1 BYTE 0
    field339_0x1d2 BYTE 0
    field340_0x1d3 BYTE 0
    field341_0x1d4 BYTE 0
    field342_0x1d5 BYTE 0
    field343_0x1d6 BYTE 0
    field344_0x1d7 BYTE 0
    field345_0x1d8 BYTE 0
    field346_0x1d9 BYTE 0
    field347_0x1da BYTE 0
    field348_0x1db BYTE 0
    field349_0x1dc BYTE 0
    field350_0x1dd BYTE 0
    field351_0x1de BYTE 0
    field352_0x1df BYTE 0
    field353_0x1e0 BYTE 0
    field354_0x1e1 BYTE 0
    field355_0x1e2 BYTE 0
    field356_0x1e3 BYTE 0
    field357_0x1e4 BYTE 0
    field358_0x1e5 BYTE 0
    field359_0x1e6 BYTE 0
    field360_0x1e7 BYTE 0
    field361_0x1e8 BYTE 0
    field362_0x1e9 BYTE 0
    field363_0x1ea BYTE 0
    field364_0x1eb BYTE 0
    field365_0x1ec BYTE 0
    field366_0x1ed BYTE 0
    field367_0x1ee BYTE 0
    field368_0x1ef BYTE 0
    field369_0x1f0 BYTE 0
    field370_0x1f1 BYTE 0
    field371_0x1f2 BYTE 0
    field372_0x1f3 BYTE 0
    field373_0x1f4 BYTE 0
    field374_0x1f5 BYTE 0
    field375_0x1f6 BYTE 0
    field376_0x1f7 BYTE 0
    field377_0x1f8 BYTE 0
    field378_0x1f9 BYTE 0
    field379_0x1fa BYTE 0
    field380_0x1fb BYTE 0
    field381_0x1fc BYTE 0
    field382_0x1fd BYTE 0
    field383_0x1fe BYTE 0
    field384_0x1ff BYTE 0
    field385_0x200 BYTE 0
    field386_0x201 BYTE 0
    field387_0x202 BYTE 0
    field388_0x203 BYTE 0
    field389_0x204 BYTE 0
    field390_0x205 BYTE 0
    field391_0x206 BYTE 0
    field392_0x207 BYTE 0
    field393_0x208 BYTE 0
    field394_0x209 BYTE 0
    field395_0x20a BYTE 0
    field396_0x20b BYTE 0
    field397_0x20c BYTE 0
    field398_0x20d BYTE 0
    field399_0x20e BYTE 0
    field400_0x20f BYTE 0
    field401_0x210 BYTE 0
    field402_0x211 BYTE 0
    field403_0x212 BYTE 0
    field404_0x213 BYTE 0
    field405_0x214 BYTE 0
    field406_0x215 BYTE 0
    field407_0x216 BYTE 0
    field408_0x217 BYTE 0
    field409_0x218 BYTE 0
    field410_0x219 BYTE 0
    field411_0x21a BYTE 0
    field412_0x21b BYTE 0
    field413_0x21c BYTE 0
    field414_0x21d BYTE 0
    field415_0x21e BYTE 0
    field416_0x21f BYTE 0
    field417_0x220 BYTE 0
    field418_0x221 BYTE 0
    field419_0x222 BYTE 0
    field420_0x223 BYTE 0
    field421_0x224 BYTE 0
    field422_0x225 BYTE 0
    field423_0x226 BYTE 0
    field424_0x227 BYTE 0
    field425_0x228 BYTE 0
    field426_0x229 BYTE 0
    field427_0x22a BYTE 0
    field428_0x22b BYTE 0
    field429_0x22c BYTE 0
    field430_0x22d BYTE 0
    field431_0x22e BYTE 0
    field432_0x22f BYTE 0
    field433_0x230 BYTE 0
    field434_0x231 BYTE 0
    field435_0x232 BYTE 0
    field436_0x233 BYTE 0
    field437_0x234 BYTE 0
    field438_0x235 BYTE 0
    field439_0x236 BYTE 0
    field440_0x237 BYTE 0
    field441_0x238 BYTE 0
    field442_0x239 BYTE 0
    field443_0x23a BYTE 0
    field444_0x23b BYTE 0
    field445_0x23c BYTE 0
    field446_0x23d BYTE 0
    field447_0x23e BYTE 0
    field448_0x23f BYTE 0
    field449_0x240 BYTE 0
    field450_0x241 BYTE 0
    field451_0x242 BYTE 0
    field452_0x243 BYTE 0
    field453_0x244 BYTE 0
    field454_0x245 BYTE 0
    field455_0x246 BYTE 0
    field456_0x247 BYTE 0
    field457_0x248 BYTE 0
    field458_0x249 BYTE 0
    field459_0x24a BYTE 0
    field460_0x24b BYTE 0
    field461_0x24c BYTE 0
    field462_0x24d BYTE 0
    field463_0x24e BYTE 0
    field464_0x24f BYTE 0
    field465_0x250 BYTE 0
    field466_0x251 BYTE 0
    field467_0x252 BYTE 0
    field468_0x253 BYTE 0
    field469_0x254 BYTE 0
    field470_0x255 BYTE 0
    field471_0x256 BYTE 0
    field472_0x257 BYTE 0
    field473_0x258 BYTE 0
    field474_0x259 BYTE 0
    field475_0x25a BYTE 0
    field476_0x25b BYTE 0
    field477_0x25c BYTE 0
    field478_0x25d BYTE 0
    field479_0x25e BYTE 0
    field480_0x25f BYTE 0
    field481_0x260 BYTE 0
    field482_0x261 BYTE 0
    field483_0x262 BYTE 0
    field484_0x263 BYTE 0
    field485_0x264 BYTE 0
    field486_0x265 BYTE 0
    field487_0x266 BYTE 0
    field488_0x267 BYTE 0
    field489_0x268 BYTE 0
    field490_0x269 BYTE 0
    field491_0x26a BYTE 0
    field492_0x26b BYTE 0
    field493_0x26c BYTE 0
    field494_0x26d BYTE 0
    field495_0x26e BYTE 0
    field496_0x26f BYTE 0
    field497_0x270 BYTE 0
    field498_0x271 BYTE 0
    field499_0x272 BYTE 0
    field500_0x273 BYTE 0
    field501_0x274 BYTE 0
    field502_0x275 BYTE 0
    field503_0x276 BYTE 0
    field504_0x277 BYTE 0
    field505_0x278 BYTE 0
    field506_0x279 BYTE 0
    field507_0x27a BYTE 0
    field508_0x27b BYTE 0
    field509_0x27c BYTE 0
    field510_0x27d BYTE 0
    field511_0x27e BYTE 0
    field512_0x27f BYTE 0
    field513_0x280 BYTE 0
    field514_0x281 BYTE 0
    field515_0x282 BYTE 0
    field516_0x283 BYTE 0
    field517_0x284 DWORD 0
    field518_0x288 REAL4 0.0;
    field519_0x28c REAL4 0.0;
ShaderProgramA ENDS
ShaderProgramB STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramB ENDS
ShaderProgramC STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramC ENDS
ShaderProgramD STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramD ENDS
ShaderProgramE STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramE ENDS
ShaderProgramF STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramF ENDS
ShaderProgramG STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramG ENDS
ShaderProgramI STRUCT
    parent ShaderProgramAbstract {}
    field1_0x80 BYTE 0
    field2_0x81 BYTE 0
    field3_0x82 BYTE 0
    field4_0x83 BYTE 0
    field5_0x84 BYTE 0
    field6_0x85 BYTE 0
    field7_0x86 BYTE 0
    field8_0x87 BYTE 0
    field9_0x88 BYTE 0
    field10_0x89 BYTE 0
    field11_0x8a BYTE 0
    field12_0x8b BYTE 0
    field13_0x8c BYTE 0
    field14_0x8d BYTE 0
    field15_0x8e BYTE 0
    field16_0x8f BYTE 0
ShaderProgramI ENDS
ShaderProgramJ STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramJ ENDS
ShaderProgramK STRUCT
    parent ShaderProgramAbstract {}
    field1_0x80 REAL4 0.0;
    field2_0x84 BYTE 0
    field3_0x85 BYTE 0
    field4_0x86 BYTE 0
    field5_0x87 BYTE 0
    field6_0x88 BYTE 0
    field7_0x89 BYTE 0
    field8_0x8a BYTE 0
    field9_0x8b BYTE 0
    field10_0x8c BYTE 0
    field11_0x8d BYTE 0
    field12_0x8e BYTE 0
    field13_0x8f BYTE 0
ShaderProgramK ENDS
ShaderProgramL STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramL ENDS
ShaderProgramM STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramM ENDS
ShaderProgramN STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramN ENDS
ShaderProgramO STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramO ENDS
ShaderProgramP STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramP ENDS
ShaderProgramQ STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramQ ENDS
ShaderProgramR STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramR ENDS
ShaderProgramS STRUCT
    parent ShaderProgramAbstract {}
    field1_0x80 BYTE 0
    field2_0x81 BYTE 0
    field3_0x82 BYTE 0
    field4_0x83 BYTE 0
    field5_0x84 BYTE 0
    field6_0x85 BYTE 0
    field7_0x86 BYTE 0
    field8_0x87 BYTE 0
    field9_0x88 BYTE 0
    field10_0x89 BYTE 0
    field11_0x8a BYTE 0
    field12_0x8b BYTE 0
    field13_0x8c BYTE 0
    field14_0x8d BYTE 0
    field15_0x8e BYTE 0
    field16_0x8f BYTE 0
    field17_0x90 BYTE 0
    field18_0x91 BYTE 0
    field19_0x92 BYTE 0
    field20_0x93 BYTE 0
    field21_0x94 BYTE 0
    field22_0x95 BYTE 0
    field23_0x96 BYTE 0
    field24_0x97 BYTE 0
    field25_0x98 BYTE 0
    field26_0x99 BYTE 0
    field27_0x9a BYTE 0
    field28_0x9b BYTE 0
    field29_0x9c BYTE 0
    field30_0x9d BYTE 0
    field31_0x9e BYTE 0
    field32_0x9f BYTE 0
    field33_0xa0 BYTE 0
    field34_0xa1 BYTE 0
    field35_0xa2 BYTE 0
    field36_0xa3 BYTE 0
    field37_0xa4 BYTE 0
    field38_0xa5 BYTE 0
    field39_0xa6 BYTE 0
    field40_0xa7 BYTE 0
    field41_0xa8 BYTE 0
    field42_0xa9 BYTE 0
    field43_0xaa BYTE 0
    field44_0xab BYTE 0
    field45_0xac BYTE 0
    field46_0xad BYTE 0
    field47_0xae BYTE 0
    field48_0xaf BYTE 0
    field49_0xb0 BYTE 0
    field50_0xb1 BYTE 0
    field51_0xb2 BYTE 0
    field52_0xb3 BYTE 0
    field53_0xb4 BYTE 0
    field54_0xb5 BYTE 0
    field55_0xb6 BYTE 0
    field56_0xb7 BYTE 0
    field57_0xb8 BYTE 0
    field58_0xb9 BYTE 0
    field59_0xba BYTE 0
    field60_0xbb BYTE 0
    field61_0xbc BYTE 0
    field62_0xbd BYTE 0
    field63_0xbe BYTE 0
    field64_0xbf BYTE 0
    field65_0xc0 BYTE 0
    field66_0xc1 BYTE 0
    field67_0xc2 BYTE 0
    field68_0xc3 BYTE 0
    field69_0xc4 BYTE 0
    field70_0xc5 BYTE 0
    field71_0xc6 BYTE 0
    field72_0xc7 BYTE 0
    field73_0xc8 BYTE 0
    field74_0xc9 BYTE 0
    field75_0xca BYTE 0
    field76_0xcb BYTE 0
    field77_0xcc BYTE 0
    field78_0xcd BYTE 0
    field79_0xce BYTE 0
    field80_0xcf BYTE 0
    field81_0xd0 BYTE 0
    field82_0xd1 BYTE 0
    field83_0xd2 BYTE 0
    field84_0xd3 BYTE 0
    field85_0xd4 BYTE 0
    field86_0xd5 BYTE 0
    field87_0xd6 BYTE 0
    field88_0xd7 BYTE 0
    field89_0xd8 BYTE 0
    field90_0xd9 BYTE 0
    field91_0xda BYTE 0
    field92_0xdb BYTE 0
    field93_0xdc BYTE 0
    field94_0xdd BYTE 0
    field95_0xde BYTE 0
    field96_0xdf BYTE 0
    field97_0xe0 BYTE 0
    field98_0xe1 BYTE 0
    field99_0xe2 BYTE 0
    field100_0xe3 BYTE 0
    field101_0xe4 BYTE 0
    field102_0xe5 BYTE 0
    field103_0xe6 BYTE 0
    field104_0xe7 BYTE 0
    field105_0xe8 BYTE 0
    field106_0xe9 BYTE 0
    field107_0xea BYTE 0
    field108_0xeb BYTE 0
    field109_0xec BYTE 0
    field110_0xed BYTE 0
    field111_0xee BYTE 0
    field112_0xef BYTE 0
    field113_0xf0 BYTE 0
    field114_0xf1 BYTE 0
    field115_0xf2 BYTE 0
    field116_0xf3 BYTE 0
    field117_0xf4 BYTE 0
    field118_0xf5 BYTE 0
    field119_0xf6 BYTE 0
    field120_0xf7 BYTE 0
    field121_0xf8 BYTE 0
    field122_0xf9 BYTE 0
    field123_0xfa BYTE 0
    field124_0xfb BYTE 0
    field125_0xfc BYTE 0
    field126_0xfd BYTE 0
    field127_0xfe BYTE 0
    field128_0xff BYTE 0
    field129_0x100 BYTE 0
    field130_0x101 BYTE 0
    field131_0x102 BYTE 0
    field132_0x103 BYTE 0
    field133_0x104 BYTE 0
    field134_0x105 BYTE 0
    field135_0x106 BYTE 0
    field136_0x107 BYTE 0
    field137_0x108 BYTE 0
    field138_0x109 BYTE 0
    field139_0x10a BYTE 0
    field140_0x10b BYTE 0
    field141_0x10c BYTE 0
    field142_0x10d BYTE 0
    field143_0x10e BYTE 0
    field144_0x10f BYTE 0
    field145_0x110 BYTE 0
    field146_0x111 BYTE 0
    field147_0x112 BYTE 0
    field148_0x113 BYTE 0
    field149_0x114 BYTE 0
    field150_0x115 BYTE 0
    field151_0x116 BYTE 0
    field152_0x117 BYTE 0
    field153_0x118 BYTE 0
    field154_0x119 BYTE 0
    field155_0x11a BYTE 0
    field156_0x11b BYTE 0
    field157_0x11c BYTE 0
    field158_0x11d BYTE 0
    field159_0x11e BYTE 0
    field160_0x11f BYTE 0
    field161_0x120 BYTE 0
    field162_0x121 BYTE 0
    field163_0x122 BYTE 0
    field164_0x123 BYTE 0
    field165_0x124 BYTE 0
    field166_0x125 BYTE 0
    field167_0x126 BYTE 0
    field168_0x127 BYTE 0
    field169_0x128 BYTE 0
    field170_0x129 BYTE 0
    field171_0x12a BYTE 0
    field172_0x12b BYTE 0
    field173_0x12c BYTE 0
    field174_0x12d BYTE 0
    field175_0x12e BYTE 0
    field176_0x12f BYTE 0
    field177_0x130 BYTE 0
    field178_0x131 BYTE 0
    field179_0x132 BYTE 0
    field180_0x133 BYTE 0
    field181_0x134 BYTE 0
    field182_0x135 BYTE 0
    field183_0x136 BYTE 0
    field184_0x137 BYTE 0
    field185_0x138 BYTE 0
    field186_0x139 BYTE 0
    field187_0x13a BYTE 0
    field188_0x13b BYTE 0
    field189_0x13c BYTE 0
    field190_0x13d BYTE 0
    field191_0x13e BYTE 0
    field192_0x13f BYTE 0
    field193_0x140 BYTE 0
    field194_0x141 BYTE 0
    field195_0x142 BYTE 0
    field196_0x143 BYTE 0
    field197_0x144 BYTE 0
    field198_0x145 BYTE 0
    field199_0x146 BYTE 0
    field200_0x147 BYTE 0
    field201_0x148 BYTE 0
    field202_0x149 BYTE 0
    field203_0x14a BYTE 0
    field204_0x14b BYTE 0
    field205_0x14c BYTE 0
    field206_0x14d BYTE 0
    field207_0x14e BYTE 0
    field208_0x14f BYTE 0
    field209_0x150 BYTE 0
    field210_0x151 BYTE 0
    field211_0x152 BYTE 0
    field212_0x153 BYTE 0
    field213_0x154 BYTE 0
    field214_0x155 BYTE 0
    field215_0x156 BYTE 0
    field216_0x157 BYTE 0
    field217_0x158 BYTE 0
    field218_0x159 BYTE 0
    field219_0x15a BYTE 0
    field220_0x15b BYTE 0
    field221_0x15c BYTE 0
    field222_0x15d BYTE 0
    field223_0x15e BYTE 0
    field224_0x15f BYTE 0
    field225_0x160 BYTE 0
    field226_0x161 BYTE 0
    field227_0x162 BYTE 0
    field228_0x163 BYTE 0
    field229_0x164 BYTE 0
    field230_0x165 BYTE 0
    field231_0x166 BYTE 0
    field232_0x167 BYTE 0
    field233_0x168 BYTE 0
    field234_0x169 BYTE 0
    field235_0x16a BYTE 0
    field236_0x16b BYTE 0
    field237_0x16c BYTE 0
    field238_0x16d BYTE 0
    field239_0x16e BYTE 0
    field240_0x16f BYTE 0
    field241_0x170 BYTE 0
    field242_0x171 BYTE 0
    field243_0x172 BYTE 0
    field244_0x173 BYTE 0
    field245_0x174 BYTE 0
    field246_0x175 BYTE 0
    field247_0x176 BYTE 0
    field248_0x177 BYTE 0
    field249_0x178 BYTE 0
    field250_0x179 BYTE 0
    field251_0x17a BYTE 0
    field252_0x17b BYTE 0
    field253_0x17c BYTE 0
    field254_0x17d BYTE 0
    field255_0x17e BYTE 0
    field256_0x17f BYTE 0
    field257_0x180 BYTE 0
    field258_0x181 BYTE 0
    field259_0x182 BYTE 0
    field260_0x183 BYTE 0
    field261_0x184 BYTE 0
    field262_0x185 BYTE 0
    field263_0x186 BYTE 0
    field264_0x187 BYTE 0
    field265_0x188 BYTE 0
    field266_0x189 BYTE 0
    field267_0x18a BYTE 0
    field268_0x18b BYTE 0
    field269_0x18c BYTE 0
    field270_0x18d BYTE 0
    field271_0x18e BYTE 0
    field272_0x18f BYTE 0
    field273_0x190 BYTE 0
    field274_0x191 BYTE 0
    field275_0x192 BYTE 0
    field276_0x193 BYTE 0
    field277_0x194 BYTE 0
    field278_0x195 BYTE 0
    field279_0x196 BYTE 0
    field280_0x197 BYTE 0
    field281_0x198 BYTE 0
    field282_0x199 BYTE 0
    field283_0x19a BYTE 0
    field284_0x19b BYTE 0
    field285_0x19c BYTE 0
    field286_0x19d BYTE 0
    field287_0x19e BYTE 0
    field288_0x19f BYTE 0
    field289_0x1a0 BYTE 0
    field290_0x1a1 BYTE 0
    field291_0x1a2 BYTE 0
    field292_0x1a3 BYTE 0
    field293_0x1a4 BYTE 0
    field294_0x1a5 BYTE 0
    field295_0x1a6 BYTE 0
    field296_0x1a7 BYTE 0
    field297_0x1a8 BYTE 0
    field298_0x1a9 BYTE 0
    field299_0x1aa BYTE 0
    field300_0x1ab BYTE 0
    field301_0x1ac BYTE 0
    field302_0x1ad BYTE 0
    field303_0x1ae BYTE 0
    field304_0x1af BYTE 0
    field305_0x1b0 BYTE 0
    field306_0x1b1 BYTE 0
    field307_0x1b2 BYTE 0
    field308_0x1b3 BYTE 0
    field309_0x1b4 BYTE 0
    field310_0x1b5 BYTE 0
    field311_0x1b6 BYTE 0
    field312_0x1b7 BYTE 0
    field313_0x1b8 BYTE 0
    field314_0x1b9 BYTE 0
    field315_0x1ba BYTE 0
    field316_0x1bb BYTE 0
    field317_0x1bc BYTE 0
    field318_0x1bd BYTE 0
    field319_0x1be BYTE 0
    field320_0x1bf BYTE 0
    field321_0x1c0 BYTE 0
    field322_0x1c1 BYTE 0
    field323_0x1c2 BYTE 0
    field324_0x1c3 BYTE 0
    field325_0x1c4 BYTE 0
    field326_0x1c5 BYTE 0
    field327_0x1c6 BYTE 0
    field328_0x1c7 BYTE 0
    field329_0x1c8 BYTE 0
    field330_0x1c9 BYTE 0
    field331_0x1ca BYTE 0
    field332_0x1cb BYTE 0
    field333_0x1cc BYTE 0
    field334_0x1cd BYTE 0
    field335_0x1ce BYTE 0
    field336_0x1cf BYTE 0
    field337_0x1d0 BYTE 0
    field338_0x1d1 BYTE 0
    field339_0x1d2 BYTE 0
    field340_0x1d3 BYTE 0
    field341_0x1d4 BYTE 0
    field342_0x1d5 BYTE 0
    field343_0x1d6 BYTE 0
    field344_0x1d7 BYTE 0
    field345_0x1d8 BYTE 0
    field346_0x1d9 BYTE 0
    field347_0x1da BYTE 0
    field348_0x1db BYTE 0
    field349_0x1dc BYTE 0
    field350_0x1dd BYTE 0
    field351_0x1de BYTE 0
    field352_0x1df BYTE 0
    field353_0x1e0 BYTE 0
    field354_0x1e1 BYTE 0
    field355_0x1e2 BYTE 0
    field356_0x1e3 BYTE 0
    field357_0x1e4 BYTE 0
    field358_0x1e5 BYTE 0
    field359_0x1e6 BYTE 0
    field360_0x1e7 BYTE 0
    field361_0x1e8 BYTE 0
    field362_0x1e9 BYTE 0
    field363_0x1ea BYTE 0
    field364_0x1eb BYTE 0
    field365_0x1ec BYTE 0
    field366_0x1ed BYTE 0
    field367_0x1ee BYTE 0
    field368_0x1ef BYTE 0
    field369_0x1f0 BYTE 0
    field370_0x1f1 BYTE 0
    field371_0x1f2 BYTE 0
    field372_0x1f3 BYTE 0
    field373_0x1f4 BYTE 0
    field374_0x1f5 BYTE 0
    field375_0x1f6 BYTE 0
    field376_0x1f7 BYTE 0
    field377_0x1f8 BYTE 0
    field378_0x1f9 BYTE 0
    field379_0x1fa BYTE 0
    field380_0x1fb BYTE 0
    field381_0x1fc BYTE 0
    field382_0x1fd BYTE 0
    field383_0x1fe BYTE 0
    field384_0x1ff BYTE 0
    field385_0x200 BYTE 0
    field386_0x201 BYTE 0
    field387_0x202 BYTE 0
    field388_0x203 BYTE 0
    field389_0x204 BYTE 0
    field390_0x205 BYTE 0
    field391_0x206 BYTE 0
    field392_0x207 BYTE 0
    field393_0x208 BYTE 0
    field394_0x209 BYTE 0
    field395_0x20a BYTE 0
    field396_0x20b BYTE 0
    field397_0x20c BYTE 0
    field398_0x20d BYTE 0
    field399_0x20e BYTE 0
    field400_0x20f BYTE 0
    field401_0x210 BYTE 0
    field402_0x211 BYTE 0
    field403_0x212 BYTE 0
    field404_0x213 BYTE 0
    field405_0x214 BYTE 0
    field406_0x215 BYTE 0
    field407_0x216 BYTE 0
    field408_0x217 BYTE 0
    field409_0x218 BYTE 0
    field410_0x219 BYTE 0
    field411_0x21a BYTE 0
    field412_0x21b BYTE 0
    field413_0x21c BYTE 0
    field414_0x21d BYTE 0
    field415_0x21e BYTE 0
    field416_0x21f BYTE 0
    field417_0x220 BYTE 0
    field418_0x221 BYTE 0
    field419_0x222 BYTE 0
    field420_0x223 BYTE 0
    field421_0x224 BYTE 0
    field422_0x225 BYTE 0
    field423_0x226 BYTE 0
    field424_0x227 BYTE 0
    field425_0x228 BYTE 0
    field426_0x229 BYTE 0
    field427_0x22a BYTE 0
    field428_0x22b BYTE 0
    field429_0x22c BYTE 0
    field430_0x22d BYTE 0
    field431_0x22e BYTE 0
    field432_0x22f BYTE 0
    field433_0x230 BYTE 0
    field434_0x231 BYTE 0
    field435_0x232 BYTE 0
    field436_0x233 BYTE 0
    field437_0x234 BYTE 0
    field438_0x235 BYTE 0
    field439_0x236 BYTE 0
    field440_0x237 BYTE 0
    field441_0x238 BYTE 0
    field442_0x239 BYTE 0
    field443_0x23a BYTE 0
    field444_0x23b BYTE 0
    field445_0x23c BYTE 0
    field446_0x23d BYTE 0
    field447_0x23e BYTE 0
    field448_0x23f BYTE 0
    field449_0x240 BYTE 0
    field450_0x241 BYTE 0
    field451_0x242 BYTE 0
    field452_0x243 BYTE 0
    field453_0x244 BYTE 0
    field454_0x245 BYTE 0
    field455_0x246 BYTE 0
    field456_0x247 BYTE 0
    field457_0x248 BYTE 0
    field458_0x249 BYTE 0
    field459_0x24a BYTE 0
    field460_0x24b BYTE 0
    field461_0x24c BYTE 0
    field462_0x24d BYTE 0
    field463_0x24e BYTE 0
    field464_0x24f BYTE 0
    field465_0x250 BYTE 0
    field466_0x251 BYTE 0
    field467_0x252 BYTE 0
    field468_0x253 BYTE 0
    field469_0x254 BYTE 0
    field470_0x255 BYTE 0
    field471_0x256 BYTE 0
    field472_0x257 BYTE 0
    field473_0x258 BYTE 0
    field474_0x259 BYTE 0
    field475_0x25a BYTE 0
    field476_0x25b BYTE 0
    field477_0x25c BYTE 0
    field478_0x25d BYTE 0
    field479_0x25e BYTE 0
    field480_0x25f BYTE 0
    field481_0x260 BYTE 0
    field482_0x261 BYTE 0
    field483_0x262 BYTE 0
    field484_0x263 BYTE 0
    field485_0x264 BYTE 0
    field486_0x265 BYTE 0
    field487_0x266 BYTE 0
    field488_0x267 BYTE 0
    field489_0x268 BYTE 0
    field490_0x269 BYTE 0
    field491_0x26a BYTE 0
    field492_0x26b BYTE 0
    field493_0x26c BYTE 0
    field494_0x26d BYTE 0
    field495_0x26e BYTE 0
    field496_0x26f BYTE 0
    field497_0x270 BYTE 0
    field498_0x271 BYTE 0
    field499_0x272 BYTE 0
    field500_0x273 BYTE 0
    field501_0x274 BYTE 0
    field502_0x275 BYTE 0
    field503_0x276 BYTE 0
    field504_0x277 BYTE 0
    field505_0x278 BYTE 0
    field506_0x279 BYTE 0
    field507_0x27a BYTE 0
    field508_0x27b BYTE 0
    field509_0x27c BYTE 0
    field510_0x27d BYTE 0
    field511_0x27e BYTE 0
    field512_0x27f BYTE 0
    field513_0x280 BYTE 0
    field514_0x281 BYTE 0
    field515_0x282 BYTE 0
    field516_0x283 BYTE 0
    field517_0x284 DWORD 0
    field518_0x288 Vector4 {}
    field519_0x298 BYTE 0
    field520_0x299 BYTE 0
    field521_0x29a BYTE 0
    field522_0x29b BYTE 0
    field523_0x29c BYTE 0
    field524_0x29d BYTE 0
    field525_0x29e BYTE 0
    field526_0x29f BYTE 0
ShaderProgramS ENDS
ShaderProgramT STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramT ENDS
ShaderProgramU STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramU ENDS
ShaderProgramV STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramV ENDS
ShaderProgramW STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramW ENDS
ShaderProgramSub STRUCT
    field0_0x0 DWORD 0
    blob AnimationBlob {}
    animArray BYTE 4 dup (0)
    field3_0x14 BYTE 0
    field4_0x15 BYTE 0
    field5_0x16 BYTE 0
    field6_0x17 BYTE 0
    field7_0x18 BYTE 0
    field8_0x19 BYTE 0
    field9_0x1a BYTE 0
    field10_0x1b BYTE 0
    time DWORD 0
    field12_0x20 BYTE 0
    field13_0x21 BYTE 0
    field14_0x22 BYTE 0
    field15_0x23 BYTE 0
    field16_0x24 BYTE 0
    field17_0x25 BYTE 0
    field18_0x26 BYTE 0
    field19_0x27 BYTE 0
    field20_0x28 BYTE 0
    field21_0x29 BYTE 0
    field22_0x2a BYTE 0
    field23_0x2b BYTE 0
    field24_0x2c BYTE 0
    field25_0x2d BYTE 0
    field26_0x2e BYTE 0
    field27_0x2f BYTE 0
    field28_0x30 BYTE 0
    field29_0x31 BYTE 0
    field30_0x32 BYTE 0
    field31_0x33 BYTE 0
    field32_0x34 BYTE 0
    field33_0x35 BYTE 0
    field34_0x36 BYTE 0
    field35_0x37 BYTE 0
    field36_0x38 BYTE 0
    field37_0x39 BYTE 0
    field38_0x3a BYTE 0
    field39_0x3b BYTE 0
    field40_0x3c BYTE 0
    field41_0x3d BYTE 0
    field42_0x3e BYTE 0
    field43_0x3f BYTE 0
ShaderProgramSub ENDS
ShaderProgramX STRUCT
    parent ShaderProgramAbstract {}
    field1_0x80 REAL4 0.0;
    field2_0x84 BYTE 0
    field3_0x85 BYTE 0
    field4_0x86 BYTE 0
    field5_0x87 BYTE 0
    field6_0x88 BYTE 0
    field7_0x89 BYTE 0
    field8_0x8a BYTE 0
    field9_0x8b BYTE 0
    field10_0x8c BYTE 0
    field11_0x8d BYTE 0
    field12_0x8e BYTE 0
    field13_0x8f BYTE 0
ShaderProgramX ENDS
ShaderProgramY STRUCT
    parent ShaderProgramAbstract {}
ShaderProgramY ENDS
SaveFileB STRUCT
    parent SaveFileAbstract {}
SaveFileB ENDS
UIElementSimpleShape STRUCT
    parent UIElementAbstract {}
    cnt DWORD 0
    field2_0x14 DWORD 0; Vector2 *
    field3_0x18 DWORD 0; pointer
UIElementSimpleShape ENDS
UIElementSimpleShapeA STRUCT
    parent UIElementSimpleShape {}
    field1_0x1c Color {}
    field2_0x20 Color {}
    field3_0x24 Vector2 {}
    field4_0x2c Vector2 {}
    field5_0x34 DWORD 0
    field6_0x38 DWORD 0; int *
    field7_0x3c DWORD 0
    field8_0x40 DWORD 0
    field9_0x44 Color {}
    field10_0x48 REAL4 0.0;
    field11_0x4c REAL4 0.0;
    field12_0x50 REAL4 0.0;
    field13_0x54 DWORD 0; pointer
    field14_0x58 DWORD 0; pointer
UIElementSimpleShapeA ENDS
RendererImportant STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 DWORD 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    clearFlags DWORD 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 BYTE 0
    field27_0x21 BYTE 0
    field28_0x22 BYTE 0
    field29_0x23 BYTE 0
    field30_0x24 BYTE 0
    field31_0x25 BYTE 0
    field32_0x26 BYTE 0
    field33_0x27 BYTE 0
    field34_0x28 BYTE 0
    field35_0x29 BYTE 0
    field36_0x2a BYTE 0
    field37_0x2b BYTE 0
    field38_0x2c BYTE 0
    field39_0x2d BYTE 0
    field40_0x2e BYTE 0
    field41_0x2f BYTE 0
    field42_0x30 BYTE 0
    field43_0x31 BYTE 0
    field44_0x32 BYTE 0
    field45_0x33 BYTE 0
    field46_0x34 BYTE 0
    field47_0x35 BYTE 0
    field48_0x36 BYTE 0
    field49_0x37 BYTE 0
    field50_0x38 BYTE 0
    field51_0x39 BYTE 0
    field52_0x3a BYTE 0
    field53_0x3b BYTE 0
RendererImportant ENDS
IteratorA1Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA1Abstract ENDS
IteratorA1 STRUCT
    parent IteratorA1Abstract {}
    fontCollection DWORD 0; FontCollection *
    index DWORD 0
IteratorA1 ENDS
IteratorA2Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA2Abstract ENDS
IteratorA2 STRUCT
    parent IteratorA2Abstract {}
    colection DWORD 0; AutoClass58SubCollection *
    index DWORD 0
IteratorA2 ENDS
IteratorB1Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB1Abstract ENDS
IteratorB1 STRUCT
    parent IteratorB1Abstract {}
    collection DWORD 0; FontCollection *
    index DWORD 0
IteratorB1 ENDS
IteratorB2Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB2Abstract ENDS
IteratorB2 STRUCT
    parent IteratorA2Abstract {}
    colection DWORD 0; AutoClass58SubCollection *
    index DWORD 0
IteratorB2 ENDS
UnkFamily14Base STRUCT
    vtable DWORD 0; UnkFamily14Base_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 Matrix4 {}
    field14_0x50 BYTE 0
    field15_0x51 BYTE 0
    field16_0x52 BYTE 0
    field17_0x53 BYTE 0
    field18_0x54 BYTE 0
    field19_0x55 BYTE 0
    field20_0x56 BYTE 0
    field21_0x57 BYTE 0
    field22_0x58 BYTE 0
    field23_0x59 BYTE 0
    field24_0x5a BYTE 0
    field25_0x5b BYTE 0
    field26_0x5c BYTE 0
    field27_0x5d BYTE 0
    field28_0x5e BYTE 0
    field29_0x5f BYTE 0
    field30_0x60 BYTE 0
    field31_0x61 BYTE 0
    field32_0x62 BYTE 0
    field33_0x63 BYTE 0
    field34_0x64 BYTE 0
    field35_0x65 BYTE 0
    field36_0x66 BYTE 0
    field37_0x67 BYTE 0
    field38_0x68 BYTE 0
    field39_0x69 BYTE 0
    field40_0x6a BYTE 0
    field41_0x6b BYTE 0
    field42_0x6c BYTE 0
    field43_0x6d BYTE 0
    field44_0x6e BYTE 0
    field45_0x6f BYTE 0
    field46_0x70 BYTE 0
    field47_0x71 BYTE 0
    field48_0x72 BYTE 0
    field49_0x73 BYTE 0
    field50_0x74 BYTE 0
    field51_0x75 BYTE 0
    field52_0x76 BYTE 0
    field53_0x77 BYTE 0
    field54_0x78 BYTE 0
    field55_0x79 BYTE 0
    field56_0x7a BYTE 0
    field57_0x7b BYTE 0
    field58_0x7c BYTE 0
    field59_0x7d BYTE 0
    field60_0x7e BYTE 0
    field61_0x7f BYTE 0
    field62_0x80 BYTE 0
    field63_0x81 BYTE 0
    field64_0x82 BYTE 0
    field65_0x83 BYTE 0
    field66_0x84 BYTE 0
    field67_0x85 BYTE 0
    field68_0x86 BYTE 0
    field69_0x87 BYTE 0
    field70_0x88 BYTE 0
    field71_0x89 BYTE 0
    field72_0x8a BYTE 0
    field73_0x8b BYTE 0
    field74_0x8c BYTE 0
    field75_0x8d BYTE 0
    field76_0x8e BYTE 0
    field77_0x8f BYTE 0
    field78_0x90 BYTE 0
    field79_0x91 BYTE 0
    field80_0x92 BYTE 0
    field81_0x93 BYTE 0
    field82_0x94 BYTE 0
    field83_0x95 BYTE 0
    field84_0x96 BYTE 0
    field85_0x97 BYTE 0
    field86_0x98 BYTE 0
    field87_0x99 BYTE 0
    field88_0x9a BYTE 0
    field89_0x9b BYTE 0
    field90_0x9c BYTE 0
    field91_0x9d BYTE 0
    field92_0x9e BYTE 0
    field93_0x9f BYTE 0
    field94_0xa0 BYTE 0
    field95_0xa1 BYTE 0
    field96_0xa2 BYTE 0
    field97_0xa3 BYTE 0
    field98_0xa4 BYTE 0
    field99_0xa5 BYTE 0
    field100_0xa6 BYTE 0
    field101_0xa7 BYTE 0
    field102_0xa8 BYTE 0
    field103_0xa9 BYTE 0
    field104_0xaa BYTE 0
    field105_0xab BYTE 0
    field106_0xac BYTE 0
    field107_0xad BYTE 0
    field108_0xae BYTE 0
    field109_0xaf BYTE 0
    field110_0xb0 BYTE 0
    field111_0xb1 BYTE 0
    field112_0xb2 BYTE 0
    field113_0xb3 BYTE 0
    field114_0xb4 BYTE 0
    field115_0xb5 BYTE 0
    field116_0xb6 BYTE 0
    field117_0xb7 BYTE 0
    field118_0xb8 BYTE 0
    field119_0xb9 BYTE 0
    field120_0xba BYTE 0
    field121_0xbb BYTE 0
    field122_0xbc BYTE 0
    field123_0xbd BYTE 0
    field124_0xbe BYTE 0
    field125_0xbf BYTE 0
    field126_0xc0 BYTE 0
    field127_0xc1 BYTE 0
    field128_0xc2 BYTE 0
    field129_0xc3 BYTE 0
    field130_0xc4 BYTE 0
    field131_0xc5 BYTE 0
    field132_0xc6 BYTE 0
    field133_0xc7 BYTE 0
    field134_0xc8 BYTE 0
    field135_0xc9 BYTE 0
    field136_0xca BYTE 0
    field137_0xcb BYTE 0
    field138_0xcc BYTE 0
    field139_0xcd BYTE 0
    field140_0xce BYTE 0
    field141_0xcf BYTE 0
    field142_0xd0 Vector4 {}
    field143_0xe0 Vector4 {}
    field144_0xf0 Vector4 {}
    distance DWORD 0
    field146_0x104 DWORD 0; AutoClass25 *
    field147_0x108 DWORD 0
    field148_0x10c DWORD 0
UnkFamily14Base ENDS
IteratorB3Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB3Abstract ENDS
IteratorB3A STRUCT
    parent IteratorB3Abstract {}
    colection DWORD 0; UnkCInit172Collection *
    index DWORD 0
IteratorB3A ENDS
UnkCInit172Collection STRUCT
    array DWORD 0; InstanceContextRefCounter * *
    cnt DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    field7_0x1c DWORD 0
    field8_0x20 DWORD 0
    field9_0x24 DWORD 0
UnkCInit172Collection ENDS
UnkCInit172 STRUCT
    cnt DWORD 0
    collection UnkCInit172Collection {}
UnkCInit172 ENDS
AutoClass8 STRUCT
    field0_0x0 BYTE 16 dup (0)
    field1_0x10 BYTE 0
    field2_0x11 BYTE 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    field17_0x20 BYTE 0
    field18_0x21 BYTE 0
    field19_0x22 BYTE 0
    field20_0x23 BYTE 0
    field21_0x24 BYTE 0
    field22_0x25 BYTE 0
    field23_0x26 BYTE 0
    field24_0x27 BYTE 0
    field25_0x28 BYTE 0
    field26_0x29 BYTE 0
    field27_0x2a BYTE 0
    field28_0x2b BYTE 0
    field29_0x2c BYTE 0
    field30_0x2d BYTE 0
    field31_0x2e BYTE 0
    field32_0x2f BYTE 0
    field33_0x30 BYTE 0
    field34_0x31 BYTE 0
    field35_0x32 BYTE 0
    field36_0x33 BYTE 0
    field37_0x34 BYTE 0
    field38_0x35 BYTE 0
    field39_0x36 BYTE 0
    field40_0x37 BYTE 0
    field41_0x38 BYTE 0
    field42_0x39 BYTE 0
    field43_0x3a BYTE 0
    field44_0x3b BYTE 0
    field45_0x3c BYTE 0
    field46_0x3d BYTE 0
    field47_0x3e BYTE 0
    field48_0x3f BYTE 0
    field49_0x40 BYTE 0
    field50_0x41 BYTE 0
    field51_0x42 BYTE 0
    field52_0x43 BYTE 0
    field53_0x44 BYTE 0
    field54_0x45 BYTE 0
    field55_0x46 BYTE 0
    field56_0x47 BYTE 0
    field57_0x48 BYTE 0
    field58_0x49 BYTE 0
    field59_0x4a BYTE 0
    field60_0x4b BYTE 0
    field61_0x4c BYTE 0
    field62_0x4d BYTE 0
    field63_0x4e BYTE 0
    field64_0x4f BYTE 0
    field65_0x50 BYTE 0
    field66_0x51 BYTE 0
    field67_0x52 BYTE 0
    field68_0x53 BYTE 0
    field69_0x54 BYTE 0
    field70_0x55 BYTE 0
    field71_0x56 BYTE 0
    field72_0x57 BYTE 0
    field73_0x58 BYTE 0
    field74_0x59 BYTE 0
    field75_0x5a BYTE 0
    field76_0x5b BYTE 0
    field77_0x5c BYTE 0
    field78_0x5d BYTE 0
    field79_0x5e BYTE 0
    field80_0x5f BYTE 0
    field81_0x60 BYTE 0
    field82_0x61 BYTE 0
    field83_0x62 BYTE 0
    field84_0x63 BYTE 0
    field85_0x64 BYTE 0
    field86_0x65 BYTE 0
    field87_0x66 BYTE 0
    field88_0x67 BYTE 0
    field89_0x68 BYTE 0
    field90_0x69 BYTE 0
    field91_0x6a BYTE 0
    field92_0x6b BYTE 0
    field93_0x6c BYTE 0
    field94_0x6d BYTE 0
    field95_0x6e BYTE 0
    field96_0x6f BYTE 0
    field97_0x70 BYTE 0
    field98_0x71 BYTE 0
    field99_0x72 BYTE 0
    field100_0x73 BYTE 0
    field101_0x74 BYTE 0
    field102_0x75 BYTE 0
    field103_0x76 BYTE 0
    field104_0x77 BYTE 0
    field105_0x78 BYTE 0
    field106_0x79 BYTE 0
    field107_0x7a BYTE 0
    field108_0x7b BYTE 0
    field109_0x7c BYTE 0
    field110_0x7d BYTE 0
    field111_0x7e BYTE 0
    field112_0x7f BYTE 0
    field113_0x80 BYTE 0
    field114_0x81 BYTE 0
    field115_0x82 BYTE 0
    field116_0x83 BYTE 0
    field117_0x84 BYTE 0
    field118_0x85 BYTE 0
    field119_0x86 BYTE 0
    field120_0x87 BYTE 0
    field121_0x88 BYTE 0
    field122_0x89 BYTE 0
    field123_0x8a BYTE 0
    field124_0x8b BYTE 0
    field125_0x8c BYTE 0
    field126_0x8d BYTE 0
    field127_0x8e BYTE 0
    field128_0x8f BYTE 0
    field129_0x90 BYTE 0
    field130_0x91 BYTE 0
    field131_0x92 BYTE 0
    field132_0x93 BYTE 0
    field133_0x94 BYTE 0
    field134_0x95 BYTE 0
    field135_0x96 BYTE 0
    field136_0x97 BYTE 0
    field137_0x98 BYTE 0
    field138_0x99 BYTE 0
    field139_0x9a BYTE 0
    field140_0x9b BYTE 0
    field141_0x9c BYTE 0
    field142_0x9d BYTE 0
    field143_0x9e BYTE 0
    field144_0x9f BYTE 0
    field145_0xa0 BYTE 0
    field146_0xa1 BYTE 0
    field147_0xa2 BYTE 0
    field148_0xa3 BYTE 0
    field149_0xa4 BYTE 0
    field150_0xa5 BYTE 0
    field151_0xa6 BYTE 0
    field152_0xa7 BYTE 0
    field153_0xa8 BYTE 0
    field154_0xa9 BYTE 0
    field155_0xaa BYTE 0
    field156_0xab BYTE 0
    field157_0xac BYTE 0
    field158_0xad BYTE 0
    field159_0xae BYTE 0
    field160_0xaf BYTE 0
    field161_0xb0 BYTE 0
    field162_0xb1 BYTE 0
    field163_0xb2 BYTE 0
    field164_0xb3 BYTE 0
    field165_0xb4 BYTE 0
    field166_0xb5 BYTE 0
    field167_0xb6 BYTE 0
    field168_0xb7 BYTE 0
    field169_0xb8 BYTE 0
    field170_0xb9 BYTE 0
    field171_0xba BYTE 0
    field172_0xbb BYTE 0
    field173_0xbc BYTE 0
    field174_0xbd BYTE 0
    field175_0xbe BYTE 0
    field176_0xbf BYTE 0
    field177_0xc0 BYTE 0
    field178_0xc1 BYTE 0
    field179_0xc2 BYTE 0
    field180_0xc3 BYTE 0
    field181_0xc4 BYTE 0
    field182_0xc5 BYTE 0
    field183_0xc6 BYTE 0
    field184_0xc7 BYTE 0
    field185_0xc8 BYTE 0
    field186_0xc9 BYTE 0
    field187_0xca BYTE 0
    field188_0xcb BYTE 0
    field189_0xcc BYTE 0
    field190_0xcd BYTE 0
    field191_0xce BYTE 0
    field192_0xcf BYTE 0
    field193_0xd0 BYTE 0
    field194_0xd1 BYTE 0
    field195_0xd2 BYTE 0
    field196_0xd3 BYTE 0
    field197_0xd4 BYTE 0
    field198_0xd5 BYTE 0
    field199_0xd6 BYTE 0
    field200_0xd7 BYTE 0
    field201_0xd8 BYTE 0
    field202_0xd9 BYTE 0
    field203_0xda BYTE 0
    field204_0xdb BYTE 0
    field205_0xdc BYTE 0
    field206_0xdd BYTE 0
    field207_0xde BYTE 0
    field208_0xdf BYTE 0
    field209_0xe0 BYTE 0
    field210_0xe1 BYTE 0
    field211_0xe2 BYTE 0
    field212_0xe3 BYTE 0
    field213_0xe4 BYTE 0
    field214_0xe5 BYTE 0
    field215_0xe6 BYTE 0
    field216_0xe7 BYTE 0
    field217_0xe8 BYTE 0
    field218_0xe9 BYTE 0
    field219_0xea BYTE 0
    field220_0xeb BYTE 0
    field221_0xec BYTE 0
    field222_0xed BYTE 0
    field223_0xee BYTE 0
    field224_0xef BYTE 0
    field225_0xf0 BYTE 0
    field226_0xf1 BYTE 0
    field227_0xf2 BYTE 0
    field228_0xf3 BYTE 0
    field229_0xf4 BYTE 0
    field230_0xf5 BYTE 0
    field231_0xf6 BYTE 0
    field232_0xf7 BYTE 0
    field233_0xf8 BYTE 0
    field234_0xf9 BYTE 0
    field235_0xfa BYTE 0
    field236_0xfb BYTE 0
    field237_0xfc BYTE 0
    field238_0xfd BYTE 0
    field239_0xfe BYTE 0
    field240_0xff BYTE 0
    field241_0x100 DWORD 0; AutoClass40 *
    field242_0x104 BYTE 0
    field243_0x105 BYTE 0
    field244_0x106 BYTE 0
    field245_0x107 BYTE 0
    field246_0x108 BYTE 0
    field247_0x109 BYTE 0
    field248_0x10a BYTE 0
    field249_0x10b BYTE 0
    field250_0x10c BYTE 0
    field251_0x10d BYTE 0
    field252_0x10e BYTE 0
    field253_0x10f BYTE 0
    field254_0x110 BYTE 0
    field255_0x111 BYTE 0
    field256_0x112 BYTE 0
    field257_0x113 BYTE 0
    field258_0x114 BYTE 0
    field259_0x115 BYTE 0
    field260_0x116 BYTE 0
    field261_0x117 BYTE 0
    field262_0x118 BYTE 0
    field263_0x119 BYTE 0
    field264_0x11a BYTE 0
    field265_0x11b BYTE 0
    field266_0x11c BYTE 0
    field267_0x11d BYTE 0
    field268_0x11e BYTE 0
    field269_0x11f BYTE 0
    cap DWORD 0
AutoClass8 ENDS
D3DResource STRUCT
    common DWORD 0
    data DWORD 0
    _lock DWORD 0
D3DResource ENDS
D3DPixelContainer STRUCT
    parent D3DResource {}
    format DWORD 0
    _size DWORD 0
D3DPixelContainer ENDS
D3DBaseTexture STRUCT
    parent D3DPixelContainer {}
D3DBaseTexture ENDS
D3DTexture STRUCT
    parent D3DBaseTexture {}
D3DTexture ENDS
XGBuffer STRUCT
    refCount DWORD 0
    data DWORD 0; void *
    _size DWORD 0
XGBuffer ENDS
StreamAbstract STRUCT
    vtable DWORD 0; pointer *
StreamAbstract ENDS
UnkFamily15B STRUCT
    parent UnkFamily15Abstract {}
    array BYTE 32 dup (0)
UnkFamily15B ENDS
SectionSM STRUCT
    parent SectionAbstract {}
    chunkName TwinString {}
    flag BYTE 0
    field3_0x11 BYTE 0
    field4_0x12 BYTE 0
    field5_0x13 BYTE 0
    levelHolder DWORD 0; LevelHolderSM *
    graphicsSection SectionGraphics {}
SectionSM ENDS
SectionDataTextureA STRUCT
    parent SectionDataTexture {}
    folder TwinString {}
SectionDataTextureA ENDS
SectionDataTextureXbox STRUCT
    parent SectionDataTextureA {}
SectionDataTextureXbox ENDS
SectionDataMaterialA STRUCT
    parent SectionDataMaterial {}
    folder TwinString {}
SectionDataMaterialA ENDS
SectionDataMaterialXbox STRUCT
    parent SectionDataMaterialA {}
SectionDataMaterialXbox ENDS
SectionDataRigidModelA STRUCT
    parent SectionDataRigidModel {}
    folder TwinString {}
SectionDataRigidModelA ENDS
SectionDataRigidModelXbox STRUCT
    parent SectionDataRigidModelA {}
SectionDataRigidModelXbox ENDS
SectionDataRigidModel2 STRUCT
    parent GraphicsSectionDataAbstract {}
    entries SectionDataEntriesRigidModel2 {}
    field2_0xe WORD 0
    field3_0x10 DWORD 0
    rigidModelList DWORD 0; ResourceListTwinsanityRigidModel2 *
SectionDataRigidModel2 ENDS
SectionDataRigidModel2A STRUCT
    parent SectionDataRigidModel2 {}
    folder TwinString {}
SectionDataRigidModel2A ENDS
SectionDataRigidModel2Xbox STRUCT
    parent SectionDataRigidModel2A {}
SectionDataRigidModel2Xbox ENDS
SectionDataBlendSkinA STRUCT
    parent SectionDataBlendSkin {}
    folder TwinString {}
SectionDataBlendSkinA ENDS
SectionDataBlendSkinXbox STRUCT
    parent SectionDataBlendSkinA {}
SectionDataBlendSkinXbox ENDS
SectionDataSkinA STRUCT
    parent SectionDataSkin {}
    folder TwinString {}
SectionDataSkinA ENDS
SectionDataSkinXbox STRUCT
    parent SectionDataSkinA {}
SectionDataSkinXbox ENDS
SectionDataModelA STRUCT
    parent SectionDataModel {}
    folder TwinString {}
SectionDataModelA ENDS
SectionDataModelXbox STRUCT
    parent SectionDataModelA {}
SectionDataModelXbox ENDS
SectionDataSkydomeA STRUCT
    parent SectionDataSkydome {}
    folder TwinString {}
SectionDataSkydomeA ENDS
SectionDataSkydomeXbox STRUCT
    parent SectionDataSkydomeA {}
SectionDataSkydomeXbox ENDS
SectionDataLodA STRUCT
    parent SectionDataLod {}
    folder TwinString {}
SectionDataLodA ENDS
SectionDataLodXbox STRUCT
    parent SectionDataLodA {}
SectionDataLodXbox ENDS
EntryDescriptorTexture STRUCT
    texPtr DWORD 0; TwinsanityTexture *
    id DWORD 0
EntryDescriptorTexture ENDS
SectionDataEntriesRigidModel STRUCT
    elements DWORD 0; EntryDescriptorRigidModel *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesRigidModel ENDS
SectionReaderUnknownB STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
SectionReaderUnknownB ENDS
SectionReaderUnknownC STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    _str TwinString {}
SectionReaderUnknownC ENDS
SectionReaderUnknownD STRUCT
    parent SectionReaderAbstract {}
SectionReaderUnknownD ENDS
SectionReaderUnknownF STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0
    buffer DWORD 0; void *
SectionReaderUnknownF ENDS
SectionReaderUnknownG STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
SectionReaderUnknownG ENDS
SectionReaderUnknownI STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; OGI *
SectionReaderUnknownI ENDS
SectionReaderUnknownJ STRUCT
    parent SectionReaderAbstract {}
    section DWORD 0; SectionGraphics *
SectionReaderUnknownJ ENDS
SectionReaderUnknownK STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0; pointer
SectionReaderUnknownK ENDS
SectionReaderUnknownL STRUCT
    parent SectionReaderAbstract {}
    section DWORD 0; SectionRM *
SectionReaderUnknownL ENDS
SectionReaderUnknownM STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0; pointer
SectionReaderUnknownM ENDS
SectionReaderUnknownN STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; Sfx *
    section DWORD 0; SectionRM *
SectionReaderUnknownN ENDS
SectionReaderUnknownO STRUCT
    parent SectionReaderAbstract {}
    section DWORD 0; SectionRM *
SectionReaderUnknownO ENDS
SectionReaderUnknownP STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0; pointer
    field3_0xc DWORD 0; pointer
SectionReaderUnknownP ENDS
SectionReaderUnknownQ STRUCT
    parent SectionReaderAbstract {}
    section DWORD 0; SectionSM *
SectionReaderUnknownQ ENDS
SectionReaderUnknownR STRUCT
    parent SectionReaderAbstract {}
    index DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    section DWORD 0; SectionSM *
SectionReaderUnknownR ENDS
SectionReaderUnknownS STRUCT
    parent SectionReaderAbstract {}
    section DWORD 0; SectionSM *
SectionReaderUnknownS ENDS
SectionReaderUnknownT STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
SectionReaderUnknownT ENDS
SectionReaderUnknownU STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
SectionReaderUnknownU ENDS
SectionReaderUnknownV STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0; pointer
SectionReaderUnknownV ENDS
SectionReaderUnknownW STRUCT
    parent SectionReaderAbstract {}
    field1_0x4 DWORD 0; pointer
    _str TwinString {}
SectionReaderUnknownW ENDS
SectionReaderRigidModel2 STRUCT
    parent SectionReaderAbstract {}
    unkPointer DWORD 0; TwinsanityRigidModel2 *
    data DWORD 0; SectionDataRigidModel *
SectionReaderRigidModel2 ENDS
EntryDescriptorMaterial STRUCT
    matPtr DWORD 0; TwinsanityMaterial *
    id DWORD 0
EntryDescriptorMaterial ENDS
SectionDataEntriesAbstract STRUCT
    elements DWORD 0; EntryDescriptorAbstract *
    cnt WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
SectionDataEntriesAbstract ENDS
EntryDescriptorAbstract STRUCT
    texPtr DWORD 0; pointer
    id DWORD 0
EntryDescriptorAbstract ENDS
TwinsanityModel STRUCT
    field0_0x0 DWORD 0
    id DWORD 0
    submodels DWORD 0
    someCnt1 DWORD 0; uint *
    vertexBufferLength DWORD 0; uint *
    someLength DWORD 0; uint *
    someCnt2 DWORD 0; uint *
    dataArray1 DWORD 0; int * *
    vertexBuffer DWORD 0; D3DVertexBuffer8 * *
    field9_0x24 DWORD 0; int *
TwinsanityModel ENDS
TwinsanityLod STRUCT
    field0_0x0 DWORD 0
    id DWORD 0
    rigidModelArray DWORD 0; TwinsanityRigidModel * *
    cnt DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 BYTE 12 dup (0)
TwinsanityLod ENDS
TwinsanityGraphicsBase STRUCT
    vtable DWORD 0; TwinsanityGraphicsBase_VTable *
    field1_0x4 DWORD 0
    id DWORD 0
TwinsanityGraphicsBase ENDS
TwinsanityBlendSkin STRUCT
    parent TwinsanityGraphicsBase {}
    materials DWORD 0; TwinsanityMaterial * *
    field2_0x10 BYTE 0
    field3_0x11 BYTE 0
    field4_0x12 BYTE 0
    field5_0x13 BYTE 0
    field6_0x14 BYTE 0
    field7_0x15 BYTE 0
    field8_0x16 BYTE 0
    field9_0x17 BYTE 0
    field10_0x18 DWORD 0; int *
    field11_0x1c BYTE 0
    field12_0x1d BYTE 0
    field13_0x1e BYTE 0
    field14_0x1f BYTE 0
    vertexBuffer DWORD 0; D3DVertexBuffer8 * *
    field16_0x24 BYTE 0
    field17_0x25 BYTE 0
    field18_0x26 BYTE 0
    field19_0x27 BYTE 0
    field20_0x28 DWORD 0; uint *
    field21_0x2c DWORD 0; uint *
    field22_0x30 DWORD 0; uint *
    field23_0x34 DWORD 0; uint *
    field24_0x38 DWORD 0; uint *
    field25_0x3c DWORD 0; uint *
    submodels DWORD 0
    vertexBufferLength DWORD 0; uint *
    field28_0x48 BYTE 0
    field29_0x49 BYTE 0
    field30_0x4a BYTE 0
    field31_0x4b BYTE 0
    vertexBufferCnt DWORD 0
TwinsanityBlendSkin ENDS
TwinsanityRigidModel STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 DWORD 0
    id DWORD 0
    materials DWORD 0; TwinsanityMaterial * *
    model DWORD 0; TwinsanityModel *
    field5_0x14 DWORD 0
    field6_0x18 BYTE 0
    field7_0x19 BYTE 0
    field8_0x1a BYTE 0
    field9_0x1b BYTE 0
    materialCnt DWORD 0
    modelId DWORD 0
TwinsanityRigidModel ENDS
TwinsanityRigidModel2 STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 DWORD 0
    id DWORD 0
    materialIds DWORD 0; TwinsanityMaterial * *
    model DWORD 0; TwinsanityModel *
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    cnt DWORD 0
    field14_0x20 BYTE 0
    field15_0x21 BYTE 0
    field16_0x22 BYTE 0
    field17_0x23 BYTE 0
TwinsanityRigidModel2 ENDS
TwinsanitySkin STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 DWORD 0
    id DWORD 0
    materials DWORD 0; TwinsanityMaterial * *
    field4_0x10 BYTE 0
    field5_0x11 BYTE 0
    field6_0x12 BYTE 0
    field7_0x13 BYTE 0
    field8_0x14 BYTE 0
    field9_0x15 BYTE 0
    field10_0x16 BYTE 0
    field11_0x17 BYTE 0
    field12_0x18 DWORD 0; uint *
    vertexBufferData DWORD 0; pointer *
    vertexBuffer DWORD 0; D3DVertexBuffer8 * *
    cnt4 DWORD 0; uint *
    field16_0x28 DWORD 0; uint *
    cnt3 DWORD 0; uint *
    array4A DWORD 0; uint * *
    array4B DWORD 0; uint * *
    array3 DWORD 0; uint * *
    cnt DWORD 0
    vertexBufferLength DWORD 0; uint *
    field23_0x44 BYTE 0
    field24_0x45 BYTE 0
    field25_0x46 BYTE 0
    field26_0x47 BYTE 0
    field27_0x48 BYTE 0
    field28_0x49 BYTE 0
    field29_0x4a BYTE 0
    field30_0x4b BYTE 0
TwinsanitySkin ENDS
TwinsanitySkydome STRUCT
    field0_0x0 DWORD 0
    id DWORD 0
    cnt DWORD 0
    rigidModels DWORD 0; TwinsanityRigidModel2 * *
    field4_0x10 BYTE 0
    field5_0x11 BYTE 0
    field6_0x12 BYTE 0
    field7_0x13 BYTE 0
    field8_0x14 BYTE 0
    field9_0x15 BYTE 0
    field10_0x16 BYTE 0
    field11_0x17 BYTE 0
    field12_0x18 BYTE 0
    field13_0x19 BYTE 0
    field14_0x1a BYTE 0
    field15_0x1b BYTE 0
    field16_0x1c BYTE 0
    field17_0x1d BYTE 0
    field18_0x1e BYTE 0
    field19_0x1f BYTE 0
    field20_0x20 BYTE 0
    field21_0x21 BYTE 0
    field22_0x22 BYTE 0
    field23_0x23 BYTE 0
    field24_0x24 BYTE 0
    field25_0x25 BYTE 0
    field26_0x26 BYTE 0
    field27_0x27 BYTE 0
    field28_0x28 BYTE 0
    field29_0x29 BYTE 0
    field30_0x2a BYTE 0
    field31_0x2b BYTE 0
    field32_0x2c BYTE 0
    field33_0x2d BYTE 0
    field34_0x2e BYTE 0
    field35_0x2f BYTE 0
    field36_0x30 BYTE 0
    field37_0x31 BYTE 0
    field38_0x32 BYTE 0
    field39_0x33 BYTE 0
    field40_0x34 BYTE 0
    field41_0x35 BYTE 0
    field42_0x36 BYTE 0
    field43_0x37 BYTE 0
    field44_0x38 BYTE 0
    field45_0x39 BYTE 0
    field46_0x3a BYTE 0
    field47_0x3b BYTE 0
    field48_0x3c BYTE 0
    field49_0x3d BYTE 0
    field50_0x3e BYTE 0
    field51_0x3f BYTE 0
    field52_0x40 BYTE 0
    field53_0x41 BYTE 0
    field54_0x42 BYTE 0
    field55_0x43 BYTE 0
    field56_0x44 BYTE 0
    field57_0x45 BYTE 0
    field58_0x46 BYTE 0
    field59_0x47 BYTE 0
    field60_0x48 BYTE 0
    field61_0x49 BYTE 0
    field62_0x4a BYTE 0
    field63_0x4b BYTE 0
    field64_0x4c BYTE 0
    field65_0x4d BYTE 0
    field66_0x4e BYTE 0
    field67_0x4f BYTE 0
TwinsanitySkydome ENDS
PhysicalPoolSubStruct STRUCT
    element1 DWORD 0; PhysicalPoolElement *
    element2 DWORD 0; PhysicalPoolElement *
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    pool DWORD 0; PhysicalPool *
PhysicalPoolSubStruct ENDS
PhysicalPoolElement STRUCT
    bufferIndex DWORD 0
    alignedStart DWORD 0; void *
    _length DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    next2 DWORD 0; PhysicalPoolElement *
    next DWORD 0; PhysicalPoolElement *
    prev DWORD 0; PhysicalPoolElement *
    field9_0x24 DWORD 0
PhysicalPoolElement ENDS
FileResourceDescA STRUCT
    parent FileResourceDescAbstract {}
FileResourceDescA ENDS
FileResourceDescC STRUCT
    parent FileResourceDescAbstract {}
    _offset DWORD 0
    _size DWORD 0
    buffer DWORD 0; byte *
    field4_0x14 BYTE 0
    field5_0x15 BYTE 0
    field6_0x16 BYTE 0
    field7_0x17 BYTE 0
    field8_0x18 BYTE 0
    field9_0x19 BYTE 0
    field10_0x1a BYTE 0
    field11_0x1b BYTE 0
    field12_0x1c DWORD 0; FileReaderHelper *
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
FileResourceDescC ENDS
FileResourceDescD STRUCT
    parent FileResourceDescAbstract {}
    field1_0x8 BYTE 0
    field2_0x9 BYTE 0
    field3_0xa BYTE 0
    field4_0xb BYTE 0
    _size DWORD 0
    buffer DWORD 0; void *
FileResourceDescD ENDS
GameCameraAbstract STRUCT
    vtable DWORD 0; GameCameraAbstract_VTable *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc REAL4 0.0;
GameCameraAbstract ENDS
Line4 STRUCT
    start Vector4 {}
    _end Vector4 {}
Line4 ENDS
GameCameraLine STRUCT
    parent GameCameraAbstract {}
    line Line4 {}
GameCameraLine ENDS
GameCameraPoint STRUCT
    parent GameCameraAbstract {}
    pos Vector4 {}
GameCameraPoint ENDS
GameCameraPath STRUCT
    parent GameCameraAbstract {}
    path Path {}
GameCameraPath ENDS
Zone STRUCT
    field0_0x0 Matrix4 {}
    field1_0x40 DWORD 0; pointer
    field2_0x44 DWORD 0; pointer
    field3_0x48 BYTE 0
    field4_0x49 BYTE 0
    field5_0x4a BYTE 0
    field6_0x4b BYTE 0
    field7_0x4c BYTE 0
    field8_0x4d BYTE 0
    field9_0x4e BYTE 0
    field10_0x4f BYTE 0
Zone ENDS
GameCameraZone STRUCT
    parent GameCameraAbstract {}
    zone1 Zone {}
    zone2 Zone {}
GameCameraZone ENDS
GameCameraBoss STRUCT
    parent GameCameraAbstract {}
    matrix1 Matrix4 {}
    matrix2 Matrix4 {}
    field3_0x90 Vector4 {}
    field4_0xa0 BYTE 0
    field5_0xa1 BYTE 0
    field6_0xa2 BYTE 0
    field7_0xa3 BYTE 0
    field8_0xa4 BYTE 0
    field9_0xa5 BYTE 0
    field10_0xa6 BYTE 0
    field11_0xa7 BYTE 0
    field12_0xa8 BYTE 0
    field13_0xa9 BYTE 0
    field14_0xaa BYTE 0
    field15_0xab BYTE 0
    field16_0xac BYTE 0
    field17_0xad BYTE 0
    field18_0xae BYTE 0
    field19_0xaf BYTE 0
    field20_0xb0 DWORD 0; pointer
    field21_0xb4 BYTE 0
    field22_0xb5 BYTE 0
    field23_0xb6 BYTE 0
    field24_0xb7 BYTE 0
    field25_0xb8 BYTE 0
    field26_0xb9 BYTE 0
    field27_0xba BYTE 0
    field28_0xbb BYTE 0
    field29_0xbc BYTE 0
    field30_0xbd BYTE 0
    field31_0xbe BYTE 0
    field32_0xbf BYTE 0
    field33_0xc0 BYTE 0
    field34_0xc1 BYTE 0
    field35_0xc2 BYTE 0
    field36_0xc3 BYTE 0
    field37_0xc4 BYTE 0
    field38_0xc5 BYTE 0
    field39_0xc6 BYTE 0
    field40_0xc7 BYTE 0
    field41_0xc8 BYTE 0
    field42_0xc9 BYTE 0
    field43_0xca BYTE 0
    field44_0xcb BYTE 0
    field45_0xcc BYTE 0
    field46_0xcd BYTE 0
    field47_0xce BYTE 0
    field48_0xcf BYTE 0
    field49_0xd0 DWORD 0; pointer
    field50_0xd4 BYTE 0
    field51_0xd5 BYTE 0
    field52_0xd6 BYTE 0
    field53_0xd7 BYTE 0
    field54_0xd8 BYTE 0
    field55_0xd9 BYTE 0
    field56_0xda BYTE 0
    field57_0xdb BYTE 0
    field58_0xdc BYTE 0
    field59_0xdd BYTE 0
    field60_0xde BYTE 0
    field61_0xdf BYTE 0
GameCameraBoss ENDS
GameCameraPoint2 STRUCT
    parent GameCameraAbstract {}
    pos Vector4 {}
    field2_0x20 REAL4 0.0;
    field3_0x24 DWORD 0
GameCameraPoint2 ENDS
GameCameraLine2 STRUCT
    parent GameCameraAbstract {}
    line Line4 {}
    field2_0x30 REAL4 0.0;
    field3_0x34 DWORD 0
GameCameraLine2 ENDS
GameCameraSpline STRUCT
    parent GameCameraAbstract {}
    field1_0x10 DWORD 0; UnkFamily11A *
    field2_0x14 BYTE 0
    field3_0x15 BYTE 0
    field4_0x16 BYTE 0
    field5_0x17 BYTE 0
    field6_0x18 BYTE 0
    field7_0x19 BYTE 0
    field8_0x1a BYTE 0
    field9_0x1b BYTE 0
    field10_0x1c WORD 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
GameCameraSpline ENDS
GameCameraUnk1 STRUCT
    parent GameCameraAbstract {}
    field1_0x10 BYTE 0
    field2_0x11 BYTE 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    field17_0x20 BYTE 0
    field18_0x21 BYTE 0
    field19_0x22 BYTE 0
    field20_0x23 BYTE 0
    field21_0x24 BYTE 0
    field22_0x25 BYTE 0
    field23_0x26 BYTE 0
    field24_0x27 BYTE 0
    field25_0x28 BYTE 0
    field26_0x29 BYTE 0
    field27_0x2a BYTE 0
    field28_0x2b BYTE 0
    field29_0x2c BYTE 0
    field30_0x2d BYTE 0
    field31_0x2e BYTE 0
    field32_0x2f BYTE 0
    field33_0x30 BYTE 0
    field34_0x31 BYTE 0
    field35_0x32 BYTE 0
    field36_0x33 BYTE 0
    field37_0x34 BYTE 0
    field38_0x35 BYTE 0
    field39_0x36 BYTE 0
    field40_0x37 BYTE 0
    field41_0x38 BYTE 0
    field42_0x39 BYTE 0
    field43_0x3a BYTE 0
    field44_0x3b BYTE 0
    field45_0x3c BYTE 0
    field46_0x3d BYTE 0
    field47_0x3e BYTE 0
    field48_0x3f BYTE 0
    field49_0x40 BYTE 0
    field50_0x41 BYTE 0
    field51_0x42 BYTE 0
    field52_0x43 BYTE 0
    field53_0x44 BYTE 0
    field54_0x45 BYTE 0
    field55_0x46 BYTE 0
    field56_0x47 BYTE 0
    field57_0x48 BYTE 0
    field58_0x49 BYTE 0
    field59_0x4a BYTE 0
    field60_0x4b BYTE 0
    field61_0x4c BYTE 0
    field62_0x4d BYTE 0
    field63_0x4e BYTE 0
    field64_0x4f BYTE 0
    field65_0x50 BYTE 0
    field66_0x51 BYTE 0
    field67_0x52 BYTE 0
    field68_0x53 BYTE 0
    field69_0x54 BYTE 0
    field70_0x55 BYTE 0
    field71_0x56 BYTE 0
    field72_0x57 BYTE 0
    field73_0x58 BYTE 0
    field74_0x59 BYTE 0
    field75_0x5a BYTE 0
    field76_0x5b BYTE 0
    field77_0x5c BYTE 0
    field78_0x5d BYTE 0
    field79_0x5e BYTE 0
    field80_0x5f BYTE 0
    field81_0x60 BYTE 0
    field82_0x61 BYTE 0
    field83_0x62 BYTE 0
    field84_0x63 BYTE 0
    field85_0x64 BYTE 0
    field86_0x65 BYTE 0
    field87_0x66 BYTE 0
    field88_0x67 BYTE 0
    field89_0x68 BYTE 0
    field90_0x69 BYTE 0
    field91_0x6a BYTE 0
    field92_0x6b BYTE 0
    field93_0x6c BYTE 0
    field94_0x6d BYTE 0
    field95_0x6e BYTE 0
    field96_0x6f BYTE 0
GameCameraUnk1 ENDS
GameCameraUnk2 STRUCT
    parent GameCameraAbstract {}
    field1_0x10 Vector4 {}
    field2_0x20 REAL4 0.0;
    field3_0x24 BYTE 0
    field4_0x25 BYTE 0
    field5_0x26 BYTE 0
    field6_0x27 BYTE 0
    field7_0x28 BYTE 0
    field8_0x29 BYTE 0
    field9_0x2a BYTE 0
    field10_0x2b BYTE 0
    field11_0x2c BYTE 0
    field12_0x2d BYTE 0
    field13_0x2e BYTE 0
    field14_0x2f BYTE 0
    field15_0x30 Vector4 {}
    field16_0x40 BYTE 0
    field17_0x41 BYTE 0
    field18_0x42 BYTE 0
    field19_0x43 BYTE 0
    field20_0x44 BYTE 0
    field21_0x45 BYTE 0
    field22_0x46 BYTE 0
    field23_0x47 BYTE 0
    field24_0x48 BYTE 0
    field25_0x49 BYTE 0
    field26_0x4a BYTE 0
    field27_0x4b BYTE 0
    field28_0x4c BYTE 0
    field29_0x4d BYTE 0
    field30_0x4e BYTE 0
    field31_0x4f BYTE 0
GameCameraUnk2 ENDS
GameCameraUnk3 STRUCT
    parent GameCameraAbstract {}
    field1_0x10 BYTE 0
    field2_0x11 BYTE 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    field17_0x20 WORD 0
    field18_0x22 WORD 0
    field19_0x24 WORD 0
    field20_0x26 BYTE 0
    field21_0x27 BYTE 0
    field22_0x28 BYTE 0
    field23_0x29 BYTE 0
    field24_0x2a BYTE 0
    field25_0x2b BYTE 0
    field26_0x2c BYTE 0
    field27_0x2d BYTE 0
    field28_0x2e BYTE 0
    field29_0x2f BYTE 0
    field30_0x30 BYTE 0
    field31_0x31 BYTE 0
    field32_0x32 BYTE 0
    field33_0x33 BYTE 0
    field34_0x34 BYTE 0
    field35_0x35 BYTE 0
    field36_0x36 BYTE 0
    field37_0x37 BYTE 0
    field38_0x38 BYTE 0
    field39_0x39 BYTE 0
    field40_0x3a BYTE 0
    field41_0x3b BYTE 0
    field42_0x3c BYTE 0
    field43_0x3d BYTE 0
    field44_0x3e BYTE 0
    field45_0x3f BYTE 0
    field46_0x40 BYTE 0
    field47_0x41 BYTE 0
    field48_0x42 BYTE 0
    field49_0x43 BYTE 0
GameCameraUnk3 ENDS
UnkFamily11Abstract STRUCT
    vtable DWORD 0; UnkFamily11Abstract_VTable *
    cnt DWORD 0
    field2_0x8 DWORD 0; pointer
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
UnkFamily11Abstract ENDS
UnkFamily11A STRUCT
    parent UnkFamily11Abstract {}
    field1_0x14 DWORD 0; pointer
    field2_0x18 DWORD 0
    field3_0x1c BYTE 0
    field4_0x1d BYTE 0
    field5_0x1e BYTE 0
    field6_0x1f BYTE 0
    field7_0x20 BYTE 0
    field8_0x21 BYTE 0
    field9_0x22 BYTE 0
    field10_0x23 BYTE 0
    field11_0x24 BYTE 0
    field12_0x25 BYTE 0
    field13_0x26 BYTE 0
    field14_0x27 BYTE 0
    field15_0x28 BYTE 0
    field16_0x29 BYTE 0
    field17_0x2a BYTE 0
    field18_0x2b BYTE 0
    field19_0x2c BYTE 0
    field20_0x2d BYTE 0
    field21_0x2e BYTE 0
    field22_0x2f BYTE 0
    field23_0x30 BYTE 0
    field24_0x31 BYTE 0
    field25_0x32 BYTE 0
    field26_0x33 BYTE 0
    field27_0x34 BYTE 0
    field28_0x35 BYTE 0
    field29_0x36 BYTE 0
    field30_0x37 BYTE 0
    field31_0x38 BYTE 0
    field32_0x39 BYTE 0
    field33_0x3a BYTE 0
    field34_0x3b BYTE 0
    field35_0x3c BYTE 0
    field36_0x3d BYTE 0
    field37_0x3e BYTE 0
    field38_0x3f BYTE 0
    field39_0x40 BYTE 0
    field40_0x41 BYTE 0
    field41_0x42 BYTE 0
    field42_0x43 BYTE 0
    field43_0x44 BYTE 0
    field44_0x45 BYTE 0
    field45_0x46 BYTE 0
    field46_0x47 BYTE 0
    field47_0x48 DWORD 0
    field48_0x4c BYTE 0
    field49_0x4d BYTE 0
    field50_0x4e BYTE 0
    field51_0x4f BYTE 0
UnkFamily11A ENDS
LevelHolderAbstract STRUCT
    vtable DWORD 0; LevelHolder_VTable *
    worldChunk DWORD 0; WorldChunk *
    field2_0x8 DWORD 0; UnkFamily18Abstract *
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
    field7_0x10 BYTE 0
    field8_0x11 BYTE 0
    field9_0x12 BYTE 0
    field10_0x13 BYTE 0
    someNum DWORD 0
LevelHolderAbstract ENDS
LevelHolderSM STRUCT
    parent LevelHolderAbstract {}
    section DWORD 0; SectionSM *
    chunkDataRef DWORD 0; ChunkDataRefCounter *
LevelHolderSM ENDS
UnkFamily18Abstract STRUCT
    vtable DWORD 0; UnkFamily18Abstract_VTable *
UnkFamily18Abstract ENDS
UnkFamily18A STRUCT
    parent UnkFamily18Abstract {}
UnkFamily18A ENDS
UnkFamily18B STRUCT
    parent UnkFamily18Abstract {}
UnkFamily18B ENDS
SectionDataGameObject STRUCT
    parent SectionDataGameObjectBase {}
SectionDataGameObject ENDS
SectionDataAnimation STRUCT
    parent SectionDataAnimationBase {}
SectionDataAnimation ENDS
SectionDataCodeModel STRUCT
    parent SectionDataCodeModelBase {}
SectionDataCodeModel ENDS
SectionDataOGI STRUCT
    parent SectionDataOGIBase {}
SectionDataOGI ENDS
SectionDataScript STRUCT
    parent SectionDataScriptBase {}
SectionDataScript ENDS
InstanceNodeU STRUCT
    parent InstanceNodeAbstract {}
    field1_0x18 REAL4 0.0;
    flags DWORD 0
    matrixPrev Matrix4 {}
    matrixNow Matrix4 {}
InstanceNodeU ENDS
IteratorB4Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB4Abstract ENDS
IteratorB4 STRUCT
    parent IteratorB4Abstract {}
    colection DWORD 0; pointer *
    index DWORD 0
IteratorB4 ENDS
IteratorE1Abstract STRUCT
    parent IteratorEAbstract {}
IteratorE1Abstract ENDS
IteratorE1 STRUCT
    parent IteratorE1Abstract {}
    collection DWORD 0; InstanceDataList *
    index DWORD 0
IteratorE1 ENDS
UnkFamily6F STRUCT
    parent UnkFamily6Abstract {}
    field1_0xe0 BYTE 0
    field2_0xe1 BYTE 0
    field3_0xe2 BYTE 0
    field4_0xe3 BYTE 0
    field5_0xe4 BYTE 0
    field6_0xe5 BYTE 0
    field7_0xe6 BYTE 0
    field8_0xe7 BYTE 0
    field9_0xe8 BYTE 0
    field10_0xe9 BYTE 0
    field11_0xea BYTE 0
    field12_0xeb BYTE 0
    field13_0xec BYTE 0
    field14_0xed BYTE 0
    field15_0xee BYTE 0
    field16_0xef BYTE 0
    field17_0xf0 DWORD 0
    field18_0xf4 BYTE 0
    field19_0xf5 BYTE 0
    field20_0xf6 BYTE 0
    field21_0xf7 BYTE 0
    field22_0xf8 BYTE 0
    field23_0xf9 BYTE 0
    field24_0xfa BYTE 0
    field25_0xfb BYTE 0
    field26_0xfc BYTE 0
    field27_0xfd BYTE 0
    field28_0xfe BYTE 0
    field29_0xff BYTE 0
UnkFamily6F ENDS
UnkFamily5AA STRUCT
    parent UnkFamily5A {}
    field1_0x14 WORD 0
    field2_0x16 BYTE 0
    field3_0x17 BYTE 0
    field4_0x18 DWORD 0
    field5_0x1c BYTE 0
    field6_0x1d BYTE 0
    field7_0x1e BYTE 0
    field8_0x1f BYTE 0
UnkFamily5AA ENDS
UnkFamily5Ptr STRUCT
    _ptr DWORD 0; UnkFamily5Base *
    unk DWORD 0
UnkFamily5Ptr ENDS
LevelHolderRM STRUCT
    parent LevelHolderAbstract {}
    section DWORD 0; SectionRM *
    levelDescriptor DWORD 0; AutoClass16 *
LevelHolderRM ENDS
AutoClass1 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    matrix Matrix4 {}
    field14_0x50 BYTE 0
    field15_0x51 BYTE 0
    field16_0x52 BYTE 0
    field17_0x53 BYTE 0
    field18_0x54 BYTE 0
    field19_0x55 BYTE 0
    field20_0x56 BYTE 0
    field21_0x57 BYTE 0
    field22_0x58 BYTE 0
    field23_0x59 BYTE 0
    field24_0x5a BYTE 0
    field25_0x5b BYTE 0
    field26_0x5c BYTE 0
    field27_0x5d BYTE 0
    field28_0x5e BYTE 0
    field29_0x5f BYTE 0
    field30_0x60 BYTE 0
    field31_0x61 BYTE 0
    field32_0x62 BYTE 0
    field33_0x63 BYTE 0
    field34_0x64 BYTE 0
    field35_0x65 BYTE 0
    field36_0x66 BYTE 0
    field37_0x67 BYTE 0
    field38_0x68 BYTE 0
    field39_0x69 BYTE 0
    field40_0x6a BYTE 0
    field41_0x6b BYTE 0
    field42_0x6c BYTE 0
    field43_0x6d BYTE 0
    field44_0x6e BYTE 0
    field45_0x6f BYTE 0
    field46_0x70 BYTE 0
    field47_0x71 BYTE 0
    field48_0x72 BYTE 0
    field49_0x73 BYTE 0
    field50_0x74 BYTE 0
    field51_0x75 BYTE 0
    field52_0x76 BYTE 0
    field53_0x77 BYTE 0
    field54_0x78 BYTE 0
    field55_0x79 BYTE 0
    field56_0x7a BYTE 0
    field57_0x7b BYTE 0
    field58_0x7c BYTE 0
    field59_0x7d BYTE 0
    field60_0x7e BYTE 0
    field61_0x7f BYTE 0
    field62_0x80 BYTE 0
    field63_0x81 BYTE 0
    field64_0x82 BYTE 0
    field65_0x83 BYTE 0
    field66_0x84 BYTE 0
    field67_0x85 BYTE 0
    field68_0x86 BYTE 0
    field69_0x87 BYTE 0
    field70_0x88 BYTE 0
    field71_0x89 BYTE 0
    field72_0x8a BYTE 0
    field73_0x8b BYTE 0
    field74_0x8c BYTE 0
    field75_0x8d BYTE 0
    field76_0x8e BYTE 0
    field77_0x8f BYTE 0
    field78_0x90 BYTE 0
    field79_0x91 BYTE 0
    field80_0x92 BYTE 0
    field81_0x93 BYTE 0
    field82_0x94 BYTE 0
    field83_0x95 BYTE 0
    field84_0x96 BYTE 0
    field85_0x97 BYTE 0
    field86_0x98 BYTE 0
    field87_0x99 BYTE 0
    field88_0x9a BYTE 0
    field89_0x9b BYTE 0
    field90_0x9c BYTE 0
    field91_0x9d BYTE 0
    field92_0x9e BYTE 0
    field93_0x9f BYTE 0
    field94_0xa0 BYTE 0
    field95_0xa1 BYTE 0
    field96_0xa2 BYTE 0
    field97_0xa3 BYTE 0
    field98_0xa4 BYTE 0
    field99_0xa5 BYTE 0
    field100_0xa6 BYTE 0
    field101_0xa7 BYTE 0
    field102_0xa8 BYTE 0
    field103_0xa9 BYTE 0
    field104_0xaa BYTE 0
    field105_0xab BYTE 0
    field106_0xac BYTE 0
    field107_0xad BYTE 0
    field108_0xae BYTE 0
    field109_0xaf BYTE 0
    field110_0xb0 BYTE 0
    field111_0xb1 BYTE 0
    field112_0xb2 BYTE 0
    field113_0xb3 BYTE 0
    field114_0xb4 BYTE 0
    field115_0xb5 BYTE 0
    field116_0xb6 BYTE 0
    field117_0xb7 BYTE 0
    field118_0xb8 BYTE 0
    field119_0xb9 BYTE 0
    field120_0xba BYTE 0
    field121_0xbb BYTE 0
    field122_0xbc BYTE 0
    field123_0xbd BYTE 0
    field124_0xbe BYTE 0
    field125_0xbf BYTE 0
    field126_0xc0 BYTE 0
    field127_0xc1 BYTE 0
    field128_0xc2 BYTE 0
    field129_0xc3 BYTE 0
    field130_0xc4 BYTE 0
    field131_0xc5 BYTE 0
    field132_0xc6 BYTE 0
    field133_0xc7 BYTE 0
    field134_0xc8 BYTE 0
    field135_0xc9 BYTE 0
    field136_0xca BYTE 0
    field137_0xcb BYTE 0
    field138_0xcc BYTE 0
    field139_0xcd BYTE 0
    field140_0xce BYTE 0
    field141_0xcf BYTE 0
    field142_0xd0 BYTE 0
    field143_0xd1 BYTE 0
    field144_0xd2 BYTE 0
    field145_0xd3 BYTE 0
    field146_0xd4 BYTE 0
    field147_0xd5 BYTE 0
    field148_0xd6 BYTE 0
    field149_0xd7 BYTE 0
    field150_0xd8 BYTE 0
    field151_0xd9 BYTE 0
    field152_0xda BYTE 0
    field153_0xdb BYTE 0
    field154_0xdc BYTE 0
    field155_0xdd BYTE 0
    field156_0xde BYTE 0
    field157_0xdf BYTE 0
    field158_0xe0 BYTE 0
    field159_0xe1 BYTE 0
    field160_0xe2 BYTE 0
    field161_0xe3 BYTE 0
    field162_0xe4 BYTE 0
    field163_0xe5 BYTE 0
    field164_0xe6 BYTE 0
    field165_0xe7 BYTE 0
    field166_0xe8 BYTE 0
    field167_0xe9 BYTE 0
    field168_0xea BYTE 0
    field169_0xeb BYTE 0
    field170_0xec BYTE 0
    field171_0xed BYTE 0
    field172_0xee BYTE 0
    field173_0xef BYTE 0
    field174_0xf0 BYTE 0
    field175_0xf1 BYTE 0
    field176_0xf2 BYTE 0
    field177_0xf3 BYTE 0
    field178_0xf4 BYTE 0
    field179_0xf5 BYTE 0
    field180_0xf6 BYTE 0
    field181_0xf7 BYTE 0
    field182_0xf8 BYTE 0
    field183_0xf9 BYTE 0
    field184_0xfa BYTE 0
    field185_0xfb BYTE 0
    field186_0xfc BYTE 0
    field187_0xfd BYTE 0
    field188_0xfe BYTE 0
    field189_0xff BYTE 0
    field190_0x100 BYTE 0
    field191_0x101 BYTE 0
    field192_0x102 BYTE 0
    field193_0x103 BYTE 0
    field194_0x104 BYTE 0
    field195_0x105 BYTE 0
    field196_0x106 BYTE 0
    field197_0x107 BYTE 0
    field198_0x108 BYTE 0
    field199_0x109 BYTE 0
    field200_0x10a BYTE 0
    field201_0x10b BYTE 0
    field202_0x10c BYTE 0
    field203_0x10d BYTE 0
    field204_0x10e BYTE 0
    field205_0x10f BYTE 0
    field206_0x110 DWORD 0
    field207_0x114 DWORD 0
    field208_0x118 BYTE 0
    field209_0x119 BYTE 0
    field210_0x11a BYTE 0
    field211_0x11b BYTE 0
    field212_0x11c BYTE 0
    field213_0x11d BYTE 0
    field214_0x11e BYTE 0
    field215_0x11f BYTE 0
    field216_0x120 DWORD 0
    field217_0x124 DWORD 0
    chunkList DWORD 0; ChunkList *
    str1 TwinString {}
    str2 TwinString {}
    field221_0x144 DWORD 0
    field222_0x148 DWORD 0
    field223_0x14c DWORD 0
    field224_0x150 DWORD 0
    field225_0x154 DWORD 0
    field226_0x158 DWORD 0
    field227_0x15c DWORD 0
    field228_0x160 DWORD 0
    field229_0x164 DWORD 0
    field230_0x168 DWORD 0
    field231_0x16c DWORD 0
    field232_0x170 DWORD 0
    field233_0x174 REAL4 0.0;
    field234_0x178 BYTE 0
    field235_0x179 BYTE 0
    field236_0x17a BYTE 0
    field237_0x17b BYTE 0
    field238_0x17c BYTE 0
    field239_0x17d BYTE 0
    field240_0x17e BYTE 0
    field241_0x17f BYTE 0
    field242_0x180 DWORD 0
    field243_0x184 DWORD 0
    field244_0x188 DWORD 0
    field245_0x18c REAL4 0.0;
    field246_0x190 BYTE 0
    field247_0x191 BYTE 0
    field248_0x192 BYTE 0
    field249_0x193 BYTE 0
    field250_0x194 BYTE 0
    field251_0x195 BYTE 0
    field252_0x196 BYTE 0
    field253_0x197 BYTE 0
    field254_0x198 BYTE 0
    field255_0x199 BYTE 0
    field256_0x19a BYTE 0
    field257_0x19b BYTE 0
    field258_0x19c BYTE 0
    field259_0x19d BYTE 0
    field260_0x19e BYTE 0
    field261_0x19f BYTE 0
    field262_0x1a0 BYTE 0
    field263_0x1a1 BYTE 0
    field264_0x1a2 BYTE 0
    field265_0x1a3 BYTE 0
    field266_0x1a4 BYTE 0
    field267_0x1a5 BYTE 0
    field268_0x1a6 BYTE 0
    field269_0x1a7 BYTE 0
    field270_0x1a8 BYTE 0
    field271_0x1a9 BYTE 0
    field272_0x1aa BYTE 0
    field273_0x1ab BYTE 0
    field274_0x1ac BYTE 0
    field275_0x1ad BYTE 0
    field276_0x1ae BYTE 0
    field277_0x1af BYTE 0
    field278_0x1b0 BYTE 0
    field279_0x1b1 BYTE 0
    field280_0x1b2 BYTE 0
    field281_0x1b3 BYTE 0
    field282_0x1b4 BYTE 0
    field283_0x1b5 BYTE 0
    field284_0x1b6 BYTE 0
    field285_0x1b7 BYTE 0
    field286_0x1b8 DWORD 0
    field287_0x1bc DWORD 0
    field288_0x1c0 DWORD 0
    field289_0x1c4 DWORD 0
    field290_0x1c8 DWORD 0
    field291_0x1cc DWORD 0
    field292_0x1d0 DWORD 0
    field293_0x1d4 DWORD 0
    field294_0x1d8 DWORD 0
    field295_0x1dc DWORD 0
    field296_0x1e0 DWORD 0
    field297_0x1e4 DWORD 0
    field298_0x1e8 DWORD 0
    field299_0x1ec BYTE 0
    field300_0x1ed BYTE 0
    field301_0x1ee BYTE 0
    field302_0x1ef BYTE 0
AutoClass1 ENDS
LightController STRUCT
    chunkData DWORD 0; ChunkData *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    field17_0x20 BYTE 0
    field18_0x21 BYTE 0
    field19_0x22 BYTE 0
    field20_0x23 BYTE 0
    field21_0x24 BYTE 0
    field22_0x25 BYTE 0
    field23_0x26 BYTE 0
    field24_0x27 BYTE 0
    field25_0x28 BYTE 0
    field26_0x29 BYTE 0
    field27_0x2a BYTE 0
    field28_0x2b BYTE 0
    field29_0x2c BYTE 0
    field30_0x2d BYTE 0
    field31_0x2e BYTE 0
    field32_0x2f BYTE 0
    field33_0x30 BYTE 0
    field34_0x31 BYTE 0
    field35_0x32 BYTE 0
    field36_0x33 BYTE 0
    field37_0x34 BYTE 0
    field38_0x35 BYTE 0
    field39_0x36 BYTE 0
    field40_0x37 BYTE 0
    field41_0x38 BYTE 0
    field42_0x39 BYTE 0
    field43_0x3a BYTE 0
    field44_0x3b BYTE 0
    field45_0x3c BYTE 0
    field46_0x3d BYTE 0
    field47_0x3e BYTE 0
    field48_0x3f BYTE 0
    field49_0x40 BYTE 0
    field50_0x41 BYTE 0
    field51_0x42 BYTE 0
    field52_0x43 BYTE 0
    field53_0x44 BYTE 0
    field54_0x45 BYTE 0
    field55_0x46 BYTE 0
    field56_0x47 BYTE 0
    field57_0x48 BYTE 0
    field58_0x49 BYTE 0
    field59_0x4a BYTE 0
    field60_0x4b BYTE 0
    field61_0x4c BYTE 0
    field62_0x4d BYTE 0
    field63_0x4e BYTE 0
    field64_0x4f BYTE 0
    field65_0x50 BYTE 0
    field66_0x51 BYTE 0
    field67_0x52 BYTE 0
    field68_0x53 BYTE 0
    field69_0x54 BYTE 0
    field70_0x55 BYTE 0
    field71_0x56 BYTE 0
    field72_0x57 BYTE 0
    field73_0x58 BYTE 0
    field74_0x59 BYTE 0
    field75_0x5a BYTE 0
    field76_0x5b BYTE 0
    field77_0x5c BYTE 0
    field78_0x5d BYTE 0
    field79_0x5e BYTE 0
    field80_0x5f BYTE 0
    field81_0x60 BYTE 0
    field82_0x61 BYTE 0
    field83_0x62 BYTE 0
    field84_0x63 BYTE 0
    field85_0x64 BYTE 0
    field86_0x65 BYTE 0
    field87_0x66 BYTE 0
    field88_0x67 BYTE 0
    field89_0x68 BYTE 0
    field90_0x69 BYTE 0
    field91_0x6a BYTE 0
    field92_0x6b BYTE 0
    field93_0x6c BYTE 0
    field94_0x6d BYTE 0
    field95_0x6e BYTE 0
    field96_0x6f BYTE 0
    field97_0x70 BYTE 0
    field98_0x71 BYTE 0
    field99_0x72 BYTE 0
    field100_0x73 BYTE 0
    field101_0x74 BYTE 0
    field102_0x75 BYTE 0
    field103_0x76 BYTE 0
    field104_0x77 BYTE 0
    field105_0x78 BYTE 0
    field106_0x79 BYTE 0
    field107_0x7a BYTE 0
    field108_0x7b BYTE 0
    field109_0x7c BYTE 0
    field110_0x7d BYTE 0
    field111_0x7e BYTE 0
    field112_0x7f BYTE 0
    field113_0x80 BYTE 0
    field114_0x81 BYTE 0
    field115_0x82 BYTE 0
    field116_0x83 BYTE 0
    field117_0x84 BYTE 0
    field118_0x85 BYTE 0
    field119_0x86 BYTE 0
    field120_0x87 BYTE 0
    field121_0x88 BYTE 0
    field122_0x89 BYTE 0
    field123_0x8a BYTE 0
    field124_0x8b BYTE 0
    field125_0x8c BYTE 0
    field126_0x8d BYTE 0
    field127_0x8e BYTE 0
    field128_0x8f BYTE 0
    field129_0x90 BYTE 0
    field130_0x91 BYTE 0
    field131_0x92 BYTE 0
    field132_0x93 BYTE 0
    field133_0x94 BYTE 0
    field134_0x95 BYTE 0
    field135_0x96 BYTE 0
    field136_0x97 BYTE 0
    field137_0x98 BYTE 0
    field138_0x99 BYTE 0
    field139_0x9a BYTE 0
    field140_0x9b BYTE 0
    field141_0x9c BYTE 0
    field142_0x9d BYTE 0
    field143_0x9e BYTE 0
    field144_0x9f BYTE 0
    field145_0xa0 BYTE 0
    field146_0xa1 BYTE 0
    field147_0xa2 BYTE 0
    field148_0xa3 BYTE 0
    field149_0xa4 BYTE 0
    field150_0xa5 BYTE 0
    field151_0xa6 BYTE 0
    field152_0xa7 BYTE 0
    field153_0xa8 BYTE 0
    field154_0xa9 BYTE 0
    field155_0xaa BYTE 0
    field156_0xab BYTE 0
    field157_0xac BYTE 0
    field158_0xad BYTE 0
    field159_0xae BYTE 0
    field160_0xaf BYTE 0
    field161_0xb0 BYTE 0
    field162_0xb1 BYTE 0
    field163_0xb2 BYTE 0
    field164_0xb3 BYTE 0
    field165_0xb4 BYTE 0
    field166_0xb5 BYTE 0
    field167_0xb6 BYTE 0
    field168_0xb7 BYTE 0
    field169_0xb8 BYTE 0
    field170_0xb9 BYTE 0
    field171_0xba BYTE 0
    field172_0xbb BYTE 0
    field173_0xbc BYTE 0
    field174_0xbd BYTE 0
    field175_0xbe BYTE 0
    field176_0xbf BYTE 0
    field177_0xc0 BYTE 0
    field178_0xc1 BYTE 0
    field179_0xc2 BYTE 0
    field180_0xc3 BYTE 0
    field181_0xc4 BYTE 0
    field182_0xc5 BYTE 0
    field183_0xc6 BYTE 0
    field184_0xc7 BYTE 0
    field185_0xc8 BYTE 0
    field186_0xc9 BYTE 0
    field187_0xca BYTE 0
    field188_0xcb BYTE 0
    field189_0xcc BYTE 0
    field190_0xcd BYTE 0
    field191_0xce BYTE 0
    field192_0xcf BYTE 0
    field193_0xd0 BYTE 0
    field194_0xd1 BYTE 0
    field195_0xd2 BYTE 0
    field196_0xd3 BYTE 0
    field197_0xd4 BYTE 0
    field198_0xd5 BYTE 0
    field199_0xd6 BYTE 0
    field200_0xd7 BYTE 0
    field201_0xd8 BYTE 0
    field202_0xd9 BYTE 0
    field203_0xda BYTE 0
    field204_0xdb BYTE 0
    field205_0xdc BYTE 0
    field206_0xdd BYTE 0
    field207_0xde BYTE 0
    field208_0xdf BYTE 0
    field209_0xe0 BYTE 0
    field210_0xe1 BYTE 0
    field211_0xe2 BYTE 0
    field212_0xe3 BYTE 0
    field213_0xe4 BYTE 0
    field214_0xe5 BYTE 0
    field215_0xe6 BYTE 0
    field216_0xe7 BYTE 0
    field217_0xe8 BYTE 0
    field218_0xe9 BYTE 0
    field219_0xea BYTE 0
    field220_0xeb BYTE 0
    field221_0xec BYTE 0
    field222_0xed BYTE 0
    field223_0xee BYTE 0
    field224_0xef BYTE 0
    field225_0xf0 BYTE 0
    field226_0xf1 BYTE 0
    field227_0xf2 BYTE 0
    field228_0xf3 BYTE 0
    field229_0xf4 BYTE 0
    field230_0xf5 BYTE 0
    field231_0xf6 BYTE 0
    field232_0xf7 BYTE 0
    field233_0xf8 BYTE 0
    field234_0xf9 BYTE 0
    field235_0xfa BYTE 0
    field236_0xfb BYTE 0
    field237_0xfc BYTE 0
    field238_0xfd BYTE 0
    field239_0xfe BYTE 0
    field240_0xff BYTE 0
    field241_0x100 BYTE 0
    field242_0x101 BYTE 0
    field243_0x102 BYTE 0
    field244_0x103 BYTE 0
    field245_0x104 BYTE 0
    field246_0x105 BYTE 0
    field247_0x106 BYTE 0
    field248_0x107 BYTE 0
    field249_0x108 BYTE 0
    field250_0x109 BYTE 0
    field251_0x10a BYTE 0
    field252_0x10b BYTE 0
    field253_0x10c BYTE 0
    field254_0x10d BYTE 0
    field255_0x10e BYTE 0
    field256_0x10f BYTE 0
    field257_0x110 BYTE 0
    field258_0x111 BYTE 0
    field259_0x112 BYTE 0
    field260_0x113 BYTE 0
    field261_0x114 BYTE 0
    field262_0x115 BYTE 0
    field263_0x116 BYTE 0
    field264_0x117 BYTE 0
    field265_0x118 BYTE 0
    field266_0x119 BYTE 0
    field267_0x11a BYTE 0
    field268_0x11b BYTE 0
    field269_0x11c BYTE 0
    field270_0x11d BYTE 0
    field271_0x11e BYTE 0
    field272_0x11f BYTE 0
    field273_0x120 BYTE 0
    field274_0x121 BYTE 0
    field275_0x122 BYTE 0
    field276_0x123 BYTE 0
    field277_0x124 BYTE 0
    field278_0x125 BYTE 0
    field279_0x126 BYTE 0
    field280_0x127 BYTE 0
    field281_0x128 BYTE 0
    field282_0x129 BYTE 0
    field283_0x12a BYTE 0
    field284_0x12b BYTE 0
    field285_0x12c BYTE 0
    field286_0x12d BYTE 0
    field287_0x12e BYTE 0
    field288_0x12f BYTE 0
    field289_0x130 BYTE 0
    field290_0x131 BYTE 0
    field291_0x132 BYTE 0
    field292_0x133 BYTE 0
    field293_0x134 BYTE 0
    field294_0x135 BYTE 0
    field295_0x136 BYTE 0
    field296_0x137 BYTE 0
    field297_0x138 BYTE 0
    field298_0x139 BYTE 0
    field299_0x13a BYTE 0
    field300_0x13b BYTE 0
    field301_0x13c BYTE 0
    field302_0x13d BYTE 0
    field303_0x13e BYTE 0
    field304_0x13f BYTE 0
    field305_0x140 BYTE 0
    field306_0x141 BYTE 0
    field307_0x142 BYTE 0
    field308_0x143 BYTE 0
    field309_0x144 BYTE 0
    field310_0x145 BYTE 0
    field311_0x146 BYTE 0
    field312_0x147 BYTE 0
    field313_0x148 BYTE 0
    field314_0x149 BYTE 0
    field315_0x14a BYTE 0
    field316_0x14b BYTE 0
    field317_0x14c BYTE 0
    field318_0x14d BYTE 0
    field319_0x14e BYTE 0
    field320_0x14f BYTE 0
    field321_0x150 BYTE 0
    field322_0x151 BYTE 0
    field323_0x152 BYTE 0
    field324_0x153 BYTE 0
    field325_0x154 BYTE 0
    field326_0x155 BYTE 0
    field327_0x156 BYTE 0
    field328_0x157 BYTE 0
    field329_0x158 BYTE 0
    field330_0x159 BYTE 0
    field331_0x15a BYTE 0
    field332_0x15b BYTE 0
    field333_0x15c BYTE 0
    field334_0x15d BYTE 0
    field335_0x15e BYTE 0
    field336_0x15f BYTE 0
    field337_0x160 BYTE 0
    field338_0x161 BYTE 0
    field339_0x162 BYTE 0
    field340_0x163 BYTE 0
    field341_0x164 BYTE 0
    field342_0x165 BYTE 0
    field343_0x166 BYTE 0
    field344_0x167 BYTE 0
    field345_0x168 BYTE 0
    field346_0x169 BYTE 0
    field347_0x16a BYTE 0
    field348_0x16b BYTE 0
    field349_0x16c BYTE 0
    field350_0x16d BYTE 0
    field351_0x16e BYTE 0
    field352_0x16f BYTE 0
    field353_0x170 BYTE 0
    field354_0x171 BYTE 0
    field355_0x172 BYTE 0
    field356_0x173 BYTE 0
    field357_0x174 BYTE 0
    field358_0x175 BYTE 0
    field359_0x176 BYTE 0
    field360_0x177 BYTE 0
    field361_0x178 BYTE 0
    field362_0x179 BYTE 0
    field363_0x17a BYTE 0
    field364_0x17b BYTE 0
    field365_0x17c BYTE 0
    field366_0x17d BYTE 0
    field367_0x17e BYTE 0
    field368_0x17f BYTE 0
    field369_0x180 BYTE 0
    field370_0x181 BYTE 0
    field371_0x182 BYTE 0
    field372_0x183 BYTE 0
    field373_0x184 BYTE 0
    field374_0x185 BYTE 0
    field375_0x186 BYTE 0
    field376_0x187 BYTE 0
    field377_0x188 BYTE 0
    field378_0x189 BYTE 0
    field379_0x18a BYTE 0
    field380_0x18b BYTE 0
    field381_0x18c BYTE 0
    field382_0x18d BYTE 0
    field383_0x18e BYTE 0
    field384_0x18f BYTE 0
    field385_0x190 BYTE 0
    field386_0x191 BYTE 0
    field387_0x192 BYTE 0
    field388_0x193 BYTE 0
    field389_0x194 BYTE 0
    field390_0x195 BYTE 0
    field391_0x196 BYTE 0
    field392_0x197 BYTE 0
    field393_0x198 BYTE 0
    field394_0x199 BYTE 0
    field395_0x19a BYTE 0
    field396_0x19b BYTE 0
    field397_0x19c BYTE 0
    field398_0x19d BYTE 0
    field399_0x19e BYTE 0
    field400_0x19f BYTE 0
    field401_0x1a0 BYTE 0
    field402_0x1a1 BYTE 0
    field403_0x1a2 BYTE 0
    field404_0x1a3 BYTE 0
    field405_0x1a4 BYTE 0
    field406_0x1a5 BYTE 0
    field407_0x1a6 BYTE 0
    field408_0x1a7 BYTE 0
    field409_0x1a8 BYTE 0
    field410_0x1a9 BYTE 0
    field411_0x1aa BYTE 0
    field412_0x1ab BYTE 0
    field413_0x1ac BYTE 0
    field414_0x1ad BYTE 0
    field415_0x1ae BYTE 0
    field416_0x1af BYTE 0
    field417_0x1b0 BYTE 0
    field418_0x1b1 BYTE 0
    field419_0x1b2 BYTE 0
    field420_0x1b3 BYTE 0
    field421_0x1b4 BYTE 0
    field422_0x1b5 BYTE 0
    field423_0x1b6 BYTE 0
    field424_0x1b7 BYTE 0
    field425_0x1b8 BYTE 0
    field426_0x1b9 BYTE 0
    field427_0x1ba BYTE 0
    field428_0x1bb BYTE 0
    field429_0x1bc BYTE 0
    field430_0x1bd BYTE 0
    field431_0x1be BYTE 0
    field432_0x1bf BYTE 0
    field433_0x1c0 BYTE 0
    field434_0x1c1 BYTE 0
    field435_0x1c2 BYTE 0
    field436_0x1c3 BYTE 0
    field437_0x1c4 BYTE 0
    field438_0x1c5 BYTE 0
    field439_0x1c6 BYTE 0
    field440_0x1c7 BYTE 0
    field441_0x1c8 BYTE 0
    field442_0x1c9 BYTE 0
    field443_0x1ca BYTE 0
    field444_0x1cb BYTE 0
    field445_0x1cc BYTE 0
    field446_0x1cd BYTE 0
    field447_0x1ce BYTE 0
    field448_0x1cf BYTE 0
    field449_0x1d0 BYTE 0
    field450_0x1d1 BYTE 0
    field451_0x1d2 BYTE 0
    field452_0x1d3 BYTE 0
    field453_0x1d4 BYTE 0
    field454_0x1d5 BYTE 0
    field455_0x1d6 BYTE 0
    field456_0x1d7 BYTE 0
    field457_0x1d8 BYTE 0
    field458_0x1d9 BYTE 0
    field459_0x1da BYTE 0
    field460_0x1db BYTE 0
    field461_0x1dc BYTE 0
    field462_0x1dd BYTE 0
    field463_0x1de BYTE 0
    field464_0x1df BYTE 0
    field465_0x1e0 BYTE 0
    field466_0x1e1 BYTE 0
    field467_0x1e2 BYTE 0
    field468_0x1e3 BYTE 0
    field469_0x1e4 BYTE 0
    field470_0x1e5 BYTE 0
    field471_0x1e6 BYTE 0
    field472_0x1e7 BYTE 0
    field473_0x1e8 BYTE 0
    field474_0x1e9 BYTE 0
    field475_0x1ea BYTE 0
    field476_0x1eb BYTE 0
    field477_0x1ec BYTE 0
    field478_0x1ed BYTE 0
    field479_0x1ee BYTE 0
    field480_0x1ef BYTE 0
    field481_0x1f0 BYTE 0
    field482_0x1f1 BYTE 0
    field483_0x1f2 BYTE 0
    field484_0x1f3 BYTE 0
    field485_0x1f4 BYTE 0
    field486_0x1f5 BYTE 0
    field487_0x1f6 BYTE 0
    field488_0x1f7 BYTE 0
    field489_0x1f8 BYTE 0
    field490_0x1f9 BYTE 0
    field491_0x1fa BYTE 0
    field492_0x1fb BYTE 0
    field493_0x1fc BYTE 0
    field494_0x1fd BYTE 0
    field495_0x1fe BYTE 0
    field496_0x1ff BYTE 0
    field497_0x200 BYTE 0
    field498_0x201 BYTE 0
    field499_0x202 BYTE 0
    field500_0x203 BYTE 0
    field501_0x204 BYTE 0
    field502_0x205 BYTE 0
    field503_0x206 BYTE 0
    field504_0x207 BYTE 0
    field505_0x208 BYTE 0
    field506_0x209 BYTE 0
    field507_0x20a BYTE 0
    field508_0x20b BYTE 0
    field509_0x20c BYTE 0
    field510_0x20d BYTE 0
    field511_0x20e BYTE 0
    field512_0x20f BYTE 0
    field513_0x210 BYTE 0
    field514_0x211 BYTE 0
    field515_0x212 BYTE 0
    field516_0x213 BYTE 0
    field517_0x214 BYTE 0
    field518_0x215 BYTE 0
    field519_0x216 BYTE 0
    field520_0x217 BYTE 0
    field521_0x218 BYTE 0
    field522_0x219 BYTE 0
    field523_0x21a BYTE 0
    field524_0x21b BYTE 0
    field525_0x21c BYTE 0
    field526_0x21d BYTE 0
    field527_0x21e BYTE 0
    field528_0x21f BYTE 0
    field529_0x220 BYTE 0
    field530_0x221 BYTE 0
    field531_0x222 BYTE 0
    field532_0x223 BYTE 0
    field533_0x224 BYTE 0
    field534_0x225 BYTE 0
    field535_0x226 BYTE 0
    field536_0x227 BYTE 0
    field537_0x228 BYTE 0
    field538_0x229 BYTE 0
    field539_0x22a BYTE 0
    field540_0x22b BYTE 0
    field541_0x22c BYTE 0
    field542_0x22d BYTE 0
    field543_0x22e BYTE 0
    field544_0x22f BYTE 0
    field545_0x230 BYTE 0
    field546_0x231 BYTE 0
    field547_0x232 BYTE 0
    field548_0x233 BYTE 0
    field549_0x234 BYTE 0
    field550_0x235 BYTE 0
    field551_0x236 BYTE 0
    field552_0x237 BYTE 0
    field553_0x238 BYTE 0
    field554_0x239 BYTE 0
    field555_0x23a BYTE 0
    field556_0x23b BYTE 0
    field557_0x23c BYTE 0
    field558_0x23d BYTE 0
    field559_0x23e BYTE 0
    field560_0x23f BYTE 0
    field561_0x240 BYTE 0
    field562_0x241 BYTE 0
    field563_0x242 BYTE 0
    field564_0x243 BYTE 0
    field565_0x244 BYTE 0
    field566_0x245 BYTE 0
    field567_0x246 BYTE 0
    field568_0x247 BYTE 0
    field569_0x248 BYTE 0
    field570_0x249 BYTE 0
    field571_0x24a BYTE 0
    field572_0x24b BYTE 0
    field573_0x24c BYTE 0
    field574_0x24d BYTE 0
    field575_0x24e BYTE 0
    field576_0x24f BYTE 0
    field577_0x250 BYTE 0
    field578_0x251 BYTE 0
    field579_0x252 BYTE 0
    field580_0x253 BYTE 0
    field581_0x254 BYTE 0
    field582_0x255 BYTE 0
    field583_0x256 BYTE 0
    field584_0x257 BYTE 0
    field585_0x258 BYTE 0
    field586_0x259 BYTE 0
    field587_0x25a BYTE 0
    field588_0x25b BYTE 0
    field589_0x25c BYTE 0
    field590_0x25d BYTE 0
    field591_0x25e BYTE 0
    field592_0x25f BYTE 0
    field593_0x260 BYTE 0
    field594_0x261 BYTE 0
    field595_0x262 BYTE 0
    field596_0x263 BYTE 0
    field597_0x264 BYTE 0
    field598_0x265 BYTE 0
    field599_0x266 BYTE 0
    field600_0x267 BYTE 0
    field601_0x268 BYTE 0
    field602_0x269 BYTE 0
    field603_0x26a BYTE 0
    field604_0x26b BYTE 0
    field605_0x26c BYTE 0
    field606_0x26d BYTE 0
    field607_0x26e BYTE 0
    field608_0x26f BYTE 0
    field609_0x270 BYTE 0
    field610_0x271 BYTE 0
    field611_0x272 BYTE 0
    field612_0x273 BYTE 0
    field613_0x274 BYTE 0
    field614_0x275 BYTE 0
    field615_0x276 BYTE 0
    field616_0x277 BYTE 0
    field617_0x278 BYTE 0
    field618_0x279 BYTE 0
    field619_0x27a BYTE 0
    field620_0x27b BYTE 0
    field621_0x27c BYTE 0
    field622_0x27d BYTE 0
    field623_0x27e BYTE 0
    field624_0x27f BYTE 0
    field625_0x280 BYTE 0
    field626_0x281 BYTE 0
    field627_0x282 BYTE 0
    field628_0x283 BYTE 0
    field629_0x284 BYTE 0
    field630_0x285 BYTE 0
    field631_0x286 BYTE 0
    field632_0x287 BYTE 0
    field633_0x288 BYTE 0
    field634_0x289 BYTE 0
    field635_0x28a BYTE 0
    field636_0x28b BYTE 0
    field637_0x28c BYTE 0
    field638_0x28d BYTE 0
    field639_0x28e BYTE 0
    field640_0x28f BYTE 0
    field641_0x290 BYTE 0
    field642_0x291 BYTE 0
    field643_0x292 BYTE 0
    field644_0x293 BYTE 0
    field645_0x294 BYTE 0
    field646_0x295 BYTE 0
    field647_0x296 BYTE 0
    field648_0x297 BYTE 0
    field649_0x298 BYTE 0
    field650_0x299 BYTE 0
    field651_0x29a BYTE 0
    field652_0x29b BYTE 0
    field653_0x29c BYTE 0
    field654_0x29d BYTE 0
    field655_0x29e BYTE 0
    field656_0x29f BYTE 0
    field657_0x2a0 BYTE 0
    field658_0x2a1 BYTE 0
    field659_0x2a2 BYTE 0
    field660_0x2a3 BYTE 0
    field661_0x2a4 BYTE 0
    field662_0x2a5 BYTE 0
    field663_0x2a6 BYTE 0
    field664_0x2a7 BYTE 0
    field665_0x2a8 BYTE 0
    field666_0x2a9 BYTE 0
    field667_0x2aa BYTE 0
    field668_0x2ab BYTE 0
    field669_0x2ac BYTE 0
    field670_0x2ad BYTE 0
    field671_0x2ae BYTE 0
    field672_0x2af BYTE 0
    field673_0x2b0 BYTE 0
    field674_0x2b1 BYTE 0
    field675_0x2b2 BYTE 0
    field676_0x2b3 BYTE 0
    field677_0x2b4 BYTE 0
    field678_0x2b5 BYTE 0
    field679_0x2b6 BYTE 0
    field680_0x2b7 BYTE 0
    field681_0x2b8 BYTE 0
    field682_0x2b9 BYTE 0
    field683_0x2ba BYTE 0
    field684_0x2bb BYTE 0
    field685_0x2bc BYTE 0
    field686_0x2bd BYTE 0
    field687_0x2be BYTE 0
    field688_0x2bf BYTE 0
    field689_0x2c0 BYTE 0
    field690_0x2c1 BYTE 0
    field691_0x2c2 BYTE 0
    field692_0x2c3 BYTE 0
    field693_0x2c4 BYTE 0
    field694_0x2c5 BYTE 0
    field695_0x2c6 BYTE 0
    field696_0x2c7 BYTE 0
    field697_0x2c8 BYTE 0
    field698_0x2c9 BYTE 0
    field699_0x2ca BYTE 0
    field700_0x2cb BYTE 0
    field701_0x2cc BYTE 0
    field702_0x2cd BYTE 0
    field703_0x2ce BYTE 0
    field704_0x2cf BYTE 0
    field705_0x2d0 BYTE 0
    field706_0x2d1 BYTE 0
    field707_0x2d2 BYTE 0
    field708_0x2d3 BYTE 0
    field709_0x2d4 BYTE 0
    field710_0x2d5 BYTE 0
    field711_0x2d6 BYTE 0
    field712_0x2d7 BYTE 0
    field713_0x2d8 BYTE 0
    field714_0x2d9 BYTE 0
    field715_0x2da BYTE 0
    field716_0x2db BYTE 0
    field717_0x2dc BYTE 0
    field718_0x2dd BYTE 0
    field719_0x2de BYTE 0
    field720_0x2df BYTE 0
    field721_0x2e0 BYTE 0
    field722_0x2e1 BYTE 0
    field723_0x2e2 BYTE 0
    field724_0x2e3 BYTE 0
    field725_0x2e4 BYTE 0
    field726_0x2e5 BYTE 0
    field727_0x2e6 BYTE 0
    field728_0x2e7 BYTE 0
    field729_0x2e8 BYTE 0
    field730_0x2e9 BYTE 0
    field731_0x2ea BYTE 0
    field732_0x2eb BYTE 0
    field733_0x2ec BYTE 0
    field734_0x2ed BYTE 0
    field735_0x2ee BYTE 0
    field736_0x2ef BYTE 0
    field737_0x2f0 BYTE 0
    field738_0x2f1 BYTE 0
    field739_0x2f2 BYTE 0
    field740_0x2f3 BYTE 0
    field741_0x2f4 BYTE 0
    field742_0x2f5 BYTE 0
    field743_0x2f6 BYTE 0
    field744_0x2f7 BYTE 0
    field745_0x2f8 BYTE 0
    field746_0x2f9 BYTE 0
    field747_0x2fa BYTE 0
    field748_0x2fb BYTE 0
    field749_0x2fc BYTE 0
    field750_0x2fd BYTE 0
    field751_0x2fe BYTE 0
    field752_0x2ff BYTE 0
    field753_0x300 BYTE 0
    field754_0x301 BYTE 0
    field755_0x302 BYTE 0
    field756_0x303 BYTE 0
    field757_0x304 BYTE 0
    field758_0x305 BYTE 0
    field759_0x306 BYTE 0
    field760_0x307 BYTE 0
    field761_0x308 BYTE 0
    field762_0x309 BYTE 0
    field763_0x30a BYTE 0
    field764_0x30b BYTE 0
    field765_0x30c BYTE 0
    field766_0x30d BYTE 0
    field767_0x30e BYTE 0
    field768_0x30f BYTE 0
    field769_0x310 BYTE 0
    field770_0x311 BYTE 0
    field771_0x312 BYTE 0
    field772_0x313 BYTE 0
    field773_0x314 BYTE 0
    field774_0x315 BYTE 0
    field775_0x316 BYTE 0
    field776_0x317 BYTE 0
    field777_0x318 BYTE 0
    field778_0x319 BYTE 0
    field779_0x31a BYTE 0
    field780_0x31b BYTE 0
    field781_0x31c BYTE 0
    field782_0x31d BYTE 0
    field783_0x31e BYTE 0
    field784_0x31f BYTE 0
    field785_0x320 BYTE 0
    field786_0x321 BYTE 0
    field787_0x322 BYTE 0
    field788_0x323 BYTE 0
    field789_0x324 BYTE 0
    field790_0x325 BYTE 0
    field791_0x326 BYTE 0
    field792_0x327 BYTE 0
    field793_0x328 BYTE 0
    field794_0x329 BYTE 0
    field795_0x32a BYTE 0
    field796_0x32b BYTE 0
    field797_0x32c BYTE 0
    field798_0x32d BYTE 0
    field799_0x32e BYTE 0
    field800_0x32f BYTE 0
    field801_0x330 BYTE 0
    field802_0x331 BYTE 0
    field803_0x332 BYTE 0
    field804_0x333 BYTE 0
    field805_0x334 BYTE 0
    field806_0x335 BYTE 0
    field807_0x336 BYTE 0
    field808_0x337 BYTE 0
    field809_0x338 BYTE 0
    field810_0x339 BYTE 0
    field811_0x33a BYTE 0
    field812_0x33b BYTE 0
    field813_0x33c BYTE 0
    field814_0x33d BYTE 0
    field815_0x33e BYTE 0
    field816_0x33f BYTE 0
    field817_0x340 BYTE 0
    field818_0x341 BYTE 0
    field819_0x342 BYTE 0
    field820_0x343 BYTE 0
    field821_0x344 BYTE 0
    field822_0x345 BYTE 0
    field823_0x346 BYTE 0
    field824_0x347 BYTE 0
    field825_0x348 BYTE 0
    field826_0x349 BYTE 0
    field827_0x34a BYTE 0
    field828_0x34b BYTE 0
    field829_0x34c BYTE 0
    field830_0x34d BYTE 0
    field831_0x34e BYTE 0
    field832_0x34f BYTE 0
    field833_0x350 BYTE 0
    field834_0x351 BYTE 0
    field835_0x352 BYTE 0
    field836_0x353 BYTE 0
    field837_0x354 BYTE 0
    field838_0x355 BYTE 0
    field839_0x356 BYTE 0
    field840_0x357 BYTE 0
    field841_0x358 BYTE 0
    field842_0x359 BYTE 0
    field843_0x35a BYTE 0
    field844_0x35b BYTE 0
    field845_0x35c BYTE 0
    field846_0x35d BYTE 0
    field847_0x35e BYTE 0
    field848_0x35f BYTE 0
    field849_0x360 BYTE 0
    field850_0x361 BYTE 0
    field851_0x362 BYTE 0
    field852_0x363 BYTE 0
    field853_0x364 BYTE 0
    field854_0x365 BYTE 0
    field855_0x366 BYTE 0
    field856_0x367 BYTE 0
    field857_0x368 BYTE 0
    field858_0x369 BYTE 0
    field859_0x36a BYTE 0
    field860_0x36b BYTE 0
    field861_0x36c BYTE 0
    field862_0x36d BYTE 0
    field863_0x36e BYTE 0
    field864_0x36f BYTE 0
    field865_0x370 BYTE 0
    field866_0x371 BYTE 0
    field867_0x372 BYTE 0
    field868_0x373 BYTE 0
    field869_0x374 BYTE 0
    field870_0x375 BYTE 0
    field871_0x376 BYTE 0
    field872_0x377 BYTE 0
    field873_0x378 BYTE 0
    field874_0x379 BYTE 0
    field875_0x37a BYTE 0
    field876_0x37b BYTE 0
    field877_0x37c BYTE 0
    field878_0x37d BYTE 0
    field879_0x37e BYTE 0
    field880_0x37f BYTE 0
    field881_0x380 BYTE 0
    field882_0x381 BYTE 0
    field883_0x382 BYTE 0
    field884_0x383 BYTE 0
    field885_0x384 BYTE 0
    field886_0x385 BYTE 0
    field887_0x386 BYTE 0
    field888_0x387 BYTE 0
    field889_0x388 BYTE 0
    field890_0x389 BYTE 0
    field891_0x38a BYTE 0
    field892_0x38b BYTE 0
    field893_0x38c BYTE 0
    field894_0x38d BYTE 0
    field895_0x38e BYTE 0
    field896_0x38f BYTE 0
    field897_0x390 BYTE 0
    field898_0x391 BYTE 0
    field899_0x392 BYTE 0
    field900_0x393 BYTE 0
    field901_0x394 BYTE 0
    field902_0x395 BYTE 0
    field903_0x396 BYTE 0
    field904_0x397 BYTE 0
    field905_0x398 BYTE 0
    field906_0x399 BYTE 0
    field907_0x39a BYTE 0
    field908_0x39b BYTE 0
    field909_0x39c BYTE 0
    field910_0x39d BYTE 0
    field911_0x39e BYTE 0
    field912_0x39f BYTE 0
    field913_0x3a0 BYTE 0
    field914_0x3a1 BYTE 0
    field915_0x3a2 BYTE 0
    field916_0x3a3 BYTE 0
    field917_0x3a4 BYTE 0
    field918_0x3a5 BYTE 0
    field919_0x3a6 BYTE 0
    field920_0x3a7 BYTE 0
    field921_0x3a8 BYTE 0
    field922_0x3a9 BYTE 0
    field923_0x3aa BYTE 0
    field924_0x3ab BYTE 0
    field925_0x3ac BYTE 0
    field926_0x3ad BYTE 0
    field927_0x3ae BYTE 0
    field928_0x3af BYTE 0
    field929_0x3b0 BYTE 0
    field930_0x3b1 BYTE 0
    field931_0x3b2 BYTE 0
    field932_0x3b3 BYTE 0
    field933_0x3b4 BYTE 0
    field934_0x3b5 BYTE 0
    field935_0x3b6 BYTE 0
    field936_0x3b7 BYTE 0
    field937_0x3b8 BYTE 0
    field938_0x3b9 BYTE 0
    field939_0x3ba BYTE 0
    field940_0x3bb BYTE 0
    field941_0x3bc BYTE 0
    field942_0x3bd BYTE 0
    field943_0x3be BYTE 0
    field944_0x3bf BYTE 0
    field945_0x3c0 BYTE 0
    field946_0x3c1 BYTE 0
    field947_0x3c2 BYTE 0
    field948_0x3c3 BYTE 0
    field949_0x3c4 BYTE 0
    field950_0x3c5 BYTE 0
    field951_0x3c6 BYTE 0
    field952_0x3c7 BYTE 0
    field953_0x3c8 BYTE 0
    field954_0x3c9 BYTE 0
    field955_0x3ca BYTE 0
    field956_0x3cb BYTE 0
    field957_0x3cc BYTE 0
    field958_0x3cd BYTE 0
    field959_0x3ce BYTE 0
    field960_0x3cf BYTE 0
    field961_0x3d0 BYTE 0
    field962_0x3d1 BYTE 0
    field963_0x3d2 BYTE 0
    field964_0x3d3 BYTE 0
    field965_0x3d4 BYTE 0
    field966_0x3d5 BYTE 0
    field967_0x3d6 BYTE 0
    field968_0x3d7 BYTE 0
    field969_0x3d8 BYTE 0
    field970_0x3d9 BYTE 0
    field971_0x3da BYTE 0
    field972_0x3db BYTE 0
    field973_0x3dc BYTE 0
    field974_0x3dd BYTE 0
    field975_0x3de BYTE 0
    field976_0x3df BYTE 0
    field977_0x3e0 BYTE 0
    field978_0x3e1 BYTE 0
    field979_0x3e2 BYTE 0
    field980_0x3e3 BYTE 0
    field981_0x3e4 BYTE 0
    field982_0x3e5 BYTE 0
    field983_0x3e6 BYTE 0
    field984_0x3e7 BYTE 0
    field985_0x3e8 BYTE 0
    field986_0x3e9 BYTE 0
    field987_0x3ea BYTE 0
    field988_0x3eb BYTE 0
    field989_0x3ec BYTE 0
    field990_0x3ed BYTE 0
    field991_0x3ee BYTE 0
    field992_0x3ef BYTE 0
    field993_0x3f0 BYTE 0
    field994_0x3f1 BYTE 0
    field995_0x3f2 BYTE 0
    field996_0x3f3 BYTE 0
    field997_0x3f4 BYTE 0
    field998_0x3f5 BYTE 0
    field999_0x3f6 BYTE 0
    field1000_0x3f7 BYTE 0
    field1001_0x3f8 BYTE 0
    field1002_0x3f9 BYTE 0
    field1003_0x3fa BYTE 0
    field1004_0x3fb BYTE 0
    field1005_0x3fc BYTE 0
    field1006_0x3fd BYTE 0
    field1007_0x3fe BYTE 0
    field1008_0x3ff BYTE 0
    field1009_0x400 BYTE 0
    field1010_0x401 BYTE 0
    field1011_0x402 BYTE 0
    field1012_0x403 BYTE 0
    field1013_0x404 BYTE 0
    field1014_0x405 BYTE 0
    field1015_0x406 BYTE 0
    field1016_0x407 BYTE 0
    field1017_0x408 BYTE 0
    field1018_0x409 BYTE 0
    field1019_0x40a BYTE 0
    field1020_0x40b BYTE 0
    field1021_0x40c BYTE 0
    field1022_0x40d BYTE 0
    field1023_0x40e BYTE 0
    field1024_0x40f BYTE 0
    field1025_0x410 BYTE 0
    field1026_0x411 BYTE 0
    field1027_0x412 BYTE 0
    field1028_0x413 BYTE 0
    field1029_0x414 DWORD 0
    field1030_0x418 DWORD 0
    field1031_0x41c DWORD 0
    field1032_0x420 DWORD 0
    field1033_0x424 DWORD 0
    field1034_0x428 BYTE 0
    field1035_0x429 BYTE 0
    field1036_0x42a BYTE 0
    field1037_0x42b BYTE 0
    field1038_0x42c BYTE 0
    field1039_0x42d BYTE 0
    field1040_0x42e BYTE 0
    field1041_0x42f BYTE 0
    field1042_0x430 BYTE 0
    field1043_0x431 BYTE 0
    field1044_0x432 BYTE 0
    field1045_0x433 BYTE 0
    field1046_0x434 BYTE 0
    field1047_0x435 BYTE 0
    field1048_0x436 BYTE 0
    field1049_0x437 BYTE 0
    field1050_0x438 BYTE 0
    field1051_0x439 BYTE 0
    field1052_0x43a BYTE 0
    field1053_0x43b BYTE 0
    field1054_0x43c BYTE 0
    field1055_0x43d BYTE 0
    field1056_0x43e BYTE 0
    field1057_0x43f BYTE 0
    field1058_0x440 BYTE 0
    field1059_0x441 BYTE 0
    field1060_0x442 BYTE 0
    field1061_0x443 BYTE 0
    field1062_0x444 BYTE 0
    field1063_0x445 BYTE 0
    field1064_0x446 BYTE 0
    field1065_0x447 BYTE 0
    field1066_0x448 BYTE 0
    field1067_0x449 BYTE 0
    field1068_0x44a BYTE 0
    field1069_0x44b BYTE 0
    field1070_0x44c BYTE 0
    field1071_0x44d BYTE 0
    field1072_0x44e BYTE 0
    field1073_0x44f BYTE 0
    field1074_0x450 BYTE 0
    field1075_0x451 BYTE 0
    field1076_0x452 BYTE 0
    field1077_0x453 BYTE 0
    field1078_0x454 BYTE 0
    field1079_0x455 BYTE 0
    field1080_0x456 BYTE 0
    field1081_0x457 BYTE 0
    field1082_0x458 BYTE 0
    field1083_0x459 BYTE 0
    field1084_0x45a BYTE 0
    field1085_0x45b BYTE 0
    field1086_0x45c BYTE 0
    field1087_0x45d BYTE 0
    field1088_0x45e BYTE 0
    field1089_0x45f BYTE 0
    field1090_0x460 BYTE 0
    field1091_0x461 BYTE 0
    field1092_0x462 BYTE 0
    field1093_0x463 BYTE 0
    field1094_0x464 BYTE 0
    field1095_0x465 BYTE 0
    field1096_0x466 BYTE 0
    field1097_0x467 BYTE 0
    field1098_0x468 BYTE 0
    field1099_0x469 BYTE 0
    field1100_0x46a BYTE 0
    field1101_0x46b BYTE 0
    field1102_0x46c BYTE 0
    field1103_0x46d BYTE 0
    field1104_0x46e BYTE 0
    field1105_0x46f BYTE 0
    field1106_0x470 Vector4 {}
    field1107_0x480 Vector4 {}
    field1108_0x490 Vector4 {}
    field1109_0x4a0 BYTE 0
    field1110_0x4a1 BYTE 0
    field1111_0x4a2 BYTE 0
    field1112_0x4a3 BYTE 0
    field1113_0x4a4 BYTE 0
    field1114_0x4a5 BYTE 0
    field1115_0x4a6 BYTE 0
    field1116_0x4a7 BYTE 0
    field1117_0x4a8 BYTE 0
    field1118_0x4a9 BYTE 0
    field1119_0x4aa BYTE 0
    field1120_0x4ab BYTE 0
    field1121_0x4ac BYTE 0
    field1122_0x4ad BYTE 0
    field1123_0x4ae BYTE 0
    field1124_0x4af BYTE 0
    field1125_0x4b0 BYTE 0
    field1126_0x4b1 BYTE 0
    field1127_0x4b2 BYTE 0
    field1128_0x4b3 BYTE 0
    field1129_0x4b4 BYTE 0
    field1130_0x4b5 BYTE 0
    field1131_0x4b6 BYTE 0
    field1132_0x4b7 BYTE 0
    field1133_0x4b8 BYTE 0
    field1134_0x4b9 BYTE 0
    field1135_0x4ba BYTE 0
    field1136_0x4bb BYTE 0
    field1137_0x4bc BYTE 0
    field1138_0x4bd BYTE 0
    field1139_0x4be BYTE 0
    field1140_0x4bf BYTE 0
    field1141_0x4c0 DWORD 0
    field1142_0x4c4 DWORD 0
    field1143_0x4c8 DWORD 0
    field1144_0x4cc DWORD 0
    field1145_0x4d0 DWORD 0
    field1146_0x4d4 DWORD 0
    field1147_0x4d8 DWORD 0
    field1148_0x4dc DWORD 0
    field1149_0x4e0 DWORD 0
    field1150_0x4e4 DWORD 0
    field1151_0x4e8 DWORD 0
    field1152_0x4ec DWORD 0
    field1153_0x4f0 DWORD 0
    field1154_0x4f4 DWORD 0
    field1155_0x4f8 DWORD 0
    field1156_0x4fc DWORD 0
LightController ENDS
AutoClass4 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    nodeArray BYTE 96 dup (0)
AutoClass4 ENDS
InstanceContextList STRUCT
    array DWORD 0; InstanceContext * *
    cnt DWORD 0
InstanceContextList ENDS
UnkFamily12Base STRUCT
    vtable DWORD 0; pointer *
    array1 DWORD 0; pointer *
    array2 DWORD 0; pointer *
    cnt1 WORD 0
    cnt2 WORD 0
    field5_0x10 DWORD 0; UnkFamily17Base *
UnkFamily12Base ENDS
WorldChunkSub STRUCT
    worldChunk DWORD 0; WorldChunk *
    field1_0x4 DWORD 0
WorldChunkSub ENDS
AutoClass5 STRUCT
    field0_0x0 DWORD 0; void *
    field1_0x4 DWORD 0; void *
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0; undefined4 *
    cnt DWORD 0
AutoClass5 ENDS
UnkFamily5AB STRUCT
    parent UnkFamily5A {}
UnkFamily5AB ENDS
IteratorB3B STRUCT
    parent IteratorB3Abstract {}
    index DWORD 0
    collection DWORD 0; uint *
IteratorB3B ENDS
NodeRelated1J STRUCT
    parent NodeRelated1Abstract {}
    field1_0x14 DWORD 0
NodeRelated1J ENDS
UnkFamily5BA STRUCT
    parent UnkFamily5B {}
UnkFamily5BA ENDS
UnkFamily3EB STRUCT
    parent UnkFamily3EAbstract {}
    field1_0x64 BYTE 0
    field2_0x65 BYTE 0
    field3_0x66 BYTE 0
    field4_0x67 BYTE 0
    field5_0x68 BYTE 0
    field6_0x69 BYTE 0
    field7_0x6a BYTE 0
    field8_0x6b BYTE 0
    field9_0x6c BYTE 0
    field10_0x6d BYTE 0
    field11_0x6e BYTE 0
    field12_0x6f BYTE 0
    field13_0x70 BYTE 0
    field14_0x71 BYTE 0
    field15_0x72 BYTE 0
    field16_0x73 BYTE 0
    field17_0x74 BYTE 0
    field18_0x75 BYTE 0
    field19_0x76 BYTE 0
    field20_0x77 BYTE 0
    field21_0x78 BYTE 0
    field22_0x79 BYTE 0
    field23_0x7a BYTE 0
    field24_0x7b BYTE 0
    field25_0x7c BYTE 0
    field26_0x7d BYTE 0
    field27_0x7e BYTE 0
    field28_0x7f BYTE 0
    field29_0x80 BYTE 0
    field30_0x81 BYTE 0
    field31_0x82 BYTE 0
    field32_0x83 BYTE 0
    field33_0x84 BYTE 0
    field34_0x85 BYTE 0
    field35_0x86 BYTE 0
    field36_0x87 BYTE 0
    field37_0x88 BYTE 0
    field38_0x89 BYTE 0
    field39_0x8a BYTE 0
    field40_0x8b BYTE 0
    field41_0x8c BYTE 0
    field42_0x8d BYTE 0
    field43_0x8e BYTE 0
    field44_0x8f BYTE 0
    field45_0x90 BYTE 0
    field46_0x91 BYTE 0
    field47_0x92 BYTE 0
    field48_0x93 BYTE 0
    field49_0x94 BYTE 0
    field50_0x95 BYTE 0
    field51_0x96 BYTE 0
    field52_0x97 BYTE 0
    field53_0x98 BYTE 0
    field54_0x99 BYTE 0
    field55_0x9a BYTE 0
    field56_0x9b BYTE 0
    field57_0x9c BYTE 0
    field58_0x9d BYTE 0
    field59_0x9e BYTE 0
    field60_0x9f BYTE 0
    field61_0xa0 BYTE 0
    field62_0xa1 BYTE 0
    field63_0xa2 BYTE 0
    field64_0xa3 BYTE 0
    field65_0xa4 BYTE 0
    field66_0xa5 BYTE 0
    field67_0xa6 BYTE 0
    field68_0xa7 BYTE 0
    field69_0xa8 BYTE 0
    field70_0xa9 BYTE 0
    field71_0xaa BYTE 0
    field72_0xab BYTE 0
    field73_0xac BYTE 0
    field74_0xad BYTE 0
    field75_0xae BYTE 0
    field76_0xaf BYTE 0
    field77_0xb0 BYTE 0
    field78_0xb1 BYTE 0
    field79_0xb2 BYTE 0
    field80_0xb3 BYTE 0
    field81_0xb4 BYTE 0
    field82_0xb5 BYTE 0
    field83_0xb6 BYTE 0
    field84_0xb7 BYTE 0
    field85_0xb8 BYTE 0
    field86_0xb9 BYTE 0
    field87_0xba BYTE 0
    field88_0xbb BYTE 0
    field89_0xbc BYTE 0
    field90_0xbd BYTE 0
    field91_0xbe BYTE 0
    field92_0xbf BYTE 0
    field93_0xc0 BYTE 0
    field94_0xc1 BYTE 0
    field95_0xc2 BYTE 0
    field96_0xc3 BYTE 0
    field97_0xc4 BYTE 0
    field98_0xc5 BYTE 0
    field99_0xc6 BYTE 0
    field100_0xc7 BYTE 0
    field101_0xc8 BYTE 0
    field102_0xc9 BYTE 0
    field103_0xca BYTE 0
    field104_0xcb BYTE 0
    field105_0xcc BYTE 0
    field106_0xcd BYTE 0
    field107_0xce BYTE 0
    field108_0xcf BYTE 0
    field109_0xd0 BYTE 0
    field110_0xd1 BYTE 0
    field111_0xd2 BYTE 0
    field112_0xd3 BYTE 0
    field113_0xd4 BYTE 0
    field114_0xd5 BYTE 0
    field115_0xd6 BYTE 0
    field116_0xd7 BYTE 0
    field117_0xd8 BYTE 0
    field118_0xd9 BYTE 0
    field119_0xda BYTE 0
    field120_0xdb BYTE 0
    field121_0xdc BYTE 0
    field122_0xdd BYTE 0
    field123_0xde BYTE 0
    field124_0xdf BYTE 0
    field125_0xe0 BYTE 0
    field126_0xe1 BYTE 0
    field127_0xe2 BYTE 0
    field128_0xe3 BYTE 0
    field129_0xe4 BYTE 0
    field130_0xe5 BYTE 0
    field131_0xe6 BYTE 0
    field132_0xe7 BYTE 0
    field133_0xe8 BYTE 0
    field134_0xe9 BYTE 0
    field135_0xea BYTE 0
    field136_0xeb BYTE 0
    field137_0xec BYTE 0
    field138_0xed BYTE 0
    field139_0xee BYTE 0
    field140_0xef BYTE 0
    field141_0xf0 BYTE 0
    field142_0xf1 BYTE 0
    field143_0xf2 BYTE 0
    field144_0xf3 BYTE 0
    field145_0xf4 BYTE 0
    field146_0xf5 BYTE 0
    field147_0xf6 BYTE 0
    field148_0xf7 BYTE 0
    field149_0xf8 BYTE 0
    field150_0xf9 BYTE 0
    field151_0xfa BYTE 0
    field152_0xfb BYTE 0
    field153_0xfc BYTE 0
    field154_0xfd BYTE 0
    field155_0xfe BYTE 0
    field156_0xff BYTE 0
    field157_0x100 BYTE 0
    field158_0x101 BYTE 0
    field159_0x102 BYTE 0
    field160_0x103 BYTE 0
    field161_0x104 BYTE 0
    field162_0x105 BYTE 0
    field163_0x106 BYTE 0
    field164_0x107 BYTE 0
    field165_0x108 BYTE 0
    field166_0x109 BYTE 0
    field167_0x10a BYTE 0
    field168_0x10b BYTE 0
    field169_0x10c BYTE 0
    field170_0x10d BYTE 0
    field171_0x10e BYTE 0
    field172_0x10f BYTE 0
    field173_0x110 BYTE 0
    field174_0x111 BYTE 0
    field175_0x112 BYTE 0
    field176_0x113 BYTE 0
    field177_0x114 BYTE 0
    field178_0x115 BYTE 0
    field179_0x116 BYTE 0
    field180_0x117 BYTE 0
UnkFamily3EB ENDS
NodeInputB STRUCT
    parent NodeInputAbstract {}
    field1_0x10 DWORD 0; pointer
NodeInputB ENDS
NodeInputC STRUCT
    parent NodeInputAbstract {}
NodeInputC ENDS
UnkFamily20A STRUCT
    parent UnkFamily20Base {}
UnkFamily20A ENDS
UnkFamily21Base STRUCT
    vtable DWORD 0; UnkFamily21Base_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    _str DWORD 0; char *
    field6_0xc DWORD 0
    field7_0x10 DWORD 0
UnkFamily21Base ENDS
UnkFamily21A STRUCT
    parent UnkFamily21Base {}
    field1_0x14 DWORD 0; pointer
UnkFamily21A ENDS
OlegModuleAIB STRUCT
    parent OlegModuleAI {}
    field1_0x90 DWORD 0
    field2_0x94 DWORD 0
OlegModuleAIB ENDS
IteratorB10Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB10Abstract ENDS
IteratorB10AbstractEx STRUCT
    parent IteratorB10Abstract {}
IteratorB10AbstractEx ENDS
IteratorB10 STRUCT
    parent IteratorB10Abstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0
IteratorB10 ENDS
UnkFamily10T STRUCT
    parent UnkFamily10Base {}
    field1_0x50 DWORD 0; pointer
UnkFamily10T ENDS
UnkFamily10CameraOptions STRUCT
    parent UnkFamily10Base {}
UnkFamily10CameraOptions ENDS
UnkFamily10MeterOptions STRUCT
    parent UnkFamily10Base {}
UnkFamily10MeterOptions ENDS
UnkFamily10StreamingOptions STRUCT
    parent UnkFamily10Base {}
UnkFamily10StreamingOptions ENDS
UnkFamily8BE STRUCT
    parent UnkFamily8B {}
    field1_0x14 DWORD 0
    field2_0x18 DWORD 0
    field3_0x1c DWORD 0
UnkFamily8BE ENDS
UnkFamily23Base STRUCT
    vtable DWORD 0; UnkFamily23Base_VTable *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 REAL4 0.0;
    field7_0x1c REAL4 0.0;
    field8_0x20 REAL4 0.0;
    field9_0x24 REAL4 0.0;
    field10_0x28 BYTE 0
    field11_0x29 BYTE 0
    field12_0x2a BYTE 0
    field13_0x2b BYTE 0
    field14_0x2c BYTE 0
    field15_0x2d BYTE 0
    field16_0x2e BYTE 0
    field17_0x2f BYTE 0
    field18_0x30 BYTE 0
    field19_0x31 BYTE 0
    field20_0x32 BYTE 0
    field21_0x33 BYTE 0
    field22_0x34 BYTE 0
    field23_0x35 BYTE 0
    field24_0x36 BYTE 0
    field25_0x37 BYTE 0
    field26_0x38 BYTE 0
    field27_0x39 BYTE 0
    field28_0x3a BYTE 0
    field29_0x3b BYTE 0
    field30_0x3c BYTE 0
    field31_0x3d BYTE 0
    field32_0x3e BYTE 0
    field33_0x3f BYTE 0
    field34_0x40 REAL4 0.0;
UnkFamily23Base ENDS
UnkFamily24Base STRUCT
    vtable DWORD 0; UnkFamily24Base_VTable *
    subStruct UnkFamily23Base {}
    field2_0x48 DWORD 0
    field3_0x4c DWORD 0
    field4_0x50 DWORD 0
    field5_0x54 DWORD 0
    field6_0x58 DWORD 0
UnkFamily24Base ENDS
IteratorB5Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB5Abstract ENDS
IteratorB5AbstractEx STRUCT
    parent IteratorB5Abstract {}
IteratorB5AbstractEx ENDS
IteratorB5 STRUCT
    parent IteratorB5Abstract {}
    collection DWORD 0; pointer
    index DWORD 0
IteratorB5 ENDS
IteratorB7Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB7Abstract ENDS
IteratorB7 STRUCT
    parent IteratorB7Abstract {}
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
IteratorB7 ENDS
UnkFamily25Abstract STRUCT
    vtable DWORD 0; UnkFamily25Abstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 DWORD 0
UnkFamily25Abstract ENDS
UnkFamily25A STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
UnkFamily25A ENDS
UnkFamily25B STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
    field77_0x60 BYTE 0
    field78_0x61 BYTE 0
    field79_0x62 BYTE 0
    field80_0x63 BYTE 0
    field81_0x64 BYTE 0
    field82_0x65 BYTE 0
    field83_0x66 BYTE 0
    field84_0x67 BYTE 0
    field85_0x68 BYTE 0
    field86_0x69 BYTE 0
    field87_0x6a BYTE 0
    field88_0x6b BYTE 0
    field89_0x6c BYTE 0
    field90_0x6d BYTE 0
    field91_0x6e BYTE 0
    field92_0x6f BYTE 0
    field93_0x70 BYTE 0
    field94_0x71 BYTE 0
    field95_0x72 BYTE 0
    field96_0x73 BYTE 0
    field97_0x74 BYTE 0
    field98_0x75 BYTE 0
    field99_0x76 BYTE 0
    field100_0x77 BYTE 0
    field101_0x78 BYTE 0
    field102_0x79 BYTE 0
    field103_0x7a BYTE 0
    field104_0x7b BYTE 0
    field105_0x7c BYTE 0
    field106_0x7d BYTE 0
    field107_0x7e BYTE 0
    field108_0x7f BYTE 0
UnkFamily25B ENDS
UnkFamily25C STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
    field77_0x60 BYTE 0
    field78_0x61 BYTE 0
    field79_0x62 BYTE 0
    field80_0x63 BYTE 0
    field81_0x64 BYTE 0
    field82_0x65 BYTE 0
    field83_0x66 BYTE 0
    field84_0x67 BYTE 0
    field85_0x68 BYTE 0
    field86_0x69 BYTE 0
    field87_0x6a BYTE 0
    field88_0x6b BYTE 0
    field89_0x6c BYTE 0
    field90_0x6d BYTE 0
    field91_0x6e BYTE 0
    field92_0x6f BYTE 0
UnkFamily25C ENDS
UnkFamily25D STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
    field77_0x60 BYTE 0
    field78_0x61 BYTE 0
    field79_0x62 BYTE 0
    field80_0x63 BYTE 0
    field81_0x64 BYTE 0
    field82_0x65 BYTE 0
    field83_0x66 BYTE 0
    field84_0x67 BYTE 0
    field85_0x68 BYTE 0
    field86_0x69 BYTE 0
    field87_0x6a BYTE 0
    field88_0x6b BYTE 0
    field89_0x6c BYTE 0
    field90_0x6d BYTE 0
    field91_0x6e BYTE 0
    field92_0x6f BYTE 0
    field93_0x70 BYTE 0
    field94_0x71 BYTE 0
    field95_0x72 BYTE 0
    field96_0x73 BYTE 0
    field97_0x74 BYTE 0
    field98_0x75 BYTE 0
    field99_0x76 BYTE 0
    field100_0x77 BYTE 0
    field101_0x78 BYTE 0
    field102_0x79 BYTE 0
    field103_0x7a BYTE 0
    field104_0x7b BYTE 0
    field105_0x7c BYTE 0
    field106_0x7d BYTE 0
    field107_0x7e BYTE 0
    field108_0x7f BYTE 0
    field109_0x80 BYTE 0
    field110_0x81 BYTE 0
    field111_0x82 BYTE 0
    field112_0x83 BYTE 0
    field113_0x84 BYTE 0
    field114_0x85 BYTE 0
    field115_0x86 BYTE 0
    field116_0x87 BYTE 0
    field117_0x88 BYTE 0
    field118_0x89 BYTE 0
    field119_0x8a BYTE 0
    field120_0x8b BYTE 0
    field121_0x8c BYTE 0
    field122_0x8d BYTE 0
    field123_0x8e BYTE 0
    field124_0x8f BYTE 0
UnkFamily25D ENDS
UnkFamily25E STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
UnkFamily25E ENDS
UnkFamily25F STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
UnkFamily25F ENDS
UnkFamily25G STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
UnkFamily25G ENDS
UnkFamily25I STRUCT
    parent UnkFamily25Abstract {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
    field13_0x20 BYTE 0
    field14_0x21 BYTE 0
    field15_0x22 BYTE 0
    field16_0x23 BYTE 0
    field17_0x24 BYTE 0
    field18_0x25 BYTE 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
    field37_0x38 BYTE 0
    field38_0x39 BYTE 0
    field39_0x3a BYTE 0
    field40_0x3b BYTE 0
    field41_0x3c BYTE 0
    field42_0x3d BYTE 0
    field43_0x3e BYTE 0
    field44_0x3f BYTE 0
    field45_0x40 BYTE 0
    field46_0x41 BYTE 0
    field47_0x42 BYTE 0
    field48_0x43 BYTE 0
    field49_0x44 BYTE 0
    field50_0x45 BYTE 0
    field51_0x46 BYTE 0
    field52_0x47 BYTE 0
    field53_0x48 BYTE 0
    field54_0x49 BYTE 0
    field55_0x4a BYTE 0
    field56_0x4b BYTE 0
    field57_0x4c BYTE 0
    field58_0x4d BYTE 0
    field59_0x4e BYTE 0
    field60_0x4f BYTE 0
    field61_0x50 BYTE 0
    field62_0x51 BYTE 0
    field63_0x52 BYTE 0
    field64_0x53 BYTE 0
    field65_0x54 BYTE 0
    field66_0x55 BYTE 0
    field67_0x56 BYTE 0
    field68_0x57 BYTE 0
    field69_0x58 BYTE 0
    field70_0x59 BYTE 0
    field71_0x5a BYTE 0
    field72_0x5b BYTE 0
    field73_0x5c BYTE 0
    field74_0x5d BYTE 0
    field75_0x5e BYTE 0
    field76_0x5f BYTE 0
UnkFamily25I ENDS
UnkFamily26Base STRUCT
    vtable DWORD 0; UnkFamily26Base_VTable *
    collection DWORD 0; UNV008 *
    field2_0x8 DWORD 0
    cnt1 DWORD 0
    cnt2 DWORD 0
UnkFamily26Base ENDS
UnkFamily26A STRUCT
    parent UnkFamily26Base {}
    field1_0x14 DWORD 0
    field2_0x18 BYTE 0
    field3_0x19 BYTE 0
    field4_0x1a BYTE 0
    field5_0x1b BYTE 0
    field6_0x1c BYTE 0
    field7_0x1d BYTE 0
    field8_0x1e BYTE 0
    field9_0x1f BYTE 0
UnkFamily26A ENDS
UnkFamily27Abstract STRUCT
    vtable DWORD 0; UnkFamily27Abstract_VTable *
    field1_0x4 DWORD 0
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc DWORD 0
    field7_0x10 DWORD 0
    field8_0x14 BYTE 0
    field9_0x15 BYTE 0
    field10_0x16 BYTE 0
    field11_0x17 BYTE 0
    field12_0x18 BYTE 0
    field13_0x19 BYTE 0
    field14_0x1a BYTE 0
    field15_0x1b BYTE 0
    field16_0x1c BYTE 0
    field17_0x1d BYTE 0
    field18_0x1e BYTE 0
    field19_0x1f BYTE 0
    field20_0x20 BYTE 0
    field21_0x21 BYTE 0
    field22_0x22 BYTE 0
    field23_0x23 BYTE 0
    field24_0x24 BYTE 0
    field25_0x25 BYTE 0
    field26_0x26 BYTE 0
    field27_0x27 BYTE 0
    field28_0x28 BYTE 0
    field29_0x29 BYTE 0
    field30_0x2a BYTE 0
    field31_0x2b BYTE 0
    field32_0x2c BYTE 0
    field33_0x2d BYTE 0
    field34_0x2e BYTE 0
    field35_0x2f BYTE 0
    field36_0x30 BYTE 0
    field37_0x31 BYTE 0
    field38_0x32 BYTE 0
    field39_0x33 BYTE 0
    field40_0x34 BYTE 0
    field41_0x35 BYTE 0
    field42_0x36 BYTE 0
    field43_0x37 BYTE 0
    field44_0x38 BYTE 0
    field45_0x39 BYTE 0
    field46_0x3a BYTE 0
    field47_0x3b BYTE 0
    field48_0x3c BYTE 0
    field49_0x3d BYTE 0
    field50_0x3e BYTE 0
    field51_0x3f BYTE 0
    field52_0x40 BYTE 0
    field53_0x41 BYTE 0
    field54_0x42 BYTE 0
    field55_0x43 BYTE 0
    field56_0x44 BYTE 0
    field57_0x45 BYTE 0
    field58_0x46 BYTE 0
    field59_0x47 BYTE 0
    field60_0x48 BYTE 0
    field61_0x49 BYTE 0
    field62_0x4a BYTE 0
    field63_0x4b BYTE 0
    field64_0x4c BYTE 0
    field65_0x4d BYTE 0
    field66_0x4e BYTE 0
    field67_0x4f BYTE 0
    field68_0x50 BYTE 0
    field69_0x51 BYTE 0
    field70_0x52 BYTE 0
    field71_0x53 BYTE 0
    field72_0x54 BYTE 0
    field73_0x55 BYTE 0
    field74_0x56 BYTE 0
    field75_0x57 BYTE 0
    field76_0x58 BYTE 0
    field77_0x59 BYTE 0
    field78_0x5a BYTE 0
    field79_0x5b BYTE 0
    field80_0x5c BYTE 0
    field81_0x5d BYTE 0
    field82_0x5e BYTE 0
    field83_0x5f BYTE 0
    field84_0x60 BYTE 0
    field85_0x61 BYTE 0
    field86_0x62 BYTE 0
    field87_0x63 BYTE 0
    field88_0x64 BYTE 0
    field89_0x65 BYTE 0
    field90_0x66 BYTE 0
    field91_0x67 BYTE 0
    field92_0x68 BYTE 0
    field93_0x69 BYTE 0
    field94_0x6a BYTE 0
    field95_0x6b BYTE 0
    field96_0x6c BYTE 0
    field97_0x6d BYTE 0
    field98_0x6e BYTE 0
    field99_0x6f BYTE 0
    field100_0x70 BYTE 0
    field101_0x71 BYTE 0
    field102_0x72 BYTE 0
    field103_0x73 BYTE 0
    field104_0x74 BYTE 0
    field105_0x75 BYTE 0
    field106_0x76 BYTE 0
    field107_0x77 BYTE 0
    field108_0x78 BYTE 0
    field109_0x79 BYTE 0
    field110_0x7a BYTE 0
    field111_0x7b BYTE 0
    field112_0x7c BYTE 0
    field113_0x7d BYTE 0
    field114_0x7e BYTE 0
    field115_0x7f BYTE 0
    field116_0x80 BYTE 0
    field117_0x81 BYTE 0
    field118_0x82 BYTE 0
    field119_0x83 BYTE 0
    field120_0x84 BYTE 0
    field121_0x85 BYTE 0
    field122_0x86 BYTE 0
    field123_0x87 BYTE 0
    field124_0x88 BYTE 0
    field125_0x89 BYTE 0
    field126_0x8a BYTE 0
    field127_0x8b BYTE 0
    field128_0x8c BYTE 0
    field129_0x8d BYTE 0
    field130_0x8e BYTE 0
    field131_0x8f BYTE 0
    field132_0x90 BYTE 0
    field133_0x91 BYTE 0
    field134_0x92 BYTE 0
    field135_0x93 BYTE 0
    field136_0x94 BYTE 0
    field137_0x95 BYTE 0
    field138_0x96 BYTE 0
    field139_0x97 BYTE 0
    field140_0x98 BYTE 0
    field141_0x99 BYTE 0
    field142_0x9a BYTE 0
    field143_0x9b BYTE 0
    field144_0x9c BYTE 0
    field145_0x9d BYTE 0
    field146_0x9e BYTE 0
    field147_0x9f BYTE 0
    field148_0xa0 BYTE 0
    field149_0xa1 BYTE 0
    field150_0xa2 BYTE 0
    field151_0xa3 BYTE 0
    field152_0xa4 BYTE 0
    field153_0xa5 BYTE 0
    field154_0xa6 BYTE 0
    field155_0xa7 BYTE 0
    field156_0xa8 BYTE 0
    field157_0xa9 BYTE 0
    field158_0xaa BYTE 0
    field159_0xab BYTE 0
    field160_0xac BYTE 0
    field161_0xad BYTE 0
    field162_0xae BYTE 0
    field163_0xaf BYTE 0
    field164_0xb0 BYTE 0
    field165_0xb1 BYTE 0
    field166_0xb2 BYTE 0
    field167_0xb3 BYTE 0
    field168_0xb4 BYTE 0
    field169_0xb5 BYTE 0
    field170_0xb6 BYTE 0
    field171_0xb7 BYTE 0
    field172_0xb8 BYTE 0
    field173_0xb9 BYTE 0
    field174_0xba BYTE 0
    field175_0xbb BYTE 0
    field176_0xbc BYTE 0
    field177_0xbd BYTE 0
    field178_0xbe BYTE 0
    field179_0xbf BYTE 0
    field180_0xc0 BYTE 0
    field181_0xc1 BYTE 0
    field182_0xc2 BYTE 0
    field183_0xc3 BYTE 0
    field184_0xc4 BYTE 0
    field185_0xc5 BYTE 0
    field186_0xc6 BYTE 0
    field187_0xc7 BYTE 0
    field188_0xc8 BYTE 0
    field189_0xc9 BYTE 0
    field190_0xca BYTE 0
    field191_0xcb BYTE 0
    field192_0xcc BYTE 0
    field193_0xcd BYTE 0
    field194_0xce BYTE 0
    field195_0xcf BYTE 0
    field196_0xd0 BYTE 0
    field197_0xd1 BYTE 0
    field198_0xd2 BYTE 0
    field199_0xd3 BYTE 0
    field200_0xd4 BYTE 0
    field201_0xd5 BYTE 0
    field202_0xd6 BYTE 0
    field203_0xd7 BYTE 0
    field204_0xd8 BYTE 0
    field205_0xd9 BYTE 0
    field206_0xda BYTE 0
    field207_0xdb BYTE 0
    field208_0xdc BYTE 0
    field209_0xdd BYTE 0
    field210_0xde BYTE 0
    field211_0xdf BYTE 0
    field212_0xe0 BYTE 0
    field213_0xe1 BYTE 0
    field214_0xe2 BYTE 0
    field215_0xe3 BYTE 0
    field216_0xe4 BYTE 0
    field217_0xe5 BYTE 0
    field218_0xe6 BYTE 0
    field219_0xe7 BYTE 0
    field220_0xe8 BYTE 0
    field221_0xe9 BYTE 0
    field222_0xea BYTE 0
    field223_0xeb BYTE 0
    field224_0xec BYTE 0
    field225_0xed BYTE 0
    field226_0xee BYTE 0
    field227_0xef BYTE 0
    field228_0xf0 BYTE 0
    field229_0xf1 BYTE 0
    field230_0xf2 BYTE 0
    field231_0xf3 BYTE 0
    field232_0xf4 BYTE 0
    field233_0xf5 BYTE 0
    field234_0xf6 BYTE 0
    field235_0xf7 BYTE 0
    field236_0xf8 BYTE 0
    field237_0xf9 BYTE 0
    field238_0xfa BYTE 0
    field239_0xfb BYTE 0
    field240_0xfc BYTE 0
    field241_0xfd BYTE 0
    field242_0xfe BYTE 0
    field243_0xff BYTE 0
    field244_0x100 BYTE 0
    field245_0x101 BYTE 0
    field246_0x102 BYTE 0
    field247_0x103 BYTE 0
    field248_0x104 BYTE 0
    field249_0x105 BYTE 0
    field250_0x106 BYTE 0
    field251_0x107 BYTE 0
    field252_0x108 BYTE 0
    field253_0x109 BYTE 0
    field254_0x10a BYTE 0
    field255_0x10b BYTE 0
    field256_0x10c BYTE 0
    field257_0x10d BYTE 0
    field258_0x10e BYTE 0
    field259_0x10f BYTE 0
    field260_0x110 BYTE 0
    field261_0x111 BYTE 0
    field262_0x112 BYTE 0
    field263_0x113 BYTE 0
    field264_0x114 BYTE 0
    field265_0x115 BYTE 0
    field266_0x116 BYTE 0
    field267_0x117 BYTE 0
    field268_0x118 BYTE 0
    field269_0x119 BYTE 0
    field270_0x11a BYTE 0
    field271_0x11b BYTE 0
    field272_0x11c BYTE 0
    field273_0x11d BYTE 0
    field274_0x11e BYTE 0
    field275_0x11f BYTE 0
    field276_0x120 BYTE 0
    field277_0x121 BYTE 0
    field278_0x122 BYTE 0
    field279_0x123 BYTE 0
    field280_0x124 BYTE 0
    field281_0x125 BYTE 0
    field282_0x126 BYTE 0
    field283_0x127 BYTE 0
    field284_0x128 BYTE 0
    field285_0x129 BYTE 0
    field286_0x12a BYTE 0
    field287_0x12b BYTE 0
    field288_0x12c BYTE 0
    field289_0x12d BYTE 0
    field290_0x12e BYTE 0
    field291_0x12f BYTE 0
    field292_0x130 BYTE 0
    field293_0x131 BYTE 0
    field294_0x132 BYTE 0
    field295_0x133 BYTE 0
    field296_0x134 BYTE 0
    field297_0x135 BYTE 0
    field298_0x136 BYTE 0
    field299_0x137 BYTE 0
    field300_0x138 BYTE 0
    field301_0x139 BYTE 0
    field302_0x13a BYTE 0
    field303_0x13b BYTE 0
    field304_0x13c BYTE 0
    field305_0x13d BYTE 0
    field306_0x13e BYTE 0
    field307_0x13f BYTE 0
    field308_0x140 BYTE 0
    field309_0x141 BYTE 0
    field310_0x142 BYTE 0
    field311_0x143 BYTE 0
    field312_0x144 BYTE 0
    field313_0x145 BYTE 0
    field314_0x146 BYTE 0
    field315_0x147 BYTE 0
    field316_0x148 BYTE 0
    field317_0x149 BYTE 0
    field318_0x14a BYTE 0
    field319_0x14b BYTE 0
    field320_0x14c BYTE 0
    field321_0x14d BYTE 0
    field322_0x14e BYTE 0
    field323_0x14f BYTE 0
    field324_0x150 BYTE 0
    field325_0x151 BYTE 0
    field326_0x152 BYTE 0
    field327_0x153 BYTE 0
    field328_0x154 BYTE 0
    field329_0x155 BYTE 0
    field330_0x156 BYTE 0
    field331_0x157 BYTE 0
    field332_0x158 BYTE 0
    field333_0x159 BYTE 0
    field334_0x15a BYTE 0
    field335_0x15b BYTE 0
    field336_0x15c BYTE 0
    field337_0x15d BYTE 0
    field338_0x15e BYTE 0
    field339_0x15f BYTE 0
    field340_0x160 BYTE 0
    field341_0x161 BYTE 0
    field342_0x162 BYTE 0
    field343_0x163 BYTE 0
    field344_0x164 BYTE 0
    field345_0x165 BYTE 0
    field346_0x166 BYTE 0
    field347_0x167 BYTE 0
    field348_0x168 BYTE 0
    field349_0x169 BYTE 0
    field350_0x16a BYTE 0
    field351_0x16b BYTE 0
    field352_0x16c BYTE 0
    field353_0x16d BYTE 0
    field354_0x16e BYTE 0
    field355_0x16f BYTE 0
    field356_0x170 BYTE 0
    field357_0x171 BYTE 0
    field358_0x172 BYTE 0
    field359_0x173 BYTE 0
    field360_0x174 BYTE 0
    field361_0x175 BYTE 0
    field362_0x176 BYTE 0
    field363_0x177 BYTE 0
    field364_0x178 BYTE 0
    field365_0x179 BYTE 0
    field366_0x17a BYTE 0
    field367_0x17b BYTE 0
    field368_0x17c BYTE 0
    field369_0x17d BYTE 0
    field370_0x17e BYTE 0
    field371_0x17f BYTE 0
    field372_0x180 BYTE 0
    field373_0x181 BYTE 0
    field374_0x182 BYTE 0
    field375_0x183 BYTE 0
    field376_0x184 BYTE 0
    field377_0x185 BYTE 0
    field378_0x186 BYTE 0
    field379_0x187 BYTE 0
    field380_0x188 BYTE 0
    field381_0x189 BYTE 0
    field382_0x18a BYTE 0
    field383_0x18b BYTE 0
    field384_0x18c BYTE 0
    field385_0x18d BYTE 0
    field386_0x18e BYTE 0
    field387_0x18f BYTE 0
    field388_0x190 BYTE 0
    field389_0x191 BYTE 0
    field390_0x192 BYTE 0
    field391_0x193 BYTE 0
    field392_0x194 BYTE 0
    field393_0x195 BYTE 0
    field394_0x196 BYTE 0
    field395_0x197 BYTE 0
    field396_0x198 BYTE 0
    field397_0x199 BYTE 0
    field398_0x19a BYTE 0
    field399_0x19b BYTE 0
    field400_0x19c BYTE 0
    field401_0x19d BYTE 0
    field402_0x19e BYTE 0
    field403_0x19f BYTE 0
    field404_0x1a0 BYTE 0
    field405_0x1a1 BYTE 0
    field406_0x1a2 BYTE 0
    field407_0x1a3 BYTE 0
    field408_0x1a4 DWORD 0
    field409_0x1a8 DWORD 0
    field410_0x1ac DWORD 0; UnkFamily27Wrapper *
    field411_0x1b0 DWORD 0; UNV012 *
    field412_0x1b4 DWORD 0
    field413_0x1b8 DWORD 0
    field414_0x1bc DWORD 0
    field415_0x1c0 DWORD 0; UNV012 *
    field416_0x1c4 DWORD 0
    field417_0x1c8 DWORD 0
    field418_0x1cc DWORD 0
    field419_0x1d0 DWORD 0; UNV012 *
    field420_0x1d4 DWORD 0
    field421_0x1d8 DWORD 0
    field422_0x1dc DWORD 0
UnkFamily27Abstract ENDS
UnkFamily27A STRUCT
    parent UnkFamily27Abstract {}
    array0 DWORD 0; pointer
    field2_0x1e4 DWORD 0
    field3_0x1e8 DWORD 0
    cnt0 DWORD 0
    array1 DWORD 0; pointer
    cnt1 DWORD 0
    array2 DWORD 0; UnkFamily21A * *
    cnt2 DWORD 0
    field9_0x200 DWORD 0
    array3 DWORD 0; pointer
    cnt3 DWORD 0
UnkFamily27A ENDS
UnkFamily27B STRUCT
    parent UnkFamily27Abstract {}
UnkFamily27B ENDS
IteratorC1Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC1Abstract ENDS
IteratorC1 STRUCT
    parent IteratorC1Abstract {}
    index WORD 0
    field2_0x6 WORD 0
    collection DWORD 0; pointer
IteratorC1 ENDS
IteratorC2Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC2Abstract ENDS
IteratorC2 STRUCT
    parent IteratorC2Abstract {}
    index WORD 0
    minFreeIndex WORD 0
    collection DWORD 0; pointer
IteratorC2 ENDS
ShaderProgramZ STRUCT
    parent ShaderProgramAbstract {}
    field1_0x80 BYTE 0
    field2_0x81 BYTE 0
    field3_0x82 BYTE 0
    field4_0x83 BYTE 0
    field5_0x84 BYTE 0
    field6_0x85 BYTE 0
    field7_0x86 BYTE 0
    field8_0x87 BYTE 0
    field9_0x88 BYTE 0
    field10_0x89 BYTE 0
    field11_0x8a BYTE 0
    field12_0x8b BYTE 0
    field13_0x8c BYTE 0
    field14_0x8d BYTE 0
    field15_0x8e BYTE 0
    field16_0x8f BYTE 0
ShaderProgramZ ENDS
IteratorC3Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC3Abstract ENDS
IteratorC3 STRUCT
    parent IteratorC3Abstract {}
    index WORD 0
    field2_0x6 WORD 0
    collection DWORD 0; UnkFamily28A *
IteratorC3 ENDS
UnkFamily28B STRUCT
    parent UnkFamily28Abstract {}
UnkFamily28B ENDS
MY_D3DXCOLOR STRUCT
    R REAL4 0.0;
    G REAL4 0.0;
    B REAL4 0.0;
    A REAL4 0.0;
MY_D3DXCOLOR ENDS
UnkFamily29Abstract STRUCT
    vtable DWORD 0; UnkFamily29Abstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    color MY_D3DXCOLOR {}
UnkFamily29Abstract ENDS
UnkFamily29A STRUCT
    parent UnkFamily29Abstract {}
    field1_0x20 MY_D3DXCOLOR {}
    field2_0x30 MY_D3DXCOLOR {}
    field3_0x40 MY_D3DXCOLOR {}
UnkFamily29A ENDS
UnkFamily29B STRUCT
    parent UnkFamily29Abstract {}
    field1_0x20 MY_D3DXCOLOR {}
    field2_0x30 MY_D3DXCOLOR {}
    field3_0x40 MY_D3DXCOLOR {}
UnkFamily29B ENDS
UnkFamily29C STRUCT
    parent UnkFamily29Abstract {}
    alpha REAL4 0.0;
UnkFamily29C ENDS
IteratorA4Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA4Abstract ENDS
IteratorA4 STRUCT
    parent IteratorA4Abstract {}
    colection DWORD 0; pointer
    index DWORD 0
IteratorA4 ENDS
UnkFamily14A STRUCT
    parent UnkFamily14Base {}
    field1_0x110 Matrix4 {}
    field2_0x150 Vector4 {}
UnkFamily14A ENDS
UnkFamily30Abstract STRUCT
    vtable DWORD 0; UnkFamily30Abstract_VTable *
UnkFamily30Abstract ENDS
UnkFamily30A STRUCT
    parent UnkFamily30Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
UnkFamily30A ENDS
UnkFamily31Abstract STRUCT
    vtable DWORD 0; UnkFamily31Abstract_VTable *
UnkFamily31Abstract ENDS
UnkFamily31A STRUCT
    parent UnkFamily31Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
UnkFamily31A ENDS
UnkFamily32Abstract STRUCT
    vtable DWORD 0; UnkFamily32Abstract_VTable *
UnkFamily32Abstract ENDS
UnkFamily32A STRUCT
    parent UnkFamily32Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
UnkFamily32A ENDS
UnkFamily30AA STRUCT
    parent UnkFamily30A {}
    field1_0xc DWORD 0
    field2_0x10 DWORD 0; pointer
UnkFamily30AA ENDS
UnkFamily31AA STRUCT
    parent UnkFamily31A {}
    field1_0xc DWORD 0
    field2_0x10 DWORD 0; pointer
UnkFamily31AA ENDS
UnkFamily32AA STRUCT
    parent UnkFamily32A {}
    field1_0xc DWORD 0
    field2_0x10 DWORD 0; pointer
UnkFamily32AA ENDS
UnkFamily33Abstract STRUCT
    vtable DWORD 0; UnkFamily33Abstract_VTable *
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 Vector4 {}
    field14_0x20 Vector4 {}
    list1 DWORD 0; pointer
    list2 DWORD 0; pointer
    field17_0x38 DWORD 0
    field18_0x3c DWORD 0
    field19_0x40 DWORD 0
    field20_0x44 DWORD 0
    field21_0x48 DWORD 0
    field22_0x4c DWORD 0
    field23_0x50 DWORD 0
UnkFamily33Abstract ENDS
UnkFamily33A STRUCT
    parent UnkFamily33Abstract {}
UnkFamily33A ENDS
UnkFamily33B STRUCT
    parent UnkFamily33Abstract {}
    field1_0x54 BYTE 0
    field2_0x55 BYTE 0
    field3_0x56 BYTE 0
    field4_0x57 BYTE 0
    field5_0x58 BYTE 0
    field6_0x59 BYTE 0
    field7_0x5a BYTE 0
    field8_0x5b BYTE 0
    field9_0x5c BYTE 0
    field10_0x5d BYTE 0
    field11_0x5e BYTE 0
    field12_0x5f BYTE 0
    field13_0x60 DWORD 0; pointer
UnkFamily33B ENDS
UnkFamily33BA STRUCT
    parent UnkFamily33B {}
    field1_0x64 BYTE 0
    field2_0x65 BYTE 0
    field3_0x66 BYTE 0
    field4_0x67 BYTE 0
    field5_0x68 BYTE 0
    field6_0x69 BYTE 0
    field7_0x6a BYTE 0
    field8_0x6b BYTE 0
    field9_0x6c BYTE 0
    field10_0x6d BYTE 0
    field11_0x6e BYTE 0
    field12_0x6f BYTE 0
    field13_0x70 DWORD 0; pointer
UnkFamily33BA ENDS
UnkFamily33BAA STRUCT
    parent UnkFamily33BA {}
    field1_0x74 BYTE 0
    field2_0x75 BYTE 0
    field3_0x76 BYTE 0
    field4_0x77 BYTE 0
    field5_0x78 BYTE 0
    field6_0x79 BYTE 0
    field7_0x7a BYTE 0
    field8_0x7b BYTE 0
    field9_0x7c BYTE 0
    field10_0x7d BYTE 0
    field11_0x7e BYTE 0
    field12_0x7f BYTE 0
    field13_0x80 BYTE 0
    field14_0x81 BYTE 0
    field15_0x82 BYTE 0
    field16_0x83 BYTE 0
    field17_0x84 BYTE 0
    field18_0x85 BYTE 0
    field19_0x86 BYTE 0
    field20_0x87 BYTE 0
    field21_0x88 BYTE 0
    field22_0x89 BYTE 0
    field23_0x8a BYTE 0
    field24_0x8b BYTE 0
    field25_0x8c BYTE 0
    field26_0x8d BYTE 0
    field27_0x8e BYTE 0
    field28_0x8f BYTE 0
    field29_0x90 DWORD 0
UnkFamily33BAA ENDS
IteratorB11Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB11Abstract ENDS
IteratorB11 STRUCT
    parent IteratorB11Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB11 ENDS
UnkFamily35Base STRUCT
    vtable DWORD 0; UnkFamily35Base_VTable *
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
    field4_0xa WORD 0
    field5_0xc DWORD 0; pointer
    field6_0x10 DWORD 0; pointer
UnkFamily35Base ENDS
UnkFamily36Base STRUCT
    vtable DWORD 0; UnkFamily36Base_VTable *
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
    field4_0xa WORD 0
    field5_0xc DWORD 0; pointer
    field6_0x10 DWORD 0; pointer
UnkFamily36Base ENDS
IteratorDAbstract STRUCT
    vtable DWORD 0; IteratorDBase_VTable *
IteratorDAbstract ENDS
IteratorD1Abstract STRUCT
    parent IteratorDAbstract {}
IteratorD1Abstract ENDS
IteratorD1 STRUCT
    parent IteratorD1Abstract {}
    first DWORD 0; pointer
    current DWORD 0; pointer
IteratorD1 ENDS
IteratorD1AbstractEx STRUCT
    parent IteratorD1Abstract {}
IteratorD1AbstractEx ENDS
IteratorD2Abstract STRUCT
    parent IteratorDAbstract {}
IteratorD2Abstract ENDS
IteratorD2 STRUCT
    parent IteratorD2Abstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0; pointer
IteratorD2 ENDS
IteratorD2AbstractEx STRUCT
    parent IteratorD2Abstract {}
IteratorD2AbstractEx ENDS
UnkFamily39Abstract STRUCT
    vtable DWORD 0; UnkFamily39Abstract_VTable *
    strArray BYTE 108 dup (0)
    cnt BYTE 0
    field3_0x71 BYTE 0
    field4_0x72 BYTE 0
    field5_0x73 BYTE 0
UnkFamily39Abstract ENDS
UnkFamily39A STRUCT
    parent UnkFamily39Abstract {}
UnkFamily39A ENDS
IteratorE3Abstract STRUCT
    parent IteratorEAbstract {}
IteratorE3Abstract ENDS
IteratorE3 STRUCT
    parent IteratorE3Abstract {}
    field1_0x4 DWORD 0; pointer
    collection DWORD 0; pointer
    index DWORD 0
IteratorE3 ENDS
IteratorB8Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB8Abstract ENDS
IteratorB8 STRUCT
    parent IteratorB8Abstract {}
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
IteratorB8 ENDS
IteratorB8AbstractEx STRUCT
    parent IteratorB8Abstract {}
IteratorB8AbstractEx ENDS
IteratorB9Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB9Abstract ENDS
IteratorB9AbstractEx STRUCT
    parent IteratorB9Abstract {}
IteratorB9AbstractEx ENDS
IteratorB9 STRUCT
    parent IteratorB9Abstract {}
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
IteratorB9 ENDS
IteratorA3Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA3Abstract ENDS
IteratorA3 STRUCT
    parent IteratorA3Abstract {}
    currentItem DWORD 0; ObjectBuilder *
    field2_0x8 DWORD 0; ObjectBuilder *
IteratorA3 ENDS
IteratorA3AbstractEx STRUCT
    parent IteratorA3Abstract {}
IteratorA3AbstractEx ENDS
UnkFamily5AC STRUCT
    parent UnkFamily5A {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    field5_0x18 BYTE 0
    field6_0x19 BYTE 0
    field7_0x1a BYTE 0
    field8_0x1b BYTE 0
    field9_0x1c BYTE 0
    field10_0x1d BYTE 0
    field11_0x1e BYTE 0
    field12_0x1f BYTE 0
UnkFamily5AC ENDS
IteratorA4AbstractEx STRUCT
    parent IteratorA4Abstract {}
    colection DWORD 0; pointer
    index DWORD 0
IteratorA4AbstractEx ENDS
IteratorA2AbstractEx STRUCT
    parent IteratorA2Abstract {}
    colection DWORD 0; AutoClass58SubCollection *
    index DWORD 0
IteratorA2AbstractEx ENDS
IteratorB12Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB12Abstract ENDS
IteratorB12 STRUCT
    parent IteratorB12Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB12 ENDS
IteratorD3Abstract STRUCT
    parent IteratorDAbstract {}
IteratorD3Abstract ENDS
IteratorD3 STRUCT
    parent IteratorD3Abstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0; pointer
IteratorD3 ENDS
IteratorD3AbstractEx STRUCT
    parent IteratorD3Abstract {}
    field1_0x4 DWORD 0; pointer
    field2_0x8 DWORD 0; pointer
IteratorD3AbstractEx ENDS
IteratorB13Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB13Abstract ENDS
IteratorB13 STRUCT
    parent IteratorB13Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB13 ENDS
IteratorB14Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB14Abstract ENDS
IteratorB14 STRUCT
    parent IteratorB14Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    index DWORD 0
IteratorB14 ENDS
IteratorB15Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB15Abstract ENDS
IteratorB15 STRUCT
    parent IteratorB15Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB15 ENDS
IteratorB16Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB16Abstract ENDS
IteratorB16 STRUCT
    parent IteratorB16Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB16 ENDS
IteratorB17Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB17Abstract ENDS
IteratorB17 STRUCT
    parent IteratorB17Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB17 ENDS
IteratorB18Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB18Abstract ENDS
IteratorB18 STRUCT
    parent IteratorB18Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB18 ENDS
IteratorB19Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB19Abstract ENDS
IteratorB19 STRUCT
    parent IteratorB19Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    index DWORD 0
IteratorB19 ENDS
IteratorB20Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB20Abstract ENDS
IteratorB20 STRUCT
    parent IteratorB20Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    index DWORD 0
IteratorB20 ENDS
IteratorB21Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB21Abstract ENDS
IteratorB21 STRUCT
    parent IteratorB21Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB21 ENDS
IteratorB22Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB22Abstract ENDS
IteratorB22 STRUCT
    parent IteratorB22Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB22 ENDS
IteratorC6Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC6Abstract ENDS
IteratorC6 STRUCT
    parent IteratorC6Abstract {}
    field1_0x4 WORD 0
    index WORD 0
    collection DWORD 0; pointer
IteratorC6 ENDS
IteratorC7Abstract STRUCT
    parent IteratorCAbstract {}
IteratorC7Abstract ENDS
IteratorC7 STRUCT
    parent IteratorC7Abstract {}
    field1_0x4 WORD 0
    index WORD 0
    collection DWORD 0; pointer
IteratorC7 ENDS
IteratorA6Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA6Abstract ENDS
IteratorA6 STRUCT
    parent IteratorA6Abstract {}
    stringCollection DWORD 0; StringCollection *
    strIndex DWORD 0
IteratorA6 ENDS
IteratorA6AbstractEx STRUCT
    parent IteratorA6Abstract {}
IteratorA6AbstractEx ENDS
IteratorA7Abstract STRUCT
    parent IteratorAAbstract {}
IteratorA7Abstract ENDS
IteratorA7 STRUCT
    parent IteratorA7Abstract {}
    stringCollection DWORD 0; StringCollection *
    strIndex DWORD 0
IteratorA7 ENDS
IteratorA7AbstractEx STRUCT
    parent IteratorA7Abstract {}
IteratorA7AbstractEx ENDS
IteratorB23Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB23Abstract ENDS
IteratorB23 STRUCT
    parent IteratorB23Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB23 ENDS
IteratorB24Abstract STRUCT
    parent IteratorBAbstract {}
IteratorB24Abstract ENDS
IteratorB24 STRUCT
    parent IteratorB24Abstract {}
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
IteratorB24 ENDS
UnkFamily1Base STRUCT
    vtable DWORD 0; UnkFamily1Base_VTable *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 BYTE 0
    field5_0x11 BYTE 0
    field6_0x12 BYTE 0
    field7_0x13 BYTE 0
    field8_0x14 DWORD 0
    field9_0x18 DWORD 0
    field10_0x1c BYTE 0
    field11_0x1d BYTE 0
    field12_0x1e WORD 0
UnkFamily1Base ENDS
UnkFamily4Base STRUCT
    vtable DWORD 0; UnkFamily4Base_VTable *
    field1_0x4 DWORD 0; pointer
    ctx DWORD 0; InstanceContext *
UnkFamily4Base ENDS
UnkFamily4A STRUCT
    parent UnkFamily4Base {}
    field1_0xc DWORD 0; pointer
    field2_0x10 DWORD 0; AutoClass25 *
UnkFamily4A ENDS
UnkFamily9Base STRUCT
    vtable DWORD 0; UnkFamily9Base_VTable *
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 WORD 0
    field4_0xa WORD 0
    field5_0xc DWORD 0; pointer
    field6_0x10 DWORD 0; pointer
UnkFamily9Base ENDS
UnkFamily9A STRUCT
    parent UnkFamily9Base {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
UnkFamily9A ENDS
UnkBuilder1Item0x1B0A STRUCT
    parent UnkBuilder1ItemAbstract {}
    field1_0x20 TwinString {}
    field2_0x2c BYTE 0
    field3_0x2d BYTE 0
    field4_0x2e BYTE 0
    field5_0x2f BYTE 0
    field6_0x30 Vector4 {}
    field7_0x40 Vector4 {}
    field8_0x50 Vector4 {}
    field9_0x60 Vector4 {}
    field10_0x70 Vector4 {}
    field11_0x80 Vector4 {}
    field12_0x90 Vector4 {}
    field13_0xa0 BYTE 0
    field14_0xa1 BYTE 0
    field15_0xa2 BYTE 0
    field16_0xa3 BYTE 0
    field17_0xa4 BYTE 0
    field18_0xa5 BYTE 0
    field19_0xa6 BYTE 0
    field20_0xa7 BYTE 0
    field21_0xa8 BYTE 0
    field22_0xa9 BYTE 0
    field23_0xaa BYTE 0
    field24_0xab BYTE 0
    field25_0xac BYTE 0
    field26_0xad BYTE 0
    field27_0xae BYTE 0
    field28_0xaf BYTE 0
    field29_0xb0 BYTE 0
    field30_0xb1 BYTE 0
    field31_0xb2 BYTE 0
    field32_0xb3 BYTE 0
    field33_0xb4 BYTE 0
    field34_0xb5 BYTE 0
    field35_0xb6 BYTE 0
    field36_0xb7 BYTE 0
    field37_0xb8 BYTE 0
    field38_0xb9 BYTE 0
    field39_0xba BYTE 0
    field40_0xbb BYTE 0
    field41_0xbc BYTE 0
    field42_0xbd BYTE 0
    field43_0xbe BYTE 0
    field44_0xbf BYTE 0
    field45_0xc0 BYTE 0
    field46_0xc1 BYTE 0
    field47_0xc2 BYTE 0
    field48_0xc3 BYTE 0
    field49_0xc4 BYTE 0
    field50_0xc5 BYTE 0
    field51_0xc6 BYTE 0
    field52_0xc7 BYTE 0
    field53_0xc8 BYTE 0
    field54_0xc9 BYTE 0
    field55_0xca BYTE 0
    field56_0xcb BYTE 0
    field57_0xcc BYTE 0
    field58_0xcd BYTE 0
    field59_0xce BYTE 0
    field60_0xcf BYTE 0
    field61_0xd0 BYTE 0
    field62_0xd1 BYTE 0
    field63_0xd2 BYTE 0
    field64_0xd3 BYTE 0
UnkBuilder1Item0x1B0A ENDS
UnkFamily8BC STRUCT
    parent UnkFamily8B {}
    field1_0x14 BYTE 0
    field2_0x15 BYTE 0
    field3_0x16 BYTE 0
    field4_0x17 BYTE 0
    name TwinString {}
UnkFamily8BC ENDS
ResourceListGameObject STRUCT
    capacity WORD 0
    count WORD 0
    gameObjectArray BYTE 3068 dup (0)
ResourceListGameObject ENDS
ResourceListAnimation STRUCT
    capacity WORD 0
    count WORD 0
    animationArray BYTE 3068 dup (0)
ResourceListAnimation ENDS
ResourceListScript STRUCT
    capacity WORD 0
    count WORD 0
    scriptArray BYTE 3068 dup (0)
ResourceListScript ENDS
ResourceListCodeModel STRUCT
    capacity WORD 0
    count WORD 0
    codeMolelArray BYTE 3068 dup (0)
ResourceListCodeModel ENDS
ResourceListOGI STRUCT
    capacity WORD 0
    count WORD 0
    ogiArray BYTE 3068 dup (0)
ResourceListOGI ENDS
ResourceListSound STRUCT
    capacity WORD 0
    count WORD 0
    sfxArray BYTE 3068 dup (0)
ResourceListSound ENDS
ResourceListTwinsanityMaterial STRUCT
    capacity WORD 0
    count WORD 0
    materialArray BYTE 3068 dup (0)
ResourceListTwinsanityMaterial ENDS
ResourceListTwinsanityTexture STRUCT
    capacity WORD 0
    count WORD 0
    textureArray BYTE 3068 dup (0)
ResourceListTwinsanityTexture ENDS
ResourceListTwinsanityModel STRUCT
    capacity WORD 0
    count WORD 0
    modelArray BYTE 3068 dup (0)
ResourceListTwinsanityModel ENDS
ResourceListTwinsanityRigidModel STRUCT
    capacity WORD 0
    count WORD 0
    rigidModelArray BYTE 3068 dup (0)
ResourceListTwinsanityRigidModel ENDS
ResourceListTwinsanitySkin STRUCT
    capacity WORD 0
    count WORD 0
    skinArray BYTE 3068 dup (0)
ResourceListTwinsanitySkin ENDS
ResourceListTwinsanityBlendSkin STRUCT
    capacity WORD 0
    count WORD 0
    blendSkinArray BYTE 3068 dup (0)
ResourceListTwinsanityBlendSkin ENDS
ResourceListTwinsanityRigidModel2 STRUCT
    capacity WORD 0
    count WORD 0
    rigidModelArray BYTE 3068 dup (0)
ResourceListTwinsanityRigidModel2 ENDS
ResourceListTwinsanitySkydome STRUCT
    capacity WORD 0
    count WORD 0
    skydomeArray BYTE 3068 dup (0)
ResourceListTwinsanitySkydome ENDS
ResourceListTwinsanityLod STRUCT
    capacity WORD 0
    count WORD 0
    lodArray BYTE 3068 dup (0)
ResourceListTwinsanityLod ENDS
UnkFamily28Element STRUCT
    field0_0x0 DWORD 0
    soundRelated DWORD 0; uint *
    field2_0x8 REAL4 0.0;
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
    field7_0x10 BYTE 0
    field8_0x11 BYTE 0
    field9_0x12 BYTE 0
    field10_0x13 BYTE 0
    flags DWORD 0
    field12_0x18 BYTE 0
    field13_0x19 BYTE 0
    field14_0x1a BYTE 0
    field15_0x1b BYTE 0
UnkFamily28Element ENDS
FileResourceSupport STRUCT
    field0_0x0 DWORD 0; pointer
    field1_0x4 WORD 0
    field2_0x6 WORD 0
    field3_0x8 DWORD 0
    field4_0xc DWORD 0
    stringCollection StringCollection {}
    _str TwinString {}
FileResourceSupport ENDS
InstanceNodeInstanceASub STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    field48_0x30 BYTE 0
    field49_0x31 BYTE 0
    field50_0x32 BYTE 0
    field51_0x33 BYTE 0
    field52_0x34 BYTE 0
    field53_0x35 BYTE 0
    field54_0x36 BYTE 0
    field55_0x37 BYTE 0
    field56_0x38 BYTE 0
    field57_0x39 BYTE 0
    field58_0x3a BYTE 0
    field59_0x3b BYTE 0
    field60_0x3c BYTE 0
    field61_0x3d BYTE 0
    field62_0x3e BYTE 0
    field63_0x3f BYTE 0
    field64_0x40 BYTE 32 dup (0)
    field65_0x60 DWORD 0
    field66_0x64 BYTE 0
    field67_0x65 BYTE 0
    field68_0x66 BYTE 0
    field69_0x67 BYTE 0
    field70_0x68 BYTE 0
    field71_0x69 BYTE 0
    field72_0x6a BYTE 0
    field73_0x6b BYTE 0
InstanceNodeInstanceASub ENDS
BHRecord STRUCT
    _offset DWORD 0
    _length DWORD 0
    fname TwinString {}
BHRecord ENDS
UnkSingletone STRUCT
    cnt DWORD 0
    occupied DWORD 0
    poolSize DWORD 0
    field3_0xc DWORD 0
    pool DWORD 0; pointer
    field5_0x14 DWORD 0; UnkSingletoneElement *
UnkSingletone ENDS
UnkSingletoneElement STRUCT
    field0_0x0 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 DWORD 0
UnkSingletoneElement ENDS
SaveSystemA STRUCT
    parent SaveSystemAbstract {}
SaveSystemA ENDS
Matrix4Array STRUCT
    array DWORD 0; Matrix4 * *
    cnt DWORD 0
Matrix4Array ENDS
UNV001 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
UNV001 ENDS
UNV004 STRUCT
    vec Vector4 {}
    field1_0x10 BYTE 0
    field2_0x11 BYTE 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 REAL4 0.0;
    field6_0x18 REAL4 0.0;
    field7_0x1c BYTE 0
    field8_0x1d BYTE 0
    field9_0x1e BYTE 0
    field10_0x1f BYTE 0
UNV004 ENDS
UNV005 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
UNV005 ENDS
UNV006 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
    field7_0x10 DWORD 0
    field8_0x14 DWORD 0
    field9_0x18 DWORD 0
    field10_0x1c BYTE 0
    field11_0x1d BYTE 0
    field12_0x1e BYTE 0
    field13_0x1f BYTE 0
    field14_0x20 BYTE 16 dup (0)
    field15_0x30 BYTE 2416 dup (0)
UNV006 ENDS
UNV007 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    bb BoundingBox {}
    field14_0x30 REAL4 0.0;
    field15_0x34 DWORD 0
    field16_0x38 WORD 0
    field17_0x3a WORD 0
    field18_0x3c DWORD 0
    field19_0x40 DWORD 0
    field20_0x44 BYTE 0
    field21_0x45 BYTE 0
    field22_0x46 BYTE 0
    field23_0x47 BYTE 0
    field24_0x48 BYTE 0
    field25_0x49 BYTE 0
    field26_0x4a BYTE 0
    field27_0x4b BYTE 0
    field28_0x4c BYTE 0
    field29_0x4d BYTE 0
    field30_0x4e BYTE 0
    field31_0x4f BYTE 0
UNV007 ENDS
UNV008 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
UNV008 ENDS
UNV009 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    field48_0x30 BYTE 0
    field49_0x31 BYTE 0
    field50_0x32 BYTE 0
    field51_0x33 BYTE 0
    field52_0x34 BYTE 0
    field53_0x35 BYTE 0
    field54_0x36 BYTE 0
    field55_0x37 BYTE 0
    field56_0x38 BYTE 0
    field57_0x39 BYTE 0
    field58_0x3a BYTE 0
    field59_0x3b BYTE 0
    field60_0x3c BYTE 0
    field61_0x3d BYTE 0
    field62_0x3e BYTE 0
    field63_0x3f BYTE 0
    field64_0x40 BYTE 0
    field65_0x41 BYTE 0
    field66_0x42 BYTE 0
    field67_0x43 BYTE 0
UNV009 ENDS
UNV010 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    field48_0x30 BYTE 0
    field49_0x31 BYTE 0
    field50_0x32 BYTE 0
    field51_0x33 BYTE 0
    field52_0x34 BYTE 0
    field53_0x35 BYTE 0
    field54_0x36 BYTE 0
    field55_0x37 BYTE 0
    field56_0x38 BYTE 0
    field57_0x39 BYTE 0
    field58_0x3a BYTE 0
    field59_0x3b BYTE 0
    field60_0x3c BYTE 0
    field61_0x3d BYTE 0
    field62_0x3e BYTE 0
    field63_0x3f BYTE 0
    field64_0x40 BYTE 0
    field65_0x41 BYTE 0
    field66_0x42 BYTE 0
    field67_0x43 BYTE 0
    field68_0x44 BYTE 0
    field69_0x45 BYTE 0
    field70_0x46 BYTE 0
    field71_0x47 BYTE 0
    field72_0x48 BYTE 0
    field73_0x49 BYTE 0
    field74_0x4a BYTE 0
    field75_0x4b BYTE 0
    field76_0x4c BYTE 0
    field77_0x4d BYTE 0
    field78_0x4e BYTE 0
    field79_0x4f BYTE 0
    field80_0x50 BYTE 0
    field81_0x51 BYTE 0
    field82_0x52 BYTE 0
    field83_0x53 BYTE 0
    field84_0x54 BYTE 0
    field85_0x55 BYTE 0
    field86_0x56 BYTE 0
    field87_0x57 BYTE 0
    field88_0x58 BYTE 0
    field89_0x59 BYTE 0
    field90_0x5a BYTE 0
    field91_0x5b BYTE 0
    field92_0x5c BYTE 0
    field93_0x5d BYTE 0
    field94_0x5e BYTE 0
    field95_0x5f BYTE 0
    field96_0x60 BYTE 0
    field97_0x61 BYTE 0
    field98_0x62 BYTE 0
    field99_0x63 BYTE 0
    field100_0x64 BYTE 0
    field101_0x65 BYTE 0
    field102_0x66 BYTE 0
    field103_0x67 BYTE 0
    field104_0x68 BYTE 0
    field105_0x69 BYTE 0
    field106_0x6a BYTE 0
    field107_0x6b BYTE 0
    field108_0x6c BYTE 0
    field109_0x6d BYTE 0
    field110_0x6e BYTE 0
    field111_0x6f BYTE 0
    field112_0x70 BYTE 0
    field113_0x71 BYTE 0
    field114_0x72 BYTE 0
    field115_0x73 BYTE 0
    field116_0x74 BYTE 0
    field117_0x75 BYTE 0
    field118_0x76 BYTE 0
    field119_0x77 BYTE 0
    field120_0x78 BYTE 0
    field121_0x79 BYTE 0
    field122_0x7a BYTE 0
    field123_0x7b BYTE 0
    field124_0x7c BYTE 0
    field125_0x7d BYTE 0
    field126_0x7e BYTE 0
    field127_0x7f BYTE 0
    field128_0x80 BYTE 0
    field129_0x81 BYTE 0
    field130_0x82 BYTE 0
    field131_0x83 BYTE 0
    field132_0x84 BYTE 0
    field133_0x85 BYTE 0
    field134_0x86 BYTE 0
    field135_0x87 BYTE 0
    field136_0x88 BYTE 0
    field137_0x89 BYTE 0
    field138_0x8a BYTE 0
    field139_0x8b BYTE 0
    field140_0x8c BYTE 0
    field141_0x8d BYTE 0
    field142_0x8e BYTE 0
    field143_0x8f BYTE 0
    ctx DWORD 0; InstanceContext *
    field145_0x94 DWORD 0
    field146_0x98 DWORD 0
    refCounter DWORD 0; InstanceContextRefCounter *
    field148_0xa0 DWORD 0
    field149_0xa4 DWORD 0
    field150_0xa8 DWORD 0
    field151_0xac BYTE 0
    field152_0xad BYTE 0
    field153_0xae BYTE 0
    field154_0xaf BYTE 0
    field155_0xb0 DWORD 0
    field156_0xb4 BYTE 0
    field157_0xb5 BYTE 0
    field158_0xb6 BYTE 0
    field159_0xb7 BYTE 0
    field160_0xb8 DWORD 0
    field161_0xbc BYTE 0
    field162_0xbd BYTE 0
    field163_0xbe BYTE 0
    field164_0xbf BYTE 0
UNV010 ENDS
UNV011 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 REAL4 0.0;
    field21_0x18 BYTE 0
    field22_0x19 BYTE 0
    field23_0x1a BYTE 0
    field24_0x1b BYTE 0
    field25_0x1c BYTE 0
    field26_0x1d BYTE 0
    field27_0x1e BYTE 0
    field28_0x1f BYTE 0
    field29_0x20 Vector4 {}
    field30_0x30 DWORD 0
    field31_0x34 DWORD 0
    field32_0x38 REAL4 0.0;
    field33_0x3c DWORD 0
    field34_0x40 BYTE 0
    field35_0x41 BYTE 0
    field36_0x42 BYTE 0
    field37_0x43 BYTE 0
    field38_0x44 BYTE 0
    field39_0x45 BYTE 0
    field40_0x46 BYTE 0
    field41_0x47 BYTE 0
    field42_0x48 BYTE 0
    field43_0x49 BYTE 0
    field44_0x4a BYTE 0
    field45_0x4b BYTE 0
    field46_0x4c BYTE 0
    field47_0x4d BYTE 0
    field48_0x4e BYTE 0
    field49_0x4f BYTE 0
    field50_0x50 BYTE 0
    field51_0x51 BYTE 0
    field52_0x52 BYTE 0
    field53_0x53 BYTE 0
    field54_0x54 BYTE 0
    field55_0x55 BYTE 0
    field56_0x56 BYTE 0
    field57_0x57 BYTE 0
    field58_0x58 BYTE 0
    field59_0x59 BYTE 0
    field60_0x5a BYTE 0
    field61_0x5b BYTE 0
    field62_0x5c BYTE 0
    field63_0x5d BYTE 0
    field64_0x5e BYTE 0
    field65_0x5f BYTE 0
    field66_0x60 DWORD 0
    field67_0x64 DWORD 0
    field68_0x68 REAL4 0.0;
    field69_0x6c DWORD 0
    field70_0x70 WORD 0
    field71_0x72 BYTE 0
    field72_0x73 BYTE 0
    field73_0x74 BYTE 0
    field74_0x75 BYTE 0
    field75_0x76 BYTE 0
    field76_0x77 BYTE 0
    field77_0x78 BYTE 0
    field78_0x79 BYTE 0
    field79_0x7a BYTE 0
    field80_0x7b BYTE 0
    field81_0x7c BYTE 0
    field82_0x7d BYTE 0
    field83_0x7e BYTE 0
    field84_0x7f BYTE 0
UNV011 ENDS
UNV012 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
UNV012 ENDS
UNV013 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
UNV013 ENDS
UNV014 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
UNV014 ENDS
UNV015 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    array DWORD 0; undefined4 *
    field9_0xc DWORD 0
    bb BoundingBox {}
UNV015 ENDS
UNV016 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 Vector4 {}
    field17_0x20 BYTE 0
    field18_0x21 BYTE 0
    field19_0x22 BYTE 0
    field20_0x23 BYTE 0
    field21_0x24 BYTE 0
    field22_0x25 BYTE 0
    field23_0x26 BYTE 0
    field24_0x27 BYTE 0
    field25_0x28 BYTE 0
    field26_0x29 BYTE 0
    field27_0x2a BYTE 0
    field28_0x2b BYTE 0
    field29_0x2c BYTE 0
    field30_0x2d BYTE 0
    field31_0x2e BYTE 0
    field32_0x2f BYTE 0
    field33_0x30 BYTE 0
    field34_0x31 BYTE 0
    field35_0x32 BYTE 0
    field36_0x33 BYTE 0
    field37_0x34 BYTE 0
    field38_0x35 BYTE 0
    field39_0x36 BYTE 0
    field40_0x37 BYTE 0
    field41_0x38 BYTE 0
    field42_0x39 BYTE 0
    field43_0x3a BYTE 0
    field44_0x3b BYTE 0
    field45_0x3c BYTE 0
    field46_0x3d BYTE 0
    field47_0x3e BYTE 0
    field48_0x3f BYTE 0
    field49_0x40 Vector4 {}
    field50_0x50 BYTE 0
    field51_0x51 BYTE 0
    field52_0x52 BYTE 0
    field53_0x53 BYTE 0
    field54_0x54 BYTE 0
    field55_0x55 BYTE 0
    field56_0x56 BYTE 0
    field57_0x57 BYTE 0
    field58_0x58 BYTE 0
    field59_0x59 BYTE 0
    field60_0x5a BYTE 0
    field61_0x5b BYTE 0
    field62_0x5c BYTE 0
    field63_0x5d BYTE 0
    field64_0x5e BYTE 0
    field65_0x5f BYTE 0
UNV016 ENDS
UNV017 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    field48_0x30 BYTE 0
    field49_0x31 BYTE 0
    field50_0x32 BYTE 0
    field51_0x33 BYTE 0
    field52_0x34 BYTE 0
    field53_0x35 BYTE 0
    field54_0x36 BYTE 0
    field55_0x37 BYTE 0
    field56_0x38 BYTE 0
    field57_0x39 BYTE 0
    field58_0x3a BYTE 0
    field59_0x3b BYTE 0
    field60_0x3c BYTE 0
    field61_0x3d BYTE 0
    field62_0x3e BYTE 0
    field63_0x3f BYTE 0
UNV017 ENDS
UNV018 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
UNV018 ENDS
UNV019 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    field48_0x30 BYTE 0
    field49_0x31 BYTE 0
    field50_0x32 BYTE 0
    field51_0x33 BYTE 0
    field52_0x34 BYTE 0
    field53_0x35 BYTE 0
    field54_0x36 BYTE 0
    field55_0x37 BYTE 0
    field56_0x38 BYTE 0
    field57_0x39 BYTE 0
    field58_0x3a BYTE 0
    field59_0x3b BYTE 0
    field60_0x3c BYTE 0
    field61_0x3d BYTE 0
    field62_0x3e BYTE 0
    field63_0x3f BYTE 0
    field64_0x40 BYTE 0
    field65_0x41 BYTE 0
    field66_0x42 BYTE 0
    field67_0x43 BYTE 0
    field68_0x44 BYTE 0
    field69_0x45 BYTE 0
    field70_0x46 BYTE 0
    field71_0x47 BYTE 0
    field72_0x48 BYTE 0
    field73_0x49 BYTE 0
    field74_0x4a BYTE 0
    field75_0x4b BYTE 0
    field76_0x4c BYTE 0
    field77_0x4d BYTE 0
    field78_0x4e BYTE 0
    field79_0x4f BYTE 0
    field80_0x50 BYTE 0
    field81_0x51 BYTE 0
    field82_0x52 BYTE 0
    field83_0x53 BYTE 0
    field84_0x54 BYTE 0
    field85_0x55 BYTE 0
    field86_0x56 BYTE 0
    field87_0x57 BYTE 0
    field88_0x58 BYTE 0
    field89_0x59 BYTE 0
    field90_0x5a BYTE 0
    field91_0x5b BYTE 0
    field92_0x5c BYTE 0
    field93_0x5d BYTE 0
    field94_0x5e BYTE 0
    field95_0x5f BYTE 0
UNV019 ENDS
CollectionGeneric STRUCT
    array DWORD 0; void *
    field1_0x4 DWORD 0
    cnt1 DWORD 0
    cnt2 DWORD 0
CollectionGeneric ENDS
UnkFamily27Wrapper STRUCT
    _ptr DWORD 0; UnkFamily27A *
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
UnkFamily27Wrapper ENDS
UNV020 STRUCT
    field0_0x0 WORD 0
    field1_0x2 BYTE 0
    field2_0x3 BYTE 0
    field3_0x4 DWORD 0
    field4_0x8 DWORD 0
    animation1 AnimationBlob {}
    animation2 AnimationBlob {}
UNV020 ENDS
UNV021 STRUCT
    field0_0x0 DWORD 0
    next DWORD 0; UNV021 *
    payload AutoClass40 {}
UNV021 ENDS
UNV022 STRUCT
    field0_0x0 Matrix4 {}
    field1_0x40 Zone {}
UNV022 ENDS
UNV024 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 BYTE 0
    field5_0x11 BYTE 0
    field6_0x12 BYTE 0
    field7_0x13 BYTE 0
    field8_0x14 BYTE 0
    field9_0x15 BYTE 0
    field10_0x16 BYTE 0
    field11_0x17 BYTE 0
    field12_0x18 BYTE 0
    field13_0x19 BYTE 0
    field14_0x1a BYTE 0
    field15_0x1b BYTE 0
    field16_0x1c BYTE 0
    field17_0x1d BYTE 0
    field18_0x1e BYTE 0
    field19_0x1f BYTE 0
    field20_0x20 BYTE 0
    field21_0x21 BYTE 0
    field22_0x22 BYTE 0
    field23_0x23 BYTE 0
    field24_0x24 BYTE 0
    field25_0x25 BYTE 0
    field26_0x26 BYTE 0
    field27_0x27 BYTE 0
    field28_0x28 BYTE 0
    field29_0x29 BYTE 0
    field30_0x2a BYTE 0
    field31_0x2b BYTE 0
    field32_0x2c BYTE 0
    field33_0x2d BYTE 0
    field34_0x2e BYTE 0
    field35_0x2f BYTE 0
    field36_0x30 BYTE 0
    field37_0x31 BYTE 0
    field38_0x32 BYTE 0
    field39_0x33 BYTE 0
    field40_0x34 BYTE 0
    field41_0x35 BYTE 0
    field42_0x36 BYTE 0
    field43_0x37 BYTE 0
    field44_0x38 BYTE 0
    field45_0x39 BYTE 0
    field46_0x3a BYTE 0
    field47_0x3b BYTE 0
    field48_0x3c BYTE 0
    field49_0x3d BYTE 0
    field50_0x3e BYTE 0
    field51_0x3f BYTE 0
    field52_0x40 BYTE 0
    field53_0x41 BYTE 0
    field54_0x42 BYTE 0
    field55_0x43 BYTE 0
    field56_0x44 BYTE 0
    field57_0x45 BYTE 0
    field58_0x46 BYTE 0
    field59_0x47 BYTE 0
    field60_0x48 BYTE 0
    field61_0x49 BYTE 0
    field62_0x4a BYTE 0
    field63_0x4b BYTE 0
    field64_0x4c BYTE 0
    field65_0x4d BYTE 0
    field66_0x4e BYTE 0
    field67_0x4f BYTE 0
    field68_0x50 BYTE 0
    field69_0x51 BYTE 0
    field70_0x52 BYTE 0
    field71_0x53 BYTE 0
    field72_0x54 BYTE 0
    field73_0x55 BYTE 0
    field74_0x56 BYTE 0
    field75_0x57 BYTE 0
    field76_0x58 BYTE 0
    field77_0x59 BYTE 0
    field78_0x5a BYTE 0
    field79_0x5b BYTE 0
    field80_0x5c BYTE 0
    field81_0x5d BYTE 0
    field82_0x5e BYTE 0
    field83_0x5f BYTE 0
    field84_0x60 BYTE 0
    field85_0x61 BYTE 0
    field86_0x62 BYTE 0
    field87_0x63 BYTE 0
    field88_0x64 BYTE 0
    field89_0x65 BYTE 0
    field90_0x66 BYTE 0
    field91_0x67 BYTE 0
    field92_0x68 BYTE 0
    field93_0x69 BYTE 0
    field94_0x6a BYTE 0
    field95_0x6b BYTE 0
    field96_0x6c BYTE 0
    field97_0x6d BYTE 0
    field98_0x6e BYTE 0
    field99_0x6f BYTE 0
    field100_0x70 BYTE 0
    field101_0x71 BYTE 0
    field102_0x72 BYTE 0
    field103_0x73 BYTE 0
    field104_0x74 BYTE 0
    field105_0x75 BYTE 0
    field106_0x76 BYTE 0
    field107_0x77 BYTE 0
    field108_0x78 BYTE 0
    field109_0x79 BYTE 0
    field110_0x7a BYTE 0
    field111_0x7b BYTE 0
    field112_0x7c BYTE 0
    field113_0x7d BYTE 0
    field114_0x7e BYTE 0
    field115_0x7f BYTE 0
    field116_0x80 BYTE 0
    field117_0x81 BYTE 0
    field118_0x82 BYTE 0
    field119_0x83 BYTE 0
    field120_0x84 BYTE 0
    field121_0x85 BYTE 0
    field122_0x86 BYTE 0
    field123_0x87 BYTE 0
    field124_0x88 BYTE 0
    field125_0x89 BYTE 0
    field126_0x8a BYTE 0
    field127_0x8b BYTE 0
    field128_0x8c BYTE 0
    field129_0x8d BYTE 0
    field130_0x8e BYTE 0
    field131_0x8f BYTE 0
    field132_0x90 DWORD 0
UNV024 ENDS
UNV023 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    _str TwinString {}
    field5_0x10 DWORD 0
    field6_0x14 BYTE 0
    field7_0x15 BYTE 0
    field8_0x16 BYTE 0
    field9_0x17 BYTE 0
    field10_0x18 BYTE 0
    field11_0x19 BYTE 0
    field12_0x1a BYTE 0
    field13_0x1b BYTE 0
    field14_0x1c BYTE 0
    field15_0x1d BYTE 0
    field16_0x1e BYTE 0
    field17_0x1f BYTE 0
    field18_0x20 UNV024 {}
    field19_0xb4 BYTE 0
    field20_0xb5 BYTE 0
    field21_0xb6 BYTE 0
    field22_0xb7 BYTE 0
    field23_0xb8 BYTE 0
    field24_0xb9 BYTE 0
    field25_0xba BYTE 0
    field26_0xbb BYTE 0
    field27_0xbc BYTE 0
    field28_0xbd BYTE 0
    field29_0xbe BYTE 0
    field30_0xbf BYTE 0
    top DWORD 0; UNV021 *
    field32_0xc4 BYTE 0
    field33_0xc5 BYTE 0
    field34_0xc6 BYTE 0
    field35_0xc7 BYTE 0
    field36_0xc8 BYTE 0
    field37_0xc9 BYTE 0
    field38_0xca BYTE 0
    field39_0xcb BYTE 0
    field40_0xcc BYTE 0
    field41_0xcd BYTE 0
    field42_0xce BYTE 0
    field43_0xcf BYTE 0
UNV023 ENDS
UNV025 STRUCT
    array BYTE 120 dup (0)
UNV025 ENDS
UNV026 STRUCT
    mat BYTE 256 dup (0)
UNV026 ENDS
UNV027 STRUCT
    mat BYTE 128 dup (0)
UNV027 ENDS
UnkFamily24A STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    parent UnkFamily24Base {}
    field49_0x8c BYTE 0
    field50_0x8d BYTE 0
    field51_0x8e BYTE 0
    field52_0x8f BYTE 0
UnkFamily24A ENDS
UnkBuilder2Item0x1805 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
UnkBuilder2Item0x1805 ENDS
UnkBuilder2Item0x1808 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
UnkBuilder2Item0x1808 ENDS
UnkBuilder2Item0x1809 STRUCT
    field0_0x0 DWORD 0
UnkBuilder2Item0x1809 ENDS
UnkBuilder2Item0x180C STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
UnkBuilder2Item0x180C ENDS
UnkBuilder2Item0x180E STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
UnkBuilder2Item0x180E ENDS
UnkBuilder2Item0x1810 STRUCT
    field0_0x0 WORD 0
    field1_0x2 WORD 0
    field2_0x4 WORD 0
    field3_0x6 WORD 0
    field4_0x8 WORD 0
UnkBuilder2Item0x1810 ENDS
UnkBuilder2Item0x1811 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
UnkBuilder2Item0x1811 ENDS
UNV028 STRUCT
    vec Vector4 {}
    field1_0x10 BYTE 0
    field2_0x11 BYTE 0
    field3_0x12 BYTE 0
    field4_0x13 BYTE 0
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 BYTE 0
    field10_0x19 BYTE 0
    field11_0x1a BYTE 0
    field12_0x1b BYTE 0
    field13_0x1c BYTE 0
    field14_0x1d BYTE 0
    field15_0x1e BYTE 0
    field16_0x1f BYTE 0
    field17_0x20 BYTE 0
    field18_0x21 BYTE 0
    field19_0x22 BYTE 0
    field20_0x23 BYTE 0
    field21_0x24 BYTE 0
    field22_0x25 BYTE 0
    field23_0x26 BYTE 0
    field24_0x27 BYTE 0
    field25_0x28 BYTE 0
    field26_0x29 BYTE 0
    field27_0x2a BYTE 0
    field28_0x2b BYTE 0
    field29_0x2c BYTE 0
    field30_0x2d BYTE 0
    field31_0x2e BYTE 0
    field32_0x2f BYTE 0
    field33_0x30 BYTE 0
    field34_0x31 BYTE 0
    field35_0x32 BYTE 0
    field36_0x33 BYTE 0
    field37_0x34 BYTE 0
    field38_0x35 BYTE 0
    field39_0x36 BYTE 0
    field40_0x37 BYTE 0
    field41_0x38 BYTE 0
    field42_0x39 BYTE 0
    field43_0x3a BYTE 0
    field44_0x3b BYTE 0
    field45_0x3c BYTE 0
    field46_0x3d BYTE 0
    field47_0x3e BYTE 0
    field48_0x3f BYTE 0
    field49_0x40 BYTE 0
    field50_0x41 BYTE 0
    field51_0x42 BYTE 0
    field52_0x43 BYTE 0
    field53_0x44 BYTE 0
    field54_0x45 BYTE 0
    field55_0x46 BYTE 0
    field56_0x47 BYTE 0
    field57_0x48 BYTE 0
    field58_0x49 BYTE 0
    field59_0x4a BYTE 0
    field60_0x4b BYTE 0
    field61_0x4c BYTE 0
    field62_0x4d BYTE 0
    field63_0x4e BYTE 0
    field64_0x4f BYTE 0
    field65_0x50 BYTE 0
    field66_0x51 BYTE 0
    field67_0x52 BYTE 0
    field68_0x53 BYTE 0
    field69_0x54 BYTE 0
    field70_0x55 BYTE 0
    field71_0x56 BYTE 0
    field72_0x57 BYTE 0
    field73_0x58 BYTE 0
    field74_0x59 BYTE 0
    field75_0x5a BYTE 0
    field76_0x5b BYTE 0
    field77_0x5c BYTE 0
    field78_0x5d BYTE 0
    field79_0x5e BYTE 0
    field80_0x5f BYTE 0
UNV028 ENDS
UNV039 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 Vector4 {}
    ac40a AutoClass40 {}
    ac40b AutoClass40 {}
    field7_0x54 BYTE 0
    field8_0x55 BYTE 0
    field9_0x56 BYTE 0
    field10_0x57 BYTE 0
    field11_0x58 BYTE 0
    field12_0x59 BYTE 0
    field13_0x5a BYTE 0
    field14_0x5b BYTE 0
    field15_0x5c BYTE 0
    field16_0x5d BYTE 0
    field17_0x5e BYTE 0
    field18_0x5f BYTE 0
    field19_0x60 BYTE 0
    field20_0x61 BYTE 0
    field21_0x62 BYTE 0
    field22_0x63 BYTE 0
    field23_0x64 BYTE 0
    field24_0x65 BYTE 0
    field25_0x66 BYTE 0
    field26_0x67 BYTE 0
    field27_0x68 BYTE 0
    field28_0x69 BYTE 0
    field29_0x6a BYTE 0
    field30_0x6b BYTE 0
    field31_0x6c BYTE 0
    field32_0x6d BYTE 0
    field33_0x6e BYTE 0
    field34_0x6f BYTE 0
    field35_0x70 BYTE 0
    field36_0x71 BYTE 0
    field37_0x72 BYTE 0
    field38_0x73 BYTE 0
    field39_0x74 BYTE 0
    field40_0x75 BYTE 0
    field41_0x76 BYTE 0
    field42_0x77 BYTE 0
    field43_0x78 BYTE 0
    field44_0x79 BYTE 0
    field45_0x7a BYTE 0
    field46_0x7b BYTE 0
    field47_0x7c BYTE 0
    field48_0x7d BYTE 0
    field49_0x7e BYTE 0
    field50_0x7f BYTE 0
    field51_0x80 Vector2 {}
    field52_0x88 Vector2 {}
    field53_0x90 Vector2 {}
    field54_0x98 Vector2 {}
    field55_0xa0 Vector4 {}
    field56_0xb0 Vector2 {}
    field57_0xb8 Vector2 {}
    field58_0xc0 Vector4 {}
    field59_0xd0 Vector4 {}
    field60_0xe0 Vector4 {}
    field61_0xf0 BYTE 0
    field62_0xf1 BYTE 0
    field63_0xf2 BYTE 0
    field64_0xf3 BYTE 0
    field65_0xf4 BYTE 0
    field66_0xf5 BYTE 0
    field67_0xf6 BYTE 0
    field68_0xf7 BYTE 0
    field69_0xf8 BYTE 0
    field70_0xf9 BYTE 0
    field71_0xfa BYTE 0
    field72_0xfb BYTE 0
    field73_0xfc BYTE 0
    field74_0xfd BYTE 0
    field75_0xfe BYTE 0
    field76_0xff BYTE 0
    field77_0x100 Vector2 {}
    field78_0x108 Vector2 {}
    field79_0x110 Vector2 {}
    field80_0x118 REAL4 0.0;
    field81_0x11c BYTE 0
    field82_0x11d BYTE 0
    field83_0x11e BYTE 0
    field84_0x11f BYTE 0
    field85_0x120 BYTE 0
    field86_0x121 BYTE 0
    field87_0x122 BYTE 0
    field88_0x123 BYTE 0
    field89_0x124 BYTE 0
    field90_0x125 BYTE 0
    field91_0x126 BYTE 0
    field92_0x127 BYTE 0
    field93_0x128 BYTE 0
    field94_0x129 BYTE 0
    field95_0x12a BYTE 0
    field96_0x12b BYTE 0
    field97_0x12c BYTE 0
    field98_0x12d BYTE 0
    field99_0x12e BYTE 0
    field100_0x12f BYTE 0
UNV039 ENDS
UNV030 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 BYTE 0
    field14_0x11 BYTE 0
    field15_0x12 BYTE 0
    field16_0x13 BYTE 0
    field17_0x14 BYTE 0
    field18_0x15 BYTE 0
    field19_0x16 BYTE 0
    field20_0x17 BYTE 0
    field21_0x18 BYTE 0
    field22_0x19 BYTE 0
    field23_0x1a BYTE 0
    field24_0x1b BYTE 0
    field25_0x1c BYTE 0
    field26_0x1d BYTE 0
    field27_0x1e BYTE 0
    field28_0x1f BYTE 0
    field29_0x20 BYTE 0
    field30_0x21 BYTE 0
    field31_0x22 BYTE 0
    field32_0x23 BYTE 0
    field33_0x24 BYTE 0
    field34_0x25 BYTE 0
    field35_0x26 BYTE 0
    field36_0x27 BYTE 0
    field37_0x28 BYTE 0
    field38_0x29 BYTE 0
    field39_0x2a BYTE 0
    field40_0x2b BYTE 0
    field41_0x2c BYTE 0
    field42_0x2d BYTE 0
    field43_0x2e BYTE 0
    field44_0x2f BYTE 0
    field45_0x30 REAL4 0.0;
    field46_0x34 DWORD 0; NodeRelated2C *
    field47_0x38 BYTE 0
    field48_0x39 BYTE 0
    field49_0x3a BYTE 0
    field50_0x3b BYTE 0
    field51_0x3c BYTE 0
    field52_0x3d BYTE 0
    field53_0x3e BYTE 0
    field54_0x3f BYTE 0
UNV030 ENDS
UNV029 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 REAL4 0.0;
    field2_0x8 DWORD 0
    field3_0xc REAL4 0.0;
    field4_0x10 DWORD 0; UNV029 *
    field5_0x14 BYTE 0
    field6_0x15 BYTE 0
    field7_0x16 BYTE 0
    field8_0x17 BYTE 0
    field9_0x18 DWORD 0
    field10_0x1c DWORD 0
    field11_0x20 DWORD 0
    field12_0x24 DWORD 0
    field13_0x28 BYTE 0
    field14_0x29 BYTE 0
    field15_0x2a BYTE 0
    field16_0x2b BYTE 0
    field17_0x2c DWORD 0; NodeRelated2C *
UNV029 ENDS
UNV032 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 Vector4 {}
    field14_0x20 Vector4 {}
    field15_0x30 BYTE 0
    field16_0x31 BYTE 0
    field17_0x32 BYTE 0
    field18_0x33 BYTE 0
    field19_0x34 BYTE 0
    field20_0x35 BYTE 0
    field21_0x36 BYTE 0
    field22_0x37 BYTE 0
    field23_0x38 BYTE 0
    field24_0x39 BYTE 0
    field25_0x3a BYTE 0
    field26_0x3b BYTE 0
    field27_0x3c BYTE 0
    field28_0x3d BYTE 0
    field29_0x3e BYTE 0
    field30_0x3f BYTE 0
    field31_0x40 BYTE 0
    field32_0x41 BYTE 0
    field33_0x42 BYTE 0
    field34_0x43 BYTE 0
    field35_0x44 BYTE 0
    field36_0x45 BYTE 0
    field37_0x46 BYTE 0
    field38_0x47 BYTE 0
    field39_0x48 BYTE 0
    field40_0x49 BYTE 0
    field41_0x4a BYTE 0
    field42_0x4b BYTE 0
    field43_0x4c BYTE 0
    field44_0x4d BYTE 0
    field45_0x4e BYTE 0
    field46_0x4f BYTE 0
    field47_0x50 BYTE 0
    field48_0x51 BYTE 0
    field49_0x52 BYTE 0
    field50_0x53 BYTE 0
    field51_0x54 BYTE 0
    field52_0x55 BYTE 0
    field53_0x56 BYTE 0
    field54_0x57 BYTE 0
    field55_0x58 BYTE 0
    field56_0x59 BYTE 0
    field57_0x5a BYTE 0
    field58_0x5b BYTE 0
    field59_0x5c DWORD 0
    field60_0x60 InstanceContextSmartPtr {}
    smartPtr InstanceContextSmartPtr {}
    field62_0x68 BYTE 0
    field63_0x69 BYTE 0
    field64_0x6a BYTE 0
    field65_0x6b BYTE 0
    field66_0x6c BYTE 0
    field67_0x6d BYTE 0
    field68_0x6e BYTE 0
    field69_0x6f BYTE 0
    field70_0x70 BYTE 0
    field71_0x71 BYTE 0
    field72_0x72 BYTE 0
    field73_0x73 BYTE 0
    field74_0x74 BYTE 0
    field75_0x75 BYTE 0
    field76_0x76 BYTE 0
    field77_0x77 BYTE 0
    field78_0x78 BYTE 0
    field79_0x79 BYTE 0
    field80_0x7a BYTE 0
    field81_0x7b BYTE 0
    field82_0x7c BYTE 0
    field83_0x7d BYTE 0
    field84_0x7e BYTE 0
    field85_0x7f BYTE 0
    field86_0x80 BYTE 0
    field87_0x81 BYTE 0
    field88_0x82 BYTE 0
    field89_0x83 BYTE 0
    field90_0x84 BYTE 0
    field91_0x85 BYTE 0
    field92_0x86 BYTE 0
    field93_0x87 BYTE 0
    field94_0x88 BYTE 0
    field95_0x89 BYTE 0
    field96_0x8a BYTE 0
    field97_0x8b BYTE 0
    field98_0x8c BYTE 0
    field99_0x8d BYTE 0
    field100_0x8e BYTE 0
    field101_0x8f BYTE 0
    field102_0x90 BYTE 0
    field103_0x91 BYTE 0
    field104_0x92 BYTE 0
    field105_0x93 BYTE 0
    field106_0x94 BYTE 0
    field107_0x95 BYTE 0
    field108_0x96 BYTE 0
    field109_0x97 BYTE 0
    field110_0x98 BYTE 0
    field111_0x99 BYTE 0
    field112_0x9a BYTE 0
    field113_0x9b BYTE 0
    field114_0x9c BYTE 0
    field115_0x9d BYTE 0
    field116_0x9e BYTE 0
    field117_0x9f BYTE 0
    field118_0xa0 BYTE 0
    field119_0xa1 BYTE 0
    field120_0xa2 BYTE 0
    field121_0xa3 BYTE 0
    field122_0xa4 BYTE 0
    field123_0xa5 BYTE 0
    field124_0xa6 BYTE 0
    field125_0xa7 BYTE 0
    field126_0xa8 BYTE 0
    field127_0xa9 BYTE 0
    field128_0xaa BYTE 0
    field129_0xab BYTE 0
    field130_0xac BYTE 0
    field131_0xad BYTE 0
    field132_0xae BYTE 0
    field133_0xaf BYTE 0
    field134_0xb0 BYTE 0
    field135_0xb1 BYTE 0
    field136_0xb2 BYTE 0
    field137_0xb3 BYTE 0
    field138_0xb4 BYTE 0
    field139_0xb5 BYTE 0
    field140_0xb6 BYTE 0
    field141_0xb7 BYTE 0
    field142_0xb8 BYTE 0
    field143_0xb9 BYTE 0
    field144_0xba BYTE 0
    field145_0xbb BYTE 0
    field146_0xbc BYTE 0
    field147_0xbd BYTE 0
    field148_0xbe BYTE 0
    field149_0xbf BYTE 0
    field150_0xc0 BYTE 0
    field151_0xc1 BYTE 0
    field152_0xc2 BYTE 0
    field153_0xc3 BYTE 0
    field154_0xc4 BYTE 0
    field155_0xc5 BYTE 0
    field156_0xc6 BYTE 0
    field157_0xc7 BYTE 0
    field158_0xc8 BYTE 0
    field159_0xc9 BYTE 0
    field160_0xca BYTE 0
    field161_0xcb BYTE 0
    field162_0xcc BYTE 0
    field163_0xcd BYTE 0
    field164_0xce BYTE 0
    field165_0xcf BYTE 0
    field166_0xd0 BYTE 0
    field167_0xd1 BYTE 0
    field168_0xd2 BYTE 0
    field169_0xd3 BYTE 0
    field170_0xd4 BYTE 0
    field171_0xd5 BYTE 0
    field172_0xd6 BYTE 0
    field173_0xd7 BYTE 0
    field174_0xd8 BYTE 0
    field175_0xd9 BYTE 0
    field176_0xda BYTE 0
    field177_0xdb BYTE 0
    field178_0xdc BYTE 0
    field179_0xdd BYTE 0
    field180_0xde BYTE 0
    field181_0xdf BYTE 0
    field182_0xe0 BYTE 0
    field183_0xe1 BYTE 0
    field184_0xe2 BYTE 0
    field185_0xe3 BYTE 0
    field186_0xe4 BYTE 0
    field187_0xe5 BYTE 0
    field188_0xe6 BYTE 0
    field189_0xe7 BYTE 0
    field190_0xe8 BYTE 0
    field191_0xe9 BYTE 0
    field192_0xea BYTE 0
    field193_0xeb BYTE 0
    field194_0xec BYTE 0
    field195_0xed BYTE 0
    field196_0xee BYTE 0
    field197_0xef BYTE 0
    ac40 AutoClass40 {}
UNV032 ENDS
UNV031 STRUCT
    data DWORD 0; NodeRelated2C *
    field1_0x4 DWORD 0
    field2_0x8 BYTE 0
    field3_0x9 BYTE 0
    field4_0xa BYTE 0
    field5_0xb BYTE 0
    field6_0xc BYTE 0
    field7_0xd BYTE 0
    field8_0xe BYTE 0
    field9_0xf BYTE 0
    field10_0x10 BYTE 0
    field11_0x11 BYTE 0
    field12_0x12 BYTE 0
    field13_0x13 BYTE 0
    field14_0x14 BYTE 0
    field15_0x15 BYTE 0
    field16_0x16 BYTE 0
    field17_0x17 BYTE 0
    field18_0x18 BYTE 0
    field19_0x19 BYTE 0
    field20_0x1a BYTE 0
    field21_0x1b BYTE 0
    field22_0x1c BYTE 0
    field23_0x1d BYTE 0
    field24_0x1e BYTE 0
    field25_0x1f BYTE 0
    field26_0x20 UNV032 {}
    field27_0x130 UNV032 {}
    field28_0x240 UNV032 {}
    field29_0x350 UNV032 {}
UNV031 ENDS
UNV034 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    field8_0x8 BYTE 0
    field9_0x9 BYTE 0
    field10_0xa BYTE 0
    field11_0xb BYTE 0
    field12_0xc BYTE 0
    field13_0xd BYTE 0
    field14_0xe BYTE 0
    field15_0xf BYTE 0
    field16_0x10 BYTE 0
    field17_0x11 BYTE 0
    field18_0x12 BYTE 0
    field19_0x13 BYTE 0
    field20_0x14 BYTE 0
    field21_0x15 BYTE 0
    field22_0x16 BYTE 0
    field23_0x17 BYTE 0
    field24_0x18 BYTE 0
    field25_0x19 BYTE 0
    field26_0x1a BYTE 0
    field27_0x1b BYTE 0
    field28_0x1c BYTE 0
    field29_0x1d BYTE 0
    field30_0x1e BYTE 0
    field31_0x1f BYTE 0
    field32_0x20 BYTE 0
    field33_0x21 BYTE 0
    field34_0x22 BYTE 0
    field35_0x23 BYTE 0
    field36_0x24 BYTE 0
    field37_0x25 BYTE 0
    field38_0x26 BYTE 0
    field39_0x27 BYTE 0
    field40_0x28 BYTE 0
    field41_0x29 BYTE 0
    field42_0x2a BYTE 0
    field43_0x2b BYTE 0
    field44_0x2c BYTE 0
    field45_0x2d BYTE 0
    field46_0x2e BYTE 0
    field47_0x2f BYTE 0
    field48_0x30 BYTE 0
    field49_0x31 BYTE 0
    field50_0x32 BYTE 0
    field51_0x33 BYTE 0
    field52_0x34 BYTE 0
    field53_0x35 BYTE 0
    field54_0x36 BYTE 0
    field55_0x37 BYTE 0
    field56_0x38 BYTE 0
    field57_0x39 BYTE 0
    field58_0x3a BYTE 0
    field59_0x3b BYTE 0
    field60_0x3c BYTE 0
    field61_0x3d BYTE 0
    field62_0x3e BYTE 0
    field63_0x3f BYTE 0
    field64_0x40 BYTE 0
    field65_0x41 BYTE 0
    field66_0x42 BYTE 0
    field67_0x43 BYTE 0
    field68_0x44 BYTE 0
    field69_0x45 BYTE 0
    field70_0x46 BYTE 0
    field71_0x47 BYTE 0
    field72_0x48 BYTE 0
    field73_0x49 BYTE 0
    field74_0x4a BYTE 0
    field75_0x4b BYTE 0
    field76_0x4c BYTE 0
    field77_0x4d BYTE 0
    field78_0x4e BYTE 0
    field79_0x4f BYTE 0
    field80_0x50 BYTE 0
    field81_0x51 BYTE 0
    field82_0x52 BYTE 0
    field83_0x53 BYTE 0
    field84_0x54 BYTE 0
    field85_0x55 BYTE 0
    field86_0x56 BYTE 0
    field87_0x57 BYTE 0
    field88_0x58 BYTE 0
    field89_0x59 BYTE 0
    field90_0x5a BYTE 0
    field91_0x5b BYTE 0
    field92_0x5c BYTE 0
    field93_0x5d BYTE 0
    field94_0x5e BYTE 0
    field95_0x5f BYTE 0
    field96_0x60 UNV032 {}
UNV034 ENDS
US001 STRUCT
    field0_0x0 BYTE 0
    field1_0x1 BYTE 0
    field2_0x2 BYTE 0
    field3_0x3 BYTE 0
    field4_0x4 BYTE 0
    field5_0x5 BYTE 0
    field6_0x6 BYTE 0
    field7_0x7 BYTE 0
    flags DWORD 0
US001 ENDS
ObjectBuilder STRUCT
    next DWORD 0; ObjectBuilder *
    previous DWORD 0; ObjectBuilder *
    element DWORD 0; BaseBuilder *
ObjectBuilder ENDS
unkVirtualPoolStruct STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
unkVirtualPoolStruct ENDS
ColorTransparent STRUCT
    alpha REAL4 0.0;
    field1_0x4 REAL4 0.0;
ColorTransparent ENDS
GenericArray STRUCT
    array DWORD 0; void * *
    cnt DWORD 0
GenericArray ENDS
EntryDescriptorSkin STRUCT
    skinPtr DWORD 0; TwinsanitySkin *
    id DWORD 0
EntryDescriptorSkin ENDS
EntryDescriptorRigidModel2 STRUCT
    modelPtr DWORD 0; TwinsanityRigidModel2 *
    id DWORD 0
EntryDescriptorRigidModel2 ENDS
EntryDescriptorRigidModel STRUCT
    modelPtr DWORD 0; TwinsanityRigidModel *
    id DWORD 0
EntryDescriptorRigidModel ENDS
EntryDescriptorModel STRUCT
    modelPtr DWORD 0; TwinsanityModel *
    id DWORD 0
EntryDescriptorModel ENDS
EntryDescriptorLod STRUCT
    lodPtr DWORD 0; TwinsanityLod *
    id DWORD 0
EntryDescriptorLod ENDS
EntryDescriptorBlendSkin STRUCT
    skinPtr DWORD 0; TwinsanityBlendSkin *
    id DWORD 0
EntryDescriptorBlendSkin ENDS
ChunkMeta STRUCT
    chunkName TwinString {}
    chunkIndex WORD 0
    field2_0xe BYTE 0
    field3_0xf BYTE 0
    chunkManager DWORD 0; void *
    chunkDataRef DWORD 0; ChunkDataRefCounter *
    field6_0x18 BYTE 0
    field7_0x19 BYTE 0
    field8_0x1a BYTE 0
    field9_0x1b BYTE 0
    field10_0x1c BYTE 0
    field11_0x1d BYTE 0
    field12_0x1e BYTE 0
    field13_0x1f BYTE 0
    field14_0x20 BYTE 0
    field15_0x21 BYTE 0
    field16_0x22 BYTE 0
    field17_0x23 BYTE 0
    someCnt WORD 0
    field19_0x26 BYTE 0
    field20_0x27 BYTE 0
    field21_0x28 BYTE 0
    field22_0x29 BYTE 0
    field23_0x2a BYTE 0
    field24_0x2b BYTE 0
    field25_0x2c BYTE 0
    field26_0x2d BYTE 0
    field27_0x2e BYTE 0
    field28_0x2f BYTE 0
    field29_0x30 BYTE 0
    field30_0x31 BYTE 0
    field31_0x32 BYTE 0
    field32_0x33 BYTE 0
    field33_0x34 BYTE 0
    field34_0x35 BYTE 0
    field35_0x36 BYTE 0
    field36_0x37 BYTE 0
ChunkMeta ENDS
GameParticle STRUCT
    magic DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 DWORD 0
    field3_0x9 DWORD 0
    field4_0xd WORD 0
    field5_0xf BYTE 0
    field6_0x10 BYTE 0
    field7_0x11 BYTE 0
    field8_0x12 WORD 0
    field9_0x14 WORD 0
    field10_0x16 WORD 0
    field11_0x18 WORD 0
    field12_0x1a WORD 0
    field13_0x1c WORD 0
    field14_0x1e WORD 0
    field15_0x20 BYTE 0
    field16_0x21 BYTE 0
    field17_0x22 BYTE 0
    field18_0x23 BYTE 0
    field19_0x24 Vector4 {}
    field20_0x34 BYTE 0
    field21_0x35 BYTE 0
    field22_0x36 BYTE 0
    field23_0x37 BYTE 0
    field24_0x38 BYTE 0
    field25_0x39 BYTE 0
    field26_0x3a BYTE 0
    field27_0x3b BYTE 0
    field28_0x3c REAL4 0.0;
    field29_0x40 REAL4 0.0;
    field30_0x44 BYTE 0
    field31_0x45 BYTE 0
    field32_0x46 BYTE 0
    field33_0x47 BYTE 0
    field34_0x48 REAL4 0.0;
    field35_0x4c BYTE 0
    field36_0x4d BYTE 0
    field37_0x4e BYTE 0
    field38_0x4f BYTE 0
    field39_0x50 REAL4 0.0;
    field40_0x54 Vector4 {}
    field41_0x64 Vector4 {}
    field42_0x74 Vector4 {}
    field43_0x84 REAL4 0.0;
    field44_0x88 REAL4 0.0;
    field45_0x8c REAL4 0.0;
    field46_0x90 WORD 0
    field47_0x92 BYTE 0
    field48_0x93 BYTE 0
    field49_0x94 DWORD 0
    field50_0x98 DWORD 0
    field51_0x9c DWORD 0
    field52_0xa0 DWORD 0
    field53_0xa4 DWORD 0
    field54_0xa8 DWORD 0
    field55_0xac Vector4 {}
    field56_0xbc BYTE 112 dup (0)
    field57_0x12c Vector4 {}
    field58_0x13c BYTE 44 dup (0)
    field59_0x168 BYTE 0
    field60_0x169 BYTE 0
    field61_0x16a BYTE 0
    field62_0x16b BYTE 0
    field63_0x16c BYTE 0
    field64_0x16d BYTE 0
    field65_0x16e BYTE 0
    field66_0x16f BYTE 0
    field67_0x170 BYTE 0
    field68_0x171 BYTE 0
    field69_0x172 BYTE 0
    field70_0x173 BYTE 0
    field71_0x174 REAL4 0.0;
    field72_0x178 Vector4 {}
    field73_0x188 BYTE 52 dup (0)
    field74_0x1bc Vector4 {}
    field75_0x1cc BYTE 44 dup (0)
    field76_0x1f8 Vector4 {}
    field77_0x208 Vector4 {}
    field78_0x218 BYTE 48 dup (0)
    field79_0x248 Vector4 {}
    field80_0x258 BYTE 48 dup (0)
    field81_0x288 Vector4 {}
    field82_0x298 BYTE 40 dup (0)
    field83_0x2c0 Vector4 {}
    field84_0x2d0 BYTE 72 dup (0)
    field85_0x318 BYTE 10 dup (0)
    field86_0x322 BYTE 0
    field87_0x323 BYTE 0
    field88_0x324 BYTE 0
    field89_0x325 BYTE 0
    field90_0x326 BYTE 0
    field91_0x327 BYTE 0
    field92_0x328 BYTE 0
    field93_0x329 BYTE 0
    field94_0x32a BYTE 0
    field95_0x32b BYTE 0
    field96_0x32c BYTE 0
    field97_0x32d BYTE 0
    field98_0x32e BYTE 0
    field99_0x32f BYTE 0
    field100_0x330 BYTE 0
    field101_0x331 BYTE 0
    field102_0x332 BYTE 0
    field103_0x333 BYTE 0
    field104_0x334 BYTE 0
    field105_0x335 BYTE 0
    field106_0x336 BYTE 0
    field107_0x337 BYTE 0
    field108_0x338 BYTE 0
    field109_0x339 BYTE 0
    field110_0x33a BYTE 0
    field111_0x33b BYTE 0
    field112_0x33c BYTE 0
    field113_0x33d BYTE 0
    field114_0x33e BYTE 0
    field115_0x33f BYTE 0
    field116_0x340 Vector4 {}
GameParticle ENDS
UnkBuilder2Item0x180F STRUCT
    field0_0x0 Vector4 {}
    field1_0x10 DWORD 0
    field2_0x14 DWORD 0
    field3_0x18 BYTE 0
    field4_0x19 BYTE 0
    field5_0x1a WORD 0
    field6_0x1c WORD 0
    field7_0x1e BYTE 0
    field8_0x1f BYTE 0
UnkBuilder2Item0x180F ENDS
SomeState STRUCT
    feedbackCode DWORD 0
    currentTime DWORD 0
SomeState ENDS
struct1 STRUCT
    x REAL4 0.0;
    y REAL4 0.0;
    z REAL4 0.0;
    a WORD 0
    b WORD 0
struct1 ENDS
OlegMask STRUCT
    _high DWORD 0
    _low DWORD 0
OlegMask ENDS
RendererText STRUCT
    x REAL4 0.0;
    y REAL4 0.0;
    originX REAL4 0.0;
    originY REAL4 0.0;
    color Color {}
    field5_0x14 DWORD 0
    _str TwinString {}
RendererText ENDS
ScreenInfoExt STRUCT
    screenInfo ScreenInfo {}
    matrix2 Matrix4 {}
    field2_0x60 BYTE 0
    field3_0x61 BYTE 0
    field4_0x62 BYTE 0
    field5_0x63 BYTE 0
    field6_0x64 BYTE 0
    field7_0x65 BYTE 0
    field8_0x66 BYTE 0
    field9_0x67 BYTE 0
    field10_0x68 BYTE 0
    field11_0x69 BYTE 0
    field12_0x6a BYTE 0
    field13_0x6b BYTE 0
    field14_0x6c BYTE 0
    field15_0x6d BYTE 0
    field16_0x6e BYTE 0
    field17_0x6f BYTE 0
ScreenInfoExt ENDS
UnkFamily17Data STRUCT
    flags DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 DWORD 0
    field6_0xc REAL4 0.0;
    field7_0x10 REAL4 0.0;
    field8_0x14 REAL4 0.0;
    field9_0x18 REAL4 0.0;
    field10_0x1c WORD 0
    field11_0x1e WORD 0
    index2 WORD 0
    index1 WORD 0
    field14_0x24 BYTE 0
    field15_0x25 BYTE 0
UnkFamily17Data ENDS
UnkStruct2 STRUCT
    array BYTE 512 dup (0)
UnkStruct2 ENDS
UnkStruct3 STRUCT
    array BYTE 384 dup (0)
UnkStruct3 ENDS
UnkStruct3Sub STRUCT
    someNum DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    field7_0x1c DWORD 0
    field8_0x20 DWORD 0
    field9_0x24 DWORD 0
    field10_0x28 DWORD 0
    color Color {}
UnkStruct3Sub ENDS
ScriptHeaderPair STRUCT
    key DWORD 0; uint *
    value DWORD 0
ScriptHeaderPair ENDS
OGIType2 STRUCT
    matrix Matrix4 {}
    unkField1 BYTE 0
    unkField2 BYTE 0
    field3_0x42 BYTE 0
    field4_0x43 BYTE 0
    field5_0x44 BYTE 0
    field6_0x45 BYTE 0
    field7_0x46 BYTE 0
    field8_0x47 BYTE 0
    field9_0x48 BYTE 0
    field10_0x49 BYTE 0
    field11_0x4a BYTE 0
    field12_0x4b BYTE 0
    field13_0x4c BYTE 0
    field14_0x4d BYTE 0
    field15_0x4e BYTE 0
    field16_0x4f BYTE 0
OGIType2 ENDS
UIElementBTransform STRUCT
    array BYTE 2040 dup (0)
UIElementBTransform ENDS
UIElementBColor STRUCT
    field0_0x0 BYTE 1020 dup (0)
UIElementBColor ENDS
ShaderWrapper STRUCT
    shaderHandle DWORD 0
    pDeclaraction BYTE 256 dup (0)
    pFunction BYTE 1024 dup (0)
    declarationSize DWORD 0
    shaderSize DWORD 0
    unkField DWORD 0
ShaderWrapper ENDS
D3DVERTEXSHADERINPUT STRUCT
    streamIndex DWORD 0
    _offset DWORD 0
    format DWORD 0
    tessType BYTE 0
    tessSource BYTE 0
    f WORD 0
D3DVERTEXSHADERINPUT ENDS
FMVFileDesc STRUCT
    fname DWORD 0; char *
    flags DWORD 0
FMVFileDesc ENDS
NewBigBoi STRUCT
    data BYTE 1024 dup (0)
NewBigBoi ENDS
IMAGE_TLS_DIRECTORY_32 STRUCT
    StartAddressOfRawData DWORD 0
    EndAddressOfRawData DWORD 0
    AddressOfIndex DWORD 0
    AddressOfCallBacks DWORD 0
    SizeOfZeroFill DWORD 0
    Characteristics DWORD 0
IMAGE_TLS_DIRECTORY_32 ENDS
UnkGlobalStruct STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 DWORD 0
    field3_0xc DWORD 0
    field4_0x10 DWORD 0
    field5_0x14 DWORD 0
    field6_0x18 DWORD 0
    field7_0x1c DWORD 0
    field8_0x20 DWORD 0
    field9_0x24 DWORD 0
    field10_0x28 DWORD 0
    field11_0x2c DWORD 0
    field12_0x30 DWORD 0
    field13_0x34 DWORD 0
    field14_0x38 DWORD 0
    field15_0x3c DWORD 0
    field16_0x40 DWORD 0
    field17_0x44 DWORD 0
    field18_0x48 DWORD 0
    field19_0x4c DWORD 0
    field20_0x50 DWORD 0
    field21_0x54 DWORD 0
    field22_0x58 DWORD 0
UnkGlobalStruct ENDS
ParticleInstance STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0; pointer
    field2_0x8 WORD 0
    field3_0xa WORD 0
    field4_0xc WORD 0
    field5_0xe WORD 0
    field6_0x10 WORD 0
    field7_0x12 BYTE 0
    field8_0x13 BYTE 0
    field9_0x14 DWORD 0
    field10_0x18 BYTE 16 dup (0)
    field11_0x28 DWORD 0
    field12_0x2c DWORD 0
    field13_0x30 REAL4 0.0;
    field14_0x34 WORD 0
    field15_0x36 WORD 0
    field16_0x38 REAL4 0.0;
    field17_0x3c REAL4 0.0;
    field18_0x40 WORD 0
    field19_0x42 BYTE 0
    field20_0x43 BYTE 0
    field21_0x44 BYTE 0
    field22_0x45 BYTE 0
    field23_0x46 BYTE 0
    field24_0x47 BYTE 0
    field25_0x48 BYTE 0
    field26_0x49 BYTE 0
    field27_0x4a BYTE 0
    field28_0x4b BYTE 0
    field29_0x4c BYTE 0
    field30_0x4d BYTE 0
    field31_0x4e BYTE 0
    field32_0x4f BYTE 0
ParticleInstance ENDS
DSStruct1 STRUCT
    field0_0x0 DWORD 0
    field1_0x4 DWORD 0
    field2_0x8 REAL4 0.0;
    field3_0xc REAL4 0.0;
    field4_0x10 REAL4 0.0;
    field5_0x14 DWORD 0
    field6_0x18 REAL4 0.0;
    field7_0x1c DWORD 0
    field8_0x20 REAL4 0.0;
    field9_0x24 REAL4 0.0;
    field10_0x28 REAL4 0.0;
    field11_0x2c REAL4 0.0;
DSStruct1 ENDS
XMVDecoder STRUCT
    vtable DWORD 0; pointer *
    field1_0x4 DWORD 0; undefined * *
    field2_0x8 DWORD 0; undefined * *
    field3_0xc BYTE 0
    field4_0xd BYTE 0
    field5_0xe BYTE 0
    field6_0xf BYTE 0
    field7_0x10 BYTE 0
    field8_0x11 BYTE 0
    field9_0x12 BYTE 0
    field10_0x13 BYTE 0
    field11_0x14 BYTE 0
    field12_0x15 BYTE 0
    field13_0x16 BYTE 0
    field14_0x17 BYTE 0
    field15_0x18 BYTE 0
    field16_0x19 BYTE 0
    field17_0x1a BYTE 0
    field18_0x1b BYTE 0
    field19_0x1c DWORD 0; undefined * *
    field20_0x20 DWORD 0; undefined * *
    field21_0x24 DWORD 0; undefined * *
    field22_0x28 DWORD 0; undefined * *
    field23_0x2c DWORD 0; undefined * *
    field24_0x30 DWORD 0; undefined * *
    field25_0x34 DWORD 0; undefined * *
    field26_0x38 BYTE 0
    field27_0x39 BYTE 0
    field28_0x3a BYTE 0
    field29_0x3b BYTE 0
    field30_0x3c DWORD 0; undefined * *
    field31_0x40 DWORD 0; undefined * *
    field32_0x44 DWORD 0
    field33_0x48 DWORD 0; undefined * *
    field34_0x4c BYTE 0
    field35_0x4d BYTE 0
    field36_0x4e BYTE 0
    field37_0x4f BYTE 0
    field38_0x50 DWORD 0; undefined * *
    field39_0x54 BYTE 0
    field40_0x55 BYTE 0
    field41_0x56 BYTE 0
    field42_0x57 BYTE 0
    field43_0x58 DWORD 0; undefined * *
    field44_0x5c DWORD 0; undefined * *
    field45_0x60 DWORD 0; undefined * *
    field46_0x64 DWORD 0; undefined * *
    field47_0x68 DWORD 0; undefined * *
    field48_0x6c DWORD 0; undefined * *
    field49_0x70 DWORD 0; undefined * *
    field50_0x74 DWORD 0; undefined * *
    field51_0x78 BYTE 0
    field52_0x79 BYTE 0
    field53_0x7a BYTE 0
    field54_0x7b BYTE 0
    field55_0x7c BYTE 0
    field56_0x7d BYTE 0
    field57_0x7e BYTE 0
    field58_0x7f BYTE 0
    field59_0x80 BYTE 0
    field60_0x81 BYTE 0
    field61_0x82 BYTE 0
    field62_0x83 BYTE 0
    field63_0x84 BYTE 0
    field64_0x85 BYTE 0
    field65_0x86 BYTE 0
    field66_0x87 BYTE 0
    field67_0x88 BYTE 0
    field68_0x89 BYTE 0
    field69_0x8a BYTE 0
    field70_0x8b BYTE 0
    field71_0x8c BYTE 0
    field72_0x8d BYTE 0
    field73_0x8e BYTE 0
    field74_0x8f BYTE 0
    field75_0x90 BYTE 0
    field76_0x91 BYTE 0
    field77_0x92 BYTE 0
    field78_0x93 BYTE 0
    field79_0x94 BYTE 0
    field80_0x95 BYTE 0
    field81_0x96 BYTE 0
    field82_0x97 BYTE 0
    field83_0x98 BYTE 0
    field84_0x99 BYTE 0
    field85_0x9a BYTE 0
    field86_0x9b BYTE 0
    field87_0x9c BYTE 0
    field88_0x9d BYTE 0
    field89_0x9e BYTE 0
    field90_0x9f BYTE 0
    field91_0xa0 BYTE 0
    field92_0xa1 BYTE 0
    field93_0xa2 BYTE 0
    field94_0xa3 BYTE 0
    field95_0xa4 BYTE 0
    field96_0xa5 BYTE 0
    field97_0xa6 BYTE 0
    field98_0xa7 BYTE 0
    field99_0xa8 DWORD 0; undefined * *
    field100_0xac DWORD 0; undefined * *
    field101_0xb0 DWORD 0; undefined * *
    field102_0xb4 DWORD 0; undefined * *
    field103_0xb8 DWORD 0; undefined * *
    field104_0xbc DWORD 0; undefined * *
    field105_0xc0 DWORD 0; undefined * *
    field106_0xc4 DWORD 0; undefined * *
    field107_0xc8 DWORD 0; undefined * *
    field108_0xcc BYTE 0
    field109_0xcd BYTE 0
    field110_0xce BYTE 0
    field111_0xcf BYTE 0
    field112_0xd0 BYTE 0
    field113_0xd1 BYTE 0
    field114_0xd2 BYTE 0
    field115_0xd3 BYTE 0
    field116_0xd4 BYTE 0
    field117_0xd5 BYTE 0
    field118_0xd6 BYTE 0
    field119_0xd7 BYTE 0
    field120_0xd8 BYTE 0
    field121_0xd9 BYTE 0
    field122_0xda BYTE 0
    field123_0xdb BYTE 0
    field124_0xdc DWORD 0
    field125_0xe0 DWORD 0
    field126_0xe4 DWORD 0; undefined * *
    field127_0xe8 DWORD 0; undefined * *
    field128_0xec DWORD 0; undefined * *
    field129_0xf0 DWORD 0; undefined * *
    field130_0xf4 DWORD 0; undefined * *
    field131_0xf8 DWORD 0; undefined * *
    field132_0xfc DWORD 0; undefined * *
    field133_0x100 DWORD 0; undefined * *
    field134_0x104 DWORD 0; undefined * *
    field135_0x108 BYTE 0
    field136_0x109 BYTE 0
    field137_0x10a BYTE 0
    field138_0x10b BYTE 0
    field139_0x10c BYTE 0
    field140_0x10d BYTE 0
    field141_0x10e BYTE 0
    field142_0x10f BYTE 0
    field143_0x110 BYTE 0
    field144_0x111 BYTE 0
    field145_0x112 BYTE 0
    field146_0x113 BYTE 0
    field147_0x114 DWORD 0
    field148_0x118 BYTE 0
    field149_0x119 BYTE 0
    field150_0x11a BYTE 0
    field151_0x11b BYTE 0
    field152_0x11c BYTE 0
    field153_0x11d BYTE 0
    field154_0x11e BYTE 0
    field155_0x11f BYTE 0
    field156_0x120 BYTE 0
    field157_0x121 BYTE 0
    field158_0x122 BYTE 0
    field159_0x123 BYTE 0
    field160_0x124 BYTE 0
    field161_0x125 BYTE 0
    field162_0x126 BYTE 0
    field163_0x127 BYTE 0
    field164_0x128 BYTE 0
    field165_0x129 BYTE 0
    field166_0x12a BYTE 0
    field167_0x12b BYTE 0
    field168_0x12c BYTE 0
    field169_0x12d BYTE 0
    field170_0x12e BYTE 0
    field171_0x12f BYTE 0
    field172_0x130 DWORD 0; undefined *32
    field173_0x134 DWORD 0; undefined * *
    field174_0x138 DWORD 0; undefined * *
    field175_0x13c DWORD 0; undefined * *
    field176_0x140 DWORD 0; undefined * *
    field177_0x144 DWORD 0; undefined * *
    field178_0x148 DWORD 0; undefined * *
    field179_0x14c DWORD 0; undefined * *
    field180_0x150 DWORD 0; undefined * *
    field181_0x154 DWORD 0; undefined * *
    field182_0x158 DWORD 0; undefined * *
    field183_0x15c DWORD 0; undefined * *
XMVDecoder ENDS
EnvClass224 STRUCT
    ENV_CLASS_224 DWORD 0
    field1_0x4 BYTE 0
    field2_0x5 REAL4 0.0;
    field3_0x9 REAL4 0.0;
    field4_0xd WORD 0
    field5_0xf BYTE 0
    field6_0x10 BYTE 0
    field7_0x11 BYTE 0
    field8_0x12 WORD 0
    field9_0x14 WORD 0
    field10_0x16 WORD 0
    field11_0x18 WORD 0
    field12_0x1a WORD 0
    field13_0x1c WORD 0
    field14_0x1e WORD 0
    field15_0x20 BYTE 0
    field16_0x21 BYTE 0
    field17_0x22 BYTE 0
    field18_0x23 BYTE 0
    field19_0x24 REAL4 0.0;
    field20_0x28 REAL4 0.0;
    field21_0x2c REAL4 0.0;
    field22_0x30 REAL4 0.0;
    field23_0x34 REAL4 0.0;
    field24_0x38 REAL4 0.0;
    field25_0x3c REAL4 0.0;
    field26_0x40 REAL4 0.0;
    field27_0x44 REAL4 0.0;
    field28_0x48 REAL4 0.0;
    field29_0x4c REAL4 0.0;
    field30_0x50 REAL4 0.0;
    field31_0x54 REAL4 0.0;
    field32_0x58 REAL4 0.0;
    field33_0x5c REAL4 0.0;
    field34_0x60 REAL4 0.0;
    field35_0x64 REAL4 0.0;
    field36_0x68 REAL4 0.0;
    field37_0x6c REAL4 0.0;
    field38_0x70 REAL4 0.0;
    field39_0x74 REAL4 0.0;
    field40_0x78 REAL4 0.0;
    field41_0x7c REAL4 0.0;
    field42_0x80 REAL4 0.0;
    field43_0x84 REAL4 0.0;
    field44_0x88 REAL4 0.0;
    field45_0x8c REAL4 0.0;
    field46_0x90 WORD 0
    field47_0x92 BYTE 0
    field48_0x93 BYTE 0
    field49_0x94 REAL4 0.0;
    field50_0x98 REAL4 0.0;
    field51_0x9c REAL4 0.0;
    field52_0xa0 REAL4 0.0;
    field53_0xa4 REAL4 0.0;
    field54_0xa8 REAL4 0.0;
    field55_0xac REAL4 0.0;
    field56_0xb0 REAL4 0.0;
    field57_0xb4 REAL4 0.0;
    field58_0xb8 REAL4 0.0;
    field59_0xbc REAL4 0.0;
    field60_0xc0 REAL4 0.0;
    field61_0xc4 REAL4 0.0;
    field62_0xc8 REAL4 0.0;
    field63_0xcc REAL4 0.0;
    field64_0xd0 REAL4 0.0;
    field65_0xd4 REAL4 0.0;
    field66_0xd8 REAL4 0.0;
    field67_0xdc REAL4 0.0;
    field68_0xe0 REAL4 0.0;
    field69_0xe4 REAL4 0.0;
    field70_0xe8 REAL4 0.0;
    field71_0xec REAL4 0.0;
    field72_0xf0 REAL4 0.0;
    field73_0xf4 REAL4 0.0;
    field74_0xf8 REAL4 0.0;
    field75_0xfc REAL4 0.0;
    field76_0x100 REAL4 0.0;
    field77_0x104 REAL4 0.0;
    field78_0x108 REAL4 0.0;
    field79_0x10c REAL4 0.0;
    field80_0x110 REAL4 0.0;
    field81_0x114 REAL4 0.0;
    field82_0x118 REAL4 0.0;
    field83_0x11c REAL4 0.0;
    field84_0x120 REAL4 0.0;
    field85_0x124 REAL4 0.0;
    field86_0x128 REAL4 0.0;
    field87_0x12c REAL4 0.0;
    field88_0x130 REAL4 0.0;
    field89_0x134 REAL4 0.0;
    field90_0x138 REAL4 0.0;
    field91_0x13c REAL4 0.0;
    field92_0x140 REAL4 0.0;
    field93_0x144 REAL4 0.0;
    field94_0x148 REAL4 0.0;
    field95_0x14c REAL4 0.0;
    field96_0x150 REAL4 0.0;
    field97_0x154 REAL4 0.0;
    field98_0x158 REAL4 0.0;
    field99_0x15c REAL4 0.0;
    field100_0x160 REAL4 0.0;
    field101_0x164 REAL4 0.0;
    field102_0x168 REAL4 0.0;
    field103_0x16c REAL4 0.0;
    field104_0x170 REAL4 0.0;
    field105_0x174 REAL4 0.0;
    field106_0x178 REAL4 0.0;
    field107_0x17c REAL4 0.0;
    field108_0x180 REAL4 0.0;
    field109_0x184 REAL4 0.0;
    field110_0x188 REAL4 0.0;
    field111_0x18c REAL4 0.0;
    field112_0x190 REAL4 0.0;
    field113_0x194 REAL4 0.0;
    field114_0x198 REAL4 0.0;
    field115_0x19c REAL4 0.0;
    field116_0x1a0 REAL4 0.0;
    field117_0x1a4 REAL4 0.0;
    field118_0x1a8 REAL4 0.0;
    field119_0x1ac REAL4 0.0;
    field120_0x1b0 REAL4 0.0;
    field121_0x1b4 REAL4 0.0;
    field122_0x1b8 REAL4 0.0;
    field123_0x1bc REAL4 0.0;
    field124_0x1c0 REAL4 0.0;
    field125_0x1c4 REAL4 0.0;
    field126_0x1c8 REAL4 0.0;
    field127_0x1cc REAL4 0.0;
    field128_0x1d0 REAL4 0.0;
    field129_0x1d4 REAL4 0.0;
    field130_0x1d8 REAL4 0.0;
    field131_0x1dc REAL4 0.0;
    field132_0x1e0 REAL4 0.0;
    field133_0x1e4 REAL4 0.0;
    field134_0x1e8 REAL4 0.0;
    field135_0x1ec REAL4 0.0;
    field136_0x1f0 REAL4 0.0;
    field137_0x1f4 REAL4 0.0;
    field138_0x1f8 REAL4 0.0;
    field139_0x1fc REAL4 0.0;
    field140_0x200 REAL4 0.0;
    field141_0x204 REAL4 0.0;
    field142_0x208 REAL4 0.0;
    field143_0x20c REAL4 0.0;
    field144_0x210 REAL4 0.0;
    field145_0x214 REAL4 0.0;
    field146_0x218 REAL4 0.0;
    field147_0x21c REAL4 0.0;
    field148_0x220 REAL4 0.0;
    field149_0x224 REAL4 0.0;
    field150_0x228 REAL4 0.0;
    field151_0x22c REAL4 0.0;
    field152_0x230 REAL4 0.0;
    field153_0x234 REAL4 0.0;
    field154_0x238 REAL4 0.0;
    field155_0x23c REAL4 0.0;
    field156_0x240 REAL4 0.0;
    field157_0x244 REAL4 0.0;
    field158_0x248 REAL4 0.0;
    field159_0x24c REAL4 0.0;
    field160_0x250 REAL4 0.0;
    field161_0x254 REAL4 0.0;
    field162_0x258 REAL4 0.0;
    field163_0x25c REAL4 0.0;
    field164_0x260 REAL4 0.0;
    field165_0x264 REAL4 0.0;
    field166_0x268 REAL4 0.0;
    field167_0x26c REAL4 0.0;
    field168_0x270 REAL4 0.0;
    field169_0x274 REAL4 0.0;
    field170_0x278 REAL4 0.0;
    field171_0x27c REAL4 0.0;
    field172_0x280 REAL4 0.0;
    field173_0x284 REAL4 0.0;
    field174_0x288 REAL4 0.0;
    field175_0x28c REAL4 0.0;
    field176_0x290 REAL4 0.0;
    field177_0x294 REAL4 0.0;
    field178_0x298 REAL4 0.0;
    field179_0x29c REAL4 0.0;
    field180_0x2a0 REAL4 0.0;
    field181_0x2a4 REAL4 0.0;
    field182_0x2a8 REAL4 0.0;
    field183_0x2ac REAL4 0.0;
    field184_0x2b0 REAL4 0.0;
    field185_0x2b4 REAL4 0.0;
    field186_0x2b8 REAL4 0.0;
    field187_0x2bc REAL4 0.0;
    field188_0x2c0 REAL4 0.0;
    field189_0x2c4 REAL4 0.0;
    field190_0x2c8 REAL4 0.0;
    field191_0x2cc REAL4 0.0;
    field192_0x2d0 BYTE 254400 dup (0)
EnvClass224 ENDS
EnvClass224SubStruct STRUCT
    field0_0x0 DWORD 0; pointer
    field1_0x4 BYTE 0
    field2_0x5 BYTE 0
    field3_0x6 BYTE 0
    field4_0x7 BYTE 0
    field5_0x8 BYTE 0
    field6_0x9 BYTE 0
    field7_0xa BYTE 0
    field8_0xb BYTE 0
    field9_0xc BYTE 0
    field10_0xd BYTE 0
    field11_0xe BYTE 0
    field12_0xf BYTE 0
    field13_0x10 BYTE 0
    field14_0x11 BYTE 0
    field15_0x12 BYTE 0
    field16_0x13 BYTE 0
    field17_0x14 BYTE 0
    field18_0x15 BYTE 0
    field19_0x16 BYTE 0
    field20_0x17 BYTE 0
    field21_0x18 BYTE 0
    field22_0x19 BYTE 0
    field23_0x1a BYTE 0
    field24_0x1b BYTE 0
    field25_0x1c BYTE 0
    field26_0x1d BYTE 0
    field27_0x1e BYTE 0
    field28_0x1f BYTE 0
    field29_0x20 BYTE 0
    field30_0x21 BYTE 0
    field31_0x22 BYTE 0
    field32_0x23 BYTE 0
    field33_0x24 BYTE 0
    field34_0x25 BYTE 0
    field35_0x26 BYTE 0
    field36_0x27 BYTE 0
    field37_0x28 BYTE 0
    field38_0x29 BYTE 0
    field39_0x2a BYTE 0
    field40_0x2b BYTE 0
    field41_0x2c BYTE 0
    field42_0x2d BYTE 0
    field43_0x2e BYTE 0
    field44_0x2f BYTE 0
    field45_0x30 BYTE 0
    field46_0x31 BYTE 0
    field47_0x32 BYTE 0
    field48_0x33 BYTE 0
    field49_0x34 BYTE 0
    field50_0x35 BYTE 0
    field51_0x36 BYTE 0
    field52_0x37 BYTE 0
    field53_0x38 BYTE 0
    field54_0x39 BYTE 0
    field55_0x3a BYTE 0
    field56_0x3b BYTE 0
    field57_0x3c BYTE 0
    field58_0x3d BYTE 0
    field59_0x3e BYTE 0
    field60_0x3f BYTE 0
    field61_0x40 BYTE 0
    field62_0x41 BYTE 0
    field63_0x42 BYTE 0
    field64_0x43 BYTE 0
    field65_0x44 BYTE 0
    field66_0x45 BYTE 0
    field67_0x46 BYTE 0
    field68_0x47 BYTE 0
    field69_0x48 BYTE 0
    field70_0x49 BYTE 0
    field71_0x4a BYTE 0
    field72_0x4b BYTE 0
    field73_0x4c BYTE 0
    field74_0x4d BYTE 0
    field75_0x4e BYTE 0
    field76_0x4f BYTE 0
    field77_0x50 BYTE 0
    field78_0x51 BYTE 0
    field79_0x52 BYTE 0
    field80_0x53 BYTE 0
    field81_0x54 BYTE 0
    field82_0x55 BYTE 0
    field83_0x56 BYTE 0
    field84_0x57 BYTE 0
    field85_0x58 BYTE 0
    field86_0x59 BYTE 0
    field87_0x5a BYTE 0
    field88_0x5b BYTE 0
    field89_0x5c BYTE 0
    field90_0x5d BYTE 0
    field91_0x5e BYTE 0
    field92_0x5f BYTE 0
    field93_0x60 BYTE 0
    field94_0x61 BYTE 0
    field95_0x62 BYTE 0
    field96_0x63 BYTE 0
    field97_0x64 BYTE 0
    field98_0x65 BYTE 0
    field99_0x66 BYTE 0
    field100_0x67 BYTE 0
    field101_0x68 BYTE 0
    field102_0x69 BYTE 0
    field103_0x6a BYTE 0
    field104_0x6b BYTE 0
    field105_0x6c BYTE 0
    field106_0x6d BYTE 0
    field107_0x6e BYTE 0
    field108_0x6f BYTE 0
    field109_0x70 BYTE 0
    field110_0x71 BYTE 0
    field111_0x72 BYTE 0
    field112_0x73 BYTE 0
    field113_0x74 BYTE 0
    field114_0x75 BYTE 0
    field115_0x76 BYTE 0
    field116_0x77 BYTE 0
    field117_0x78 BYTE 0
    field118_0x79 BYTE 0
    field119_0x7a BYTE 0
    field120_0x7b BYTE 0
    field121_0x7c BYTE 0
    field122_0x7d BYTE 0
    field123_0x7e BYTE 0
    field124_0x7f BYTE 0
    field125_0x80 BYTE 0
    field126_0x81 BYTE 0
    field127_0x82 BYTE 0
    field128_0x83 BYTE 0
    field129_0x84 BYTE 0
    field130_0x85 BYTE 0
    field131_0x86 BYTE 0
    field132_0x87 BYTE 0
    field133_0x88 BYTE 0
    field134_0x89 BYTE 0
    field135_0x8a BYTE 0
    field136_0x8b BYTE 0
    field137_0x8c BYTE 0
    field138_0x8d BYTE 0
    field139_0x8e BYTE 0
    field140_0x8f BYTE 0
    field141_0x90 BYTE 0
    field142_0x91 BYTE 0
    field143_0x92 BYTE 0
    field144_0x93 BYTE 0
    field145_0x94 BYTE 0
    field146_0x95 BYTE 0
    field147_0x96 BYTE 0
    field148_0x97 BYTE 0
    field149_0x98 BYTE 0
    field150_0x99 BYTE 0
    field151_0x9a BYTE 0
    field152_0x9b BYTE 0
    field153_0x9c BYTE 0
    field154_0x9d BYTE 0
    field155_0x9e BYTE 0
    field156_0x9f BYTE 0
    field157_0xa0 BYTE 0
    field158_0xa1 BYTE 0
    field159_0xa2 BYTE 0
    field160_0xa3 BYTE 0
    field161_0xa4 BYTE 0
    field162_0xa5 BYTE 0
    field163_0xa6 BYTE 0
    field164_0xa7 BYTE 0
    field165_0xa8 BYTE 0
    field166_0xa9 BYTE 0
    field167_0xaa BYTE 0
    field168_0xab BYTE 0
    field169_0xac BYTE 0
    field170_0xad BYTE 0
    field171_0xae BYTE 0
    field172_0xaf BYTE 0
    field173_0xb0 BYTE 0
    field174_0xb1 BYTE 0
    field175_0xb2 BYTE 0
    field176_0xb3 BYTE 0
    field177_0xb4 BYTE 0
    field178_0xb5 BYTE 0
    field179_0xb6 BYTE 0
    field180_0xb7 BYTE 0
    field181_0xb8 BYTE 0
    field182_0xb9 BYTE 0
    field183_0xba BYTE 0
    field184_0xbb BYTE 0
    field185_0xbc BYTE 0
    field186_0xbd BYTE 0
    field187_0xbe BYTE 0
    field188_0xbf BYTE 0
    field189_0xc0 BYTE 0
    field190_0xc1 BYTE 0
    field191_0xc2 BYTE 0
    field192_0xc3 BYTE 0
    field193_0xc4 BYTE 0
    field194_0xc5 BYTE 0
    field195_0xc6 BYTE 0
    field196_0xc7 BYTE 0
    field197_0xc8 BYTE 0
    field198_0xc9 BYTE 0
    field199_0xca BYTE 0
    field200_0xcb BYTE 0
    field201_0xcc BYTE 0
    field202_0xcd BYTE 0
    field203_0xce BYTE 0
    field204_0xcf BYTE 0
    field205_0xd0 BYTE 0
    field206_0xd1 BYTE 0
    field207_0xd2 BYTE 0
    field208_0xd3 BYTE 0
    field209_0xd4 BYTE 0
    field210_0xd5 BYTE 0
    field211_0xd6 BYTE 0
    field212_0xd7 BYTE 0
    field213_0xd8 BYTE 0
    field214_0xd9 BYTE 0
    field215_0xda BYTE 0
    field216_0xdb BYTE 0
    field217_0xdc BYTE 0
    field218_0xdd BYTE 0
    field219_0xde BYTE 0
    field220_0xdf BYTE 0
    field221_0xe0 BYTE 0
    field222_0xe1 BYTE 0
    field223_0xe2 BYTE 0
    field224_0xe3 BYTE 0
    field225_0xe4 BYTE 0
    field226_0xe5 BYTE 0
    field227_0xe6 BYTE 0
    field228_0xe7 BYTE 0
    field229_0xe8 BYTE 0
    field230_0xe9 BYTE 0
    field231_0xea BYTE 0
    field232_0xeb BYTE 0
    field233_0xec BYTE 0
    field234_0xed BYTE 0
    field235_0xee BYTE 0
    field236_0xef BYTE 0
    field237_0xf0 BYTE 0
    field238_0xf1 BYTE 0
    field239_0xf2 BYTE 0
    field240_0xf3 BYTE 0
    field241_0xf4 BYTE 0
    field242_0xf5 BYTE 0
    field243_0xf6 BYTE 0
    field244_0xf7 BYTE 0
    field245_0xf8 BYTE 0
    field246_0xf9 BYTE 0
    field247_0xfa BYTE 0
    field248_0xfb BYTE 0
    field249_0xfc BYTE 0
    field250_0xfd BYTE 0
    field251_0xfe BYTE 0
    field252_0xff BYTE 0
    field253_0x100 BYTE 0
    field254_0x101 BYTE 0
    field255_0x102 BYTE 0
    field256_0x103 BYTE 0
    field257_0x104 BYTE 0
    field258_0x105 BYTE 0
    field259_0x106 BYTE 0
    field260_0x107 BYTE 0
    field261_0x108 BYTE 0
    field262_0x109 BYTE 0
    field263_0x10a BYTE 0
    field264_0x10b BYTE 0
    field265_0x10c BYTE 0
    field266_0x10d BYTE 0
    field267_0x10e BYTE 0
    field268_0x10f BYTE 0
    field269_0x110 BYTE 0
    field270_0x111 BYTE 0
    field271_0x112 BYTE 0
    field272_0x113 BYTE 0
    field273_0x114 BYTE 0
    field274_0x115 BYTE 0
    field275_0x116 BYTE 0
    field276_0x117 BYTE 0
    field277_0x118 BYTE 0
    field278_0x119 BYTE 0
    field279_0x11a BYTE 0
    field280_0x11b BYTE 0
    field281_0x11c BYTE 0
    field282_0x11d BYTE 0
    field283_0x11e BYTE 0
    field284_0x11f BYTE 0
    field285_0x120 BYTE 0
    field286_0x121 BYTE 0
    field287_0x122 BYTE 0
    field288_0x123 BYTE 0
    field289_0x124 BYTE 0
    field290_0x125 BYTE 0
    field291_0x126 BYTE 0
    field292_0x127 BYTE 0
    field293_0x128 BYTE 0
    field294_0x129 BYTE 0
    field295_0x12a BYTE 0
    field296_0x12b BYTE 0
    field297_0x12c BYTE 0
    field298_0x12d BYTE 0
    field299_0x12e BYTE 0
    field300_0x12f BYTE 0
    field301_0x130 BYTE 0
    field302_0x131 BYTE 0
    field303_0x132 BYTE 0
    field304_0x133 BYTE 0
    field305_0x134 BYTE 0
    field306_0x135 BYTE 0
    field307_0x136 BYTE 0
    field308_0x137 BYTE 0
    field309_0x138 BYTE 0
    field310_0x139 BYTE 0
    field311_0x13a BYTE 0
    field312_0x13b BYTE 0
    field313_0x13c BYTE 0
    field314_0x13d BYTE 0
    field315_0x13e BYTE 0
    field316_0x13f BYTE 0
    field317_0x140 BYTE 0
    field318_0x141 BYTE 0
    field319_0x142 BYTE 0
    field320_0x143 BYTE 0
    field321_0x144 BYTE 0
    field322_0x145 BYTE 0
    field323_0x146 BYTE 0
    field324_0x147 BYTE 0
    field325_0x148 BYTE 0
    field326_0x149 BYTE 0
    field327_0x14a BYTE 0
    field328_0x14b BYTE 0
    field329_0x14c BYTE 0
    field330_0x14d BYTE 0
    field331_0x14e BYTE 0
    field332_0x14f BYTE 0
    field333_0x150 BYTE 0
    field334_0x151 BYTE 0
    field335_0x152 BYTE 0
    field336_0x153 BYTE 0
    field337_0x154 BYTE 0
    field338_0x155 BYTE 0
    field339_0x156 BYTE 0
    field340_0x157 BYTE 0
    field341_0x158 BYTE 0
    field342_0x159 BYTE 0
    field343_0x15a BYTE 0
    field344_0x15b BYTE 0
    field345_0x15c BYTE 0
    field346_0x15d BYTE 0
    field347_0x15e BYTE 0
    field348_0x15f BYTE 0
    field349_0x160 BYTE 0
    field350_0x161 BYTE 0
    field351_0x162 BYTE 0
    field352_0x163 BYTE 0
    field353_0x164 BYTE 0
    field354_0x165 BYTE 0
    field355_0x166 BYTE 0
    field356_0x167 BYTE 0
    field357_0x168 BYTE 0
    field358_0x169 BYTE 0
    field359_0x16a BYTE 0
    field360_0x16b BYTE 0
    field361_0x16c BYTE 0
    field362_0x16d BYTE 0
    field363_0x16e BYTE 0
    field364_0x16f BYTE 0
    field365_0x170 BYTE 0
    field366_0x171 BYTE 0
    field367_0x172 BYTE 0
    field368_0x173 BYTE 0
    field369_0x174 BYTE 0
    field370_0x175 BYTE 0
    field371_0x176 BYTE 0
    field372_0x177 BYTE 0
    field373_0x178 BYTE 0
    field374_0x179 BYTE 0
    field375_0x17a BYTE 0
    field376_0x17b BYTE 0
    field377_0x17c BYTE 0
    field378_0x17d BYTE 0
    field379_0x17e BYTE 0
    field380_0x17f BYTE 0
    field381_0x180 BYTE 0
    field382_0x181 BYTE 0
    field383_0x182 BYTE 0
    field384_0x183 BYTE 0
    field385_0x184 BYTE 0
    field386_0x185 BYTE 0
    field387_0x186 BYTE 0
    field388_0x187 BYTE 0
    field389_0x188 BYTE 0
    field390_0x189 BYTE 0
    field391_0x18a BYTE 0
    field392_0x18b BYTE 0
    field393_0x18c BYTE 0
    field394_0x18d BYTE 0
    field395_0x18e BYTE 0
    field396_0x18f BYTE 0
    field397_0x190 BYTE 0
    field398_0x191 BYTE 0
    field399_0x192 BYTE 0
    field400_0x193 BYTE 0
    field401_0x194 BYTE 0
    field402_0x195 BYTE 0
    field403_0x196 BYTE 0
    field404_0x197 BYTE 0
    field405_0x198 BYTE 0
    field406_0x199 BYTE 0
    field407_0x19a BYTE 0
    field408_0x19b BYTE 0
    field409_0x19c BYTE 0
    field410_0x19d BYTE 0
    field411_0x19e BYTE 0
    field412_0x19f BYTE 0
    field413_0x1a0 BYTE 0
    field414_0x1a1 BYTE 0
    field415_0x1a2 BYTE 0
    field416_0x1a3 BYTE 0
    field417_0x1a4 BYTE 0
    field418_0x1a5 BYTE 0
    field419_0x1a6 BYTE 0
    field420_0x1a7 BYTE 0
    field421_0x1a8 BYTE 0
    field422_0x1a9 BYTE 0
    field423_0x1aa BYTE 0
    field424_0x1ab BYTE 0
    field425_0x1ac BYTE 0
    field426_0x1ad BYTE 0
    field427_0x1ae BYTE 0
    field428_0x1af BYTE 0
    field429_0x1b0 BYTE 0
    field430_0x1b1 BYTE 0
    field431_0x1b2 BYTE 0
    field432_0x1b3 BYTE 0
    field433_0x1b4 BYTE 0
    field434_0x1b5 BYTE 0
    field435_0x1b6 BYTE 0
    field436_0x1b7 BYTE 0
    field437_0x1b8 BYTE 0
    field438_0x1b9 BYTE 0
    field439_0x1ba BYTE 0
    field440_0x1bb BYTE 0
    field441_0x1bc BYTE 0
    field442_0x1bd BYTE 0
    field443_0x1be BYTE 0
    field444_0x1bf BYTE 0
    field445_0x1c0 BYTE 0
    field446_0x1c1 BYTE 0
    field447_0x1c2 BYTE 0
    field448_0x1c3 BYTE 0
    field449_0x1c4 BYTE 0
    field450_0x1c5 BYTE 0
    field451_0x1c6 BYTE 0
    field452_0x1c7 BYTE 0
    field453_0x1c8 BYTE 0
    field454_0x1c9 BYTE 0
    field455_0x1ca BYTE 0
    field456_0x1cb BYTE 0
    field457_0x1cc BYTE 0
    field458_0x1cd BYTE 0
    field459_0x1ce BYTE 0
    field460_0x1cf BYTE 0
    field461_0x1d0 BYTE 0
    field462_0x1d1 BYTE 0
    field463_0x1d2 BYTE 0
    field464_0x1d3 BYTE 0
    field465_0x1d4 BYTE 0
    field466_0x1d5 BYTE 0
    field467_0x1d6 BYTE 0
    field468_0x1d7 BYTE 0
    field469_0x1d8 BYTE 0
    field470_0x1d9 BYTE 0
    field471_0x1da BYTE 0
    field472_0x1db BYTE 0
    field473_0x1dc BYTE 0
    field474_0x1dd BYTE 0
    field475_0x1de BYTE 0
    field476_0x1df BYTE 0
    field477_0x1e0 BYTE 0
    field478_0x1e1 BYTE 0
    field479_0x1e2 BYTE 0
    field480_0x1e3 BYTE 0
    field481_0x1e4 BYTE 0
    field482_0x1e5 BYTE 0
    field483_0x1e6 BYTE 0
    field484_0x1e7 BYTE 0
    field485_0x1e8 BYTE 0
    field486_0x1e9 BYTE 0
    field487_0x1ea BYTE 0
    field488_0x1eb BYTE 0
    field489_0x1ec BYTE 0
    field490_0x1ed BYTE 0
    field491_0x1ee BYTE 0
    field492_0x1ef BYTE 0
    field493_0x1f0 BYTE 0
    field494_0x1f1 BYTE 0
    field495_0x1f2 BYTE 0
    field496_0x1f3 BYTE 0
    field497_0x1f4 BYTE 0
    field498_0x1f5 BYTE 0
    field499_0x1f6 BYTE 0
    field500_0x1f7 BYTE 0
    field501_0x1f8 BYTE 0
    field502_0x1f9 BYTE 0
    field503_0x1fa BYTE 0
    field504_0x1fb BYTE 0
    field505_0x1fc BYTE 0
    field506_0x1fd BYTE 0
    field507_0x1fe BYTE 0
    field508_0x1ff BYTE 0
    field509_0x200 BYTE 0
    field510_0x201 BYTE 0
    field511_0x202 BYTE 0
    field512_0x203 BYTE 0
    field513_0x204 BYTE 0
    field514_0x205 BYTE 0
    field515_0x206 BYTE 0
    field516_0x207 BYTE 0
    field517_0x208 BYTE 0
    field518_0x209 BYTE 0
    field519_0x20a BYTE 0
    field520_0x20b BYTE 0
    field521_0x20c BYTE 0
    field522_0x20d BYTE 0
    field523_0x20e BYTE 0
    field524_0x20f BYTE 0
    field525_0x210 BYTE 0
    field526_0x211 BYTE 0
    field527_0x212 BYTE 0
    field528_0x213 BYTE 0
    field529_0x214 BYTE 0
    field530_0x215 BYTE 0
    field531_0x216 BYTE 0
    field532_0x217 BYTE 0
    field533_0x218 BYTE 0
    field534_0x219 BYTE 0
    field535_0x21a BYTE 0
    field536_0x21b BYTE 0
    field537_0x21c BYTE 0
    field538_0x21d BYTE 0
    field539_0x21e BYTE 0
    field540_0x21f BYTE 0
    field541_0x220 BYTE 0
    field542_0x221 BYTE 0
    field543_0x222 BYTE 0
    field544_0x223 BYTE 0
    field545_0x224 BYTE 0
    field546_0x225 BYTE 0
    field547_0x226 BYTE 0
    field548_0x227 BYTE 0
    field549_0x228 BYTE 0
    field550_0x229 BYTE 0
    field551_0x22a BYTE 0
    field552_0x22b BYTE 0
    field553_0x22c BYTE 0
    field554_0x22d BYTE 0
    field555_0x22e BYTE 0
    field556_0x22f BYTE 0
    field557_0x230 BYTE 0
    field558_0x231 BYTE 0
    field559_0x232 BYTE 0
    field560_0x233 BYTE 0
    field561_0x234 BYTE 0
    field562_0x235 BYTE 0
    field563_0x236 BYTE 0
    field564_0x237 BYTE 0
    field565_0x238 BYTE 0
    field566_0x239 BYTE 0
    field567_0x23a BYTE 0
    field568_0x23b BYTE 0
    field569_0x23c BYTE 0
    field570_0x23d BYTE 0
    field571_0x23e BYTE 0
    field572_0x23f BYTE 0
    field573_0x240 BYTE 0
    field574_0x241 BYTE 0
    field575_0x242 BYTE 0
    field576_0x243 BYTE 0
    field577_0x244 BYTE 0
    field578_0x245 BYTE 0
    field579_0x246 BYTE 0
    field580_0x247 BYTE 0
    field581_0x248 BYTE 0
    field582_0x249 BYTE 0
    field583_0x24a BYTE 0
    field584_0x24b BYTE 0
    field585_0x24c BYTE 0
    field586_0x24d BYTE 0
    field587_0x24e BYTE 0
    field588_0x24f BYTE 0
    field589_0x250 BYTE 0
    field590_0x251 BYTE 0
    field591_0x252 BYTE 0
    field592_0x253 BYTE 0
    field593_0x254 BYTE 0
    field594_0x255 BYTE 0
    field595_0x256 BYTE 0
    field596_0x257 BYTE 0
    field597_0x258 BYTE 0
    field598_0x259 BYTE 0
    field599_0x25a BYTE 0
    field600_0x25b BYTE 0
    field601_0x25c BYTE 0
    field602_0x25d BYTE 0
    field603_0x25e BYTE 0
    field604_0x25f BYTE 0
    field605_0x260 BYTE 0
    field606_0x261 BYTE 0
    field607_0x262 BYTE 0
    field608_0x263 BYTE 0
    field609_0x264 BYTE 0
    field610_0x265 BYTE 0
    field611_0x266 BYTE 0
    field612_0x267 BYTE 0
    field613_0x268 BYTE 0
    field614_0x269 BYTE 0
    field615_0x26a BYTE 0
    field616_0x26b BYTE 0
    field617_0x26c BYTE 0
    field618_0x26d BYTE 0
    field619_0x26e BYTE 0
    field620_0x26f BYTE 0
    field621_0x270 BYTE 0
    field622_0x271 BYTE 0
    field623_0x272 BYTE 0
    field624_0x273 BYTE 0
    field625_0x274 BYTE 0
    field626_0x275 BYTE 0
    field627_0x276 BYTE 0
    field628_0x277 BYTE 0
    field629_0x278 BYTE 0
    field630_0x279 BYTE 0
    field631_0x27a BYTE 0
    field632_0x27b BYTE 0
    field633_0x27c BYTE 0
    field634_0x27d BYTE 0
    field635_0x27e BYTE 0
    field636_0x27f BYTE 0
    field637_0x280 BYTE 0
    field638_0x281 BYTE 0
    field639_0x282 BYTE 0
    field640_0x283 BYTE 0
    field641_0x284 BYTE 0
    field642_0x285 BYTE 0
    field643_0x286 BYTE 0
    field644_0x287 BYTE 0
    field645_0x288 BYTE 0
    field646_0x289 BYTE 0
    field647_0x28a BYTE 0
    field648_0x28b BYTE 0
    field649_0x28c BYTE 0
    field650_0x28d BYTE 0
    field651_0x28e BYTE 0
    field652_0x28f BYTE 0
    field653_0x290 BYTE 0
    field654_0x291 BYTE 0
    field655_0x292 BYTE 0
    field656_0x293 BYTE 0
    field657_0x294 BYTE 0
    field658_0x295 BYTE 0
    field659_0x296 BYTE 0
    field660_0x297 BYTE 0
    field661_0x298 BYTE 0
    field662_0x299 BYTE 0
    field663_0x29a BYTE 0
    field664_0x29b BYTE 0
    field665_0x29c BYTE 0
    field666_0x29d BYTE 0
    field667_0x29e BYTE 0
    field668_0x29f BYTE 0
    field669_0x2a0 BYTE 0
    field670_0x2a1 BYTE 0
    field671_0x2a2 BYTE 0
    field672_0x2a3 BYTE 0
    field673_0x2a4 BYTE 0
    field674_0x2a5 BYTE 0
    field675_0x2a6 BYTE 0
    field676_0x2a7 BYTE 0
    field677_0x2a8 BYTE 0
    field678_0x2a9 BYTE 0
    field679_0x2aa BYTE 0
    field680_0x2ab BYTE 0
    field681_0x2ac BYTE 0
    field682_0x2ad BYTE 0
    field683_0x2ae BYTE 0
    field684_0x2af BYTE 0
    field685_0x2b0 BYTE 0
    field686_0x2b1 BYTE 0
    field687_0x2b2 BYTE 0
    field688_0x2b3 BYTE 0
    field689_0x2b4 BYTE 0
    field690_0x2b5 BYTE 0
    field691_0x2b6 BYTE 0
    field692_0x2b7 BYTE 0
    field693_0x2b8 BYTE 0
    field694_0x2b9 BYTE 0
    field695_0x2ba BYTE 0
    field696_0x2bb BYTE 0
    field697_0x2bc BYTE 0
    field698_0x2bd BYTE 0
    field699_0x2be BYTE 0
    field700_0x2bf BYTE 0
    field701_0x2c0 BYTE 0
    field702_0x2c1 BYTE 0
    field703_0x2c2 BYTE 0
    field704_0x2c3 BYTE 0
    field705_0x2c4 BYTE 0
    field706_0x2c5 BYTE 0
    field707_0x2c6 BYTE 0
    field708_0x2c7 BYTE 0
    field709_0x2c8 BYTE 0
    field710_0x2c9 BYTE 0
    field711_0x2ca BYTE 0
    field712_0x2cb BYTE 0
    field713_0x2cc BYTE 0
    field714_0x2cd BYTE 0
    field715_0x2ce BYTE 0
    field716_0x2cf BYTE 0
    field717_0x2d0 BYTE 0
    field718_0x2d1 BYTE 0
    field719_0x2d2 BYTE 0
    field720_0x2d3 BYTE 0
    field721_0x2d4 BYTE 0
    field722_0x2d5 BYTE 0
    field723_0x2d6 BYTE 0
    field724_0x2d7 BYTE 0
    field725_0x2d8 BYTE 0
    field726_0x2d9 BYTE 0
    field727_0x2da BYTE 0
    field728_0x2db BYTE 0
    field729_0x2dc BYTE 0
    field730_0x2dd BYTE 0
    field731_0x2de BYTE 0
    field732_0x2df BYTE 0
    field733_0x2e0 BYTE 0
    field734_0x2e1 BYTE 0
    field735_0x2e2 BYTE 0
    field736_0x2e3 BYTE 0
    field737_0x2e4 BYTE 0
    field738_0x2e5 BYTE 0
    field739_0x2e6 BYTE 0
    field740_0x2e7 BYTE 0
    field741_0x2e8 BYTE 0
    field742_0x2e9 BYTE 0
    field743_0x2ea BYTE 0
    field744_0x2eb BYTE 0
    field745_0x2ec BYTE 0
    field746_0x2ed BYTE 0
    field747_0x2ee BYTE 0
    field748_0x2ef BYTE 0
    field749_0x2f0 BYTE 0
    field750_0x2f1 BYTE 0
    field751_0x2f2 BYTE 0
    field752_0x2f3 BYTE 0
    field753_0x2f4 BYTE 0
    field754_0x2f5 BYTE 0
    field755_0x2f6 BYTE 0
    field756_0x2f7 BYTE 0
    field757_0x2f8 BYTE 0
    field758_0x2f9 BYTE 0
    field759_0x2fa BYTE 0
    field760_0x2fb BYTE 0
    field761_0x2fc BYTE 0
    field762_0x2fd BYTE 0
    field763_0x2fe BYTE 0
    field764_0x2ff BYTE 0
    field765_0x300 BYTE 0
    field766_0x301 BYTE 0
    field767_0x302 BYTE 0
    field768_0x303 BYTE 0
    field769_0x304 BYTE 0
    field770_0x305 BYTE 0
    field771_0x306 BYTE 0
    field772_0x307 BYTE 0
    field773_0x308 BYTE 0
    field774_0x309 BYTE 0
    field775_0x30a BYTE 0
    field776_0x30b BYTE 0
    field777_0x30c BYTE 0
    field778_0x30d BYTE 0
    field779_0x30e BYTE 0
    field780_0x30f BYTE 0
    field781_0x310 BYTE 0
    field782_0x311 BYTE 0
    field783_0x312 BYTE 0
    field784_0x313 BYTE 0
    field785_0x314 BYTE 0
    field786_0x315 BYTE 0
    field787_0x316 BYTE 0
    field788_0x317 BYTE 0
    field789_0x318 BYTE 0
    field790_0x319 BYTE 0
    field791_0x31a BYTE 0
    field792_0x31b BYTE 0
    field793_0x31c BYTE 0
    field794_0x31d BYTE 0
    field795_0x31e BYTE 0
    field796_0x31f BYTE 0
    field797_0x320 BYTE 0
    field798_0x321 BYTE 0
    field799_0x322 BYTE 0
    field800_0x323 BYTE 0
    field801_0x324 BYTE 0
    field802_0x325 BYTE 0
    field803_0x326 BYTE 0
    field804_0x327 BYTE 0
    field805_0x328 BYTE 0
    field806_0x329 BYTE 0
    field807_0x32a BYTE 0
    field808_0x32b BYTE 0
    field809_0x32c BYTE 0
    field810_0x32d BYTE 0
    field811_0x32e BYTE 0
    field812_0x32f BYTE 0
    field813_0x330 BYTE 0
    field814_0x331 BYTE 0
    field815_0x332 BYTE 0
    field816_0x333 BYTE 0
    field817_0x334 BYTE 0
    field818_0x335 BYTE 0
    field819_0x336 BYTE 0
    field820_0x337 BYTE 0
    field821_0x338 BYTE 0
    field822_0x339 BYTE 0
    field823_0x33a BYTE 0
    field824_0x33b BYTE 0
    field825_0x33c BYTE 0
    field826_0x33d BYTE 0
    field827_0x33e BYTE 0
    field828_0x33f BYTE 0
    field829_0x340 BYTE 0
    field830_0x341 BYTE 0
    field831_0x342 BYTE 0
    field832_0x343 BYTE 0
    field833_0x344 BYTE 0
    field834_0x345 BYTE 0
    field835_0x346 BYTE 0
    field836_0x347 BYTE 0
    field837_0x348 BYTE 0
    field838_0x349 BYTE 0
    field839_0x34a BYTE 0
    field840_0x34b BYTE 0
    field841_0x34c BYTE 0
    field842_0x34d BYTE 0
    field843_0x34e BYTE 0
    field844_0x34f BYTE 0
EnvClass224SubStruct ENDS
