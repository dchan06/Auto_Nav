//
// Created by David Chan on 3/4/25.
//

#ifndef AUTONOMOUSVEHICLE_H
#define AUTONOMOUSVEHICLE_H

#include<iostream>
#include <string>

class AutonomousVehicle {
protected:
    double maxSpeed;
    double fuelCap;
    std::pair<int, int> currentLocation;
    std::string name;
    double timeTaken;
    void setTimeTaken(double time);
public:
    AutonomousVehicle(double mS, double fC, std::pair<int, int> cL, std::string n);
    virtual ~AutonomousVehicle();
    virtual double moveTo(int x, int y) = 0;
    virtual double fuelConsumption(double distance);
    static void assessVehicles(const std::vector<AutonomousVehicle*> &veh);
};



#endif //AUTONOMOUSVEHICLE_H
