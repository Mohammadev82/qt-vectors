#include "ui_mainwindow.h"
#include "mainwindow.h"
#inc
#include <QtCharts/QLineSeries>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
/* * */ 

void MainWindow::on_minus_clicked()
{
    double x11, x12, x21, x22, y11, y12, y21, y22;
    x11 = ui->lineEdit_1X1->text().toDouble();
    x12 = ui->lineEdit_1X2->text().toDouble();
    x21 = ui->lineEdit_2X1->text().toDouble();
    x22 = ui->lineEdit_2X2->text().toDouble();
    y11 = ui->lineEdit_1Y1->text().toDouble();
    y12 = ui->lineEdit_1Y2->text().toDouble();
    y21 = ui->lineEdit_2Y1->text().toDouble();
    y22 = ui->lineEdit_2Y2->text().toDouble();
    double x31 = x11 - x21;
    double x32 = x12 - x22;
    double y31 = y11 - y21;
    double y32 = y12 - y22;
    QLineSeries* series = new QLineSeries();
    series->append(x31, y31);
    series->append(x32, y32);
    QgraphicsView graphicsView = chart->addSeries(series);
}


void MainWindow::on_multiple_clicked()
{
    double x11, x12, x21, x22, y11, y12, y21, y22;
    x11 = ui->lineEdit_1X1->text().toDouble();
    x12 = ui->lineEdit_1X2->text().toDouble();
    x21 = ui->lineEdit_2X1->text().toDouble();
    x22 = ui->lineEdit_2X2->text().toDouble();
    y11 = ui->lineEdit_1Y1->text().toDouble();
    y12 = ui->lineEdit_1Y2->text().toDouble();
    y21 = ui->lineEdit_2Y1->text().toDouble();
    y22 = ui->lineEdit_2Y2->text().toDouble();
    double x31 = x11 * x21;
    double x32 = x12 * x22;
    double y31 = y11 * y21;
    double y32 = y12 * y22;
    QLineSeries* series = new QLineSeries();
    series->append(x31, y31);
    series->append(x32, y32);
    QgraphicsView graphicsView = chart->addSeries(series);
}


void MainWindow::on_sum_clicked()
{
    double x11, x12, x21, x22, y11, y12, y21, y22;
    x11 = ui->lineEdit_1X1->text().toDouble();
    x12 = ui->lineEdit_1X2->text().toDouble();
    x21 = ui->lineEdit_2X1->text().toDouble();
    x22 = ui->lineEdit_2X2->text().toDouble();
    y11 = ui->lineEdit_1Y1->text().toDouble();
    y12 = ui->lineEdit_1Y2->text().toDouble();
    y21 = ui->lineEdit_2Y1->text().toDouble();
    y22 = ui->lineEdit_2Y2->text().toDouble();
    double x31 = x11 + x21;
    double x32 = x12 + x22;
    double y31 = y11 + y21;
    double y32 = y12 + y22;
    QLineSeries* series = new QLineSeries();
    series->append(x31, y31);
    series->append(x32, y32);
    QgraphicsView graphicsView = chart->addSeries(series);
}


void MainWindow::on_divide_clicked()
{
    double x11, x12, x21, x22, y11, y12, y21, y22;
    x11 = ui->lineEdit_1X1->text().toDouble();
    x12 = ui->lineEdit_1X2->text().toDouble();
    x21 = ui->lineEdit_2X1->text().toDouble();
    x22 = ui->lineEdit_2X2->text().toDouble();
    y11 = ui->lineEdit_1Y1->text().toDouble();
    y12 = ui->lineEdit_1Y2->text().toDouble();
    y21 = ui->lineEdit_2Y1->text().toDouble();
    y22 = ui->lineEdit_2Y2->text().toDouble();
    double x31 = x11 / x21;
    double x32 = x12 / x22;
    double y31 = y11 / y21;
    double y32 = y12 / y22;
    QLineSeries* series = new QLineSeries();
    series->append(x31, y31);
    series->append(x32, y32);
    QgraphicsView graphicsView = chart->addSeries(series);

}

