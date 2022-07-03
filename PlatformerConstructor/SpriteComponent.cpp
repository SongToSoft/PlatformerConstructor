#include "SpriteComponent.h"

SpriteComponent::SpriteComponent(QWidget *_parent) {
    parent = _parent;
    path = "";
    label = new QLabel(parent);
    label->show();
}

SpriteComponent::~SpriteComponent() {
    delete label;
}

QPixmap SpriteComponent::getImage() {
    return image;
}

QLabel* SpriteComponent::getLabel() {
    return label;
}

std::string SpriteComponent::getPath() {
    return path;
}

void SpriteComponent::setImage(QPixmap _image) {
    image = _image;
    label->setPixmap(image);
    label->setScaledContents(true);
}

void SpriteComponent::setImage(const std::string& _path) {
    path = _path;
    image = QPixmap(path.c_str());
    label->setPixmap(image);
    label->setScaledContents(true);
}

void SpriteComponent::highlight(bool _highlight) {
    if (_highlight) {
        label->setStyleSheet("border-style: solid; border-color: rgb(200,200,0); border-width: 2px; border-radius: 20px;");
    } else {
        label->setStyleSheet("");
    }
}
