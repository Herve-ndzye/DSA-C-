#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void digitPressed();
    void operatorPressed();
    void clearPressed();
    void equalPressed();

private:
    Ui::MainWindow *ui;
    QString pendingOperator;
    double pendingOperand;
    bool waitingForOperand;

};
#endif // MAINWINDOW_H
