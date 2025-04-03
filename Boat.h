//
// Created by David Chan on 3/4/25.
//

#ifndef BOAT_H
#define BOAT_H
#include <iostream>
#include "AutonomousVehicle.h"


class Boat : public AutonomousVehicle{
    double waterResistance;
public:
    Boat(double mS, double fC, std::pair<int, int> cL, std::string n, double wR);
    ~Boat() override;
    double moveTo(int x, int y) override;
    double fuelConsumption(double distance) override;
};



#endif //BOAT_H
