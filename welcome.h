#ifndef WELCOME_H
#define WELCOME_H

#include <QWidget>

namespace Ui {
class welcome;
}

class welcome : public QWidget
{
    Q_OBJECT

public:
    explicit welcome(QWidget *parent = nullptr);
    ~welcome();

private:
    Ui::welcome *ui;

private slots:
    void on_start_clicked();
    void on_explanation_clicked();
    void on_end_clicked();
};

#endif // WELCOME_H
