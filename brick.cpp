#include <iostream>
#include "brick.h"

Brick::Brick(int x, int y)
{
    image.load(":breakout/images/brickie");
    rect = image.rect();
    destroyed = false;
    rect.translate(x, y);
}

Brick::~Brick()
{
  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect()
{
    return rect;
}

QImage& Brick::getImage()
{
    return image;
}

void Brick::setRect(QRect rct)
{
  rect = rct;
}


bool Brick::isDestroyed()
{
  return destroyed;
}

void Brick::setDestroyed(bool destr)
{
  destroyed = destr;
}
