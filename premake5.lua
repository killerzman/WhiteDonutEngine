workspace "WhiteDonutEngine"
	architecture "x64"
	
	configurations
	{
		"Debug",
		"Release",
		"Dist"
	}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
	
project "WhiteDonutEngine"
	location "WhiteDonutEngine"
	kind "SharedLib"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"%{prj.name}/vendor/spdlog/include"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"WDE_PLATFORM_WINDOWS",
			"WDE_BUILD_DLL"
		}
		
		postbuildcommands
		{
			("{COPY} %{cfg.buildtarget.relpath} ../bin/" .. outputdir .. "/Sandbox")
		}
	
	filter "configurations:Debug"
		defines "WDE_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "WDE_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "WDE_DIST"
		optimize "On"
		
project "Sandbox"
	location "Sandbox"
	kind "ConsoleApp"
	language "C++"
	
	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"%{prj.name}/src/**.h",
		"%{prj.name}/src/**.cpp"
	}
	
	includedirs
	{
		"WhiteDonutEngine/vendor/spdlog/include",
		"WhiteDonutEngine/src"
	}
	
	links
	{
		"WhiteDonutEngine"
	}
	
	filter "system:windows"
		cppdialect "C++17"
		staticruntime "On"
		systemversion "latest"
		
		defines
		{
			"WDE_PLATFORM_WINDOWS"
		}
	
	filter "configurations:Debug"
		defines "WDE_DEBUG"
		symbols "On"
		
	filter "configurations:Release"
		defines "WDE_RELEASE"
		optimize "On"
		
	filter "configurations:Dist"
		defines "WDE_DIST"
		optimize "On"