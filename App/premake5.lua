project "App"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++17"
	staticruntime "off"

	targetdir ("../bin/" .. outputdir .. "/%{prj.name}")
	objdir ("../bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"src/**.h",
		"src/**.cpp",
	}

	includedirs
	{
		"%{wks.location}/MeshLoader/src",
		"%{wks.location}/MeshLoader/vendor"
	}

	links
	{
		"MeshLoader"
	}

	buildoptions
	{ 
		"/utf-8" ,
		"/IGNORE:4099"
	}

	filter "system:windows"
      systemversion "latest"
      defines { "PLATFORM_WINDOWS" }


	filter "configurations:Debug"
		defines "DEBUG"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		defines "RELEASE"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		defines "DIST"
		runtime "Release"
		optimize "on"
