#include <Stairway.h>
#include <iostream>

Stairway::Stairway(QWidget* _parent) : PCNode(_parent, "../Sprites/stairway.png") {
    id = "stairway";
    climbSpeed = 2.0f;
    transformComponent->setSize({50, 50});
    nodeType = ENodeType::STAIRWAY;
    std::cout << "Stairway" << std::endl;
}

float Stairway::getClimbSpeed() {
    return climbSpeed;
}

void Stairway::setClimbSpeed(float _climbSpeed) {
    climbSpeed = _climbSpeed;
}
