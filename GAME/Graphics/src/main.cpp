#include "StartLogo/startlogo.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartLogo startLogo;
    startLogo.showFullScreen();
    return a.exec();
}
