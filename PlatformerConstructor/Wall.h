#ifndef WALL_H
#define WALL_H
#include <PCNode.h>

class Wall : public PCNode {
public:
    Wall(QWidget *_parent, bool _destructible);

    bool isDestructible();
    void setDestructible(bool _destructible);

    QJsonObject serialize();
    void deserialize(QJsonObject jsonObject);
private:
    bool destructible;
};

#endif // WALL_H
