#ifndef CHARTRANSFORM_H
#define CHARTRANSFORM_H

#include <QObject>
#include <QList>
#define ASCALL_OF_SPACE  32

class charTransform : public QObject
{
    Q_OBJECT
public:
    explicit charTransform(QObject *parent = 0);
	
    QString strLowerToUpper(QString& sData);
    QString strUpperToLower(QString& sData);
    QString strDeleteSpace(QString& sData);

public slots:
};

#endif // CHARTRANSFORM_H
