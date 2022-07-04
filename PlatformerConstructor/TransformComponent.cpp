#include <TransformComponent.h>

#define DEFAULT_POSITIOn {0, 0}
#define DEFAULT_SCALE {1, 1}
#define DEFAULT_SIZE {50, 50}

TransformComponent::TransformComponent() {
    position = DEFAULT_POSITIOn;
    scale = DEFAULT_SCALE;
    size = DEFAULT_SIZE;
}

TransformComponent::~TransformComponent() {

}

QVector2D TransformComponent::getPosition() {
    return position;
}

QVector2D TransformComponent::getScale() {
    return scale;
}

QVector2D TransformComponent::getSize() {
    return size;
}

void TransformComponent::setPosition(QVector2D _position) {
    position = _position;
}

void TransformComponent::setScale(QVector2D _scale) {
    scale = _scale;
}

void TransformComponent::setSize(QVector2D _size) {
    size = _size;
}

QJsonObject TransformComponent::serialize() {
    QJsonObject jsonObject;
    jsonObject["positionX"] = position.x();
    jsonObject["positionY"] = position.y();

    jsonObject["sizeX"] = size.x();
    jsonObject["sizeY"] = size.y();

    jsonObject["scaleX"] = scale.x();
    jsonObject["scaleY"] = scale.y();
    return jsonObject;
}

void TransformComponent::deserialize(QJsonObject jsonObject) {
     position = {(float)jsonObject["positionX"].toDouble(), (float)jsonObject["positionY"].toDouble()};
     size = {(float)jsonObject["sizeX"].toDouble(), (float)jsonObject["sizeY"].toDouble()};
     scale = {(float)jsonObject["scaleX"].toDouble(), (float)jsonObject["scaleY"].toDouble()};
}
