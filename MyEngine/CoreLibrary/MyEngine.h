#pragma once

#include "Defines.h" 
// DllExport tells compiler to look at DLL file

namespace MyEngine
{
    class DllExport GameEngine
    {
    public:
        GameEngine();
        virtual ~GameEngine();

        void Run();
    };

    // This function is defined in client, not the engine
    GameEngine* CreateGameEngine();
}