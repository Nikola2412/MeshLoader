workspace "MeshLoader"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   flags { "MultiProcessorCompile" }
   startproject "App"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

IncludeDir = {}
IncludeDir["glm"]	= "%{wks.location}/MeshLoader/vendor/glm"
IncludeDir["GLFW"]	= "%{wks.location}/MeshLoader/vendor/GLFW/include"
IncludeDir["Glad"]	= "%{wks.location}/MeshLoader/vendor/Glad/include"


group "Dependencies"
   include "MeshLoader/vendor/glfw"
   include "MeshLoader/vendor/Glad"
group ""

group "MeshLoader"
include "MeshLoader"
group ""

include "App"