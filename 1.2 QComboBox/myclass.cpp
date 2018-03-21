#include "myclass.h"
#include <QComboBox>


MyClass::MyClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    c = new QComboBox(this);
    c->setGeometry(50, 50, 200, 30);
    c->addItem(QIcon("resources/1.png"),"A");
    c->addItem(QIcon("resources/2.png"),"B");
    c->addItem(QIcon("resources/3.png"),"C");

    connect(c, SIGNAL(currentIndexChanged(int)), this, SLOT(valueChanged()));


    cmmBtn = new QCommandLinkButton("Vision", "Vision Project", this);
    connect(cmmBtn, SIGNAL(clicked()),this,SLOT(onClick()));
    cmmBtn->setGeometry(50, 100, 200, 30);
}

MyClass::~MyClass()
{

}

void MyClass::onClick()
{
    QString str;
    str = c->currentText();
    
    qDebug("delete %ws", str);

    c->removeItem(c->currentIndex());
    qDebug("Total Items : %d", c->count());
    
}

void MyClass::valueChanged()
{
    int current_index = c->currentIndex();
    qDebug("Current ComboBox Index = %d", current_index);
}