#include "myclass.h"

//#include <QButtonGroup>


MyClass::MyClass(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QString str1[3] = { "Youtube", "Facebook", "Instagram" };
    QString str2[3] = { "S&kype","T&witter","W&hatsapp" };

    int xpos = 30;
    int ypos = 30;
    
    chk_group[0] = new QButtonGroup(this);
    chk_group[1] = new QButtonGroup(this);

    for (int i = 0; i < 3; i++) 
    {
        exclusive[i] = new QCheckBox(str1[i], this);
        exclusive[i]->setGeometry(xpos, ypos, 100, 30);
        chk_group[0]->addButton(exclusive[i]);
        QObject::connect(exclusive[i], SIGNAL(clicked()), this, SLOT(chkChanged()));

        non_exclusive[i] = new QCheckBox(str2[i], this);
        non_exclusive[i]->setGeometry(xpos + 120, ypos, 100, 30);
        chk_group[1]->addButton(non_exclusive[i]);

        ypos += 40;
    }

    chk_group[0]->setExclusive(false);
    chk_group[1]->setExclusive(true);

    exclusive[0]->setIcon(QIcon("resources/1.png"));
    exclusive[1]->setIcon(QIcon("resources/2.png"));
    exclusive[2]->setIcon(QIcon("resources/3.png"));
    non_exclusive[0]->setIcon(QIcon("resources/4.png"));
    non_exclusive[1]->setIcon(QIcon("resources/5.png"));
    non_exclusive[2]->setIcon(QIcon("resources/6.png"));

}

MyClass::~MyClass()
{

}

void MyClass::chkChanged()
{
    for (int i = 0; i < 3; i++)
    {
        if (exclusive[i]->checkState())
        {
            qDebug("checkbox %d selected", i + 1);
        }
    }
}
