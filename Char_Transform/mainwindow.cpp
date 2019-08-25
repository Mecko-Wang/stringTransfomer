#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCursor>
#include <QMap>
#include <QDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_transform = new charTransform();

    //send data to transform
    connect(this, SIGNAL(sendBigToSmallSignal(QString)),m_transform, SLOT(applicationSmallToBig(QString)));
    connect(this, SIGNAL(sendSmallToBigSignal(QString)),m_transform, SLOT(applicationSmallToBig(QString)));
    connect(this, SIGNAL(sendBigToSmallSignal(QString)),m_transform, SLOT(applicationSmallToBig(QString)));

    //send data to UI
    connect(m_transform,&charTransform::sendBigDataToUI, [&](QString sData){
        ui->output_string->setText(sData);
    });
    connect(m_transform,&charTransform::sendSmallDataToUI,[&](QString sData){
        ui->output_string->setText(sData);
    });
    connect(m_transform,&charTransform::sendDeleteSpaceDataToUI, [&](QString sData){
        ui->output_string->setText(sData);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
    if (!m_transform)
    {
        delete m_transform;
        m_transform = nullptr;
    }
}

void MainWindow::on_add_transformer_clicked()
{
    int listLen = m_tempList.size();
    for (int i=0; i< listLen; i++)
    {
       if (m_tempList[i] == SMALL_TO_BIG_TRANSFLRMER)
       {
           ui->transformer_list_text->append(ui->checkBoxSmallToBig->text());
           //add transfor to map
           transformMap.insert(ui->checkBoxSmallToBig->text(), SMALL_TO_BIG_TRANSFLRMER);
       }
       if (m_tempList[i] == BIG_TO_SMALL_TRANSFLRMER)
       {
           ui->transformer_list_text->append(ui->checkBoxBigToSmall->text());
           transformMap.insert(ui->checkBoxBigToSmall->text(), BIG_TO_SMALL_TRANSFLRMER);
       }
       if (m_tempList[i] == DELETE_SPACE_TRANSFLRMER)
       {
           ui->transformer_list_text->append(ui->checkBoxDeleleSpace->text());
           transformMap.insert(ui->checkBoxDeleleSpace->text(), DELETE_SPACE_TRANSFLRMER);
       }
    }
   m_tempList.clear();
}

void MainWindow::on_delete_transformer_clicked()
{
    QTextCursor tc;
    tc = ui->transformer_list_text->textCursor();
    tc.select(QTextCursor::BlockUnderCursor);
    tc.movePosition(QTextCursor::EndOfLine,QTextCursor::KeepAnchor);
    QString selectTransfor = tc.selectedText();
qDebug()<<"selectTransfor"<<selectTransfor<<endl;
    for (QMap<QString, int>::iterator it=transformMap.begin();  it!=transformMap.end(); )
     {
qDebug()<<"it.key()"<<it.key()<<endl;
        if (it.key() == selectTransfor)
         {
            qDebug()<<"11111"<<endl;
             transformMap.erase(it++);
         }
         else
         {
            qDebug()<<"2222"<<endl;
             it++;
         }
    }
    //删除选中的文本
    tc.removeSelectedText();
}

void MainWindow::on_delete_all_transformer_clicked()
{
    transformMap.clear();
    ui->transformer_list_text->clear();
}

void MainWindow::on_checkBoxSmallToBig_clicked()
{
    if (ui->checkBoxSmallToBig->isChecked())
    {
        m_tempList.append(SMALL_TO_BIG_TRANSFLRMER);
        ui->checkBoxBigToSmall->setCheckable(false);
    }
    else
    {
        m_tempList.removeAll(SMALL_TO_BIG_TRANSFLRMER);
        ui->checkBoxBigToSmall->setCheckable(true);
    }
}

void MainWindow::on_checkBoxBigToSmall_clicked()
{
    if (ui->checkBoxBigToSmall->isChecked())
    {
        m_tempList.append(BIG_TO_SMALL_TRANSFLRMER);
        ui->checkBoxSmallToBig->setCheckable(false);
    }
    else
    {
        m_tempList.removeAll(BIG_TO_SMALL_TRANSFLRMER);
        ui->checkBoxSmallToBig->setCheckable(true);
    }
}

void MainWindow::on_checkBoxDeleleSpace_clicked()
{
    if (ui->checkBoxDeleleSpace->isChecked())
    {
        m_tempList.append(DELETE_SPACE_TRANSFLRMER);
    }
    else
    {
        m_tempList.removeAll(DELETE_SPACE_TRANSFLRMER);
    }
}

void MainWindow::on_application_clicked()
{
    //从界面获取原字符串
    QString data = ui->intput_string->text();

    if (transformMap.isEmpty())
    {
        QMessageBox::information(this, "info", "please select transformer",QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }

    for (QMap<QString, int>::iterator it=transformMap.begin();  it!=transformMap.end(); it++)
    {
        int nKeyCount = transformMap.count();
        if (nKeyCount == 1)
        {
           if (it.key() == SMALL_TO_BIG_TRANSFLRMER)
           {
               emit sendSmallToBigSignal(data);
           }
           else if (it.key() == BIG_TO_SMALL_TRANSFLRMER)
           {
               emit sendBigToSmallSignal(data);
           }
           else if (it.key() == DELETE_SPACE_TRANSFLRMER)
           {
              emit  sendDeleteSpaceSignal(data);
           }
        }
    }
}

void MainWindow::on_exit_clicked()
{
    QApplication* app;
    app->exit(0);
}
