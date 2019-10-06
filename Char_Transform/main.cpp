#include "mainwindow.h"
#include "TestString.h"
#include <QApplication>
#include <QtTest/QtTest>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QStringLiteral("字符串转换器"));
    w.show();

    TestString testCase;
    QTest::qExec(&testCase);

    return a.exec();
}

