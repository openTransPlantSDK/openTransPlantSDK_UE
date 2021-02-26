// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TLog.generated.h"

namespace oT
{
	namespace util
	{
		class Log
		{
		public:
			static Log* getInstance();

		public:
			void debug(std::string title,std::string context);
			void info(std::string title, std::string context);
			void warring(std::string title, std::string context);
			void error(std::string title, std::string context);

		private:
			static Log* mInst;
		};
	}
}

/**
 * 
 */
UCLASS()
class OPENTRANSPLANTSDK_API UTLog : public UObject
{
	GENERATED_BODY()
	
};
