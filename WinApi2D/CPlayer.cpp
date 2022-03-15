#include "framework.h"
#include "CPlayer.h"
#include "CTexture.h"

CPlayer::CPlayer()
{
	SetScale(fPoint(100.f, 100.f));

	m_pTex = CResourceManager::getInst()->LoadTextrue(L"Player", L"texture\\Player.bmp");
}

CPlayer::~CPlayer()
{
}

CGameObject* CPlayer::Clone()
{
	return nullptr;
}

void CPlayer::update()
{
	fPoint pos = GetPos();

	if (Key('W'))
	{
		pos.y -= 1000 * fDT;
	}

	if (Key('A'))
	{
		pos.x -= 1000 * fDT;
	}

	if (Key('S'))
	{
		pos.y += 1000 * fDT;
	}

	if (Key('D'))
	{
		pos.x += 1000 * fDT;
	}
	
	SetPos(pos);
}

void CPlayer::render(HDC hDC)
{
	fPoint pos = GetPos();
	fPoint scale = GetScale();

<<<<<<< HEAD
	// 있는 그대로 그리는 BitBlt
	/*
	BitBlt(hDC
		, (int)(pos.x - scale.x / 2)
		, (int)(pos.y - scale.y / 2)
		, (int)(pos.x + scale.x)
		, (int)(pos.x + scale.y)
		, m_pTex->GetDC()
		, 0
		, 0
		, SRCCOPY);
	*/

	// RGB(255, 0, 255) 마젠타색(보라색) 을 제외한 사진을 그리는 TransparentBlt
=======
>>>>>>> c72da1c08e0a7228b763b6bd1bb51de4e2f1224b
	TransparentBlt(hDC
		, (int)(pos.x - m_pTex->GetBmpWidth() / 2.f)
		, (int)(pos.y - m_pTex->GetBmpHeight() / 2.f)
		, m_pTex->GetBmpWidth()
		, m_pTex->GetBmpHeight()
		, m_pTex->GetDC()
		, 0
		, 0
		, m_pTex->GetBmpWidth()
		, m_pTex->GetBmpHeight()
<<<<<<< HEAD
		, RGB(255, 0, 255));
=======
		, RGB(255, 0, 255)	// RGB(255, 0, 255) 마젠타색(보라색) 을 제외한 사진을 그리는 TransparentBlt
	);
>>>>>>> c72da1c08e0a7228b763b6bd1bb51de4e2f1224b
}