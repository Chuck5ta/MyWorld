#pragma once

#include "pch.h"
#include "Application.h"

namespace MyEngine
{
    GameEngine::GameEngine()
    {
		// Create the main window

    }

    GameEngine::~GameEngine()
    {
    }

    void GameEngine::Run()
    {
		LOG_INFO("Hello My World");

        while (true){}
    }
}