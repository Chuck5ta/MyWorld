#pragma once

#include "CoreLibrary/MyEngine.h"

int main(int argc, char * argv[])
{
    MyEngine::GameEngine * gameEngine = MyEngine::CreateGameEngine();

    gameEngine->Run();

    delete gameEngine;
}
