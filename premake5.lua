workspace "MyWorld"
    architecture "x64"

    configurations { "Debug", "Release", "Dist" }

project "MyEngine"
    location "MyEngine"
    kind "SharedLib"
    language "C++"
    targetdir ("build/bin/%{prj.name}")
    objdir ("build/obj/%{prj.name}")

    files
    {
        -- ** = Search the child folders
        "%{prj.name}/**.h",  -- include all header files 
        "%{prj.name}/**.cpp" -- include all source files
    }

 --   includedirs { }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"
        defines { "MSWINDOWS", "BUILD_DLL" }

    filter "configurations:Debug"
        defines "DEBUG"
        symbols "On"        

    filter "configurations:Release"
        defines "RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "DIST"
        optimize "On"

-- multiple configurations example
--    filter { "system:windows", "configurations:Release" }
--        buildoptions "/MT" -- multi threaded runtime library


project "MyWorld"
    location "MyWorld"
    kind "ConsoleApp"
    language "C++"
    targetdir ("build/bin/%{prj.name}")
    objdir ("build/obj/%{prj.name}")

    files
    {
        -- ** = Search the child folders
        "%{prj.name}/**.h",  -- include all header files 
        "%{prj.name}/**.cpp" -- include all source files
    }

    includedirs { "MyEngine" }

    links { "MyEngine" }

    filter "system:windows"
        cppdialect "C++17"
        staticruntime "On"
        systemversion "latest"
        defines { "MSWINDOWS" }
        -- https://github.com/premake/premake-core/wiki/postbuildcommands
        -- copy the MyEngine DLL to the MyWorld build folder
        prebuildcommands
        {
             "copy D:\\DEV\\MyWorld\\build\\bin\\MyEngine\\MyEngine.dll D:\\DEV\\MyWorld\\build\\bin\\MyWorld\\"
        }

    filter "configurations:Debug"
        defines "DEBUG"
        symbols "On"        

    filter "configurations:Release"
        defines "RELEASE"
        optimize "On"

    filter "configurations:Dist"
        defines "DIST"
        optimize "On"