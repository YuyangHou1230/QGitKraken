/********************************************************************************
** Form generated from reading UI file 'repositywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPOSITYWIDGET_H
#define UI_REPOSITYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include <View/commandwidget.h>

QT_BEGIN_NAMESPACE

class Ui_ReposityWidget
{
public:
    QGridLayout *gridLayout;
    QFrame *InfoFrame;
    QFrame *CommitsFrame;
    QFrame *DetailFrame;
    CommandWidget *CommandFrame;

    void setupUi(QWidget *ReposityWidget)
    {
        if (ReposityWidget->objectName().isEmpty())
            ReposityWidget->setObjectName(QString::fromUtf8("ReposityWidget"));
        ReposityWidget->resize(1043, 628);
        gridLayout = new QGridLayout(ReposityWidget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        InfoFrame = new QFrame(ReposityWidget);
        InfoFrame->setObjectName(QString::fromUtf8("InfoFrame"));
        InfoFrame->setMinimumSize(QSize(200, 0));
        InfoFrame->setFrameShape(QFrame::StyledPanel);
        InfoFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(InfoFrame, 1, 0, 1, 1);

        CommitsFrame = new QFrame(ReposityWidget);
        CommitsFrame->setObjectName(QString::fromUtf8("CommitsFrame"));
        CommitsFrame->setMinimumSize(QSize(0, 0));
        CommitsFrame->setFrameShape(QFrame::StyledPanel);
        CommitsFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(CommitsFrame, 1, 1, 1, 1);

        DetailFrame = new QFrame(ReposityWidget);
        DetailFrame->setObjectName(QString::fromUtf8("DetailFrame"));
        DetailFrame->setMinimumSize(QSize(400, 0));
        DetailFrame->setFrameShape(QFrame::StyledPanel);
        DetailFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(DetailFrame, 1, 2, 1, 1);

        CommandFrame = new CommandWidget(ReposityWidget);
        CommandFrame->setObjectName(QString::fromUtf8("CommandFrame"));
        CommandFrame->setMinimumSize(QSize(0, 45));
        CommandFrame->setFrameShape(QFrame::StyledPanel);
        CommandFrame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(CommandFrame, 0, 0, 1, 3);

        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(1, 1);

        retranslateUi(ReposityWidget);

        QMetaObject::connectSlotsByName(ReposityWidget);
    } // setupUi

    void retranslateUi(QWidget *ReposityWidget)
    {
        ReposityWidget->setWindowTitle(QCoreApplication::translate("ReposityWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReposityWidget: public Ui_ReposityWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPOSITYWIDGET_H
