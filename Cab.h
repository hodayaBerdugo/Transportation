
#ifndef TRANSPORTATION_CAB_H
#define TRANSPORTATION_CAB_H

#include "CarManufacturer.h"
#include "Color.h"

/**
 * this class defines an abstract class of Cab.
 */
class Cab {

protected:
    int id;
    int speed;
    CarManufacturer manufacturer;
    Color color;
    double tariff;
    bool isOccupied;
public:
    Cab(int id, int speed, CarManufacturer manufacturer, Color color, double tariff);
    Cab();
    virtual ~Cab();
    virtual bool getIsOccupied() = 0;
    virtual void setOccupation(bool occupation) = 0;
    virtual double getTariff() = 0;
    virtual int getID() = 0;
};

#endif //TRANSPORTATION_CAB_H