//
// Created by David Chan on 3/4/25.
//

#include "Boat.h"

Boat::Boat(const double mS, const double fC, const std::pair<int, int> cL, std::string n, const double wR) : AutonomousVehicle(mS, fC, cL, n)
{
    waterResistance = (wR > 1) ? wR : 1;
}

Boat::~Boat() {
    std::cout << "Boat removed" << std::endl;
}

double Boat::moveTo(int x, int y) {
    const double distance = std::sqrt(std::pow((currentLocation.first - x), 2) + std::pow((currentLocation.second - y), 2));
    if (fuelCap >= fuelConsumption(distance)) {
        fuelCap -= fuelConsumption(distance);
        currentLocation = {x, y};
        return (distance * waterResistance) / maxSpeed;
    }
    std::cout << "Boat cannot reach the location" << std::endl;
    return std::numeric_limits<double>::infinity();
}

double Boat::fuelConsumption(double distance){
    const double rateOfConsumption = 0.5;
    return distance * rateOfConsumption * waterResistance;
}