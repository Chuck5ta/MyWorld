#include "pch.h"
#include "Application.h"
#include "Log.h"

namespace MyEngine
{
    GameEngine::GameEngine()
    {
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