#ifndef CONFIG_H
#define CONFIG_H

#include <QApplication>
#include <QXmlStreamWriter>
#include <QFile>




class config
{
public:
    QXmlStreamWriter* xmlwrite = new QXmlStreamWriter();
    config();
    void writeAll();
    void writeElem(QString name , QString val);
    void writeConf();
    void writeUnit(qint32 type , qint32 position_x , qint32 position_y);
    void writeUnits();



};

#endif // CONFIG_H
