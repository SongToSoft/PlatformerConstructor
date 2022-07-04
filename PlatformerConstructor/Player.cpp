#include <Player.h>
#include <iostream>

Player::Player(QWidget* _parent, const std::string& _path) : PCNode(_parent, _path) {
    id = "player";
    speed = 1.5f;
    nodeType = ENodeType::PLAYER;
    std::cout << "Player" << std::endl;
}

float Player::getSpeed() {
    return speed;
}

void Player::setSpeed(float _speed) {
    speed = _speed;
}

QJsonObject Player::serialize() {
    QJsonObject jsonObject = PCNode::serialize();
    jsonObject["speed"] = speed;
    return jsonObject;
}

void Player::deserialize(QJsonObject jsonObject) {
    PCNode::deserialize(jsonObject);
    speed = (float)jsonObject["speed"].toDouble();
}
