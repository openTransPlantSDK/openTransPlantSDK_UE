// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include <string>
#include "TSceneMgr.generated.h"

namespace oT
{
	namespace ui
	{
		class SceneMgr
		{
		private:
			static SceneMgr* mInst;
		public:
			static SceneMgr* getInst();

		public:
			void replaceScene(std::string name);
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
	UFUNCTION(BlueprintCallable, Category = "openTransPlantSDK/切换场景")
	static void replaceScene(FString sceneName);



public:
	static oT::ui::SceneMgr* getInst();
};

#define TSceneMgr UTSceneMgr

