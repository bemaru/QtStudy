#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include <QCheckBox>

class MyClass : public QMainWindow
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = 0);
    ~MyClass();

private:
    Ui::MyClassClass ui;
    QCheckBox* exclusive[3];
    QCheckBox* non_exclusive[3];
    QButtonGroup* chk_group[2];


private slots:
    void chkChanged();
    
};

#endif // MYCLASS_H
