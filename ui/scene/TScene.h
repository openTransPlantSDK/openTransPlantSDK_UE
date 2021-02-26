// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include<string>
#include "TScene.generated.h"

namespace oT
{
	namespace ui
	{
		class TScene
		{
		public:
			TScene();
			virtual ~TScene();

		public:
			std::string getName();
			void setName(std::string value);

		public:
			virtual bool initialize();
			virtual void onEnter();
			virtual void onEnterFinish();
			virtual void beforeDestroy();

		private:
			std::string mName = "";
		};
	}
}

/**
 * 
 */
UCLASS()
class OPENTRANSPLANTSDK_API UTScene : public UObject
{
	GENERATED_BODY()
	
};
