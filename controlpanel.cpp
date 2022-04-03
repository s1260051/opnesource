//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#include "controlpanel.h"
#include "database.h"
#include "ui_controlpanel.h"
#include <QFileDialog>

Controlpanel::Controlpanel(QWidget *parent)
    : QDialog(parent), ui(new Ui::Controlpanel) {
  ui->setupUi(this);
  this->setWindowTitle("Control");

  this->move(400, 30);
}

Controlpanel::~Controlpanel() { delete ui; }

void Controlpanel::on_showModelButton_clicked() {
  emit showTargetModelSignal();
}

void Controlpanel::on_showDBButton_clicked() { emit showDatabaseSignal(); }

void Controlpanel::on_showImageButton_clicked() { emit showImageSignal(); }

void Controlpanel::on_quitButton_clicked() { emit quitSystemSignal(); }

void Controlpanel::on_showVtkButton_clicked() { emit showVtkSignal(); }

void Controlpanel::on_showCaliButton_clicked() { emit showCaliSignal(); }

void Controlpanel::on_showConversionButton_clicked() {
  emit showControlGraphPanel();
}
