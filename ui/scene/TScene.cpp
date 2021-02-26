// Fill out your copyright notice in the Description page of Project Settings.


#include "TScene.h"

namespace oT
{
	namespace ui
	{
		TScene::TScene()
		{
			this->initialize();
		}

		TScene::~TScene()
		{
			this->beforeDestroy();
		}

		std::string TScene::getName()
		{
			return this->mName;
		}

		void TScene::setName(std::string value)
		{
			this->mName = value;
		}

		bool TScene::initialize()
		{
			return false;
		}

		void TScene::onEnter()
		{

		}

		void TScene::onEnterFinish()
		{

		}

		void TScene::beforeDestroy()
		{

		}
	}
}