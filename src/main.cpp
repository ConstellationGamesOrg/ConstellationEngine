// Copyright (c) 2022 ConstellationEngine Developers (see [AUTHORS.md](AUTHORS.md))

#include "main.hpp"

int main() {
	CE::core::init::graphicsInit();
	CE::core::Window window;

	window.create(800, 600, "Constellation Engine");

	window.clearColor = { 0.5f, 0.0f, 0.4f, 1.0f };

	while (!window.shouldClose) {
		if (glfwGetKey(window.window, GLFW_KEY_ESCAPE)) {
			window.shouldClose = true;
		}

		if (glfwGetKey(window.window, GLFW_KEY_RIGHT)) {
			if (window.clearColor[1] < 1.0f) {
				window.clearColor[1] += 0.01f;
			}
			else {
				window.clearColor[1] = 1.0f;
			}
		} if (glfwGetKey(window.window, GLFW_KEY_LEFT)) {
			if (window.clearColor[1] > 0.0f) {
				window.clearColor[1] -= 0.01f;
			}
			else {
				window.clearColor[1] = 0.0f;
			}
		}

		if (glfwGetKey(window.window, GLFW_KEY_UP)) {
			if (window.clearColor[0] < 1.0f) {
				window.clearColor[0] += 0.01f;
			}
			else {
				window.clearColor[0] = 1.0f;
			}
		} if (glfwGetKey(window.window, GLFW_KEY_DOWN)) {
			if (window.clearColor[0] > 0.0f) {
				window.clearColor[0] -= 0.01f;
			}
			else {
				window.clearColor[0] = 0.0f;
			}
		}

		window.clear();
		// graphics.render();
		window.update();
	}

	window.cleanup();
	return 0;
}