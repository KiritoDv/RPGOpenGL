#include "Display.h"

//#include "Image.h"

void Display::initDisplay(int width, int height, GLFWwindow* window) {
	windowWidth = width;
	windowHeight = height;

	//Image i;

	//GLFWimage images[1];
	//images[0].pixels = i.getData("assets/Grass.png");
	//glfwSetWindowIcon(window, 1, images);
	//i.freeData();
}

void Display::resizeDisplay(int newWidth, int newHeight) {
	windowWidth = newWidth;
	windowHeight = newHeight;
}