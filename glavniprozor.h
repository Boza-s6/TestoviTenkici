#ifndef GLAVNIPROZOR_H
#define GLAVNIPROZOR_H

#include <QDialog>
#include <QtCore>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <iostream>
#include <QPushButton>
#include <QGraphicsProxyWidget>
#include <QTimer>
#include <QDesktopWidget>
#include "map.h"

namespace Ui {
class GlavniProzor;
}

class GlavniProzor : public QDialog
{
    Q_OBJECT

public:
    explicit GlavniProzor(QWidget *parent = 0);
    ~GlavniProzor();
public slots:
    void inicijalizujIgru();
    void izadji();

private:
    Ui::GlavniProzor *ui;
    QGraphicsScene *mScena;
    QPushButton *mDugmeNovaIgra;
    QPushButton *mDugmeIzadji;
    QGraphicsProxyWidget *mProxyDugmeNovaIgra;
    QGraphicsProxyWidget *mProxyDugmeIzadji;

    QTimer mTimer;
    QRect mScreen;
};

#endif // GLAVNIPROZOR_H
