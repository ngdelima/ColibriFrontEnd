#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include"qstring.h"
#include <QJsonDocument>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include"utility"

class Communication
{
public:

    Communication(){}

    bool start(QString ip, QString port, QString controllerPort)
    {
        //Start comms
        return true;
    }

    QJsonDocument* update()
    {
        //Replace this with req resp result
        QString str = "";

        QJsonDocument* qJsonDoc = new QJsonDocument(QJsonDocument::fromJson(str.toUtf8()));
        return qJsonDoc;
    }

private:

};

/*
  {
    "drone":
    {
        "sensors":
        {
            "gps":{"latitude":0, "longitude":0},
            "accelerometer":{"x":0,"y":0,"z":0},
            "gyroscope":{"x":0,"y":0,"z":0},
            "magnetometer":{"x":0,"y":0,"z":0},
            "pressure":0,
            "temperature":0
        },
    },
    "controller":
    {
        "estimations":
        {
            "position":{"latitude":0, "longitud":0},
            "altitude":0,
            "orientation":
            {
                "euler":{"x":0,"y":0,"z":0},
                "quaternion":{"x":0,"y":0,"z":0,"w":0}
            }
        }
    }
  }
*/

#endif // COMMUNICATION_H
