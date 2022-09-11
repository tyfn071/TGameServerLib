#pragma once
#include "stdafx.h"
#include "GameEngine\IGObj.h"
#include "GameEngine\Base.h"

class CGObj:public IGObj,public CBase
{
public:
	CGObj();
	~CGObj();

protected:
	UINT m_UniqueID;

};

