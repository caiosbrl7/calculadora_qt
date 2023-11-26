#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    operacao = false;
    numero1 = "";
    numero2 = "";
    resultado = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_num9_clicked()
{
    if(operacao == false){
        numero1 += "9";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "9";
        ui->tela->display(numero2.toInt());
    }

}


void MainWindow::on_num8_clicked()
{
    if(operacao == false){
        numero1 += "8";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "8";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num7_clicked()
{
    if(operacao == false){
        numero1 += "7";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "7";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num6_clicked()
{
    if(operacao == false){
        numero1 += "6";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "6";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num5_clicked()
{
    if(operacao == false){
        numero1 += "5";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "5";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num4_clicked()
{
    if(operacao == false){
        numero1 += "4";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "4";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num3_clicked()
{
    if(operacao == false){
        numero1 += "3";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "3";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num2_clicked()
{
    if(operacao == false){
        numero1 += "2";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "2";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num1_clicked()
{
    if(operacao == false){
        numero1 += "1";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "1";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_num0_clicked()
{
    if(operacao == false){
        numero1 += "0";
        ui->tela->display(numero1.toInt());
    }else{
        numero2 += "0";
        ui->tela->display(numero2.toInt());
    }
}


void MainWindow::on_apagar_clicked()
{
    numero1.clear();
    numero2.clear();
    ui->tela->display(0);
}


void MainWindow::on_soma_clicked()
{
    operacao = true;
    op = 1;
}

void MainWindow::on_subtracao_clicked()
{
    operacao = true;
    op = 2;
}


void MainWindow::on_multiplicacao_clicked()
{
    operacao = true;
    op = 3;
}


void MainWindow::on_divisao_clicked()
{
    operacao = true;
    op = 4;
}

void MainWindow::on_igualdade_clicked()
{
    operacao = false;
    switch(op){
    case 1:
        resultado = numero1.toDouble() + numero2.toDouble();
        ui->tela->display(resultado);
        break;
    case 2:
        resultado = numero1.toDouble() - numero2.toDouble();
        ui->tela->display(resultado);
        break;
    case 3:
        resultado = numero1.toDouble() * numero2.toDouble();
        ui->tela->display(resultado);
        break;
    case 4:
        resultado = numero1.toDouble() / numero2.toDouble();
        ui->tela->display(resultado);
        break;
    }
}




