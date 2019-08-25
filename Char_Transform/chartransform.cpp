#include "chartransform.h"

charTransform::charTransform(QObject *parent) : QObject(parent)
{

}

QString charTransform::applicationSmallToBig(QString& sData)
{
     sData = sData.toUpper();

     return sData;
}

QString charTransform::applicationBigToSmall(QString& sData)
{
     sData = sData.toLower();
     return sData;
}

QString charTransform::applicationDeleteSpace(QString& sData)
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
    return outStr;
}


