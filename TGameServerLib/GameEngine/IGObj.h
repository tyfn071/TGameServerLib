#pragma once
#include "stdafx.h"
#include "memory\Fixer.h"

class IGObj
{
public:
	IGObj();
	~IGObj();
public:
	virtual int GetRefObjID();
	virtual UINT GetJID();
	virtual UINT GetGameID();
	virtual USHORT GetTypeID();




};

