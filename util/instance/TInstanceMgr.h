// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "TInstanceMgr.generated.h"

namespace oT
{
	namespace util
	{
		class InstanceMgr
		{
		public:
			static InstanceMgr* getInstance();

		protected:
			InstanceMgr();

		private:
			static InstanceMgr* mInst;
		};
	}
}

/**
 * 
 */
UCLASS()
class OPENTRANSPLANTSDK_API UTInstanceMgr : public UGameInstance
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "openTransPlantSDK/util/instance/initMgr")
	void initialize();
};
