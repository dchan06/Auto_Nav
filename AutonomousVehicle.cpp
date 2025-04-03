//
// Created by David Chan on 3/4/25.
//

#include "AutonomousVehicle.h"
#include <iostream>
#include <math.h>
#include <vector>

AutonomousVehicle::AutonomousVehicle(const double mS, const double fC, const std::pair<int, int> cL, std::string n) : maxSpeed(mS), fuelCap(fC), currentLocation(cL), name(n){

}

AutonomousVehicle::~AutonomousVehicle() {
    std::cout << "Vehicle removed" << std::endl;
}

double AutonomousVehicle::moveTo(const int x, const int y) {
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

double AutonomousVehicle::fuelConsumption(const double distance){
    const double rateOfConsumption = 0.05;
    return rateOfConsumption * distance;
}

void AutonomousVehicle::setTimeTaken() {
    timeTaken = moveTo(100,100);
}

void AutonomousVehicle::assessVehicles(const std::vector<AutonomousVehicle*> &veh) {
    int fastestVeh;
    for (auto v : veh) {
        v->setTimeTaken();
    }
    for (int i = 1; i < veh.size(); i++) {
        fastestVeh = (veh[i]->timeTaken < veh[i-1]->timeTaken ? i : i-1);
    }
    std::cout << veh[fastestVeh]->name << std::endl;
}