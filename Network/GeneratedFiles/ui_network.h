/********************************************************************************
** Form generated from reading UI file 'network.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORK_H
#define UI_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNetworkClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CNetworkClass)
    {
        if (CNetworkClass->objectName().isEmpty())
            CNetworkClass->setObjectName(QStringLiteral("CNetworkClass"));
        CNetworkClass->resize(600, 400);
        menuBar = new QMenuBar(CNetworkClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        CNetworkClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CNetworkClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CNetworkClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CNetworkClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CNetworkClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CNetworkClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CNetworkClass->setStatusBar(statusBar);

        retranslateUi(CNetworkClass);

        QMetaObject::connectSlotsByName(CNetworkClass);
    } // setupUi

    void retranslateUi(QMainWindow *CNetworkClass)
    {
        CNetworkClass->setWindowTitle(QApplication::translate("CNetworkClass", "CNetwork", 0));
    } // retranslateUi

};

namespace Ui {
    class CNetworkClass: public Ui_CNetworkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORK_H
