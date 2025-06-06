#include <MeshLoader.h>

MeshLoader* CreateMeshLoader()
{
	ApplicationSpecification spec;
	spec.Name = "MeshLoader";
	return new MeshLoader(spec);
}