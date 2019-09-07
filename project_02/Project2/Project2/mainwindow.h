#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QString>
#include <QMap>
#include "shoppingcart.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void actByYourChange(QObject*);
    void onProductTableClicked(const QModelIndex &);
    void onBundleTableClicked(const QModelIndex &);

private:
    Ui::MainWindow *ui;
    ShoppingCart* shoppingCart;
    QString getSavings(QStringList& bundle, QString price);
};

#endif // MAINWINDOW_H
