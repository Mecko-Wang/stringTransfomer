#ifndef TESTGUI_H
#define TESTGUI_H

#include "chartransform.h"
#include "mainwindow.h"
#include <QObject>
#include <QtTest/QtTest>
#include <QtTestGui>

class TestGui : public QObject
{
    Q_OBJECT
public:
    explicit TestGui(QObject *parent = 0);
    ~TestGui();

private slots:

private:
    charTransform* m_chartransformer;
    MainWindow* m_mainWindow;
};

#endif // TESTGUI_H
