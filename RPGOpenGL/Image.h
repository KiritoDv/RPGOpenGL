#pragma once
class Image{	
	public:		
		int width;
		int height;
		unsigned char* getData(const char* filename);
		void freeData();
};