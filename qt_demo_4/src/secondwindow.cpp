#include "secondwindow.h"
#include <QLabel>
#include <QVBoxLayout>

SecondWindow::SecondWindow()
{
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(new QLabel("This is the second window!"));
    setLayout(layout);

    resize(512, 300);
}