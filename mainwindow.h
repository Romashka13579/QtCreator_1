#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ButtonError_clicked();

    void on_ButtonAsk_clicked();

    void on_ButtonInformationQt_pressed();

    void on_ButtonInformation_pressed();

    void on_ButtonInformationQt_clicked();

    void on_ButtonInformation_clicked();

    void on_ButtonNone_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
