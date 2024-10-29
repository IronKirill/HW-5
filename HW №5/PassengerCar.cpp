#include "PassengerCar.h"

PassengerCar::PassengerCar()
{
	brand = "undefined";
	color = "undefined";
	fuelTankVolume = 0;
	fuelConsumption = 0;
}

PassengerCar::PassengerCar(string brand, string color, double fuelTankVolume, double fuelConsumption)
{
	this->brand = brand;
	this->color = color;
	this->fuelTankVolume = fuelTankVolume;
	this->fuelConsumption = fuelConsumption;
}

void PassengerCar::setBrand(string brand)
{
	this->brand = brand;
}

void PassengerCar::setColor(string color)
{
	this->color = color;
}

void PassengerCar::setFuelTankVolume(double fuelTankVolume)
{
	this->fuelTankVolume = fuelTankVolume;
}

void PassengerCar::setFuelConsumption(double fuelConsumption)
{
	this->brand = brand;
}

string PassengerCar::getBrand() const
{
	return brand;
}

string PassengerCar::getColor() const
{
	return color;
}

double PassengerCar::getFuelTankVolume() const
{
	return fuelTankVolume;
}

double PassengerCar::getFuelConsumption() const
{
	return fuelConsumption;
}

double PassengerCar::calculateDistance() const
{
	return (fuelTankVolume / fuelConsumption) * 100;
}

void PassengerCar::showInfo() const
{
	cout << "Brand: " << brand << endl;
	cout << "Color: " << color << endl;
	cout << "The volume of the fuel tank: " << fuelTankVolume << " l" << endl;
	cout << "Gasoline consumption rate: " << fuelConsumption << " l / 100 km" << endl;
	cout << "Maximum distance on a full tank: " << calculateDistance() << " km" << endl;
}