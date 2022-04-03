//
// Copyright (c) 2021 The University of Aizu
// Open source under the BSD License.
//

#include "viewimage.h"
#include "mainwindow.h"
#include <fstream>
#include <iostream>
using namespace std;

ViewImage::ViewImage(QWidget *parent) : QOpenGLWidget(parent) {}

void ViewImage::initializeGL() {
  loadFile();
  glClearColor(1, 1, 1, 0);
  glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void ViewImage::resizeGL(int width, int height) {
  glViewport(0, 0, width, height);
  glLoadIdentity();

  glOrtho(0, 2, 0, 2, -1, 1);
}

void ViewImage::paintGL() {
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  glColor3d(0, 0, 0);
  glBegin(GL_TRIANGLES);
  glVertex3d(0, 1, 0);
  glVertex3d(1, 1, 0);
  glVertex3d(1, 0, 0);
  glEnd();
}

void ViewImage::loadFile() {

  QFile file(tr("/Users/joker/test/TIR_Data/swingby/TIR_Earth_201512040406/"
                "TIR_8CF2_hrw.img"));
  if (!file.open(QIODevice::ReadOnly)) {
    printf("error\n");
  }

  QDataStream in(&file);

  in.setVersion(QDataStream::Qt_5_4);
  QString str;
  char *cp;
  qint32 n32;
  qint64 n64;
  in >> str >> cp >> n32 >> n64;
  file.close();

  qDebug() << str << QString::fromLocal8Bit(cp) << n32 << n64;
  delete[] cp;
}

void ViewImage::mousePressEvent(QMouseEvent *event) {
  if (event->buttons() & Qt::LeftButton) {
  } else if (event->buttons() & Qt::RightButton) {
  }
}
