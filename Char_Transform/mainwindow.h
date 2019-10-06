#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "chartransform.h"
#include <QMainWindow>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void initTransformer();
    void initUI();

private slots:
    void addTransformer();
    void deleteSingleTransformer();
    void deleteAllTransformer();
    void applicationTransformer();
    void exitApp();

signals:
    void sendAddTransformerSingal();
    void sendDeleteSigleTransformerSignal();
    void sendDeleteAllTransformerSignal();
    void sendApplicationSignal();
    void sendEixtSignal();
private:
    Ui::MainWindow *ui;
    charTransform* m_transform;
    QList<QString> transformList;
};

#endif // MAINWINDOW_H
