#pragma once

#include <GLFW/glfw3.h>

class Display{
	public:
		static Display& instance() { static Display display; return display; }
		void initDisplay(int width, int height, GLFWwindow* window);
		void resizeDisplay(int newWidth, int newHeight);
		int windowWidth;
		int windowHeight;
};

