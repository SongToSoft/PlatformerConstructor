#include <QApplication>

#include "mainwindow.h"
#include "hierarchywindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow mainWindow;
    mainWindow.show();

    HierarchyWindow hierachyWindow;
    hierachyWindow.show();

    return a.exec();
}
