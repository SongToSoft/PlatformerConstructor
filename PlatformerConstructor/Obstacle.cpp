#include <Obstacle.h>
#include <iostream>

Obstacle::Obstacle(QWidget* _parent, const std::string& _path) : PCNode(_parent, _path) {
    id = "obstacle";
    damage = 1.f;
    nodeType = ENodeType::OBSTACLE;
    std::cout << "Obstacle" << std::endl;
}

float Obstacle::getDamage() {
    return damage;
}

void Obstacle::setDamage(float _damage) {
    damage = _damage;
}

QJsonObject Obstacle::serialize() {
    QJsonObject jsonObject = PCNode::serialize();
    jsonObject["damage"] = damage;
    return jsonObject;
}

void Obstacle::deserialize(QJsonObject jsonObject) {
    PCNode::deserialize(jsonObject);
    damage = (float)jsonObject["damage"].toDouble();
}
