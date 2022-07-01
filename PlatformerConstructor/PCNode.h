#ifndef PCNODE_H
#define PCNODE_H

#include "TransformComponent.h"
#include "SpriteComponent.h"

class PCNode {
public:
     PCNode(QWidget *_parent, const std::string& _path = "");
    virtual ~PCNode();

    virtual void update();
    void draw();

    std::string getId();
    TransformComponent* getTransformComponent();
    SpriteComponent* getSpriteComponent();
protected:
    TransformComponent *transformComponent;
    SpriteComponent *spriteComponent;
    std::string id;
};

#endif // PCNODE_H
