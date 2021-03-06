#include <Wall.h>
#include <iostream>

Wall::Wall(QWidget* _parent, bool _destructible) : PCNode(_parent, "") {
    id = "wall";
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

QJsonObject Wall::serialize() {
    QJsonObject jsonObject = PCNode::serialize();
    jsonObject["destructible"] = destructible;
    return jsonObject;
}

void Wall::deserialize(QJsonObject jsonObject) {
    PCNode::deserialize(jsonObject);
    setDestructible(jsonObject["destructible"].toBool());
}
