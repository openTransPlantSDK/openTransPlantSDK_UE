// Fill out your copyright notice in the Description page of Project Settings.


#include "TLog.h"

namespace oT
{
	namespace util
	{
		Log* Log::mInst = nullptr;

		Log* Log::getInstance()
		{
			if (!Log::mInst)
			{
				Log::mInst = new Log();
			}

			return Log::mInst;
		}

		void Log::debug(std::string title, std::string context)
		{

		}

		void Log::info(std::string title, std::string context)
		{

		}

		void Log::warring(std::string title, std::string context)
		{
			//UE_LOG(LogTemp, Warning, );
		}

		void Log::error(std::string title, std::string context)
		{

		}
	}
}