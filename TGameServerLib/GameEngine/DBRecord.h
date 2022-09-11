#pragma once
#include "stdafx.h"
#include "GameEngine\Base.h"

class CDBRecord:CBase
{
public:
	CDBRecord();
	~CDBRecord();
public:
	virtual UINT* Func1(UINT* param1, BYTE param2);
private:
	UINT pad[5];
	//size 0x14
};

