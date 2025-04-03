//
// Created by David Chan on 3/4/25.
//

#ifndef CAR_H
#define CAR_H
#include "AutonomousVehicle.h"


class Car : public AutonomousVehicle {
public:
    Car(double mS, double fC, std::pair<int, int> cL, std::string n);
    ~Car() override;
    double moveTo(int x, int y) override;
};



#endif //CAR_H
