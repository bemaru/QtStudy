#include "myclass.h"
#include <QDate>
#include <QDateEdit>
MyClass::MyClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QDate dt1 = QDate::currentDate();
    
    ui.dateEdit->setDate(dt1);

    connect(ui.dateEdit, SIGNAL(dateChanged(QDate)),this,SLOT(CheckDate()));
    
    
}

MyClass::~MyClass()
{

}

void MyClass::CheckDate()
{
    QDate dt = ui.dateEdit->date();
    qDebug("%s is valid? %s", dt.toString(), dt.isValid() ? "true":"false");
}