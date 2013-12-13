#ifndef CONF_QT_H
#define CONF_QT_H

#include <QSettings>
#include <QString>
#include <QApplication>

class conf_qt
{
public:
    QSettings *config;
    conf_qt(QString filename);
    void CreateConf(QString filename) ;
    void ReadConf(QString filename);
};

#endif // CONF_QT_H
