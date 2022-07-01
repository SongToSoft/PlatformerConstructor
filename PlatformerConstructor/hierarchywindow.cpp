#include "hierarchywindow.h"
#include "ui_hierarchywindow.h"

#include <NodeManager.h>
#include <QPushButton>
#include <iostream>

HierarchyWindow::HierarchyWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HierarchyWindow)
{
    ui->setupUi(this);
    clearNodes();
    addNodes();
}

void HierarchyWindow::addNodes() {
    auto nodes = NodeManager::getInstance()->getNodes();
    for (const auto& node : nodes) {
        std::cout << "Add node to Hierarchy Window: " << node->getId() << std::endl;
        QPushButton *nodeButton = new QPushButton(this);
        nodeButton->setText(node->getId().c_str());
        nodeButton->show();
        ui->HierarchyLayout->addWidget(nodeButton, 0, Qt::AlignLeft | Qt::AlignTop);
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
}

void HierarchyWindow::onNodeButtonClick(PCNode* node) {
    std::cout << "Click on button: " << node->getId() << std::endl;
    ui->NodeNameLabel->setText(node->getId().c_str());

    ui->positionXLineEdit->setText(std::to_string(node->getTransformComponent()->getPosition().x()).c_str());
    ui->positionYLineEdit->setText(std::to_string(node->getTransformComponent()->getPosition().y()).c_str());

    ui->sizeXLineEdit->setText(std::to_string(node->getTransformComponent()->getSize().x()).c_str());
    ui->sizeYLineEdit->setText(std::to_string(node->getTransformComponent()->getSize().y()).c_str());

    ui->scaleXLineEdit->setText(std::to_string(node->getTransformComponent()->getScale().x()).c_str());
    ui->scaleYLineEdit->setText(std::to_string(node->getTransformComponent()->getScale().y()).c_str());

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
    NodeManager::getInstance()->deleteNode(node);

    clearNodes();
    addNodes();
    NodeManager::getInstance()->draw();
}

void HierarchyWindow::saveNode(PCNode* node) {
    std::cout << "Save node: " << node->getId() << std::endl;
    node->getTransformComponent()->setPosition({ ui->positionXLineEdit->text().toFloat(),
                                                 ui->positionYLineEdit->text().toFloat()});

    node->getTransformComponent()->setSize({ ui->sizeXLineEdit->text().toFloat(),
                                             ui->sizeYLineEdit->text().toFloat()});

    node->getTransformComponent()->setScale({ ui->scaleXLineEdit->text().toFloat(),
                                              ui->scaleYLineEdit->text().toFloat()});
    NodeManager::getInstance()->draw();
}

HierarchyWindow::~HierarchyWindow() {
    delete ui;
}
