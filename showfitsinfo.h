//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#ifndef SHOWFITSINFO_H
#define SHOWFITSINFO_H

#include <QDialog>

namespace Ui {
class ShowFITSInfo;
}

class ShowFITSInfo : public QDialog {
  Q_OBJECT

public:
  explicit ShowFITSInfo(QWidget *parent = 0);
  ~ShowFITSInfo();
  ShowFITSInfo *t[50];

  int n;

public slots:
  void getFITSInfo(QString *);

private:
  Ui::ShowFITSInfo *ui;
};

#endif
