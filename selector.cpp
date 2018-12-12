#include "selector.h"
#include "ui_selector.h"

Selector::Selector(QWidget* parent)
    : QWizardPage(parent), ui(new Ui::Selector) {
  ui->setupUi(this);
  ui->DateTimeValue->setDateTime(QDateTime::currentDateTime());

  date = ui->DateTimeValue->text();
  hostname = ui->HostNameValue->placeholderText();
  filename = ui->DevicePath->placeholderText();
}

Selector::~Selector() { delete ui; }

void Selector::on_Cancel_clicked() { quick_exit(0); }

void Selector::on_Install_clicked() {
  // do the ternary thing again....
  date = ui->DateTimeValue->text();
  hostname = ui->HostNameValue->toPlainText();
  filename = ui->DevicePath->text();

  connect(process, SIGNAL(readyReadStandardOutput()), this, SLOT(readOutput()));

  QProcess* process = new QProcess(this);
  // process->setArguments(QStringList() << ":/Scripts/testecho.sh");
  process->setArguments(QStringList() << scriptPath);
  process->setProgram(shell);
  QProcessEnvironment env = QProcessEnvironment::systemEnvironment();
  env.insert("QTFileName", filename);
  env.insert("QTHostName", hostname);
  process->setProcessEnvironment(env);
  process->open();

  while (process->canReadLine()) {
    ui->Output->setText(process->readLine());
  }
}

void Selector::on_DeviceButton_clicked() {
  QFileDialog dialog(this, title, dir);
  dialog.setFileMode(QFileDialog::ExistingFile);
  dialog.setFilter(QDir::System | QDir::CaseSensitive | QDir::AllDirs);

  if (dialog.exec()) {
    filename = dialog.selectedFiles().first();
  }

  ui->DevicePath->setText(filename);
}
