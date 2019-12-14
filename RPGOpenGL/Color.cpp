#include "Color.h"

Color::Color(int red, int green, int blue, int alpha){
	r = red;
	g = green;
	b = blue;
	a = alpha;
}

Color::Color(int red, int green, int blue) {
	r = red;
	g = green;
	b = blue;
	a = 255;
}

Color::Color() {
	r = 255;
	g = 255;
	b = 255;
	a = 255;
}