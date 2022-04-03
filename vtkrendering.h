//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#ifndef VTKRENDERING_H
#define VTKRENDERING_H

#include <QGLWidget>
#include <QMouseEvent>
#include <QOpenGLWidget>
#include <QWidget>
#include <QtGui>
#include <QtOpenGL>

#define NUM 49152

class VtkRendering : public QOpenGLWidget {
  Q_OBJECT
public:
  explicit VtkRendering(QWidget *parent = 0);
  ~VtkRendering();

private:
  GLdouble point[(NUM + 4) / 2][3];
  GLint facet[NUM][3];
  QPoint lastPos;
  double maxT[3];
  double RotX, RotY;
  int num;
  int facetN;
  double colorTable[256][3];
  double colorValue[256];
  double MAX[4];
  double MIN[4];

  void loadFile();
  void render();
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);

public slots:
  void loadVtkFile(QString vtkFileName);
  void changeData(int);
  void getDirPath(QString);
  void setColor(int);
  void setRangeVtk(double, double);

protected:
  void initializeGL();
  void resizeGL(int width, int height);
  void paintGL();
  void makeColorTable();
  void colorBar();
  void unitBar();
};

#endif
