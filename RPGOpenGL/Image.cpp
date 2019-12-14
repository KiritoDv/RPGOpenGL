#include "Image.h"

//#define STB_IMAGE_IMPLEMENTATION
//#include <stb_image.h>


//unsigned char* tmpData;

unsigned char* Image::getData(const char* filename) {	
//	int nrChannels;	

	//return stbi_load(filename, &width, &height, &nrChannels, STBI_rgb_alpha);
	return 0;
}

void Image::freeData() {
	//stbi_image_free(tmpData);
}