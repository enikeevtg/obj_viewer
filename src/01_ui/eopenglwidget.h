#ifndef EOPENGLWIDGET_H
#define EOPENGLWIDGET_H

#include <QOpenGLFunctions>
#include <QOpenGLWidget>

#include "mainwindow.h"

class EOpenGLWidget : public QOpenGLWidget, QOpenGLFunctions {
  Q_OBJECT

 public:
  EOpenGLWidget(QWidget* parent = nullptr);
  ~EOpenGLWidget();
  geometry_info object;

  int vertices_visibility;
  int vertices_type;
  int vertices_size;
  QColor vertices_color;

  int edges_visibility;
  int edges_type;
  int edges_thickness;
  QColor edges_color;

  QColor background_color;

 private:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  void setVerticesDisplay();
  void setEdgesDisplay();
};

#endif  // EOPENGLWIDGET_H
