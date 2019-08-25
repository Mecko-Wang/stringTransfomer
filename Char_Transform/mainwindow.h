#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "chartransform.h"
#include <QMainWindow>
#include <QList>
#include <QMap>

#define  SMALL_TO_BIG_TRANSFLRMER   1
#define  BIG_TO_SMALL_TRANSFLRMER   2
#define  DELETE_SPACE_TRANSFLRMER   3

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_add_transformer_clicked();
    void on_delete_transformer_clicked();
    void on_delete_all_transformer_clicked();
    void on_application_clicked();
    void on_exit_clicked();
    void on_checkBoxSmallToBig_clicked();
    void on_checkBoxBigToSmall_clicked();
    void on_checkBoxDeleleSpace_clicked();

signals:
    void sendSmallToBigSignal(QString);
    void sendBigToSmallSignal(QString);
    void sendDeleteSpaceSignal(QString);
private:
    Ui::MainWindow *ui;
    charTransform* m_transform;
    QList<int> m_tempList;
    QList<int> transformerList;
    QMap<QString, int>transformMap;
};

#endif // MAINWINDOW_H
