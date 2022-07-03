#ifndef PCNODE_H
#define PCNODE_H

#include "TransformComponent.h"
#include "SpriteComponent.h"

enum ENodeType {
    NODE,
    PLAYER,
    WALL,
    STAIRWAY
};

class PCNode {
public:
    PCNode(QWidget *_parent, const std::string& _path = "");
    virtual ~PCNode();

    virtual void update();
    void draw();

    std::string getId();
    ENodeType getNodeType();
    TransformComponent* getTransformComponent();
    SpriteComponent* getSpriteComponent();

    void serialize();
    void deserialize();
protected:
    std::string id;
    ENodeType nodeType;
    TransformComponent *transformComponent;
    SpriteComponent *spriteComponent;
};

#endif // PCNODE_H
