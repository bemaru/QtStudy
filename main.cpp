#include "qtstudy.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtStudy w;
    w.show();
    return a.exec();
}
