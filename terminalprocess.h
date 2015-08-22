#ifndef TERMINALPROCESS_H
#define TERMINALPROCESS_H

#include <QObject>

class TerminalProcess : public QObject
{
    Q_OBJECT
public:
    explicit TerminalProcess(QObject *parent = 0);

signals:

public slots:
};

#endif // TERMINALPROCESS_H
