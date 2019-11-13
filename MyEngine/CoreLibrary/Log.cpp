#pragma once
#include "pch.h"
#include "Log.h"

namespace MyEngine 
{
	/*
	    sMsgType is ERROR, WARNING, INFO
		sMessage the actual message
	*/
    void Log::LogMessage(std::string sMsgType, std::string sMessage)
    {
        std::cout << sMsgType << sMessage << std::endl;
    }

}