#include "Window.h"

namespace emu
{
	Window::Window(UInt32 width, UInt32 height, const std::string& title)
	{
		m_PlatformImpl = IPlatformWindow::Create(width, height, title);
	}
}
