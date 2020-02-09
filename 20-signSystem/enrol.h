#ifndef ENROL_H
#define ENROL_H

#include <QWidget>

namespace Ui {
class Enrol;
}

class Enrol : public QWidget
{
    Q_OBJECT

public:
    explicit Enrol(QWidget *parent = 0);
    ~Enrol();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Enrol *ui;
};

#endif // ENROL_H
