// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <string>
#include "TSceneMgr.generated.h"

namespace oT
{
	namespace util
	{
		class TString;
	}

	namespace ui
	{
		class TScene;

		class SceneMgr
		{
		private:
			static SceneMgr* mInst;
		public:
			static SceneMgr* getInst();

		private:
			SceneMgr();

		public:
			TScene* getActiveScene();

		public:
			void replaceScene(util::TString name);

		private:
			TScene* mActiveScene = nullptr;
		};
	}
}

/**

 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class OPENTRANSPLANTSDK_API UTSceneMgr : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "openTransPlantSDK/ui/scene/replaceScene")
	static void replaceScene(FString sceneName);
public:
	static oT::ui::SceneMgr* getInst();
};

#define TSceneMgr UTSceneMgr

