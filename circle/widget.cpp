#include "widget.h"
#include "QPainter"
#include "qopengl.h"
Widget::Widget(QWidget *parent)
     : QWidget(parent)
{
    resize(400,500);
}
/* Painter event to paint circle in blue colour */
void Widget::paintEvent(QPaintEvent *event)
{

      QPainter painter(this);

      /**
      First Circle:
      width&height:150px
      Beginning(x/y):50px/30px
      Each step for Angle parameter is 1/16th of a Degree
      so multiply Angle Value with 16
      */
      painter.drawArc(50,30,150,150,0,16*360);
      painter.drawArc(198,80,100,100,0,16*360);
      painter.drawArc(294,130,50,50,0,16*360);
    };

Widget::~Widget()
{
}
