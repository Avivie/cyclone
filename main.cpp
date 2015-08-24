#include "mainwindow.h"
#include <QApplication>

#include "terminalprocess.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    TerminalProcess t("sh");

    t.start();

    MainWindow w;
    w.show();

    return a.exec();
}
