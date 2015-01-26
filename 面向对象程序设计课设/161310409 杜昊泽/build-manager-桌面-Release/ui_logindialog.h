/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QLabel *label;
    QLineEdit *pwdLineEdit;
    QLabel *label_2;
    QPushButton *quitBtn;
    QPushButton *loginBtn;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QString::fromUtf8("LoginDialog"));
        LoginDialog->resize(400, 225);
        label = new QLabel(LoginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 40, 221, 16));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setAlignment(Qt::AlignCenter);
        pwdLineEdit = new QLineEdit(LoginDialog);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(110, 110, 211, 21));
        pwdLineEdit->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(LoginDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 111, 36, 16));
        quitBtn = new QPushButton(LoginDialog);
        quitBtn->setObjectName(QString::fromUtf8("quitBtn"));
        quitBtn->setGeometry(QRect(250, 160, 75, 23));
        loginBtn = new QPushButton(LoginDialog);
        loginBtn->setObjectName(QString::fromUtf8("loginBtn"));
        loginBtn->setGeometry(QRect(80, 160, 75, 23));

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "\346\225\260\346\215\256\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginDialog", "\346\254\242\350\277\216\344\275\277\347\224\250\345\256\266\347\224\265\351\224\200\345\224\256\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", 0, QApplication::UnicodeUTF8));
        quitBtn->setText(QApplication::translate("LoginDialog", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        loginBtn->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
