#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include <QLabel>

class MyClass : public QMainWindow
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = 0);
    ~MyClass();

private:
    Ui::MyClassClass ui;
    
    QLabel *lbl;
private slots:
    void changedIndex(int idx);
    void changedFont(const QFont &f);
};

#endif // MYCLASS_H
