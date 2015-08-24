#ifndef TERMINALPROCESS_H
#define TERMINALPROCESS_H

#include <QObject>


class TerminalProcess : public QObject
{
    Q_OBJECT
public:
    explicit TerminalProcess(QString fileName, QObject *parent = 0);
   // ~TerminalProcess();

    int start();
    //void stop();

signals:
    //void dataAvailable();

public slots:

private:
    QString m_fileName;
};

#endif // TERMINALPROCESS_H
