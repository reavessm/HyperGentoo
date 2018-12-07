#include "selector.h"
#include "ui_selector.h"

Selector::Selector(QWidget *parent) :
  QWizardPage(parent),
  ui(new Ui::Selector)
{
  ui->setupUi(this);
  ui->DateTimeValue->setDateTime(QDateTime::currentDateTime());
}

Selector::~Selector()
{
  delete ui;
}

void Selector::on_Cancel_clicked()
{
  quick_exit(0);
}

void Selector::on_pushButton_clicked()
{
  QString hostname = ui->HostNameValue->toPlainText() == QString::null ?
        ui->HostNameValue->toPlainText() :
        ui->HostNameValue->placeholderText();
  QMessageBox::information(this, tr("Date"),
                           ui->DateTimeValue->text() + '\n' + hostname);
}
