#ifndef PLAYER_H
#define PLAYER_H

#include <PCNode.h>

class Player : public PCNode {
public:
    Player(QWidget *_parent, const std::string& _path = "../Sprites/player.png");
private:
    float speed;
};

#endif // PLAYER_H
