
#include <QApplication>
#include "tmainwindow.h"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    TMainWindow w;
    w.show();
    return app.exec();
}
