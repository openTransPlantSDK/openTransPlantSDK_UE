// Fill out your copyright notice in the Description page of Project Settings.


#include "TString.h"

namespace oT
{
    namespace util
    {
        TString::TString(std::string str)
        {
            this->mData = str;
        }

        TString::TString(FString& str)
        {
            this->mData = TCHAR_TO_UTF8(*str);
        }

        TString::TString(FName& str)
        {
            this->mData = TCHAR_TO_UTF8(*str.ToString());
        }

        TString::TString(FText& str)
        {
            this->mData = TCHAR_TO_UTF8(*str.ToString());
        }

        std::string TString::string()
        {
            return this->mData;
        }

        FString TString::toFString()
        {
            return FString(this->mData.c_str());
        }

        FText TString::toFText()
        {
            return FText::FromString(this->toFString());
        }

        FName TString::toFName()
        {
            return FName(this->toFString());
        }
    }
}