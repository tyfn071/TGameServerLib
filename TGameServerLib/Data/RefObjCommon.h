#pragma once
#include "../stdafx.h"
#include "RefObjBaseData.h"

struct RefObjCommon:RefObjBaseData
{
private:
	UINT pad_0[2];
public:
	UINT ID;
	UINT OrgID;
	std::string CodeName128; //0x0010
	std::string ObjName; //0x002C
	std::string OrgObjCodeName128;//0x0048
	std::string DescStrID128;//0x0064
	UINT TID; //0x0080
	UINT DecayTime;//0x0084
	BYTE Country;//0x0088
	BYTE Rarity; //0x0089
	BYTE CanTrade;//0x008A
	BYTE CanSell;//0x008B
	BYTE CanBuy; //0x008C
	BYTE CanBorrow; //0x008D
	BYTE CanDrop;//0x008E
	BYTE CanPick;//0x008F
	BYTE CanRepair; //0x0090
	BYTE CanRevive; //0x0091
	BYTE CanUse;//0x0092
	BYTE CanThrow;//0x0093
	UINT pad_94[2];//0x0094
	UINT Price; //0x009C
	UINT CostRepair; //0x00A0
	UINT CostRevive; //0x00A4
	UINT CostBorrow; //0x00A8
	UINT KeepingFee; //0x00AC
	UINT SellPrice; //0x00B0
	int ReqLevelType1; //0x00B4
	UINT ReqLevel1; //0x00B8
	int ReqLevelType2; //0x00BC
	UINT ReqLevel2; //0x00C0
	int ReqLevelType3; //0x00C4
	UINT ReqLevel3; //0x00C8
	int ReqLevelType4; //0x00CC
	UINT ReqLevel4; //0x00D0
	int MaxContain; //0x00D4
	UINT RegionID; //0x00D8
	USHORT Dir; //0x00DC
	USHORT OffsetX; //0x00DE
	USHORT OffsetZ; //0x00E0
	USHORT OffsetY; //0x00E2
	USHORT Speed1; //0x00E4
	USHORT Speed2; //0x00E6
	UINT Scale; //0x00E8
	UINT BCHeight; //0x00EC
	UINT BCRadius; //0x00EE
	UINT EventID;//0x00F0
	std::string ResourceFile;//0x00F4
	std::string DropFile; //0x0110
	std::string IconFile; //0x012C
	std::string File1; //0x0148
	std::string File2; //0x0164
	UINT Link;//0x0180
};