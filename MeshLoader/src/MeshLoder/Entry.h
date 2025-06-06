#pragma once

#include "pch.h"
#include "MeshLoader.h"


int main(int argc, char** argv)
{
    std::cout << "Hello World!\n";
    auto app = CreateMeshLoader();
    app->Run();
    delete app;
}
