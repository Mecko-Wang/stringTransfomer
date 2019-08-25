/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *intput_string;
    QLabel *label_intSring;
    QLabel *label_outString;
    QLineEdit *output_string;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *add_transformer;
    QPushButton *delete_transformer;
    QPushButton *delete_all_transformer;
    QGroupBox *groupBox_2;
    QTextEdit *transformer_list_text;
    QCheckBox *checkBoxSmallToBig;
    QCheckBox *checkBoxBigToSmall;
    QCheckBox *checkBoxDeleleSpace;
    QPushButton *application;
    QPushButton *exit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(619, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        intput_string = new QLineEdit(centralWidget);
        intput_string->setObjectName(QStringLiteral("intput_string"));
        intput_string->setGeometry(QRect(130, 10, 401, 31));
        label_intSring = new QLabel(centralWidget);
        label_intSring->setObjectName(QStringLiteral("label_intSring"));
        label_intSring->setGeometry(QRect(50, 20, 71, 16));
        label_outString = new QLabel(centralWidget);
        label_outString->setObjectName(QStringLiteral("label_outString"));
        label_outString->setGeometry(QRect(50, 70, 71, 16));
        output_string = new QLineEdit(centralWidget);
        output_string->setObjectName(QStringLiteral("output_string"));
        output_string->setGeometry(QRect(130, 60, 401, 31));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(50, 130, 541, 171));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(horizontalLayoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayoutWidget_2 = new QWidget(groupBox);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(180, 20, 151, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        add_transformer = new QPushButton(verticalLayoutWidget_2);
        add_transformer->setObjectName(QStringLiteral("add_transformer"));

        verticalLayout_2->addWidget(add_transformer);

        delete_transformer = new QPushButton(verticalLayoutWidget_2);
        delete_transformer->setObjectName(QStringLiteral("delete_transformer"));

        verticalLayout_2->addWidget(delete_transformer);

        delete_all_transformer = new QPushButton(verticalLayoutWidget_2);
        delete_all_transformer->setObjectName(QStringLiteral("delete_all_transformer"));

        verticalLayout_2->addWidget(delete_all_transformer);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 0, 141, 131));
        transformer_list_text = new QTextEdit(groupBox_2);
        transformer_list_text->setObjectName(QStringLiteral("transformer_list_text"));
        transformer_list_text->setGeometry(QRect(0, 20, 141, 111));
        checkBoxSmallToBig = new QCheckBox(groupBox);
        checkBoxSmallToBig->setObjectName(QStringLiteral("checkBoxSmallToBig"));
        checkBoxSmallToBig->setGeometry(QRect(10, 40, 91, 16));
        checkBoxBigToSmall = new QCheckBox(groupBox);
        checkBoxBigToSmall->setObjectName(QStringLiteral("checkBoxBigToSmall"));
        checkBoxBigToSmall->setGeometry(QRect(10, 70, 81, 16));
        checkBoxDeleleSpace = new QCheckBox(groupBox);
        checkBoxDeleleSpace->setObjectName(QStringLiteral("checkBoxDeleleSpace"));
        checkBoxDeleleSpace->setGeometry(QRect(10, 100, 81, 16));

        horizontalLayout->addWidget(groupBox);

        application = new QPushButton(centralWidget);
        application->setObjectName(QStringLiteral("application"));
        application->setGeometry(QRect(400, 310, 75, 23));
        exit = new QPushButton(centralWidget);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(520, 310, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 619, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_intSring->setText(QApplication::translate("MainWindow", "\346\272\220\345\255\227\347\254\246\344\270\262\357\274\232", Q_NULLPTR));
        label_outString->setText(QApplication::translate("MainWindow", "\350\275\254\346\215\242\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\345\217\257\347\224\250\350\275\254\346\215\242\345\231\250\357\274\232", Q_NULLPTR));
        add_transformer->setText(QApplication::translate("MainWindow", "\345\242\236\345\212\240>>", Q_NULLPTR));
        delete_transformer->setText(QApplication::translate("MainWindow", "\345\216\273\351\231\244", Q_NULLPTR));
        delete_all_transformer->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\345\216\273\351\231\244", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\345\217\230\346\215\242\345\231\250\351\223\276\357\274\232", Q_NULLPTR));
        checkBoxSmallToBig->setText(QApplication::translate("MainWindow", "\350\275\254\346\215\242\344\270\272\345\244\247\345\206\231", Q_NULLPTR));
        checkBoxBigToSmall->setText(QApplication::translate("MainWindow", "\350\275\254\346\215\242\344\270\272\345\260\217\345\206\231", Q_NULLPTR));
        checkBoxDeleleSpace->setText(QApplication::translate("MainWindow", "\345\211\224\351\231\244\346\216\211\347\251\272\346\240\274", Q_NULLPTR));
        application->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250", Q_NULLPTR));
        exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
