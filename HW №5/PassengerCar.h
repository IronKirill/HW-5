#pragma once
#include <iostream>
#include <string>
using namespace std;

class PassengerCar
{
protected:
    string brand;
    string color;
    double fuelTankVolume;
    double fuelConsumption;

public:
    PassengerCar();
    PassengerCar(string brand, string color, double fuelTankVolume, double fuelConsumption);

    void setBrand(string brand);
    void setColor(string color);
    void setFuelTankVolume(double fuelTankVolume);
    void setFuelConsumption(double fuelConsumption);

    string getBrand()const;
    string getColor()const;
    double getFuelTankVolume()const;
    double getFuelConsumption()const;
    double calculateDistance()const;

    void showInfo()const;
};