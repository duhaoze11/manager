/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../manager/widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x08,
      57,    7,    7,    7, 0x08,
     107,    7,    7,    7, 0x08,
     143,    7,    7,    7, 0x08,
     170,    7,    7,    7, 0x08,
     193,    7,    7,    7, 0x08,
     238,    7,    7,    7, 0x08,
     261,    7,    7,    7, 0x08,
     284,    7,    7,    7, 0x08,
     306,    7,    7,    7, 0x08,
     332,    7,    7,    7, 0x08,
     357,    7,    7,    7, 0x08,
     407,    7,    7,    7, 0x08,
     435,    7,    7,    7, 0x08,
     486,    7,    7,    7, 0x08,
     523,    7,    7,    7, 0x08,
     547,    7,    7,    7, 0x08,
     595,    7,    7,    7, 0x08,
     621,    7,    7,    7, 0x08,
     656,    7,    7,    7, 0x08,
     693,    7,    7,    7, 0x08,
     734,    7,    7,    7, 0x08,
     756,    7,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0on_sellTypeComboBox_currentIndexChanged(QString)\0"
    "on_sellBrandComboBox_currentIndexChanged(QString)\0"
    "on_sellNumSpinBox_valueChanged(int)\0"
    "on_sellCancelBtn_clicked()\0"
    "on_sellOkBtn_clicked()\0"
    "on_typeComboBox_currentIndexChanged(QString)\0"
    "on_updateBtn_clicked()\0on_manageBtn_clicked()\0"
    "on_chartBtn_clicked()\0on_changePwdBtn_clicked()\0"
    "on_passwordBtn_clicked()\0"
    "on_goodsTypeComboBox_currentIndexChanged(QString)\0"
    "on_goodsCancelBtn_clicked()\0"
    "on_goodsBrandComboBox_currentIndexChanged(QString)\0"
    "on_goodsNumSpinBox_valueChanged(int)\0"
    "on_goodsOkBtn_clicked()\0"
    "on_newTypeComboBox_currentIndexChanged(QString)\0"
    "on_newCancelBtn_clicked()\0"
    "on_newNumSpinBox_valueChanged(int)\0"
    "on_newPriceSpinBox_valueChanged(int)\0"
    "on_newBrandLineEdit_textChanged(QString)\0"
    "on_newOkBtn_clicked()\0on_aboutBtn_clicked()\0"
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->on_sellTypeComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_sellBrandComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_sellNumSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_sellCancelBtn_clicked(); break;
        case 4: _t->on_sellOkBtn_clicked(); break;
        case 5: _t->on_typeComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_updateBtn_clicked(); break;
        case 7: _t->on_manageBtn_clicked(); break;
        case 8: _t->on_chartBtn_clicked(); break;
        case 9: _t->on_changePwdBtn_clicked(); break;
        case 10: _t->on_passwordBtn_clicked(); break;
        case 11: _t->on_goodsTypeComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->on_goodsCancelBtn_clicked(); break;
        case 13: _t->on_goodsBrandComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 14: _t->on_goodsNumSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_goodsOkBtn_clicked(); break;
        case 16: _t->on_newTypeComboBox_currentIndexChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 17: _t->on_newCancelBtn_clicked(); break;
        case 18: _t->on_newNumSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->on_newPriceSpinBox_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->on_newBrandLineEdit_textChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->on_newOkBtn_clicked(); break;
        case 22: _t->on_aboutBtn_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
