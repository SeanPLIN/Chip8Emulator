#pragma once
#include "Base/Core.h"

#include <GLFW/glfw3.h>
#include <string>

namespace emu
{
	class Window
	{
	public:

		Window(Int32 width, Int32 height, const std::string& title);
		~Window();

		Window(const Window&) = delete;
		Window(Window&&) = delete;
		Window& operator=(const Window&) = delete;
		Window& operator=(Window&&) = delete;

		void SwapBuffers() const;
		inline bool IsClosed() const { return glfwWindowShouldClose(m_RawWindow); }

	private:

		GLFWwindow* m_RawWindow;

	};
}
