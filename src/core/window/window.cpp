#include "window.hpp"
#include <glad/glad.hpp>

namespace CE {
	namespace core {
		int Window::create(int userWidth, int userHeight, std::string userTitle) {
			width = userWidth;
			height = userHeight;
			title = userTitle.c_str();

			// Create the GLFWwindow object
			window = glfwCreateWindow(width, height, title, NULL, NULL);

			// Error handling
			if (!window) {
				// Failed to create GLFW window. If you have an Intel GPU, they are not 3.3 compatible.
				glfwTerminate();
				return -1;
			}

			glfwMakeContextCurrent(window);

			if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
				// Failed to initialize GLAD

				return -1;
			}

			// Use the entire window
			glViewport(0, 0, width, height);

			glfwSetFramebufferSizeCallback(window, framebufferSizeCallback);

			return 0;
		}

		int Window::update() {
			if (glfwWindowShouldClose(window)) {
				shouldClose = true;
			}

			glfwSwapBuffers(window);
			glfwPollEvents();

			return 0;
		}

		int Window::cleanup() {
			glfwTerminate();

			return 0;
		}
	}
}

void framebufferSizeCallback([[maybe_unused]] GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}
