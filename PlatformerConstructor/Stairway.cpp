#include <Stairway.h>
#include <iostream>

Stairway::Stairway(QWidget* _parent) : PCNode(_parent, "../Sprites/stairway.png") {
    id = "stairway";
    climbSpeed = 2.0f;
    nodeType = ENodeType::STAIRWAY;
    std::cout << "Stairway" << std::endl;
}

float Stairway::getClimbSpeed() {
    return climbSpeed;
}

void Stairway::setClimbSpeed(float _climbSpeed) {
    climbSpeed = _climbSpeed;
}

QJsonObject Stairway::serialize() {
    QJsonObject jsonObject = PCNode::serialize();
    jsonObject["climbSpeed"] = climbSpeed;
    return jsonObject;
}

void Stairway::deserialize(QJsonObject jsonObject) {
    PCNode::deserialize(jsonObject);
    climbSpeed = (float)jsonObject["climbSpeed"].toDouble();
}
