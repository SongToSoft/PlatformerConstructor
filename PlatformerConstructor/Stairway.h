#ifndef STAIRWAY_H
#define STAIRWAY_H

#include <PCNode.h>

class Stairway : public PCNode {
public:
    Stairway(QWidget *_parent);

    float getClimbSpeed();
    void setClimbSpeed(float _climbSpeed);

    QJsonObject serialize();
    void deserialize(QJsonObject jsonObject);
private:
    float climbSpeed;
};
#endif // STAIRWAY_H
