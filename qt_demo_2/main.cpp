
#include <QApplication>
#include <QPushButton>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton btn("Click me!");
    btn.resize(200, 60);

    QObject::connect(&btn, &QPushButton::clicked, []()
                     { QMessageBox::information(nullptr, "Message", "Button clicked!"); });
    btn.show();
    return app.exec();
}
