#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCursor>
#include <QMap>
#include <QList>
#include <QMessageBox>
#include <QDebug>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
	
    m_transform = new charTransform();
    //initial the UI
    initUI();
    //initial the transformers
    initTransformer();

    connect(this, SIGNAL(sendAddTransformerSingal()), this, SLOT(addTransformer()));
    connect(this, SIGNAL(sendDeleteSigleTransformerSignal()), this, SLOT(deleteSingleTransformer()));
    connect(this, SIGNAL(sendDeleteAllTransformerSignal()), this, SLOT(deleteAllTransformer()));
    connect(this, SIGNAL(sendApplicationSignal()), this, SLOT(applicationTransformer()));
    connect(this, SIGNAL(sendEixtSignal()), this, SLOT(exitApp()));
}

MainWindow::~MainWindow()
{
    delete ui;
    if (m_transform)
    {
        delete m_transform;
        m_transform = nullptr;
    }
}

void MainWindow::initUI()
{
    QPushButton* m_addTransformer = new QPushButton;
    m_addTransformer->setText(QStringLiteral("增加>>"));

    QPushButton* m_deleteTransformer = new QPushButton;
    m_deleteTransformer->setText(QStringLiteral("去除"));

    QPushButton* m_deleteAllTransformer = new QPushButton;
    m_deleteAllTransformer->setText(QStringLiteral("全部去除"));

    ui->verticalLayout_2->addWidget(m_addTransformer);
    ui->verticalLayout_2->addWidget(m_deleteTransformer);
    ui->verticalLayout_2->addWidget(m_deleteAllTransformer);


    QPushButton* m_application = new QPushButton;
    m_application->setText(QStringLiteral("应用"));

    QPushButton* m_exitApp = new QPushButton;
    m_exitApp->setText(QStringLiteral("退出"));

    ui->horizontalLayout_2->addWidget(m_application);
    ui->horizontalLayout_2->addWidget(m_exitApp);

    connect(m_addTransformer, &QPushButton::clicked,[this](){
         emit sendAddTransformerSingal();
    });

    connect(m_deleteTransformer, &QPushButton::clicked,[this](){
         emit sendDeleteSigleTransformerSignal();
    });

    connect(m_deleteAllTransformer, &QPushButton::clicked,[this](){
         emit sendDeleteAllTransformerSignal();
    });

    connect(m_application, &QPushButton::clicked,[this](){
         emit sendApplicationSignal();
    });

     connect(m_exitApp, &QPushButton::clicked,[this](){
         emit sendEixtSignal();
    });
}

void MainWindow::initTransformer()
{
    ui->checkble_transformer_text->append(QStringLiteral("转换为大写"));
    ui->checkble_transformer_text->append(QStringLiteral("转换为小写"));
    ui->checkble_transformer_text->append(QStringLiteral("剔除掉空格"));
}

void MainWindow::addTransformer()
{
    QTextCursor tc;
    tc = ui->checkble_transformer_text->textCursor();
    tc.select(QTextCursor::BlockUnderCursor);
    QString selectTransformer = tc.selectedText().trimmed();

    if (!transformList.contains(selectTransformer))
    {
        ui->transformer_list_text->append(selectTransformer);
        transformList.append(selectTransformer);
    }
}

void MainWindow::deleteSingleTransformer()
{
    QTextCursor tc;
    tc = ui->transformer_list_text->textCursor();
    tc.select(QTextCursor::BlockUnderCursor);
    QString selectTransfor = tc.selectedText().trimmed();
	
    for (int i = 0; i<transformList.size(); i++)
    {
        if (transformList[i] == selectTransfor)
            transformList.removeAt(i);
    }

    tc.removeSelectedText();
}

void MainWindow::deleteAllTransformer()
{
    transformList.clear();
    ui->transformer_list_text->clear();
}

void MainWindow::applicationTransformer()
{
    //get string from UI
    QString data = ui->intput_string->text();

    for (int i = 0; i<transformList.size(); i++)
    {
        if (transformList.contains(QStringLiteral("转换为大写")))
        {
            data = m_transform->strLowerToUpper(data);
        }
        if (transformList.contains(QStringLiteral("转换为小写")))
        {
            data = m_transform->strUpperToLower(data);
        }
        if (transformList.contains(QStringLiteral("剔除掉空格")))
        {
            data = m_transform->strDeleteSpace(data);
        }
    }
    //send data to UI
    ui->output_string->setText(data);
}

void MainWindow::exitApp()
{
    QApplication* app;
    app->exit(0);
}
