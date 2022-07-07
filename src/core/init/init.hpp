#ifndef INIT_HPP
#define INIT_HPP

// User-Defined Headers
// --------------------

// 3rd Party Library Headers
// -------------------------
#include <glad/glad.hpp>
#include <GLFW/glfw3.h>

// Standard Library Headers
// ------------------------
#include <iostream>

namespace CE {
	namespace core {
		namespace init {
			int graphicsInit();
			int graphicsInit(int versionMajor, int versionMinor);
		}
	}
}

#endif // INIT_HPP
