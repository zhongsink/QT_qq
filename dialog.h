#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    QString username;

private slots:
    void on_pushButton_clicked();
    void onButtonMinClicked();
    void onButtonCloseClicked();


private:
    Ui::Dialog *ui;
    QPushButton* m_keyboardButton;
};

#endif // DIALOG_H
