#pragma once
#include "Base/Platform/Generic/IPlatformWindow.h"

class GLFWwindow;

namespace emu
{
	class GLFWPlatformWindow : public IPlatformWindow
	{
	public:

		GLFWPlatformWindow(UInt32 width, UInt32 height, const std::string& title);

		bool IsOpen() const override;
		void Update() const override;

	private:

		GLFWwindow* m_Window;

	};
}
