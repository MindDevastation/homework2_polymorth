#include "checkipaddress.h"
#include "qvariant.h"
#include <QString>

IPAddress::IPAddress()
{
    firstBit = 0;
    secondBit = 0;
    thirdBit = 0;
    fourthBit = 0;
}

IPAddress::IPAddress(unsigned short one, unsigned short two, unsigned short three, unsigned short four){
    firstBit = one;
    secondBit = two;
    thirdBit = three;
    fourthBit = four;
}

unsigned short IPAddress::getFBit (){return firstBit;}

unsigned short IPAddress::getSBit (){return secondBit;}

unsigned short IPAddress::getThBit (){return thirdBit;}

unsigned short IPAddress::getFoBit (){return fourthBit;}

QString IPAddress::printIpAddress(){
    QString info = "Nan";
    return info;
}

void IPAddressChecked::setCheck(bool newCheck){check = newCheck;}
bool IPAddressChecked::getCheck(){return check;}

QString IPAddressChecked::classACheck (){
    QString info;
    if (getFBit() >= 0 && getFBit() <= 127 && getSBit() <= 255 && getThBit() <= 255 && getFoBit() <=255){
        setCheck(true);
        info = QVariant(getCheck()).toString();
        return info;
    }else{
        setCheck(false);
        info = QVariant(getCheck()).toString();
        return info;
    }
}

QString IPAddressChecked::classBCheck (){
    QString info;
    if (getFBit() >= 128 && getFBit() <= 191 && getThBit() <= 255 && getFoBit() <=255){
        if(getSBit() >= 0 && getSBit() <= 255){
            setCheck(true);
            info = QVariant(getCheck()).toString();
            return info;
        }else{
            setCheck(false);
            info = QVariant(getCheck()).toString();
            return info;
        }
    }else{
        setCheck(false);
        info = QVariant(getCheck()).toString();
        return info;
    }
}

QString IPAddressChecked::classCCheck (){
    QString info;
    if (getFBit() >= 192 && getFBit() <= 223 && getFoBit() <=255){
        if(getSBit() >= 0 && getSBit() <= 255){
            if(getThBit() >= 0 && getThBit() <= 255){
                setCheck(true);
                info = QVariant(getCheck()).toString();
                return info;
            }else{
                setCheck(false);
                info = QVariant(getCheck()).toString();
                return info;
            }
        }else{
            setCheck(false);
            info = QVariant(getCheck()).toString();
            return info;
        }
    }else{
        setCheck(false);
        info = QVariant(getCheck()).toString();
        return info;
    }
}

QString IPAddressChecked::classDCheck (){
    QString info;
    if (getFBit() >= 224 && getFBit() <= 239 && getSBit() <= 255 && getThBit() <= 255 && getFoBit() <=255){
        setCheck(true);
        info = QVariant(getCheck()).toString();
        return info;
    }else{
        setCheck(false);
        info = QVariant(getCheck()).toString();
        return info;
    }
}

QString IPAddressChecked::classECheck (){
    QString info;
    if (getFBit() >= 240 && getFBit() <= 255 && getSBit() <= 255 && getThBit() <= 255 && getFoBit() <=255){
        setCheck(true);
        info = QVariant(getCheck()).toString();
        return info;
    }else{
        setCheck(false);
        info = QVariant(getCheck()).toString();
        return info;
    }
}

QString IPAddressChecked::printIpAddress(){
    QString info = QString::number(firstBit) + "." + QString::number(secondBit) + "." + QString::number(thirdBit) + "." + QString::number(fourthBit) + " - ";
    return info;
}

IPAddressChecked::IPAddressChecked(){
    check = false;
}


