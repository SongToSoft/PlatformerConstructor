#ifndef HIERARCHYWINDOW_H
#define HIERARCHYWINDOW_H

#include <QDialog>
#include <PCNode.h>

namespace Ui {
class HierarchyWindow;
}

class HierarchyWindow : public QDialog
{
    Q_OBJECT

public:
    explicit HierarchyWindow(QWidget *parent = nullptr);
    ~HierarchyWindow();

private:
    void addNodes();
    void clearNodes();
    void onNodeButtonClick(PCNode* node);
    void deleteNode(PCNode* node);
    void saveNode(PCNode* node);
    void createNode(ENodeType nodeType);

    Ui::HierarchyWindow *ui;
};

#endif // HIERARCHYWINDOW_H
