#include <MeshLoader.h>

MeshLoader* CreateMeshLoader(int argc, char** argv) 
{
	MeshLoader* app = new MeshLoader();
	return app;
}