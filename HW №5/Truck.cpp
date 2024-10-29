#include "Truck.h"

Truck::Truck()
{
    loadCapacity = 0;
}

Truck::Truck(string brand, string color, double fuelTankVolume, double fuelConsumption, 
    double loadCapacity) : PassengerCar(brand, color, fuelTankVolume, fuelConsumption)
{
    this->loadCapacity = loadCapacity;
}

double Truck::calculateCostPerTon(double fuelPricePerLiter) const
{
    return ((fuelConsumption / 100) * fuelPricePerLiter) / loadCapacity;
}

Truck::~Truck()
{
    cout << "The truck object has been destroyed.\n";
}

void Truck::showInfo() const
{
    PassengerCar::showInfo();
    cout << "Carrying capacity: " << loadCapacity << " tons" << endl;
}
