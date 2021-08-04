#include "FoldListItemWgt.h"
#include "ui_FoldListItemWgt.h"

FoldListItemWgt::FoldListItemWgt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FoldListItemWgt)
{
    ui->setupUi(this);
    connect(ui->titleBtn, &QPushButton::clicked, [this](bool checked)
    {
       ui->widget->setHidden(!checked);
    });
}

FoldListItemWgt::~FoldListItemWgt()
{
    delete ui;
}

void FoldListItemWgt::setTitle(QString title)
{
    ui->titleBtn->setText(title);
}

QString FoldListItemWgt::getTitle()
{
    return ui->titleBtn->text();
}

void FoldListItemWgt::addWidgetBtn(QString text)
{
    QPushButton* btn = new QPushButton(text);
    ui->widget->layout()->addWidget(btn);

    m_btnList.push_back(btn);
}

QPushButton *FoldListItemWgt::getBtnByName(QString name)
{
    QPushButton* findBtn = nullptr;
    for(auto btn : m_btnList)
    {
        if(btn->text() == name)
        {
            findBtn = btn;
            break;
        }
    }
    return findBtn;
}
