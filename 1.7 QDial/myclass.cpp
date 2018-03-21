#include "myclass.h"

MyClass::MyClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    int xpos = 30;
    for (int i = 0; i < 3; i++,xpos+=100) {
        dial[i] = new QDial(this);
        dial[i]->setRange(0, 100);
        dial[i]->setGeometry(xpos, 30, 100, 100);
    }
    dial[0]->setNotchesVisible(true);

    connect(dial[0], SIGNAL(valueChanged(int)), this, SLOT(changedData()));
    //TODO 특정범위에 들어가면 자동으로 값맞춰지는것
    //10,20,30 의 10의 배수만 자동으로 세팅되도록
}

MyClass::~MyClass()
{

}

void MyClass::changedData()
{
    qDebug("QDial 1 value = %d", dial[0]->value());
}
