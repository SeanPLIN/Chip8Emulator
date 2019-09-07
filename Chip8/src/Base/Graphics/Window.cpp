#include "Window.h"
#include <assert.h>

namespace emu
{
	Window::Window(Int32 width, Int32 height, const std::string& title)
	{
		int result = glfwInit();
		assert(result && "Failed to initialize GLFW");

		m_RawWindow = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
		assert(m_RawWindow && "Failed to create GLFW window");
	}

	Window::~Window()
	{
		glfwDestroyWindow(m_RawWindow);
		glfwTerminate();
	}

	void Window::SwapBuffers() const
	{
		glfwSwapBuffers(m_RawWindow);
		glfwPollEvents();
	}
}
