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
	// 1. 로고 출력용 오브젝트 제작
	CImageObject* logoObjcet = new CImageObject;
	logoObjcet->SetPos(fPoint(100.f, 100.f));
	logoObjcet->SetScale(fPoint(1080.f, 200.f));
	AddObject(logoObjcet, GROUP_GAMEOBJ::BACKGROUND);
	// 3. 시작 버튼
	// 4. 종료 버튼
}

void CScene_Title::Exit()
{

}
