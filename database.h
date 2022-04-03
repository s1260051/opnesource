//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#ifndef DATABASE_H
#define DATABASE_H

#include "pixcelgraph.h"
#include <QDialog>
#include <QLineEdit>
#include <QtSql>

#define MAXH 25555
#define MAXL -25555

namespace Ui {
class Database;
}

class Database : public QDialog {
  Q_OBJECT

public:
  Ui::Database *ui;
  explicit Database(QWidget *parent = 0);
  ~Database();
  QSqlDatabase db;
  QSqlQuery query;
  QSqlQuery pairQuery;
  QDir logFileDirectory;
  PixcelGraph pg;

  QString dataPath;

private:
  void setValue();
  void connectDB();
  void showdbinfo();
  void fillForm();
  bool judgeItem();
  void on_dbSearchList_clicked();
  void createLogFile();
  void loadInitFile();

  QString info[20];

signals:
  void loadThumbnailSignal(QString);
  void infoSignal(QString *);
  void getFilePathSignal(QString);

public slots:
  void checkAction();
  QString nameChange(QString);
  void showThis();

private slots:
  void on_dbSearchList_clicked(const QModelIndex &index);
  void on_dbSearchButton_clicked();
  void on_showInfoButton_clicked();
  void on_loadLogButton_clicked();
  void on_crearLogButton_clicked();
  void on_subPair_clicked();
  void on_showGraph_clicked();
  void on_setTIRDirectory_clicked();
};

#endif
