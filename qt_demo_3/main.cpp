
#include <QApplication>
#include <QPushButton>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Layout Demo");
    QVBoxLayout *layout = new QVBoxLayout;

    QLabel *label = new QLabel("This is a label");
    QPushButton *btn = new QPushButton("This is a button");

    layout->addWidget(label);
    layout->addWidget(btn);

    window.setLayout(layout);
    window.resize(512,300);
    window.show();

    return app.exec();
}
