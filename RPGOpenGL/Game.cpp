#include "Game.h"

#include <gl/glew.h>
#include "GFXUtil.h";
#include "TextureManager.h"
#include "MapRenderer.h";

MapRenderer mapRenderer;
TextureManager tex = TextureManager::instance();

void Game::init() {	
	tex.loadTexture(0, "assets/Grass.png");

	mapRenderer.initMap(tex, MaterialManager::instance());
}

void Game::update() {
	
}

void Game::draw() {
	glColor3f(1, 1, 1);			
	mapRenderer.drawMap();
}