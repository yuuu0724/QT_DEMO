
#include <QApplication>
#include <QPushButton>

#include "secondwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QPushButton btn("Open second window!");

    SecondWindow second;

    QObject::connect(&btn, &QPushButton::clicked, [&]()
                     { second.show(); });

    btn.show();
    return app.exec();
}
