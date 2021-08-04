#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "FoldListWgt.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    {
        m_foldListWgt = new FoldListWgt;

        ui->leftWidget->layout()->addWidget(m_foldListWgt);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
