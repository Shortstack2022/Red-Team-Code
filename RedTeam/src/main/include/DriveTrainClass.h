#pragma once

#include <ctre/Phoenix.h> 

//pheonix runs motors^^

class DriveTrainClass
{
 public:
    DriveTrainClass();
    void initDriveTrainClass();
    void TankDrive (double, double);

 private:
    VictorSPX *mLeft1;
    VictorSPX *mLeft2; 
    VictorSPX *mLeft3;

    TalonSRX *mRight1;
    VictorSPX *mRight2;
    VictorSPX *mRight3;

};

