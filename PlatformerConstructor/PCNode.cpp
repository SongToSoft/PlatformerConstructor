#include <PCNode.h>
#include <QRect>
#include <iostream>
#include <QJsonObject>
#include <QFile>

PCNode::PCNode(QWidget* _parent, const std::string& _path) {
    transformComponent = new TransformComponent();
    spriteComponent = new SpriteComponent(_parent);
    if (!_path.empty()) {
        spriteComponent->setImage(_path);
    }
    nodeType = ENodeType::NODE;
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

ENodeType PCNode::getNodeType() {
    return nodeType;
}

TransformComponent* PCNode::getTransformComponent() {
    return transformComponent;
}

SpriteComponent* PCNode::getSpriteComponent() {
    return spriteComponent;
}

void PCNode::serialize() {
    QJsonObject jsonObject;
    jsonObject["TransformComponent"] = transformComponent->serialize();

    //QFile jsonFile("PCNode.json");
    //jsonFile.open(QFile::WriteOnly);
    //jsonFile.write(jsonObject);
}

void PCNode::deserialize() {

}
