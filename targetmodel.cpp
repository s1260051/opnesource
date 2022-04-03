//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#include "targetmodel.h"
#include "ui_targetmodel.h"

TargetModel::TargetModel(QWidget *parent)
    : QDialog(parent), ui(new Ui::TargetModel) {
  ui->setupUi(this);
  this->setWindowTitle("3D Model");

  QObject::connect(ui->modelSelect, SIGNAL(currentIndexChanged(int)),
                   ui->modelRendering, SLOT(changeModel(int)));
}

TargetModel::~TargetModel() { delete ui; }
