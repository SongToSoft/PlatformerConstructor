#include <Wall.h>
#include <iostream>

Wall::Wall(QWidget* _parent, bool _destructible) : PCNode(_parent, "") {
    id = "wall";
    transformComponent->setSize({50, 50});
    setDestructible(_destructible);
    nodeType = ENodeType::WALL;
    std::cout << "Wall" << std::endl;
}

bool Wall::isDestructible() {
    return destructible;
}

void Wall::setDestructible(bool _destructible) {
    destructible = _destructible;
    spriteComponent->setImage(destructible ? "../Sprites/brickWall.jpg" : "../Sprites/stoneWall.jpg");
}
