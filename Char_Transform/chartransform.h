#ifndef CHARTRANSFORM_H
#define CHARTRANSFORM_H

#include <QObject>
#include <QList>

class charTransform : public QObject
{
    Q_OBJECT
public:
    explicit charTransform(QObject *parent = 0);

public slots:
        void applicationSmallToBig(QString sData);
        void applicationBigToSmall(QString sData);
        void applicationDeleteSpace(QString sData);
signals:
        void sendBigDataToUI(QString sData);
        void sendSmallDataToUI(QString sData);
        void sendDeleteSpaceDataToUI(QString sData);


public slots:
};

#endif // CHARTRANSFORM_H
