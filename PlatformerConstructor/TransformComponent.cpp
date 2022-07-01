#include "TransformComponent.h"

TransformComponent::TransformComponent() {
    position = {0, 0};
    scale = {1, 1};
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
