//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#include "tiling.h"
#include "mainwindow.h"
#include "popwindow.h"
#include "showimage.h"
#include "ui_tiling.h"
#include <QLabel>

#define W 494
#define H 276

int i = 0;
int j = 0;

Tiling::Tiling(QWidget *parent) : QDialog(parent), ui(new Ui::Tiling) {
  ui->setupUi(this);
  Layout = new QGridLayout;
  this->setWindowTitle("Tiling");
}

Tiling::~Tiling() { delete ui; }

void Tiling::tilingWindow(QString name) {
  ShowImage *a = new ShowImage(this);
  a->setFixedSize(W, H);
  a->loadFileName(name);
  if (j > 2) {
    i++;
    j = 0;
  }
  Layout->addWidget(a, i, j++);
  this->setLayout(Layout);
}
