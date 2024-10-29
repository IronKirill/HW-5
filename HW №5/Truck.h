#pragma once
#include "PassengerCar.h"

class Truck : public PassengerCar
{
private:
    double loadCapacity;

public:
    Truck();
    Truck(string brand, string color, double fuelTankVolume, double fuelConsumption,
        double loadCapacity);

    double calculateCostPerTon(double fuelPricePerLiter)const;
    ~Truck();

    void showInfo()const;
};