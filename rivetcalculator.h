#ifndef RIVETCALCULATOR_H
#define RIVETCALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class RivetCalculator; }
QT_END_NAMESPACE

class RivetCalculator : public QMainWindow
{
    Q_OBJECT

public:
    RivetCalculator(QWidget *parent = nullptr);
    ~RivetCalculator();

private slots:
    void on_pushButton_clicked();

private:
    Ui::RivetCalculator *ui;
};
#endif // RIVETCALCULATOR_H
