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

    void setImage(QPixmap _image);
    void setImage(const std::string& _path);
private:
    QPixmap image;
    QLabel *label;
    QWidget *parent;
};


#endif // SPRITECOMPONENT_H
