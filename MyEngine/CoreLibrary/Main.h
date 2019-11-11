#pragma once

#include "MyEngine.h"
#include "Log.h"

int main(int argc, char * argv[])
{
    MyEngine::GameEngine * gameEngine = MyEngine::CreateGameEngine();
    MyEngine::Log::TestMessage();
   // LOG_INFO();
    gameEngine->Run();

    delete gameEngine;
}
