#include <iostream>
#include "AutonomousVehicle.h"
#include "Boat.h"
#include "Car.h"
#include <vector>

int main() {
    std::vector<AutonomousVehicle*> vehicles;
    vehicles.push_back(new Boat(500, 100, {20, 0}, "Boat1", 1.3));
    vehicles.push_back(new Car(80, 100, {0, 0}, "Car1"));
    vehicles.push_back(new Boat(120, 100, {20, 0}, "Boat2" , 1.3));

    AutonomousVehicle::assessVehicles(vehicles);

    for (auto v : vehicles) {
        delete v;
    }

}