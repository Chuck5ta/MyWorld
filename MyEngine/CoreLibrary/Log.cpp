#pragma once
#include "pch.h"
#include "Log.h"

namespace MyEngine 
{
    void Log::LogMessage(std::string sMessage)
    {
        std::cout << sMessage << std::endl;
    }

}