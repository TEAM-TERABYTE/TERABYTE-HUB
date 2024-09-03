#include "Include/UIModule/TERABYTEHUB.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TERABYTEHUB w;
    w.show();
    return a.exec();
}
