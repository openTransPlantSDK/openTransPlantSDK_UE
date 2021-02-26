// Fill out your copyright notice in the Description page of Project Settings.


#include "TSceneMgr.h"
#include<Engine/Engine.h>
#include<Kismet/GameplayStatics.h>

#include<openTransPlantSDK_UE/util/string/TString.h>
#include<openTransPlantSDK_UE/ui/scene/TScene.h>

void TSceneMgr::replaceScene(FString name)
{
	TSceneMgr::getInst()->replaceScene(oT::util::TString(name));
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

		SceneMgr::SceneMgr()
		{

		}

		TScene* SceneMgr::getActiveScene()
		{
			return this->mActiveScene;
		}

		void SceneMgr::replaceScene(util::TString name)
		{
			auto scene=new TScene();
			scene->setName(name.string());
			UGameplayStatics::OpenLevel(GWorld->GetGameInstance(),name.toFName());

			auto oldScene = this->mActiveScene;
			if (oldScene)
			{
				oldScene->beforeDestroy();
				delete oldScene;
			}

			this->mActiveScene = scene;
		}
	}
}

oT::ui::SceneMgr* UTSceneMgr::getInst()
{
	return oT::ui::SceneMgr::getInst();
}
