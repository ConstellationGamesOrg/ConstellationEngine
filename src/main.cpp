// Copyright (c) 2022 ConstellationEngine Developers (see [AUTHORS.md](AUTHORS.md))

#include "main.hpp"

int main() {
	CE::core::init::graphicsInit();
	CE::core::Window window;

	window.create(800, 600, "Constellation Engine");

	while (!window.shouldClose) {
		window.update();
	}

	window.cleanup();

	// Terminate GLFW, clearing any resources allocated by GLFW
	glfwTerminate();
	return 0;
}