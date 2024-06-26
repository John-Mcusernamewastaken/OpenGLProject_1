#pragma once
#include <GLFW/glfw3.h>

constexpr auto WINDOW_TITLE = "My First (Successful) OpenGL Project";
constexpr auto WINDOW_WIDTH = 1000;
constexpr auto WINDOW_HEIGHT = 1000;
constexpr auto FRAMERATE = 144;
constexpr auto FRAME_DELAY = 1000 / FRAMERATE;
constexpr auto MOVE_RATE = 0.1;
constexpr auto ROTATE_RATE = 3.6f;

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);