#include "colibri.h"
#include "ui_colibri.h"
#include <QDebug>

Colibri::Colibri(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Colibri)
{
    ui->setupUi(this);
}

Colibri::~Colibri()
{
    delete ui;
}

void Colibri::update(QJsonDocument* qJasonDoc)
{
    qDebug() << "ColibriUI: update called";
    // Add QJsonParseError::NoError
    if(!qJasonDoc->isNull() &&
       !qJasonDoc->isEmpty())
    {
        if(qJasonDoc->isObject())
        {
            QJsonObject qJasonObj = qJasonDoc->object();

            if(qJasonObj.contains("Controller"))
            {

            }


        }
    }
}
