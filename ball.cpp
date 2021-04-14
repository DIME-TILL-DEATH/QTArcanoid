#include <iostream>
#include "ball.h"

Ball::Ball()
{
    image.load(":brickout/images/ball");
    rect = image.rect();

    resetState();
}

Ball::~Ball()
{
  std::cout << ("Ball deleted") << std::endl;
}

void Ball::autoMove()
{
    rect.translate(xdir, ydir);

    rect.translate(xdir, ydir);

    if (rect.left() == 0)
      xdir = 1;


    if (rect.right() == RIGHT_EDGE)
      xdir = -1;


    if (rect.top() == 0)
      ydir = 1;

}

QRect Ball::getRect()
{
    return rect;
}

QImage& Ball::getImage()
{
    return image;
}

void Ball::resetState()
{
    xdir=1;
    ydir=-1;
    rect.moveTo(INITIAL_X, INITIAL_Y);
}

void Ball::setXDir(int s_xdir)
{
    xdir = s_xdir;
}

void Ball::setYDir(int s_ydir)
{
    ydir = s_ydir;
}

int Ball::getXDir()
{
    return xdir;
}

int Ball::getYDir()
{
    return ydir;
}
