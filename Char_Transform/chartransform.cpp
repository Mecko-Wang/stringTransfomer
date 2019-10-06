#include "chartransform.h"

charTransform::charTransform(QObject *parent) : QObject(parent)
{

}

QString charTransform::strLowerToUpper(QString& sData)
{
     sData = sData.toUpper();

     return sData;
}

QString charTransform::strUpperToLower(QString& sData)
{
     sData = sData.toLower();
     return sData;
}

QString charTransform::strDeleteSpace(QString& sData)
{
    QString outStr;
    QByteArray ba = sData.toLatin1();
    char* ch = ba.data();
    int len = sData.length();
    for (int i=0; i<len; i++)
    {
       if (ch[i] != ASCALL_OF_SPACE)
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


