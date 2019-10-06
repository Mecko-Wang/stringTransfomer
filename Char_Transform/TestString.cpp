#include "TestString.h"

TestString::TestString(QObject *parent) : QObject(parent)
{
    m_chartransformer = new charTransform();
}

TestString::~TestString()
{
    if (m_chartransformer)
    {
        delete m_chartransformer;
        m_chartransformer = nullptr;
    }
}

void TestString::testStrLowerToUpper()
{
    QFETCH(QString, string);
    QFETCH(QString, result);

    QCOMPARE(m_chartransformer->strLowerToUpper(string), result);
}

void TestString::testStrLowerToUpper_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("string all lower") << "hello,zte!" << "HELLO,ZTE!";
    QTest::newRow("string mixed")     << "Hello,zTE!" << "HELLO,ZTE!";
    QTest::newRow("string all upper") << "HELLO,ZTE!" << "HELLO,ZTE!";
}

void TestString::testStrUpperToLower()
{
    QFETCH(QString, string);
    QFETCH(QString, result);

    QCOMPARE(m_chartransformer->strUpperToLower(string), result);
}

void TestString::testStrUpperToLower_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("string all lower") << "hello,zte!" << "hello,zte!";
    QTest::newRow("string mixed")     << "Hello,zTE!" << "hello,zte!";
    QTest::newRow("string all upper") << "HELLO,ZTE!" << "hello,zte!";
}

void TestString::testStrDeleteSpace()
{
    QFETCH(QString, string);
    QFETCH(QString, result);

    QCOMPARE(m_chartransformer->strDeleteSpace(string), result);
}

void TestString::testStrDeleteSpace_data()
{
    QTest::addColumn<QString>("string");
    QTest::addColumn<QString>("result");

    QTest::newRow("space front") << "     hello,ZTE!" << "hello,ZTE!";
    QTest::newRow("space mixed")     << "H e l lo, Z TE !" << "Hello,ZTE!";
    QTest::newRow("space after") << "      HELLO,ZTE!            " << "HELLO,ZTE!";
}
