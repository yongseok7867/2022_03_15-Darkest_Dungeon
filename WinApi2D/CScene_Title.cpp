#include "framework.h"
#include "CScene_Title.h"
#include "CImageObject.h"

CScene_Title::CScene_Title()
{

}

CScene_Title::~CScene_Title()
{

}

void CScene_Title::Enter()
{
	// TODO : 
	// 1. �ΰ� ��¿� ������Ʈ ����
	CImageObject* logoObjcet = new CImageObject;
	logoObjcet->SetPos(fPoint(100.f, 100.f));
	logoObjcet->SetScale(fPoint(1080.f, 200.f));
	AddObject(logoObjcet, GROUP_GAMEOBJ::BACKGROUND);
	// 3. ���� ��ư
	// 4. ���� ��ư
}

void CScene_Title::Exit()
{

}
