#ifndef TRANSFORMCOMPONENT_H
#define TRANSFORMCOMPONENT_H

#include "QVector2D"
#include <QJsonObject>

class TransformComponent {
public:
    TransformComponent();
    ~TransformComponent();

    QVector2D getPosition();
    QVector2D getScale();
    QVector2D getSize();

    void setPosition(QVector2D _position);
    void setScale(QVector2D _scale);
    void setSize(QVector2D _size);

    QJsonObject serialize();
    void deserialize(QJsonObject jsonObject);
private:
    QVector2D position;
    QVector2D size;
    QVector2D scale;
};

#endif // TRANSFORMCOMPONENT_H
