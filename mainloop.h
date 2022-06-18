#ifndef MAINLOOP_H
#define MAINLOOP_H

#include"qtimer.h"
#include"colibri.h"
#include"communication.h"
#include <QDebug>

class MainLoop : public QObject
{
    Q_OBJECT
public:

    MainLoop()
    {
        mTimer = new QTimer(this);
        connect(mTimer, SIGNAL(timeout()), this, SLOT(onClockTick()));
    }

    virtual ~MainLoop()
    {}

    void run()
    {
        if (mCommunication.start("","",""))
        {
            mColibriWindow.show();
            mTimer->start(250);
        }
        else
        {
            qDebug() << "Communication failed";
        }
    }

public slots:
    void onClockTick()
    {
        update();
    }

private:

    void update()
    {
        // Code for updating labels with drone data
        qDebug() << "MainLoop: update called";
        mColibriWindow.update(mCommunication.update());
    }

    Colibri mColibriWindow;
    Communication mCommunication;
    QTimer* mTimer;
};

#endif // MAINLOOP_H
