#pragma once

#include "pch.h"
#include "Window.h"

struct ApplicationSpecification
{
	std::string Name = "App";
};

class MeshLoader
{
public:
	MeshLoader(const ApplicationSpecification& applicationSpecification = ApplicationSpecification());
	~MeshLoader();

	void Run();

private:
	ApplicationSpecification m_Spec;
	Window* window;
};

MeshLoader* CreateMeshLoader();