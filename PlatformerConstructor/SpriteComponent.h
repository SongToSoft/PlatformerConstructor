#ifndef SPRITECOMPONENT_H
#define SPRITECOMPONENT_H

#include "QImage"

class SpriteComponent {
public:
    SpriteComponent();
    ~SpriteComponent();

    QImage getImage();
    void setImage(QImage _image);
private:
    QImage image;
};


#endif // SPRITECOMPONENT_H
