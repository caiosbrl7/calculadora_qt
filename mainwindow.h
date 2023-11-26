#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_num9_clicked();

    void on_num8_clicked();

    void on_num7_clicked();

    void on_num6_clicked();

    void on_num5_clicked();

    void on_num4_clicked();

    void on_num3_clicked();

    void on_num2_clicked();

    void on_num1_clicked();

    void on_num0_clicked();

    void on_apagar_clicked();

    void on_soma_clicked();

    void on_igualdade_clicked();

    void on_subtracao_clicked();

    void on_multiplicacao_clicked();

    void on_divisao_clicked();

private:
    Ui::MainWindow *ui;
    bool operacao;      //flag que é utilizada para saber se um botão de operação foi pressionado
    QString numero1;
    QString numero2;
    int op;
    int resultado;
};
#endif // MAINWINDOW_H
