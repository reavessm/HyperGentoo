#include <QMessageBox>
#include <QApplication>
#include <QIcon>
#include <QInputDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  this->setStyleSheet("background-color: #61538D;");
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_Install_clicked() {
  // Find a better way to clear screen!
  // ui->Background->deleteLater();
  // ui->Cancel->deleteLater();
  // ui->Install->deleteLater();
  ui->centralWidget->deleteLater();

  // Create new window
  Selector* selector = new Selector(this);
  selector->show();

  // Memory Management
  // May not need
  delete ui;
}

void MainWindow::on_Cancel_clicked() {
  QMessageBox::information(this, tr("HyperGentoo"), tr("Cancel"));
  quick_exit(0);
}
