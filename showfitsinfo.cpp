//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#include "showfitsinfo.h"
#include "controlgraphpanel.h"
#include "loaddatalist.h"
#include "ui_showfitsinfo.h"

ShowFITSInfo::ShowFITSInfo(QWidget *parent)
    : QDialog(parent), ui(new Ui::ShowFITSInfo) {
  ui->setupUi(this);
  this->move(520, 0);
}

ShowFITSInfo::~ShowFITSInfo() { delete ui; }

void ShowFITSInfo::getFITSInfo(QString *info) {

  t[n] = new ShowFITSInfo;
  t[n]->ui->fitsInfoList->clear();

  for (int i = 0; i <= 76; i++)
    t[n]->ui->fitsInfoList->addItem(info[i]);

  t[n]->setWindowTitle("FITS header");
  t[n]->show();
  t[n]->raise();

  n++;
}
