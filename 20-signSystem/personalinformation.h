#ifndef PERSONALINFORMATION_H
#define PERSONALINFORMATION_H

#include <QWidget>

namespace Ui {
class PersonalInformation;
}

class PersonalInformation : public QWidget
{
    Q_OBJECT

public:
    explicit PersonalInformation(QWidget *parent = 0);
    ~PersonalInformation();

    void init(QString sno,QString sname);

private:
    Ui::PersonalInformation *ui;
};

#endif // PERSONALINFORMATION_H
