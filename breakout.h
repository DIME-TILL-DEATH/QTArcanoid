#ifndef BREAKOUT_H
#define BREAKOUT_H

#include <QWidget>

class Breakout : public QWidget
{
    Q_OBJECT

public:
    Breakout(QWidget *parent = nullptr);
    ~Breakout();
};
#endif // BREAKOUT_H
