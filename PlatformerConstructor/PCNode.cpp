#include "PCNode.h"

PCNode::PCNode() {
    transformComponent = new TransformComponent();
    spriteComponent = new SpriteComponent();
}

PCNode::~PCNode() {
    delete transformComponent;
    delete spriteComponent;
}

void PCNode::update() {

}

void PCNode::draw() {

}

TransformComponent* PCNode::getTransformComponent() {
    return transformComponent;
}

SpriteComponent* PCNode::getSpriteComponent() {
    return spriteComponent;
}
