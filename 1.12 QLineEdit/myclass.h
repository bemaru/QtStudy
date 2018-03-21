#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include <QLineEdit>
#include <QLabel>

class MyClass : public QMainWindow
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = 0);
    ~MyClass();

private:
    Ui::MyClassClass ui;
    QLineEdit *edit[5];
    QLabel *lbl;

private slots:
//

    void textChanged(QString str);
};

#endif // MYCLASS_H
