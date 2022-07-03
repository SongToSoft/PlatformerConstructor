#ifndef NODEMANAGER_H
#define NODEMANAGER_H

#include <PCNode.h>

class NodeManager {
public:
    static NodeManager* getInstance();
    static void setParent(QWidget* _parent);

    void addNode(PCNode* _node);
    void createNode(ENodeType _type);
    void createNode(QJsonObject jsonObject);
    void deleteNode(PCNode* node);
    std::vector<PCNode*> getNodes();

    void update();
    void draw();
    void clear();

    void serialize();
    void deserialize();
private:
    NodeManager();
    ~NodeManager();

    std::vector<PCNode*> nodes;
    static QWidget *parent;
    static NodeManager* instance;
};

#endif // NODEMANAGER_H
