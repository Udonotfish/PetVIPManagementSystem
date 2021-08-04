#include "FoldListWgt.h"
#include "ui_FoldListWgt.h"
#include "FoldListItemWgt.h"

FoldListWgt::FoldListWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FoldListWgt)
{
    ui->setupUi(this);
}

FoldListWgt::~FoldListWgt()
{
    delete ui;
}

void FoldListWgt::addFoldItem(QString title)
{
    FoldListItemWgt* item = new FoldListItemWgt;
    item->setTitle(title);
    item->setVisible(false);

    m_itemList.push_back(item);
}

FoldListItemWgt *FoldListWgt::getItemByName(QString title)
{
    FoldListItemWgt* findItem = nullptr;
    for(auto item : m_itemList)
    {
        if(findItem->getTitle() == title)
        {
            findItem = item;
            break;
        }
    }
    return findItem;
}
