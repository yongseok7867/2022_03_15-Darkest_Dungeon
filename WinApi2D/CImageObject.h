#pragma once
#include "CGameObject.h"
#include <string>

class CD2DImage;

class CImageObject : public CGameObject
{
private:
	CD2DImage* m_pImg;

public:
	CImageObject();
	virtual ~CImageObject();

	CImageObject* Clone();

	virtual void update();

	void Load(const wstring& strKey, const wstring& strPath);
};

