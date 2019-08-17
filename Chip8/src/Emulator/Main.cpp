#include <iostream>
#include <Base/EmulatorBase.h>

int main()
{
	emu::Window window(1280, 720, "Chip8 Emulator");

	while (window.IsOpen())
	{
		window.Update();
	}
}
