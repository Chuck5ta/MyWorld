#pragma once

// DllExport tells compiler to look at DLL file
//#include "../WindowSystem/Window.h"
#include "Log.h"

namespace MyEngine
{
    class DllExport GameEngine
    {
    public:
        GameEngine();
        virtual ~GameEngine();

        void Run();

	private:
        // pointer to window class 24 min is

    };

    // This function is defined in client, not the engine
    GameEngine* CreateGameEngine();
}