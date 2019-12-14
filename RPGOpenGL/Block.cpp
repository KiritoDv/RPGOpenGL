#include "Block.h"

Block::Block() {
	Block::location = vec3();
	Block::material = Material();
}

Block::Block(vec3 location, Material material) {
	Block::location = location;
	Block::material = material;
}