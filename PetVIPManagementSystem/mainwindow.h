#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class FoldListWgt;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    FoldListWgt* m_foldListWgt = nullptr;
};

#endif // MAINWINDOW_H
