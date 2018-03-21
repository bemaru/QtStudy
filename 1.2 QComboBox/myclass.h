#ifndef MYCLASS_H
#define MYCLASS_H

#include <QtWidgets/QMainWindow>
#include "ui_myclass.h"
#include <QCommandLinkButton>

class MyClass : public QMainWindow
{
    Q_OBJECT

public:
    MyClass(QWidget *parent = 0);
    ~MyClass();

private:
    Ui::MyClassClass ui;
    QComboBox* c;
    QCommandLinkButton* cmmBtn;

private slots:
    void valueChanged();
    void onClick();
};

#endif // MYCLASS_H
