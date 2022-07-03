#include <NodeManager.h>
#include <iostream>
#include <Stairway.h>
#include <Player.h>
#include <Wall.h>

NodeManager* NodeManager::instance = nullptr;
QWidget* NodeManager::parent = nullptr;

NodeManager* NodeManager::getInstance() {
    if (!instance) {
        instance = new NodeManager();
    }
    return instance;
}

void NodeManager::setParent(QWidget* _parent) {
    parent = _parent;
}

void NodeManager::addNode(PCNode* _node) {
    nodes.push_back(_node);
    draw();
}

void NodeManager::createNode(ENodeType _type) {
    PCNode *node;
    switch(_type) {
    case ENodeType::PLAYER:
        node = new Player(parent);
        break;
    case ENodeType::WALL:
        node = new Wall(parent, true);
        break;
    case ENodeType::STAIRWAY:
        node = new Stairway(parent);
        break;
    }
    nodes.push_back(node);
    draw();
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

