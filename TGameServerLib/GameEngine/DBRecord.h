#pragma once
#include "stdafx.h"
#include "GameEngine\Base.h"

class CDBRecord:CBase
{
public:
	CDBRecord();
	~CDBRecord();
private:
	UINT pad_0000[5];
	//size 0x14
};

