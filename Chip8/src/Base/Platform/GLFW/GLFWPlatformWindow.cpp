#include "GLFWPlatformWindow.h"

#include <GLFW/glfw3.h>
#include <assert.h>

namespace emu
{
	IPlatformWindow* IPlatformWindow::Create(UInt32 width, UInt32 height, const std::string& title)
	{
		return new GLFWPlatformWindow(width, height, title);
	}

	GLFWPlatformWindow::GLFWPlatformWindow(UInt32 width, UInt32 height, const std::string& title)
	{
		int result = glfwInit();
		assert(result);

		m_Window = glfwCreateWindow(width, height, title.c_str(), nullptr, nullptr);
	}

	bool GLFWPlatformWindow::IsOpen() const
	{
		return !glfwWindowShouldClose(m_Window);
	}

	void GLFWPlatformWindow::Update() const
	{
		glfwSwapBuffers(m_Window);
		glfwPollEvents();
	}
}
