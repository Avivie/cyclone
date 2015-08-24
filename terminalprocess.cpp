#include "terminalprocess.h"

#include <pty.h>
#include <unistd.h>

TerminalProcess::TerminalProcess(QString fileName, QObject *parent)
    : QObject(parent),
      m_fileName(fileName)
{
}

int TerminalProcess::start()
{
    int fd;
    QByteArray fname = m_fileName.toUtf8();

    pid_t pid = forkpty(&fd, NULL, NULL, NULL);

    char *argv[] = { (char *)fname.constData(), NULL };
    char *envp[] = { "TERM=xterm", NULL };
    switch (pid) {
        /* fork failed */
        case -1:
            return -1;
        /* child process context */
        case 0:
            execlp(fname, argv[0], NULL);
            break;
    }

//    return pid;
    const char *cmd = "less /home/avivh/code/cyclone/main.cpp\n";
    write(fd, cmd, strlen(cmd) + 1);
    unsigned char buf[256];
    while (1) {
        int n;
        if (n = read(fd, buf, 255))
        {
            buf[n] = 0;
            qWarning((const char *)buf);
        }
    }
}
