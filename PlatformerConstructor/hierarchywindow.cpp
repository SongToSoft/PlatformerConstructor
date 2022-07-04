#include "hierarchywindow.h"
#include "ui_hierarchywindow.h"

#include <QPushButton>
#include <QMenu>

#include <NodeManager.h>
#include <iostream>
#include <Player.h>
#include <Wall.h>
#include <Stairway.h>
#include <Obstacle.h>

HierarchyWindow::HierarchyWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HierarchyWindow)
{
    ui->setupUi(this);
    ui->HierarchyLayout->setAlignment(Qt::AlignTop);
    clearNodes();
    addNodes();

    QMenu *menu = new QMenu(this);
    menu->addAction("Add Player", [this]() {
        std::cout << "Add Player" << std::endl;
        createNode(ENodeType::PLAYER);
    });
    menu->addAction("Add Wall", [this]() {
        std::cout << "Add Wall" << std::endl;
        createNode(ENodeType::WALL);
    });
    menu->addAction("Add Stairway", [this]() {
        std::cout << "Add Stairway" << std::endl;
        createNode(ENodeType::STAIRWAY);
    });
    menu->addAction("Add Obstacle", [this]() {
        std::cout << "Add Obstacle" << std::endl;
        createNode(ENodeType::OBSTACLE);
    });

    ui->createButton->setMenu(menu);
    connect(ui->saveAllButton, &QPushButton::clicked, []() {
        std::cout << "Serialize nodes" << std::endl;
        NodeManager::getInstance()->serialize();
    });

    ui->spriteComponentImage->setScaledContents(true);
}

void HierarchyWindow::addNodes() {
    auto nodes = NodeManager::getInstance()->getNodes();
    for (const auto& node : nodes) {
        std::cout << "Add node to Hierarchy Window: " << node->getId() << std::endl;
        QPushButton *nodeButton = new QPushButton(this);
        nodeButton->setText(node->getId().c_str());
        nodeButton->show();
        ui->HierarchyLayout->addWidget(nodeButton, 0, Qt::AlignTop);
        connect(nodeButton, &QPushButton::clicked, [&, node]() {
            onNodeButtonClick(node);
        });
    }
}

void HierarchyWindow::clearNodes() {
    while (auto item = ui->HierarchyLayout->takeAt(0)) {
        delete item->widget();
    }
    ui->NodeNameLabel->setText("");
    ui->positionXLineEdit->setText(0);
    ui->positionYLineEdit->setText(0);

    ui->sizeXLineEdit->setText(0);
    ui->sizeYLineEdit->setText(0);

    ui->scaleXLineEdit->setText(0);
    ui->scaleYLineEdit->setText(0);

    ui->imagePathLineEdit->setText(0);
    ui->spriteComponentImage->clear();

    ui->specialParameterLabel->setText("SpecialParameter");
    ui->specialParameterLineEdit->setText(0);
    disconnect(ui->deleteButton, 0, 0, 0);
}

void HierarchyWindow::onNodeButtonClick(PCNode* node) {
    std::cout << "Click on button: " << node->getId() << std::endl;
    if (!node) {
        return;
    }
    auto nodes = NodeManager::getInstance()->getNodes();
    for (const auto& item : nodes) {
        item->getSpriteComponent()->highlight(false);
    }
    node->getSpriteComponent()->highlight(true);

    ui->NodeNameLabel->setText(node->getId().c_str());

    ui->positionXLineEdit->setText(std::to_string(node->getTransformComponent()->getPosition().x()).c_str());
    ui->positionYLineEdit->setText(std::to_string(node->getTransformComponent()->getPosition().y()).c_str());

    ui->sizeXLineEdit->setText(std::to_string(node->getTransformComponent()->getSize().x()).c_str());
    ui->sizeYLineEdit->setText(std::to_string(node->getTransformComponent()->getSize().y()).c_str());

    ui->scaleXLineEdit->setText(std::to_string(node->getTransformComponent()->getScale().x()).c_str());
    ui->scaleYLineEdit->setText(std::to_string(node->getTransformComponent()->getScale().y()).c_str());

    ui->imagePathLineEdit->setText(node->getSpriteComponent()->getPath().c_str());
    auto image = QPixmap(node->getSpriteComponent()->getPath().c_str());
    ui->spriteComponentImage->setPixmap(image);

    switch (node->getNodeType()) {
    case ENodeType::PLAYER: {
        if (auto player = (dynamic_cast<Player*>(node))) {
            ui->specialParameterLabel->setText("Player Speed");
            ui->specialParameterLineEdit->setText(std::to_string(player->getSpeed()).c_str());
        }
        break;
    }
    case ENodeType::WALL: {
        if (auto wall = (dynamic_cast<Wall*>(node))) {
            ui->specialParameterLabel->setText("Is Destructible");
            ui->specialParameterLineEdit->setText(std::to_string(wall->isDestructible()).c_str());
        }
        break;
    }
    case ENodeType::STAIRWAY: {
        if (auto stairway = (dynamic_cast<Stairway*>(node))) {
            ui->specialParameterLabel->setText("Climb Speed");
            ui->specialParameterLineEdit->setText(std::to_string(stairway->getClimbSpeed()).c_str());
        }
        break;
    }
    case ENodeType::OBSTACLE: {
        if (auto obstacle = (dynamic_cast<Obstacle*>(node))) {
            ui->specialParameterLabel->setText("Damage");
            ui->specialParameterLineEdit->setText(std::to_string(obstacle->getDamage()).c_str());
        }
        break;
    }
    default:
        break;
    }

    disconnect(ui->deleteButton, 0, 0, 0);
    connect(ui->deleteButton, &QPushButton::clicked, [this, node]() {
        deleteNode(node);
    });

    disconnect(ui->saveButton, 0, 0, 0);
    connect(ui->saveButton, &QPushButton::clicked, [this, node]() {
        saveNode(node);
    });
}

void HierarchyWindow::deleteNode(PCNode* node) {
    std::cout << "Delete node: " << node->getId() << std::endl;
    if (!node) {
        return;
    }
    NodeManager::getInstance()->deleteNode(node);

    clearNodes();
    addNodes();
    NodeManager::getInstance()->draw();
}

void HierarchyWindow::saveNode(PCNode* node) {
    std::cout << "Save node: " << node->getId() << std::endl;
    if (!node) {
        return;
    }
    node->getTransformComponent()->setPosition({ ui->positionXLineEdit->text().toFloat(),
                                                 ui->positionYLineEdit->text().toFloat()});

    node->getTransformComponent()->setSize({ ui->sizeXLineEdit->text().toFloat(),
                                             ui->sizeYLineEdit->text().toFloat()});

    node->getTransformComponent()->setScale({ ui->scaleXLineEdit->text().toFloat(),
                                              ui->scaleYLineEdit->text().toFloat()});

    node->getSpriteComponent()->setImage(ui->imagePathLineEdit->text().toStdString());

    switch (node->getNodeType()) {
    case ENodeType::PLAYER: {
        if (auto player = (dynamic_cast<Player*>(node))) {
            player->setSpeed(ui->specialParameterLineEdit->text().toFloat());
        }
        break;
    }
    case ENodeType::WALL: {
        if (auto wall = (dynamic_cast<Wall*>(node))) {
            wall->setDestructible(ui->specialParameterLineEdit->text().toFloat() != 0.f);
        }
        break;
    }
    case ENodeType::STAIRWAY: {
        if (auto stairway = (dynamic_cast<Stairway*>(node))) {
            stairway->setClimbSpeed(ui->specialParameterLineEdit->text().toFloat());
        }
        break;
    }
    case ENodeType::OBSTACLE: {
        if (auto obstacle = (dynamic_cast<Obstacle*>(node))) {
            obstacle->setDamage(ui->specialParameterLineEdit->text().toFloat());
        }
        break;
    }
    default:
        break;
    }

    NodeManager::getInstance()->draw();

    auto image = QPixmap(node->getSpriteComponent()->getPath().c_str());
    ui->spriteComponentImage->setPixmap(image);
}

void HierarchyWindow::createNode(ENodeType nodeType) {
    NodeManager::getInstance()->createNode(nodeType);
    clearNodes();
    addNodes();
}

HierarchyWindow::~HierarchyWindow() {
    delete ui;
}
