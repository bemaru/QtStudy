#ifndef QTSTUDY_H
#define QTSTUDY_H

#include <QtWidgets/QMainWindow>
#include "ui_qtstudy.h"

class QtStudy : public QMainWindow
{
    Q_OBJECT

public:
    QtStudy(QWidget *parent = 0);
    ~QtStudy();

private:
    Ui::QtStudyClass ui;
};

#endif // QTSTUDY_H
