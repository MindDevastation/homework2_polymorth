#ifndef CHECKIPADDRESS_H
#define CHECKIPADDRESS_H

#include <iostream>
#include <stdlib.h>
#include <QString>


class IPAddress
{
protected:
    unsigned short firstBit;
    unsigned short secondBit;
    unsigned short thirdBit;
    unsigned short fourthBit;
public:
    IPAddress();
    IPAddress(unsigned short one, unsigned short two, unsigned short three, unsigned short four);

    unsigned short getFBit ();

    unsigned short getSBit ();

    unsigned short getThBit ();

    unsigned short getFoBit ();

    QString printIpAddress();
};


class IPAddressChecked : public IPAddress
{
    bool check;
public:
    IPAddressChecked ();
    IPAddressChecked (unsigned short one, unsigned short two, unsigned short three, unsigned short four) : IPAddress(one, two, three, four){}
    QString printIpAddress();
    void setCheck(bool newCheck);
    bool getCheck();
    QString classACheck ();
    QString classBCheck ();
    QString classCCheck ();
    QString classDCheck ();
    QString classECheck ();
};

#endif // CHECKIPADDRESS_H
