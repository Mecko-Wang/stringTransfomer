#include "chartransform.h"

charTransform::charTransform(QObject *parent) : QObject(parent)
{

}

void charTransform::applicationSmallToBig(QString sData)
{
     sData = sData.toUpper();

     emit sendBigDataToUI(sData);
}

void charTransform::applicationBigToSmall(QString sData)
{
     sData = sData.toLower();
     emit sendSmallDataToUI(sData);
}

void charTransform::applicationDeleteSpace(QString sData)
{
    QString outStr;
    QByteArray ba = sData.toLatin1();
    char* ch = ba.data();
    int len = sData.length();
    for (int i=0; i<len; i++)
    {
       if (ch[i] != 32)
       {
           outStr.append(ch[i]);
       }
       else
       {
           continue;
       }
    }
    emit sendDeleteSpaceDataToUI(sData);
}


