#pragma once
#include "stdafx.h"
#include "GameEngine\DBRecord.h"
#include "Data\RefObjBaseData.h"

class CInstanceObj:CDBRecord
{
public:
	CInstanceObj();
	~CInstanceObj();
private:
	RefObjBaseData* Data;

};

