#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    QLabel label("Hello Qt + CMake on RK3588!");
    label.resize(1024,600);
    label.show();
    
    return app.exec();
}
