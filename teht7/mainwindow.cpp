#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    resetLineEdits();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_N0_clicked(){numberClickedHandler();}
void MainWindow::on_N1_clicked(){numberClickedHandler();}
void MainWindow::on_N2_clicked(){numberClickedHandler();}
void MainWindow::on_N3_clicked(){numberClickedHandler();}
void MainWindow::on_N4_clicked(){numberClickedHandler();}
void MainWindow::on_N5_clicked(){numberClickedHandler();}
void MainWindow::on_N6_clicked(){numberClickedHandler();}
void MainWindow::on_N7_clicked(){numberClickedHandler();}
void MainWindow::on_N8_clicked(){numberClickedHandler();}
void MainWindow::on_N9_clicked(){numberClickedHandler();}

void MainWindow::on_add_clicked(){addSubMulDivClickHandler();}
void MainWindow::on_sub_clicked(){addSubMulDivClickHandler();}
void MainWindow::on_mul_clicked(){addSubMulDivClickHandler();}
void MainWindow::on_div_clicked(){addSubMulDivClickHandler();}

void MainWindow::on_clear_clicked(){clearAndEnterClickHandler();}
void MainWindow::on_enter_clicked(){clearAndEnterClickHandler();}

void MainWindow::numberClickedHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    if(state==1){
        number1 = number1 + name.last(1);
    } else {
        number2 = number2 + name.last(1);
    }
    qDebug() << "number1: " << number1;
    qDebug() << "number2: " << number2;
    resetLineEdits();
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    if(name=="clear"){
        number1 = "";
        number2 = "";
        result = 0;
        state = 1;
        resetLineEdits();
        qDebug() << "Cleared QLineEdits";
    } else {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        qDebug() << "number1 = " << n1 << "and number2 = " << n2;
        switch(operand){
            case 0:
                result=n1+n2;
            break;
            case 1:
                result=n1-n2;
            break;
            case 2:
                result=n1*n2;
            break;
            case 3:
                result=n1/n2;
            break;
        }
        state = 1;
        resetLineEdits();
        qDebug() << "Result: " << result;
        number1 = "";
        number2 = "";
    }
}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton *button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: " << name;
    if(name=="add"){
        operand = 0;
    } else if(name=="sub"){
        operand = 1;
    } else if(name=="mul"){
        operand = 2;
    } else if(name=="div"){
        operand = 3;
    }
    qDebug() << "Operand: " << operand;
    if(state==1){
        state = 2;
    } else {
        state = 1;
    }
    qDebug() << "State: " << state;
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText(number1);
    ui->num2->setText(number2);
    ui->result->setText(QString::number(result));
}

