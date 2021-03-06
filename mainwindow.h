#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "selector.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

 private slots:
  void on_Install_clicked();

  void on_Cancel_clicked();

 private:
  Ui::MainWindow *ui;
};

#endif  // MAINWINDOW_H
