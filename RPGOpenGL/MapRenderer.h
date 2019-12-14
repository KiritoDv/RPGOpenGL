#pragma once

#include "Map.h";
#include "TextureManager.h"
#include "MaterialManager.h"

class MapRenderer{
	public:
		virtual void drawMap();
		void initMap(TextureManager t, MaterialManager mManager);
	private:
		Map map = Map::instance();		
};

