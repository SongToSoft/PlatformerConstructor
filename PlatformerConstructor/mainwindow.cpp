#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <NodeManager.h>
#include <Wall.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    NodeManager::getInstance()->setParent(this);
    NodeManager::getInstance()->deserialize();
    NodeManager::getInstance()->draw();
}

MainWindow::~MainWindow() {
    delete ui;
}

