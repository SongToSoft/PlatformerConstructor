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
    QWidget *layoutWidget;
    QVBoxLayout *HierarchyLayout;
    QWidget *layoutWidget1;
    QFormLayout *InspectorLayout;
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
    QLabel *imagePathLabel;
    QLineEdit *imagePathLineEdit;
    QLabel *ClassParameters;
    QLabel *specialParameterLabel;
    QLineEdit *specialParameterLineEdit;
    QPushButton *deleteButton;
    QPushButton *saveButton;
    QPushButton *createButton;
    QPushButton *saveAllButton;
    QLabel *spriteComponentImage;

    void setupUi(QDialog *HierarchyWindow)
    {
        if (HierarchyWindow->objectName().isEmpty())
            HierarchyWindow->setObjectName(QString::fromUtf8("HierarchyWindow"));
        HierarchyWindow->resize(701, 628);
        layoutWidget = new QWidget(HierarchyWindow);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 141, 531));
        HierarchyLayout = new QVBoxLayout(layoutWidget);
        HierarchyLayout->setSpacing(2);
        HierarchyLayout->setObjectName(QString::fromUtf8("HierarchyLayout"));
        HierarchyLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget1 = new QWidget(HierarchyWindow);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(200, 80, 441, 501));
        InspectorLayout = new QFormLayout(layoutWidget1);
        InspectorLayout->setObjectName(QString::fromUtf8("InspectorLayout"));
        InspectorLayout->setContentsMargins(0, 0, 0, 0);
        NodeNameLabel = new QLabel(layoutWidget1);
        NodeNameLabel->setObjectName(QString::fromUtf8("NodeNameLabel"));

        InspectorLayout->setWidget(0, QFormLayout::SpanningRole, NodeNameLabel);

        TransformComponent = new QLabel(layoutWidget1);
        TransformComponent->setObjectName(QString::fromUtf8("TransformComponent"));

        InspectorLayout->setWidget(1, QFormLayout::SpanningRole, TransformComponent);

        positionXLabel = new QLabel(layoutWidget1);
        positionXLabel->setObjectName(QString::fromUtf8("positionXLabel"));

        InspectorLayout->setWidget(2, QFormLayout::LabelRole, positionXLabel);

        positionXLineEdit = new QLineEdit(layoutWidget1);
        positionXLineEdit->setObjectName(QString::fromUtf8("positionXLineEdit"));

        InspectorLayout->setWidget(2, QFormLayout::FieldRole, positionXLineEdit);

        positionYLabel = new QLabel(layoutWidget1);
        positionYLabel->setObjectName(QString::fromUtf8("positionYLabel"));

        InspectorLayout->setWidget(3, QFormLayout::LabelRole, positionYLabel);

        positionYLineEdit = new QLineEdit(layoutWidget1);
        positionYLineEdit->setObjectName(QString::fromUtf8("positionYLineEdit"));

        InspectorLayout->setWidget(3, QFormLayout::FieldRole, positionYLineEdit);

        sizeXLabel = new QLabel(layoutWidget1);
        sizeXLabel->setObjectName(QString::fromUtf8("sizeXLabel"));

        InspectorLayout->setWidget(4, QFormLayout::LabelRole, sizeXLabel);

        sizeXLineEdit = new QLineEdit(layoutWidget1);
        sizeXLineEdit->setObjectName(QString::fromUtf8("sizeXLineEdit"));

        InspectorLayout->setWidget(4, QFormLayout::FieldRole, sizeXLineEdit);

        sizeYLabel = new QLabel(layoutWidget1);
        sizeYLabel->setObjectName(QString::fromUtf8("sizeYLabel"));

        InspectorLayout->setWidget(5, QFormLayout::LabelRole, sizeYLabel);

        sizeYLineEdit = new QLineEdit(layoutWidget1);
        sizeYLineEdit->setObjectName(QString::fromUtf8("sizeYLineEdit"));

        InspectorLayout->setWidget(5, QFormLayout::FieldRole, sizeYLineEdit);

        scaleXLabel = new QLabel(layoutWidget1);
        scaleXLabel->setObjectName(QString::fromUtf8("scaleXLabel"));

        InspectorLayout->setWidget(6, QFormLayout::LabelRole, scaleXLabel);

        scaleXLineEdit = new QLineEdit(layoutWidget1);
        scaleXLineEdit->setObjectName(QString::fromUtf8("scaleXLineEdit"));

        InspectorLayout->setWidget(6, QFormLayout::FieldRole, scaleXLineEdit);

        scaleYLabel = new QLabel(layoutWidget1);
        scaleYLabel->setObjectName(QString::fromUtf8("scaleYLabel"));

        InspectorLayout->setWidget(7, QFormLayout::LabelRole, scaleYLabel);

        scaleYLineEdit = new QLineEdit(layoutWidget1);
        scaleYLineEdit->setObjectName(QString::fromUtf8("scaleYLineEdit"));

        InspectorLayout->setWidget(7, QFormLayout::FieldRole, scaleYLineEdit);

        SpriteComponent = new QLabel(layoutWidget1);
        SpriteComponent->setObjectName(QString::fromUtf8("SpriteComponent"));

        InspectorLayout->setWidget(8, QFormLayout::SpanningRole, SpriteComponent);

        imagePathLabel = new QLabel(layoutWidget1);
        imagePathLabel->setObjectName(QString::fromUtf8("imagePathLabel"));

        InspectorLayout->setWidget(9, QFormLayout::LabelRole, imagePathLabel);

        imagePathLineEdit = new QLineEdit(layoutWidget1);
        imagePathLineEdit->setObjectName(QString::fromUtf8("imagePathLineEdit"));

        InspectorLayout->setWidget(9, QFormLayout::FieldRole, imagePathLineEdit);

        ClassParameters = new QLabel(layoutWidget1);
        ClassParameters->setObjectName(QString::fromUtf8("ClassParameters"));

        InspectorLayout->setWidget(10, QFormLayout::SpanningRole, ClassParameters);

        specialParameterLabel = new QLabel(layoutWidget1);
        specialParameterLabel->setObjectName(QString::fromUtf8("specialParameterLabel"));

        InspectorLayout->setWidget(11, QFormLayout::LabelRole, specialParameterLabel);

        specialParameterLineEdit = new QLineEdit(layoutWidget1);
        specialParameterLineEdit->setObjectName(QString::fromUtf8("specialParameterLineEdit"));

        InspectorLayout->setWidget(11, QFormLayout::FieldRole, specialParameterLineEdit);

        deleteButton = new QPushButton(layoutWidget1);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        InspectorLayout->setWidget(16, QFormLayout::LabelRole, deleteButton);

        saveButton = new QPushButton(layoutWidget1);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        InspectorLayout->setWidget(16, QFormLayout::FieldRole, saveButton);

        createButton = new QPushButton(HierarchyWindow);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setGeometry(QRect(40, 10, 141, 29));
        saveAllButton = new QPushButton(HierarchyWindow);
        saveAllButton->setObjectName(QString::fromUtf8("saveAllButton"));
        saveAllButton->setGeometry(QRect(200, 10, 141, 29));
        spriteComponentImage = new QLabel(HierarchyWindow);
        spriteComponentImage->setObjectName(QString::fromUtf8("spriteComponentImage"));
        spriteComponentImage->setEnabled(true);
        spriteComponentImage->setGeometry(QRect(550, 30, 75, 75));
        spriteComponentImage->setBaseSize(QSize(75, 75));
        spriteComponentImage->setCursor(QCursor(Qt::ArrowCursor));
        spriteComponentImage->setMouseTracking(false);
        spriteComponentImage->setFrameShape(QFrame::Box);
        spriteComponentImage->setFrameShadow(QFrame::Sunken);
        spriteComponentImage->setMidLineWidth(1);

        retranslateUi(HierarchyWindow);

        QMetaObject::connectSlotsByName(HierarchyWindow);
    } // setupUi

    void retranslateUi(QDialog *HierarchyWindow)
    {
        HierarchyWindow->setWindowTitle(QCoreApplication::translate("HierarchyWindow", "Hierarchy", nullptr));
        NodeNameLabel->setText(QCoreApplication::translate("HierarchyWindow", "NodeName", nullptr));
        TransformComponent->setText(QCoreApplication::translate("HierarchyWindow", "TransformComponent", nullptr));
        positionXLabel->setText(QCoreApplication::translate("HierarchyWindow", "PositionX", nullptr));
        positionYLabel->setText(QCoreApplication::translate("HierarchyWindow", "PositionY", nullptr));
        sizeXLabel->setText(QCoreApplication::translate("HierarchyWindow", "SizeX", nullptr));
        sizeYLabel->setText(QCoreApplication::translate("HierarchyWindow", "SizeY", nullptr));
        scaleXLabel->setText(QCoreApplication::translate("HierarchyWindow", "ScaleX", nullptr));
        scaleYLabel->setText(QCoreApplication::translate("HierarchyWindow", "ScaleY", nullptr));
        SpriteComponent->setText(QCoreApplication::translate("HierarchyWindow", "SpriteComponent", nullptr));
        imagePathLabel->setText(QCoreApplication::translate("HierarchyWindow", "ImagePath", nullptr));
        ClassParameters->setText(QCoreApplication::translate("HierarchyWindow", "ClassParameters", nullptr));
        specialParameterLabel->setText(QCoreApplication::translate("HierarchyWindow", "SpecialParameter", nullptr));
        deleteButton->setText(QCoreApplication::translate("HierarchyWindow", "Delete", nullptr));
        saveButton->setText(QCoreApplication::translate("HierarchyWindow", "Save", nullptr));
        createButton->setText(QCoreApplication::translate("HierarchyWindow", "Create", nullptr));
        saveAllButton->setText(QCoreApplication::translate("HierarchyWindow", "Save all", nullptr));
        spriteComponentImage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HierarchyWindow: public Ui_HierarchyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HIERARCHYWINDOW_H
