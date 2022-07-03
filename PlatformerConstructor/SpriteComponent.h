#ifndef SPRITECOMPONENT_H
#define SPRITECOMPONENT_H

#include "QPixmap"
#include "QLabel"

class SpriteComponent {
public:
    SpriteComponent(QWidget *_parent);
    ~SpriteComponent();

    QPixmap getImage();
    QLabel* getLabel();
    std::string getPath();

    void setImage(QPixmap _image);
    void setImage(const std::string& _path);

    void highlight(bool _highlight);
private:
    QPixmap image;
    QLabel *label;
    QWidget *parent;
    std::string path;
};


#endif // SPRITECOMPONENT_H
