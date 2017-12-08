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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_principal
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txtavion;
    QLabel *label_2;
    QLineEdit *txtescritorio;
    QLabel *label_3;
    QLineEdit *txtmantenimiento;
    QGroupBox *groupBox_2;

    void setupUi(QMainWindow *principal)
    {
        if (principal->objectName().isEmpty())
            principal->setObjectName(QStringLiteral("principal"));
        principal->resize(1008, 580);
        centralWidget = new QWidget(principal);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 311, 151));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 120, 80, 21));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 286, 80));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txtavion = new QLineEdit(widget);
        txtavion->setObjectName(QStringLiteral("txtavion"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txtavion);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txtescritorio = new QLineEdit(widget);
        txtescritorio->setObjectName(QStringLiteral("txtescritorio"));

        formLayout->setWidget(1, QFormLayout::FieldRole, txtescritorio);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txtmantenimiento = new QLineEdit(widget);
        txtmantenimiento->setObjectName(QStringLiteral("txtmantenimiento"));

        formLayout->setWidget(2, QFormLayout::FieldRole, txtmantenimiento);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 310, 120, 80));
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
        groupBox_2->setTitle(QApplication::translate("principal", "CONSOLA", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class principal: public Ui_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINCIPAL_H
