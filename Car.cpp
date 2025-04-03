//
// Created by David Chan on 3/4/25.
//

#include "Car.h"
#include "AutonomousVehicle.h"

Car::Car(const double mS, const double fC, const std::pair<int, int> cL, std::string n) : AutonomousVehicle(mS, fC, cL, n) {

}

Car::~Car() {
    std::cout << "Car is removed" << std::endl;
}

double Car::moveTo(const int x, const int y) {
    const double distance = std::sqrt(std::pow((currentLocation.first - x), 2) + std::pow((currentLocation.second - y), 2));
    if (fuelCap >= fuelConsumption(distance))
    {
        fuelCap -= fuelConsumption(distance);
        currentLocation = {x, y};
        return distance / maxSpeed;
    }
    std::cout << "AutonomousVehicle cannot make it that far";
    return std::numeric_limits<double>::infinity();
}