#include "SpriteComponent.h"

SpriteComponent::SpriteComponent() {
}

SpriteComponent::~SpriteComponent() {

}

QImage SpriteComponent::getImage() {
    return image;
}

void SpriteComponent::setImage(QImage _image) {
    image = _image;
}

