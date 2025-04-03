#include <iostream>
#include "AutonomousVehicle.h"
#include "Boat.h"
#include "Car.h"
#include <vector>

int main() {
    std::vector<AutonomousVehicle*> vehicles;
    vehicles.push_back(new Boat(50, 100, {0, 0}, "Boat1", 1.3));
    vehicles.push_back(new Car(50, 100, {0, 0}, "Car1"));

    AutonomousVehicle::assessVehicles(vehicles);

    for (auto v : vehicles) {
        delete v;
    }

}