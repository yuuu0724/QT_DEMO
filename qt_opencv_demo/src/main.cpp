
#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow window;
    window.setWindowTitle("QT + OpenCV Camera");
    window.show();
    
    return app.exec();
}
