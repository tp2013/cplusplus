#include "config.h"

config::config()
{

}

void config::writeElem(QString name , QString val) {
    xmlwrite->writeStartElement(name);
    xmlwrite->writeCharacters(val);
    xmlwrite->writeEndElement();
}

void config::writeConf() {

    xmlwrite->writeStartElement("params");
    writeElem("size_h","50");
    writeElem("size_w","50");
    writeElem("round_long","180");
    xmlwrite->writeEndElement();
}

void config::writeUnit(qint32 type , qint32 position_x , qint32 position_y) {

    xmlwrite->writeStartElement("unit");

    writeElem("type", QString::number(type) );
    writeElem("pos_x",QString::number(position_x) );
    writeElem("pos_y",QString::number(position_y) );
    xmlwrite->writeEndElement();
}



void config::writeUnits() {
    xmlwrite->writeStartElement("units");
    for(int i = 0; i < 50 ; i++) {
//        /writeUnit(random(5) , random(50) , random(50));
    }
    xmlwrite->writeEndElement();
}

void config::writeAll() {
    QFile file("config.xml");
    file.open(QIODevice::WriteOnly);
            // Открываем и настраиваем для создания XML
    xmlwrite->setAutoFormatting(true);
    xmlwrite->setDevice(&file);
    xmlwrite->writeStartDocument();

    xmlwrite->writeStartElement("config");
    writeConf();
    writeUnits();
    xmlwrite->writeEndElement();

    xmlwrite->writeEndDocument();
    file.close();
}
