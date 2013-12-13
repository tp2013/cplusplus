#include "conf_qt.h"

conf_qt::conf_qt(QString filename)
{
    config =new QSettings(filename,QSettings::IniFormat);
}


int random(qint32 N) {
    return qrand() % N;
}

void conf_qt::CreateConf(QString filename)
{

    QSettings config(filename,QSettings::IniFormat);
    config.beginGroup("basic");
    config.setValue("size_h",50);
    config.setValue("size_w",50);
    config.setValue("round_long",50);
    config.endGroup();

    config.beginWriteArray("units",10);

    for(int i = 0; i< 10; i++) {
        config.setArrayIndex(i);
        config.setValue("type",random(5));
        config.setValue("pos_x",random(50));
        config.setValue("pox_y",random(50));
    }
    config.endArray();

    config.sync();

}

void conf_qt::ReadConf(QString filename)
{
}
