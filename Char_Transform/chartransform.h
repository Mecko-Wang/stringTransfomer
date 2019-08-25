#ifndef CHARTRANSFORM_H
#define CHARTRANSFORM_H

#include <QObject>
#include <QList>

class charTransform : public QObject
{
    Q_OBJECT
public:
    explicit charTransform(QObject *parent = 0);
	
	QString applicationSmallToBig(QString& sData);
    QString applicationBigToSmall(QString& sData);
    QString applicationDeleteSpace(QString& sData);

public slots:
};

#endif // CHARTRANSFORM_H
