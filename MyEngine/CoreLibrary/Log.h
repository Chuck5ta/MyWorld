#pragma once

/*
    This class deals with the messages that need to be output to notify the user what is going on with the system.
    e.g. errors, non critical warnings, runtime information, etc.

    possible future implementations
    - write to a log file
    - Pass specific info to be output
    - Meaningful message
    - Date and Time
    - Location within code/project

*/
#include "Defines.h" // DllExport tells compiler to look at DLL file
#include "../pch/pch.h"

namespace MyEngine 
{
    class DllExport Log
    {
    public:
        static void LogMessage();
        static void LogMessage(std::string);

    };

}

// Macros for the logging system
#define LOG_ERROR(...)   ::MyEngine::Log::LogMessage(__VA_ARGS__);
#define LOG_WARNING(...) ::MyEngine::Log::LogMessage(__VA_ARGS__);
#define LOG_INFO(...)    ::MyEngine::Log::LogMessage(__VA_ARGS__);

