#include "pch.h"
#include "MeshLoader.h"

MeshLoader::MeshLoader(const ApplicationSpecification& applicationSpecification) : m_Spec(applicationSpecification)
{
	window = new Window(applicationSpecification.Name);
}

MeshLoader::~MeshLoader()
{
	delete window;
}

void MeshLoader::Run()
{
	while (1)
	{
		window->Update();
	}
}
