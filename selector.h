#ifndef SELECTOR_H
#define SELECTOR_H

#include <QWizardPage>
#include <QMessageBox>
#include <QDateTime>

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

  void on_pushButton_clicked();

private:
  Ui::Selector *ui;
};

#endif // SELECTOR_H
