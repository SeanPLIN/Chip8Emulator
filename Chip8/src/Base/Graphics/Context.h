#pragma once
#include "Base/Core.h"
#include "Base/Graphics/Window.h"

namespace emu
{
	class Context
	{
	public:

		Context(Window* window);

	private:

		Window* m_WindowHandle;

	};
}
