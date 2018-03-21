#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include <QPushButton>

class MyClass : public QMainWindow
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = 0);
    ~MyClass();

private:
    Ui::MyClassClass ui;
    QPushButton *btn[3];
private slots:
void btn_clicked();
void btn_pressed();

void btn_released();

};

#endif // MYCLASS_H
