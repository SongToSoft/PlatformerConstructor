#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <NodeManager.h>
#include <Wall.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    Wall* wall = new Wall(this, false);
    wall->getTransformComponent()->setPosition({250, 200});

    NodeManager::getInstance()->addNode(wall);
    NodeManager::getInstance()->createNode(this, ENodeType::WALL);
    NodeManager::getInstance()->createNode(this, ENodeType::PLAYER);
    NodeManager::getInstance()->createNode(this, ENodeType::STAIRWAY);

    NodeManager::getInstance()->draw();
    /*ui->centralwidget->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(ui->centralwidget, SIGNAL(customContextMenuRequested(const QPoint&)),
        this, SLOT(ShowContextMenu(const QPoint&)));*/
}

/*void MainWindow::ShowContextMenu(const QPoint& pos) {
    // for most widgets
    QPoint globalPos = ui->centralwidget->mapToGlobal(pos);
    // for QAbstractScrollArea and derived classes you would use:
    // QPoint globalPos = myWidget->viewport()->mapToGlobal(pos);

    QMenu myMenu;
    myMenu.addAction("Menu Item 1");
    // ...

    QAction* selectedItem = myMenu.exec(globalPos);
    if (selectedItem)
    {
        // something was chosen, do stuff
    }
    else
    {
        // nothing was chosen
    }
}*/

MainWindow::~MainWindow() {
    NodeManager::getInstance()->clear();
    delete ui;
}

