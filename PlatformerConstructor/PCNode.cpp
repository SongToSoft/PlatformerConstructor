#include <PCNode.h>
#include <QRect>
#include <iostream>

PCNode::PCNode(QWidget* _parent, const std::string& _path) {
    transformComponent = new TransformComponent();
    spriteComponent = new SpriteComponent(_parent);
    if (!_path.empty()) {
        spriteComponent->setImage(_path);
    }
}

PCNode::~PCNode() {
    delete transformComponent;
    delete spriteComponent;
    std::cout << "~PCNode: " << id << std::endl;
}

void PCNode::update() {
}

void PCNode::draw() {
    getSpriteComponent()->getLabel()->setGeometry(
                QRect(transformComponent->getPosition().x(),
                      transformComponent->getPosition().y(),
                      transformComponent->getSize().x() * transformComponent->getScale().x(),
                      transformComponent->getSize().y() * transformComponent->getScale().y())
                );
}

std::string PCNode::getId() {
    return id;
}

TransformComponent* PCNode::getTransformComponent() {
    return transformComponent;
}

SpriteComponent* PCNode::getSpriteComponent() {
    return spriteComponent;
}
