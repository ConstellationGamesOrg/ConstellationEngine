// Copyright (c) 2022 ConstellationEngine Developers (see [AUTHORS.md](AUTHORS.md))

#include "main.hpp"

int main()
{
	CE::core::init::graphicsInit();
	std::cout << "Constellation Engine\n";

	// Terminate GLFW, clearing any resources allocated by GLFW
	glfwTerminate();
	return 0;
}