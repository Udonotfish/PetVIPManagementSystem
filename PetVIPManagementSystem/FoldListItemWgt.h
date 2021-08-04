#ifndef FOLDLISTITEMWGT_H
#define FOLDLISTITEMWGT_H

#include <QWidget>
#include <QPushButton>

namespace Ui {
class FoldListItemWgt;
}

class FoldListItemWgt : public QWidget
{
    Q_OBJECT

public:
    explicit FoldListItemWgt(QWidget *parent = nullptr);
    ~FoldListItemWgt();

    void setTitle(QString title);
    QString getTitle();

    void addWidgetBtn(QString text);
    QPushButton* getBtnByName(QString name);

private:
    Ui::FoldListItemWgt *ui;

    QList<QPushButton*> m_btnList;
};

#endif // FOLDLISTITEMWGT_H
