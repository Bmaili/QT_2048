#ifndef EXPLANATION_H
#define EXPLANATION_H

#include <QWidget>

namespace Ui {
class explanation;
}

class explanation : public QWidget
{
    Q_OBJECT

public:
    explicit explanation(QWidget *parent = nullptr);
    ~explanation();

private:
    Ui::explanation *ui;

private slots:
    void on_ok_clicked();
};

#endif // EXPLANATION_H
