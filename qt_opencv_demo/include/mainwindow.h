#pragma once
#include <QWidget>
#include <QLabel>
#include <QTimer>
#include <opencv2/opencv.hpp>
#include <QKeyEvent>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
    void keyPressEvent(QKeyEvent *event) override;
    
private:
    QLabel *label;
    QTimer *timer;
    cv::VideoCapture cap;

private slots:
    void updateFrame();
};
