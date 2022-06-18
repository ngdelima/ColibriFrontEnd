#ifndef COLIBRI_H
#define COLIBRI_H

#include <QMainWindow>
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>

namespace Ui {
class Colibri;
}

class Colibri : public QMainWindow
{
    Q_OBJECT

public:
    explicit Colibri(QWidget *parent = nullptr);
    ~Colibri();

    void update(QJsonDocument* qJasonDoc);

private:
    Ui::Colibri *ui;
};

#endif // COLIBRI_H
