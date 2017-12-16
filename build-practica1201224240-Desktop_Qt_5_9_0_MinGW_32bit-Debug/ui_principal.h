/********************************************************************************
** Form generated from reading UI file 'principal.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINCIPAL_H
#define UI_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtavion;
    QLabel *label_2;
    QLineEdit *txtescritorio;
    QLabel *label_3;
    QLineEdit *txtmantenimiento;
    QLabel *label_4;
    QLineEdit *txtturnos;
    QGroupBox *groupBox_2;
    QTextEdit *consola;
    QPushButton *btnsig;
    QGroupBox *groupBox_3;
    QGraphicsView *graphicsView;
    QLabel *label_5;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *principal)
    {
        if (principal->objectName().isEmpty())
            principal->setObjectName(QStringLiteral("principal"));
        principal->resize(1088, 719);
        centralWidget = new QWidget(principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 0, 1031, 91));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 60, 80, 21));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(14, 30, 1004, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        txtavion = new QLineEdit(widget);
        txtavion->setObjectName(QStringLiteral("txtavion"));

        horizontalLayout->addWidget(txtavion);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        txtescritorio = new QLineEdit(widget);
        txtescritorio->setObjectName(QStringLiteral("txtescritorio"));

        horizontalLayout->addWidget(txtescritorio);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        txtmantenimiento = new QLineEdit(widget);
        txtmantenimiento->setObjectName(QStringLiteral("txtmantenimiento"));

        horizontalLayout->addWidget(txtmantenimiento);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        txtturnos = new QLineEdit(widget);
        txtturnos->setObjectName(QStringLiteral("txtturnos"));

        horizontalLayout->addWidget(txtturnos);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 100, 451, 581));
        consola = new QTextEdit(groupBox_2);
        consola->setObjectName(QStringLiteral("consola"));
        consola->setGeometry(QRect(10, 20, 431, 551));
        consola->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 11pt \"Fixedsys\";"));
        consola->setReadOnly(true);
        btnsig = new QPushButton(centralWidget);
        btnsig->setObjectName(QStringLiteral("btnsig"));
        btnsig->setGeometry(QRect(120, 690, 80, 21));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(460, 100, 611, 581));
        graphicsView = new QGraphicsView(groupBox_3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 30, 591, 541));
        graphicsView->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 50, 541, 481));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(730, 690, 80, 21));
        principal->setCentralWidget(centralWidget);

        retranslateUi(principal);

        QMetaObject::connectSlotsByName(principal);
    } // setupUi

    void retranslateUi(QMainWindow *principal)
    {
        principal->setWindowTitle(QApplication::translate("principal", "principal", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("principal", "CONFURACION INICIAL", Q_NULLPTR));
        pushButton->setText(QApplication::translate("principal", "INICIAR", Q_NULLPTR));
        label->setText(QApplication::translate("principal", "NUMERO DE AVIONES:", Q_NULLPTR));
        label_2->setText(QApplication::translate("principal", "NUMERO DE ESCRITORIOS: ", Q_NULLPTR));
        label_3->setText(QApplication::translate("principal", "ESTACIONES DE MANTENIMIENTO:", Q_NULLPTR));
        label_4->setText(QApplication::translate("principal", "NUMERO DE TURNOS: ", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("principal", "CONSOLA", Q_NULLPTR));
        consola->setHtml(QApplication::translate("principal", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Fixedsys'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'MS Shell Dlg 2'; font-size:8pt;\"><br /></p></body></html>", Q_NULLPTR));
        btnsig->setText(QApplication::translate("principal", "SIGUIENTE", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("principal", "IMAGEN", Q_NULLPTR));
        label_5->setText(QString());
        pushButton_2->setText(QApplication::translate("principal", "Ver en Visor", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal: public Ui_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
