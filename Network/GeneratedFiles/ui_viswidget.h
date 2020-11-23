/********************************************************************************
** Form generated from reading UI file 'viswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISWIDGET_H
#define UI_VISWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CVisWidget
{
public:

    void setupUi(QWidget *CVisWidget)
    {
        if (CVisWidget->objectName().isEmpty())
            CVisWidget->setObjectName(QStringLiteral("CVisWidget"));
        CVisWidget->resize(400, 300);

        retranslateUi(CVisWidget);

        QMetaObject::connectSlotsByName(CVisWidget);
    } // setupUi

    void retranslateUi(QWidget *CVisWidget)
    {
        CVisWidget->setWindowTitle(QApplication::translate("CVisWidget", "CVisWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class CVisWidget: public Ui_CVisWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISWIDGET_H
