#include "SpriteComponent.h"

SpriteComponent::SpriteComponent(QWidget *_parent) {
    parent = _parent;
    label = new QLabel(parent);
    //label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    //label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
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

void SpriteComponent::setImage(QPixmap _image) {
    image = _image;
    label->setPixmap(image);
    label->setScaledContents(true);
}

void SpriteComponent::setImage(const std::string& _path) {
    image = QPixmap(_path.c_str());
    label->setPixmap(image);
    label->setScaledContents(true);
}
