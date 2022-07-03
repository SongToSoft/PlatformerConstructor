#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <NodeManager.h>
#include <Wall.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    NodeManager::getInstance()->setParent(this);

    Wall* wall = new Wall(this, false);
    wall->getTransformComponent()->setPosition({250, 200});
    NodeManager::getInstance()->addNode(wall);
    NodeManager::getInstance()->createNode(ENodeType::WALL);
    NodeManager::getInstance()->createNode(ENodeType::PLAYER);
    NodeManager::getInstance()->createNode(ENodeType::STAIRWAY);
}

MainWindow::~MainWindow() {
    NodeManager::getInstance()->clear();
    delete ui;
}

