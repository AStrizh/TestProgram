#include "mainwindow.h"
#include <qpushbutton.h>
#include <QLabel>
#include <QtCore>
#include <QApplication>
#include <QHBoxLayout>
#include <QFont>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QLabel *label = new QLabel("Hello, World!", &w);
    QFont font;
    font.setWeight(QFont::Bold);
    font.setPixelSize(24);
    label->setAlignment(Qt::AlignCenter);
    label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    label->setFont(font);

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(label);
    layout->setAlignment(Qt::AlignCenter);

    w.setCentralWidget(new QWidget(&w));
    w.centralWidget()->setLayout(layout);

    w.show();
    return a.exec();
}
