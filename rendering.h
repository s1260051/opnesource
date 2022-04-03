//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#ifndef RENDERING
#define RENDERING
#include <QDir>
#include <QGLWidget>
#include <QMouseEvent>
#include <QOpenGLWidget>
#include <QWidget>
#include <QtGui>
#include <QtOpenGL>

#define NUM 49152
#define NN 49141

class Rendering : public QOpenGLWidget {
  Q_OBJECT
public:
  explicit Rendering(QWidget *parent = 0);
  ~Rendering();
  GLdouble point[(NUM + 4) / 2][3];
  GLint facet[NUM][3];
  QPoint lastPos;
  double maxT[3];
  double RotX, RotY;
  int num;
  QDir srcPath;

  void loadFile();
  void render();
  void setNormalVector();
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  double colorDefine(double T, int i);
  void calcNormalVector(GLdouble a[3][3], int n);

public slots:
  void changeModel(int);

protected:
  void initializeGL();
  void resizeGL(int width, int height);
  void paintGL();
};

#endif
