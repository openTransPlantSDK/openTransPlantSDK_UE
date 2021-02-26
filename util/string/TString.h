// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TString.generated.h"

namespace oT
{
    namespace util
    {
        class TString
        {
        public:
            TString() {}
            TString(std::string str);
            TString(FString& str);
            TString(FText& str);
            TString(FName& str);

        public:
            std::string string();
        public:
            FString toFString();
            FText toFText();
            FName toFName();

        private:
            std::string mData = "";
        };
    }
}

/**
 * 
 */
UCLASS()
class OPENTRANSPLANTSDK_API UTString : public UObject
{
	GENERATED_BODY()
	
};
