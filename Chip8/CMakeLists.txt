add_executable(
	Chip8
	src/Base/Core.h
	src/Base/EmulatorBase.h

	src/Base/Graphics/Window.h
	src/Base/Graphics/Window.cpp
	src/Base/Graphics/Context.h
	src/Base/Graphics/Context.cpp

	src/Emulator/Main.cpp
)

target_include_directories(Chip8 PRIVATE src)

# glfw
add_subdirectory(src/Base/Thirdparty/glfw)
target_link_libraries(Chip8 glfw)
