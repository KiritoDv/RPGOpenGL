#include "MapRenderer.h"

#include "Texture.h";
#include "GFXUtil.h";
#include <vector>
#include <algorithm>
#include "gl/glew.h"
#include "Display.h"
#include "Camera.h"
#include <iostream>

using namespace std;

TextureManager* tManager;
MaterialManager* mManager;
Display* dManager;

void MapRenderer::initMap(TextureManager tm, MaterialManager mm) {
	tManager = &tm;
	mManager = &mm;
	dManager = &Display::instance();		

	for (int a = 0; a < 333; a++) {
		for (int b = 0; b < 333; b++) {
			map.setBlock(vec3(a, b, 0), mManager->GRASS);
		}
	}	
}

void MapRenderer::drawMap() {	
	vec3* pos = &Camera::instance().getPosition();

	for (auto i = map.blocks.begin(); i != map.blocks.end(); i++) {
		Block b = *i;
		
		int tW = 32;
		int tH = 32;

		int x = (b.location.x - b.location.y) * (tW / 2);
		int y = (((b.location.x + b.location.y) * (tH / 4))) - ((b.location.z) * (tH / 2));						

		if (x + tW > pos->x && y + tH > pos->y && x <= (pos->x + dManager->windowWidth) && y <= (pos->y + dManager->windowHeight)) {
			GFXUtil::drawTexture(x, y, 0, 0, tW, tH, tW, tH);
		}		
	}

}
