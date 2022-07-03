#ifndef PLAYER_H
#define PLAYER_H

#include <PCNode.h>

class Player : public PCNode {
public:
    Player(QWidget *_parent, const std::string& _path = "../Sprites/player.png");

    float getSpeed();
    void setSpeed(float _speed);

    QJsonObject serialize();
    void deserialize(QJsonObject jsonObject);

private:
    float speed;
};

#endif // PLAYER_H
