#include "mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton *button = new QPushButton("Olá, Qt!", this);
    button->setGeometry(50, 50, 200, 30); // Posição x, y, largura, altura
}

