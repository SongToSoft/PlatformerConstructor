#ifndef PCNODE_H
#define PCNODE_H

#include "TransformComponent.h"
#include "SpriteComponent.h"

class PCNode {
public:
    PCNode();
    ~PCNode();

    void update();
    void draw();

    TransformComponent* getTransformComponent();
    SpriteComponent* getSpriteComponent();
private:
    TransformComponent* transformComponent;
    SpriteComponent* spriteComponent;
};

#endif // PCNODE_H
