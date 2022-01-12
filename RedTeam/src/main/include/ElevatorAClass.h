#pragma once

#include <ctre/Phoenix.h> 

//pheonix runs motors^^

class ElevatorAClass
{
 public:
    ElevatorAClass();
    void initElevatorAClass();
    void manualElevator(double);

 private:
   TalonSRX *elevatorTalon;
   VictorSPX *elevatorv1;
   VictorSPX *elevatorv2;
   VictorSPX *elevatorv3;

};

