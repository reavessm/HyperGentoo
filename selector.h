#ifndef SELECTOR_H
#define SELECTOR_H

#include <QWizardPage>
#include <QMessageBox>
#include <QDateTime>
#include <QFileDialog>
#include <QProcess>


namespace Ui {
  class Selector;
}

class Selector : public QWizardPage
{
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
  const QString title = "Select a Device";
  const QString dir = "/dev";

};

#endif // SELECTOR_H
