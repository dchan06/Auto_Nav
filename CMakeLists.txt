cmake_minimum_required(VERSION 3.30)
project(Auto_Nav)

set(CMAKE_CXX_STANDARD 20)

add_executable(Auto_Nav main.cpp
        AutonomousVehicle.cpp
        AutonomousVehicle.h
        Boat.cpp
        Boat.h
        Drone.cpp
        Drone.h
        Car.cpp
        Car.h)
