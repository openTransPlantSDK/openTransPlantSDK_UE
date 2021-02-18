// Fill out your copyright notice in the Description page of Project Settings.


#include "TSceneMgr.h"
#include<Engine/Engine.h>
#include<Kismet/GameplayStatics.h>

void TSceneMgr::replaceScene(FString name)
{
	TSceneMgr::getInst()->replaceScene(TCHAR_TO_UTF8(*name));
}

namespace oT
{
	namespace ui
	{
		SceneMgr* SceneMgr::mInst = nullptr;

		SceneMgr* oT::ui::SceneMgr::getInst()
		{
			if (!SceneMgr::mInst)
			{
				SceneMgr::mInst = new SceneMgr();
			}

			return SceneMgr::mInst;
		}

		void SceneMgr::replaceScene(std::string name)
		{
			UGameplayStatics::OpenLevel(GWorld->GetGameInstance(),FName(*FString(name.c_str())));
		}
	}
}

oT::ui::SceneMgr* UTSceneMgr::getInst()
{
	return oT::ui::SceneMgr::getInst();
}
