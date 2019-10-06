#ifndef TESTSTRING_H
#define TESTSTRING_H

#include "chartransform.h"
#include "mainwindow.h"
#include <QObject>
#include <QtTest/QtTest>

class TestString : public QObject
{
    Q_OBJECT
public:
    explicit TestString(QObject *parent = 0);
    ~TestString();

private slots:
    void testStrLowerToUpper();
    void testStrLowerToUpper_data();

    void testStrUpperToLower();
    void testStrUpperToLower_data();

    void testStrDeleteSpace();
    void testStrDeleteSpace_data();

private:
    charTransform* m_chartransformer;
    MainWindow* m_mainWindow;
};

#endif // TESTSTRING_H
