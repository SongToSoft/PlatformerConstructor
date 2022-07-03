#include <NodeManager.h>
#include <iostream>
#include <Stairway.h>
#include <Player.h>
#include <Wall.h>

#include <QJsonDocument>
#include <QJsonArray>
#include <QFile>
#include <QDir>

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
    default:
        return;
        break;
    }
    nodes.push_back(node);
    draw();
}

void NodeManager::createNode(QJsonObject jsonObject) {
    auto nodeType = (ENodeType)(jsonObject["Type"].toInt());
    PCNode *node;
    switch(nodeType) {
    case ENodeType::PLAYER: {
        node = new Player(parent);
        break;
    }
    case ENodeType::WALL: {
        node = new Wall(parent, true);
        break;
    }
    case ENodeType::STAIRWAY: {
        node = new Stairway(parent);
        break;
    }
    default:
        return;
        break;
    }
    node->deserialize(jsonObject);
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

void NodeManager::serialize() {
    QJsonArray jsonArray;
    for (auto const& node : nodes) {
        jsonArray.push_back(node->serialize());
    }
    QJsonDocument jsonDoc;
    jsonDoc.setArray(jsonArray);

    QFile file("nodes.json");
    file.open(QIODevice::WriteOnly);
    file.write(jsonDoc.toJson());
    file.close();
}

void NodeManager::deserialize() {
    QFile file("nodes.json");
    file.open(QIODevice::ReadOnly);

    QJsonDocument jsonDoc;
    jsonDoc = QJsonDocument::fromJson(file.readAll());
    file.close();

    QJsonArray jsonArray = jsonDoc.array();
    for (auto jsonValue : jsonArray) {
        createNode(jsonValue.toObject());
    }
}

NodeManager::NodeManager() {
}

NodeManager::~NodeManager() {
}

