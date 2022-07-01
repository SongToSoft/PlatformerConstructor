/********************************************************************************
** Form generated from reading UI file 'hierarchywindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HIERARCHYWINDOW_H
#define UI_HIERARCHYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HierarchyWindow
{
public:
    QWidget *widget;
    QVBoxLayout *HierarchyLayout;
    QWidget *widget1;
    QFormLayout *formLayout;
    QPushButton *saveButton;
    QPushButton *deleteButton;
    QLabel *NodeNameLabel;
    QLabel *TransformComponent;
    QLabel *positionXLabel;
    QLineEdit *positionXLineEdit;
    QLabel *positionYLabel;
    QLineEdit *positionYLineEdit;
    QLabel *sizeXLabel;
    QLineEdit *sizeXLineEdit;
    QLabel *sizeYLabel;
    QLineEdit *sizeYLineEdit;
    QLabel *scaleXLabel;
    QLineEdit *scaleXLineEdit;
    QLabel *scaleYLabel;
    QLineEdit *scaleYLineEdit;
    QLabel *SpriteComponent;

    void setupUi(QDialog *HierarchyWindow)
    {
        if (HierarchyWindow->objectName().isEmpty())
            HierarchyWindow->setObjectName(QString::fromUtf8("HierarchyWindow"));
        HierarchyWindow->resize(738, 555);
        widget = new QWidget(HierarchyWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(11, 11, 301, 531));
        HierarchyLayout = new QVBoxLayout(widget);
        HierarchyLayout->setObjectName(QString::fromUtf8("HierarchyLayout"));
        HierarchyLayout->setContentsMargins(0, 0, 0, 0);
        widget1 = new QWidget(HierarchyWindow);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(350, 10, 371, 531));
        formLayout = new QFormLayout(widget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        saveButton = new QPushButton(widget1);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        formLayout->setWidget(14, QFormLayout::FieldRole, saveButton);

        deleteButton = new QPushButton(widget1);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        formLayout->setWidget(14, QFormLayout::LabelRole, deleteButton);

        NodeNameLabel = new QLabel(widget1);
        NodeNameLabel->setObjectName(QString::fromUtf8("NodeNameLabel"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, NodeNameLabel);

        TransformComponent = new QLabel(widget1);
        TransformComponent->setObjectName(QString::fromUtf8("TransformComponent"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, TransformComponent);

        positionXLabel = new QLabel(widget1);
        positionXLabel->setObjectName(QString::fromUtf8("positionXLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, positionXLabel);

        positionXLineEdit = new QLineEdit(widget1);
        positionXLineEdit->setObjectName(QString::fromUtf8("positionXLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, positionXLineEdit);

        positionYLabel = new QLabel(widget1);
        positionYLabel->setObjectName(QString::fromUtf8("positionYLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, positionYLabel);

        positionYLineEdit = new QLineEdit(widget1);
        positionYLineEdit->setObjectName(QString::fromUtf8("positionYLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, positionYLineEdit);

        sizeXLabel = new QLabel(widget1);
        sizeXLabel->setObjectName(QString::fromUtf8("sizeXLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, sizeXLabel);

        sizeXLineEdit = new QLineEdit(widget1);
        sizeXLineEdit->setObjectName(QString::fromUtf8("sizeXLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, sizeXLineEdit);

        sizeYLabel = new QLabel(widget1);
        sizeYLabel->setObjectName(QString::fromUtf8("sizeYLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, sizeYLabel);

        sizeYLineEdit = new QLineEdit(widget1);
        sizeYLineEdit->setObjectName(QString::fromUtf8("sizeYLineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, sizeYLineEdit);

        scaleXLabel = new QLabel(widget1);
        scaleXLabel->setObjectName(QString::fromUtf8("scaleXLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, scaleXLabel);

        scaleXLineEdit = new QLineEdit(widget1);
        scaleXLineEdit->setObjectName(QString::fromUtf8("scaleXLineEdit"));

        formLayout->setWidget(6, QFormLayout::FieldRole, scaleXLineEdit);

        scaleYLabel = new QLabel(widget1);
        scaleYLabel->setObjectName(QString::fromUtf8("scaleYLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, scaleYLabel);

        scaleYLineEdit = new QLineEdit(widget1);
        scaleYLineEdit->setObjectName(QString::fromUtf8("scaleYLineEdit"));

        formLayout->setWidget(7, QFormLayout::FieldRole, scaleYLineEdit);

        SpriteComponent = new QLabel(widget1);
        SpriteComponent->setObjectName(QString::fromUtf8("SpriteComponent"));

        formLayout->setWidget(8, QFormLayout::SpanningRole, SpriteComponent);


        retranslateUi(HierarchyWindow);

        QMetaObject::connectSlotsByName(HierarchyWindow);
    } // setupUi

    void retranslateUi(QDialog *HierarchyWindow)
    {
        HierarchyWindow->setWindowTitle(QCoreApplication::translate("HierarchyWindow", "Hierarchy", nullptr));
        saveButton->setText(QCoreApplication::translate("HierarchyWindow", "Save", nullptr));
        deleteButton->setText(QCoreApplication::translate("HierarchyWindow", "Delete", nullptr));
        NodeNameLabel->setText(QCoreApplication::translate("HierarchyWindow", "NodeName", nullptr));
        TransformComponent->setText(QCoreApplication::translate("HierarchyWindow", "TransformComponent", nullptr));
        positionXLabel->setText(QCoreApplication::translate("HierarchyWindow", "PositionX", nullptr));
        positionYLabel->setText(QCoreApplication::translate("HierarchyWindow", "PositionY", nullptr));
        sizeXLabel->setText(QCoreApplication::translate("HierarchyWindow", "SizeX", nullptr));
        sizeYLabel->setText(QCoreApplication::translate("HierarchyWindow", "SizeY", nullptr));
        scaleXLabel->setText(QCoreApplication::translate("HierarchyWindow", "ScaleX", nullptr));
        scaleYLabel->setText(QCoreApplication::translate("HierarchyWindow", "ScaleY", nullptr));
        SpriteComponent->setText(QCoreApplication::translate("HierarchyWindow", "SpriteComponent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HierarchyWindow: public Ui_HierarchyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIERARCHYWINDOW_H
