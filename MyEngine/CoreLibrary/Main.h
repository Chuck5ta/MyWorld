#pragma once

#include "Application.h"

int main(int argc, char * argv[])
{
    MyEngine::GameEngine * gameEngine = MyEngine::CreateGameEngine();

    gameEngine->Run();

    delete gameEngine;
}
