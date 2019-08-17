set(
	PLATFORM_GLFW_FILES
	src/Base/Platform/GLFW/GLFWPlatformWindow.h
	src/Base/Platform/GLFW/GLFWPlatformWindow.cpp
)

add_executable(
	Chip8
	src/Base/Core.h
	src/Base/EmulatorBase.h

	src/Base/Graphics/Window.h
	src/Base/Graphics/Window.cpp

	src/Base/Platform/Generic/IPlatformWindow.h
	${PLATFORM_GLFW_FILES}

	src/Emulator/Main.cpp
)

target_include_directories(Chip8 PRIVATE src)

# glfw
add_subdirectory(src/Base/Thirdparty/glfw)
target_link_libraries(Chip8 glfw)
