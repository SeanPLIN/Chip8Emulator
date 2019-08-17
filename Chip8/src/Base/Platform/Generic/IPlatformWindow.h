#pragma once
#include "Base/Core.h"

#include <string>

namespace emu
{
	class IPlatformWindow
	{
	public:

		virtual bool IsOpen() const = 0;
		virtual void Update() const = 0;

		static IPlatformWindow* Create(UInt32 width, UInt32 height, const std::string& title);

	};
}
