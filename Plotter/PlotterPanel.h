// PlotterPanel.h

#ifndef PLOTTERPANEL_H
#define PLOTTERPANEL_H

#include <QWidget>
#include <QList>
#include <QSize>
#include <QPainter>
#include <QPaintEvent>
#include <QPalette>

namespace Plotter {
    const int WIDTH = 800;
    const int HEIGHT = 600;
    const bool DEBUG = true;
}

class PlotterPoint {
public:
    PlotterPoint(int x = 0, int y = 0, QColor color = Qt::black);
    void drawPoint(QPainter &painter) const;

private:
    int x;
    int y;
    QColor color;
};

class PlotterPanel : public QWidget {
    Q_OBJECT

public:
    explicit PlotterPanel(QWidget *parent = nullptr);

    void setPoints(const QList<PlotterPoint> &pointList);
    void setCount(int count);
    void draw();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    QSize dimension;
    QList<PlotterPoint> pointList;
    QList<PlotterPoint> walls;
    int count;
};

#endif // PLOTTERPANEL_H