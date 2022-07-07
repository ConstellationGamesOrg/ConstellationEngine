#ifndef WINDOW_HPP
#define WINDOW_HPP

// 3rd Party Library Headers
// -------------------------
#include <glad/glad.hpp>
#include <GLFW/glfw3.h>

// Standard Library Headers
// ------------------------
#include <iostream>
#include <string>

namespace CE {
	namespace core {
		class Window {
		public:
			GLFWwindow* window;

			int width = 800;
			int height = 600;

			const char* title;

			bool shouldClose = false;

			int create(int width, int height, std::string title);
			int update();
			int cleanup();
		};
	}
}

void framebufferSizeCallback([[maybe_unused]] GLFWwindow* window, int width, int height);

#endif // WINDOW_HPP
