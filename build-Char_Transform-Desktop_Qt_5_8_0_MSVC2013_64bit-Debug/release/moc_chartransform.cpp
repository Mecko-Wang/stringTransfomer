/****************************************************************************
** Meta object code from reading C++ file 'chartransform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Char_Transform/chartransform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chartransform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_charTransform_t {
    QByteArrayData data[9];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_charTransform_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_charTransform_t qt_meta_stringdata_charTransform = {
    {
QT_MOC_LITERAL(0, 0, 13), // "charTransform"
QT_MOC_LITERAL(1, 14, 15), // "sendBigDataToUI"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 5), // "sData"
QT_MOC_LITERAL(4, 37, 17), // "sendSmallDataToUI"
QT_MOC_LITERAL(5, 55, 23), // "sendDeleteSpaceDataToUI"
QT_MOC_LITERAL(6, 79, 21), // "applicationSmallToBig"
QT_MOC_LITERAL(7, 101, 21), // "applicationBigToSmall"
QT_MOC_LITERAL(8, 123, 22) // "applicationDeleteSpace"

    },
    "charTransform\0sendBigDataToUI\0\0sData\0"
    "sendSmallDataToUI\0sendDeleteSpaceDataToUI\0"
    "applicationSmallToBig\0applicationBigToSmall\0"
    "applicationDeleteSpace"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_charTransform[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    1,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a /* Public */,
       7,    1,   56,    2, 0x0a /* Public */,
       8,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void charTransform::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        charTransform *_t = static_cast<charTransform *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendBigDataToUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sendSmallDataToUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sendDeleteSpaceDataToUI((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->applicationSmallToBig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->applicationBigToSmall((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->applicationDeleteSpace((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (charTransform::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&charTransform::sendBigDataToUI)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (charTransform::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&charTransform::sendSmallDataToUI)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (charTransform::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&charTransform::sendDeleteSpaceDataToUI)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject charTransform::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_charTransform.data,
      qt_meta_data_charTransform,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *charTransform::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *charTransform::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_charTransform.stringdata0))
        return static_cast<void*>(const_cast< charTransform*>(this));
    return QObject::qt_metacast(_clname);
}

int charTransform::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void charTransform::sendBigDataToUI(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void charTransform::sendSmallDataToUI(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void charTransform::sendDeleteSpaceDataToUI(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
