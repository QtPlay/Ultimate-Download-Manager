#ifndef DOWNLOADFILE_H
#define DOWNLOADFILE_H

#include "wgetprocess.h"
#include <QDir>

class DownloadFile
{
public:
    // Methods
    DownloadFile(QString url);
    ~DownloadFile();
    // TODO: Should be removed
    const WgetProcess* getWgetProcess(){return &wp;}
    // in the future
    void download();
    void stopProcess();
    void start();
    void pause();
    void restart();

    // Variables
    int tabIndex;
    bool resumable;
    bool started;
    QString outdir;
    QString fullPath;
    QString miscArgs;
    WgetProgressObject *progressObject;
    bool overwriteRestart;

private:
    QStringList args;
    WgetProcess wp;
    QString url;
    void setArgs();
};

#endif // DOWNLOADFILE_H
