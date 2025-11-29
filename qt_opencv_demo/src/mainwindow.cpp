#include "mainwindow.h"
#include <QImage>
#include <QVBoxLayout>
#include <QPixmap>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent), cap(1) 
{
    this->showFullScreen();

    QVBoxLayout *layout = new QVBoxLayout(this);

    label = new QLabel("Camera not opened!");
    label->setFixedSize(1024, 600);

    layout->addWidget(label);

    setLayout(layout);
    
    label->setAlignment(Qt::AlignCenter);

    if (!cap.isOpened())
    {
        label->setText("Failed to open camera");
        return;
    }
// 创建刷新定时器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateFrame);
    timer->start(15);
}

MainWindow::~MainWindow()
{
    if (cap.isOpened())
        cap.release();
}

void MainWindow::updateFrame()
{
    cv::Mat frame;
    cap >> frame;
    if (frame.empty())
        return;

    cv::cvtColor(frame, frame, cv::COLOR_BGR2RGB);

    QImage img(
        (const u_char *)frame.data,
        frame.cols,
        frame.rows,
        frame.step,
        QImage::Format_RGB888);
    // 显示在 QLabel 上
    label->setPixmap(QPixmap::fromImage(img).scaled(label->size(),
                        Qt::KeepAspectRatio, 
                        Qt::FastTransformation));
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Q)
    {
        QApplication::quit();
    }
}