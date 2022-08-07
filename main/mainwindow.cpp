
#include "mainwindow.h"
#include <QDebug>
#include <QGraphicsPixmapItem>
#include <QColor>
#include <random>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.graphicsView->setScene(&scene);
    QImage rtnImg = this->randomImage(1920, 1080);
    QGraphicsPixmapItem *image_item = new QGraphicsPixmapItem(QPixmap::fromImage(rtnImg));
    scene.addItem(image_item);
    ui.graphicsView->setScene(&scene);
}

void MainWindow::closeEvent(QCloseEvent* e)
{
}

void MainWindow::paintEvent(QPaintEvent *e)
{
}

QImage MainWindow::randomImage(int width, int height)
{
    QImage rtnImg(width, height, QImage::Format_RGB32);

    std::random_device rnd;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int r = rnd() & 0xff;
            int g = rnd() & 0xff;
            int b = rnd() & 0xff;
            rtnImg.setPixel(j, i, qRgb(r, g, b));
        }
    }
    return rtnImg;
}


