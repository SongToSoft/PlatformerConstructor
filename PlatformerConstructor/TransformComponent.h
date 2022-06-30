#ifndef TRANSFORMCOMPONENT_H
#define TRANSFORMCOMPONENT_H

#include "QVector2D"

class TransformComponent {
public:
    TransformComponent();
    ~TransformComponent();

    QVector2D getPosition();
    QVector2D getScale();

    void setPosition(QVector2D _position);
    void setScale(QVector2D _scale);
private:
    QVector2D position;
    QVector2D scale;
};

#endif // TRANSFORMCOMPONENT_H
