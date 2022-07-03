#include <Player.h>
#include <iostream>

Player::Player(QWidget* _parent, const std::string& _path) : PCNode(_parent, _path) {
    id = "player";
    speed = 1.5f;
    transformComponent->setSize({50, 50});
    nodeType = ENodeType::PLAYER;
    std::cout << "Player" << std::endl;
}

float Player::getSpeed() {
    return speed;
}

void Player::setSpeed(float _speed) {
    speed = _speed;
}
