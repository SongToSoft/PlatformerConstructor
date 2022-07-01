#include <NodeManager.h>
#include <iostream>
#include <Stairway.h>
#include <Player.h>
#include <Wall.h>

NodeManager* NodeManager::instance = nullptr;

NodeManager* NodeManager::getInstance() {
    if (!instance) {
        instance = new NodeManager();
    }
    return instance;
}

void NodeManager::addNode(PCNode* _node) {
    nodes.push_back(_node);
}

void NodeManager::createNode(QWidget* _parent, ENodeType _type) {
    PCNode *node;
    switch(_type) {
    case ENodeType::PLAYER:
        node = new Player(_parent);
        break;
    case ENodeType::WALL:
        node = new Wall(_parent, true);
        break;
    case ENodeType::STAIRWAY:
        node = new Stairway(_parent);
        break;
    }
    nodes.push_back(node);
}

void NodeManager::deleteNode(PCNode* node) {
    std::cout << "NodeManager::deleteNode: " << node->getId() << std::endl;
    nodes.erase(std::remove(nodes.begin(), nodes.end(), node), nodes.end());
    delete node;
}

std::vector<PCNode*> NodeManager::getNodes() {
    return nodes;
}

void NodeManager::update() {
    for (auto const& node : nodes) {
        node->update();
    }
}

void NodeManager::draw() {
    for (auto const& node : nodes) {
        node->draw();
    }
}

void NodeManager::clear() {
    for (auto const& node : instance->getNodes()) {
        delete node;
    }
    delete instance;
}

NodeManager::NodeManager() {
}

NodeManager::~NodeManager() {
}

