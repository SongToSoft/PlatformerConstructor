#ifndef OBSTACLE_H
#define OBSTACLE_H

#include <PCNode.h>

class Obstacle : public PCNode {
public:
    Obstacle(QWidget *_parent, const std::string& _path = "../Sprites/obstacle.png");

    float getDamage();
    void setDamage(float _damage);

    QJsonObject serialize();
    void deserialize(QJsonObject jsonObject);

private:
    float damage;
};

#endif // OBSTACLE_H
