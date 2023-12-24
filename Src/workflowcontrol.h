#ifndef WORKFLOWCONTROL_H
#define WORKFLOWCONTROL_H

#include <QObject>

class WorkflowControl : public QObject
{
    Q_OBJECT
public:
    explicit WorkflowControl(QObject *parent = nullptr);


public slots:
    void openRepo();
    void cloneRepo();

signals:

};

#endif // WORKFLOWCONTROL_H
