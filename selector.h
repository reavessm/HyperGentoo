#ifndef SELECTOR_H
#define SELECTOR_H

#include <QDateTime>
#include <QFileDialog>
#include <QMessageBox>
#include <QProcess>
#include <QWizardPage>

namespace Ui {
class Selector;
}

class Selector : public QWizardPage {
  Q_OBJECT

 public:
  explicit Selector(QWidget *parent = 0);
  ~Selector();

 private slots:
  void on_Cancel_clicked();
  void on_Install_clicked();
  void on_DeviceButton_clicked();

 private:
  Ui::Selector *ui;

  QString hostname;
  QString date;
  QString filename;
  QProcess *process;
  const QString dir = "/dev";
  const QString shell = "bash";
  const QString title = "Select a Device";
  const QString QTFileName = "QTFileName";
  const QString QTHostName = "QTHostname";
  const QString scriptPath =
      "/home/reavessm/Src/HyperGentoo/Scripts/install.sh";
};

#endif  // SELECTOR_H
