// Copyright (c) 2022 ConstellationEngine Developers (see [AUTHORS.md](AUTHORS.md))

#include "main.hpp"

int main() {
	CE::core::init::graphicsInit();
	CE::core::Window window;

	window.create(800, 600, "Constellation Engine");

	window.clearColor = { 0.5f, 0.0f, 0.4f, 1.0f };

	while (!window.shouldClose) {
		window.clear();
		// graphics.render();
		window.update();
	}

	window.cleanup();
	return 0;
}