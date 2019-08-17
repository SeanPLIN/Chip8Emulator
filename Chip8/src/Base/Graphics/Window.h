#pragma once
#include "Base/Platform/Generic/IPlatformWindow.h"
#include <string>

namespace emu
{
	class Window
	{
	public:

		Window(UInt32 width, UInt32 height, const std::string& title);

		inline bool IsOpen() const { return m_PlatformImpl->IsOpen(); }
		inline void Update() const { m_PlatformImpl->Update(); }

	private:

		IPlatformWindow* m_PlatformImpl;

	};
}
