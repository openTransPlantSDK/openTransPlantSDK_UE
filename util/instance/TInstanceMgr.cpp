// Fill out your copyright notice in the Description page of Project Settings.


#include "TInstanceMgr.h"

namespace oT
{
	namespace util
	{
		InstanceMgr* InstanceMgr::mInst = nullptr;

		InstanceMgr* InstanceMgr::getInstance()
		{
			if (!mInst)
			{
				mInst = new InstanceMgr();
			}

			return mInst;
		}

		InstanceMgr::InstanceMgr()
		{

		}
	}
}

void UTInstanceMgr::initialize()
{
	oT::util::InstanceMgr::getInstance();
}