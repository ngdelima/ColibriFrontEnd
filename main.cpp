#include"mainloop.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainLoop mainLoop;
    mainLoop.run();

    return a.exec();
}
