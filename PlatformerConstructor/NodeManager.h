#ifndef NODEMANAGER_H
#define NODEMANAGER_H

#include <PCNode.h>

enum ENodeType {
    PLAYER,
    WALL,
    STAIRWAY
};

class NodeManager {
public:
    static NodeManager* getInstance();

    void addNode(PCNode* _node);
    void createNode(QWidget* _parent, ENodeType _type);
    void deleteNode(PCNode* node);
    std::vector<PCNode*> getNodes();

    void update();
    void draw();
    void clear();
private:
    NodeManager();
    ~NodeManager();

    std::vector<PCNode*> nodes;
    static NodeManager* instance;
};

#endif // NODEMANAGER_H
