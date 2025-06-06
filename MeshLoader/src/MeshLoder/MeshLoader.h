#pragma once

#include "pch.h"

struct ApplicationSpecification
{
	std::string Name = "MeshLoader";
	uint32_t Width = 1600;
	uint32_t Height = 900;
};

class MeshLoader
{
public:
	MeshLoader(const ApplicationSpecification& applicationSpecification = ApplicationSpecification());
	~MeshLoader();

private:

};

MeshLoader* CreateMeshLoader(int argc, char** argv);