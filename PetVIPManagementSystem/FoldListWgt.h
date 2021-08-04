#ifndef FOLDLISTWGT_H
#define FOLDLISTWGT_H

#include <QWidget>

class FoldListItemWgt;

namespace Ui {
class FoldListWgt;
}

class FoldListWgt : public QWidget
{
    Q_OBJECT

public:
    explicit FoldListWgt(QWidget *parent = nullptr);
    ~FoldListWgt();

    void addFoldItem(QString title);
    FoldListItemWgt* getItemByName(QString title);

private:
    Ui::FoldListWgt *ui;

    QList<FoldListItemWgt*> m_itemList;
};

#endif // FOLDLISTWGT_H
