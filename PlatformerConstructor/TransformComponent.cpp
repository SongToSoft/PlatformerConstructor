#include "TransformComponent.h"

TransformComponent::TransformComponent() {
    position = {0, 0};
    scale = {0, 0};
}

TransformComponent::~TransformComponent() {

}

QVector2D TransformComponent::getPosition() {
    return position;
}

QVector2D TransformComponent::getScale() {
    return scale;
}

void TransformComponent::setPosition(QVector2D _position) {
    position = _position;
}

void TransformComponent::setScale(QVector2D _scale) {
    scale = _scale;
}
