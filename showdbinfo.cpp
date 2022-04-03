//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#include "showdbinfo.h"
#include "ui_showdbinfo.h"

ShowDBInfo::ShowDBInfo(QWidget *parent)
    : QDialog(parent), ui(new Ui::ShowDBInfo) {
  ui->setupUi(this);
}

ShowDBInfo::~ShowDBInfo() { delete ui; }

void ShowDBInfo::getInfo(QString *info) {

  ui->dbInfoList->clear();

  for (int i = 0; i < 18; i++)
    ui->dbInfoList->addItem(info[i]);

  this->setWindowTitle(info[17].mid(17));
  this->show();
  this->raise();
}
