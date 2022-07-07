#include "init.hpp"

namespace CE {
	namespace core {
		namespace init {
			int graphicsInit() {
				if (!glfwInit()) {
					// Failed to initialize GLFW
					return -1;
				}

				// Set the OpenGL version
				glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
				glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);

				// Use only modern OpenGL functions
				glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
				glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

				return 0;
			}

			int graphicsInit(int versionMajor, int versionMinor) {
				if (!glfwInit()) {
					// Failed to initialize GLFW
					return -1;
				}

				// Set the OpenGL version
				glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, versionMajor);
				glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, versionMinor);

				// Use only modern OpenGL functions
				glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
#ifdef __APPLE__
				glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

				return 0;
			}
		}
	}
}

