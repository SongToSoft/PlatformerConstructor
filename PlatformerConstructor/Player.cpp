#include <Player.h>
#include <iostream>

Player::Player(QWidget* _parent, const std::string& _path) : PCNode(_parent, _path) {
    id = "player";
    speed = 1.5f;
    transformComponent->setPosition({200, 300});
    transformComponent->setSize({50, 50});
    std::cout << "Player" << std::endl;
}
