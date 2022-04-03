//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#ifndef TARGETMODEL_H
#define TARGETMODEL_H

#include <QDialog>

namespace Ui {
class TargetModel;
}

class TargetModel : public QDialog {
  Q_OBJECT

public:
  explicit TargetModel(QWidget *parent = 0);
  ~TargetModel();

private:
  Ui::TargetModel *ui;
};

#endif
