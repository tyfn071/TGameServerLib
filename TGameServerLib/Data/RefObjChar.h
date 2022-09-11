#pragma once
#include "..\stdafx.h"
#include "RefObjCommon.h"


struct RefObjChar :RefObjCommon
{
public:
	UINT CharID; //0x0184
private:
	UINT pad_0188[4]; 
public:
	BYTE Level;//0x0198
	BYTE Gender;//0x199
private:
	USHORT pad_19A;
public:
	UINT HP; //0x019C
	UINT MP; //0x01A0
	UINT ResistFrozen;//0x01A4
	UINT ResistFrostbite;//0x01A8
	UINT ResistBurn;//0x01AC
	UINT ResistEShock;//0x01B0
	UINT ResistPoison;//0x01B4
	UINT ResistZombie;//0x01B8
	UINT ResistSleep;//0x01BC
	UINT ResistRoot;//0x01C0
	UINT ResistSlow;//0x01C4
	UINT ResistFear; //0x01C8
	UINT ResistMyopia;//0x01CC
	UINT ResistBlood;//0x01D0
	UINT ResistStone;//0x01D4
	UINT ResistDark;//0x01D8
	UINT ResistStun;//0x01DC
	UINT ResistDisea;//0x01E0
	UINT ResistChaos;//0x01E4
	UINT ResistCsePD;//0x01E8
	UINT ResistCseMD;//0x01EC
	UINT ResistCseSTR;//0x01F0
	UINT ResistCseINT;//0x01F4
	UINT ResistCseHP;//0x01F8
	UINT ResistCseMP;//0x01FC
	UINT Resist24;//0x0200
	UINT ResistBomb;//0x0204
	UINT Resist26;//0x0208
	UINT Resist27;//0x020C
	UINT Resist28;//0x0210
	UINT Resist29;//0x0214
	UINT Resist30;//0x0218
	UINT Resist31;//0x021C
	UINT Resist32;//0x0220
	BYTE InventorySize;//0x224
	BYTE CanStore_TID1;//0x225
	BYTE CanStore_TID2;//0x226
	BYTE CanStore_TID3;//0x227
	BYTE CanStore_TID4;//0x228
	BYTE CanBeVehicle;//0x229
	BYTE CanControl;//0x22A
	BYTE DamagePortion;//0x22B
	UINT MaxPassenger;//0x22C
	UINT PD;//0x230
	UINT MD;//0x234
	UINT PAR;//0x238
	UINT MAR;//0x23C
	UINT ER;//0x240
	UINT BR;//0x244
	UINT HR;//0x248
	UINT CHR;//0x24C
	UINT ExpToGive;//0x250
	UINT CreepType;//0x254
	BYTE Knockdown;
private:
	char pad_0259[3];
public:
	UINT KO_RecoverTime;
	UINT DefaultSkill_1;
	UINT DefaultSkill_2;
	UINT DefaultSkill_3;
	UINT DefaultSkill_4;
	UINT DefaultSkill_5;
	UINT DefaultSkill_6;
	UINT DefaultSkill_7;
	UINT DefaultSkill_8;
	UINT DefaultSkill_9;
	UINT DefaultSkill_10;
	UINT TextureType;

};