#include "PassengerCar.h"
#include "Truck.h"

int main()
{
    PassengerCar a("Toyota", "Red", 50, 8);
    a.showInfo();
    cout << endl;

    Truck b("BMW", "Blue", 200, 25, 10);
    b.showInfo();
    cout << "Cost of transportation of one ton per one km: "
        << b.calculateCostPerTon(1.5) << " UAH/KM" << endl;
}