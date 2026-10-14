# MeshLoader

## Tech Stack
- C++20
- GLFW
- Glad
- GLM

## Prerequisites

Before building the project, make sure you have:

- Windows 10 or 11
- Visual Studio 2022/26
- Desktop development with C++ workload installed
- Git with submodules support enabled

## Quick Start

Clone the repository with submodules:

```bash
git clone --recurse-submodules https://github.com/Nikola2412/MeshLoader.git
cd Editor
```

Generate the Visual Studio solution:

```bat
script\sln gen.bat
```
or
```bat
script\slnx gen.bat
```

This uses the bundled Premake toolchain to generate the project files for Visual Studio 2022/26.

Then open the generated solution in Visual Studio, set `MeshLoader` as the startup project, and build the solution.

## Build Notes

- The workspace is configured with Premake and uses the `MeshLoader` startup project.
- Generated binaries are placed under the `bin/` folder.
- Runtime assets for the app are copied into the output directory during the build.

## License

This project is distributed under the terms of the included license. See [LICENSE](LICENSE) for details.