#include "MyWorld.h"

MyWorld::MyWorld()
{
}

MyWorld::~MyWorld()
{
}

MyEngine::GameEngine* MyEngine::CreateGameEngine()
{
    return new MyWorld();
}