//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#ifndef TILING_H
#define TILING_H

#include <QDialog>
#include <QGridLayout>

namespace Ui {
class Tiling;
}

class Tiling : public QDialog {
  Q_OBJECT

public:
  explicit Tiling(QWidget *parent = 0);
  ~Tiling();
public slots:
  void tilingWindow(QString);

private:
  Ui::Tiling *ui;
  QGridLayout *Layout;
};

#endif
