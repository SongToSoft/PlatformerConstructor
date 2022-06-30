/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget;
    QVBoxLayout *HierarchyLayout;
    QLabel *HierarchyLabel;
    QWidget *horizontalLayoutWidget_2;
    QVBoxLayout *GameLayout;
    QLabel *GameLabel;
    QWidget *horizontalLayoutWidget_3;
    QVBoxLayout *InspectorLayout;
    QLabel *InspectorLabel;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(812, 616);
        MainWindow->setMouseTracking(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(false);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 0, 231, 591));
        HierarchyLayout = new QVBoxLayout(horizontalLayoutWidget);
        HierarchyLayout->setSpacing(0);
        HierarchyLayout->setObjectName(QString::fromUtf8("HierarchyLayout"));
        HierarchyLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        HierarchyLayout->setContentsMargins(0, 0, 0, 0);
        HierarchyLabel = new QLabel(horizontalLayoutWidget);
        HierarchyLabel->setObjectName(QString::fromUtf8("HierarchyLabel"));
        HierarchyLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        HierarchyLayout->addWidget(HierarchyLabel);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(230, 0, 351, 591));
        GameLayout = new QVBoxLayout(horizontalLayoutWidget_2);
        GameLayout->setSpacing(0);
        GameLayout->setObjectName(QString::fromUtf8("GameLayout"));
        GameLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        GameLayout->setContentsMargins(0, 0, 0, 0);
        GameLabel = new QLabel(horizontalLayoutWidget_2);
        GameLabel->setObjectName(QString::fromUtf8("GameLabel"));
        GameLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        GameLayout->addWidget(GameLabel);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(580, 0, 231, 591));
        InspectorLayout = new QVBoxLayout(horizontalLayoutWidget_3);
        InspectorLayout->setSpacing(0);
        InspectorLayout->setObjectName(QString::fromUtf8("InspectorLayout"));
        InspectorLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        InspectorLayout->setContentsMargins(0, 0, 0, 0);
        InspectorLabel = new QLabel(horizontalLayoutWidget_3);
        InspectorLabel->setObjectName(QString::fromUtf8("InspectorLabel"));
        InspectorLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        InspectorLayout->addWidget(InspectorLabel);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 812, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        HierarchyLabel->setText(QCoreApplication::translate("MainWindow", "Hierarchy", nullptr));
        GameLabel->setText(QCoreApplication::translate("MainWindow", "Game", nullptr));
        InspectorLabel->setText(QCoreApplication::translate("MainWindow", "Inspector", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
