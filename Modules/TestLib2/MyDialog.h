#ifndef TESTLIB2_MYDIALOG_H
#define TESTLIB2_MYDIALOG_H

#include <QDialog>

namespace Ui {
    class Dialog;
}

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    ~MyDialog();

private:
    Ui::Dialog *ui;
};

#endif // TESTLIB2_MYDIALOG_H

