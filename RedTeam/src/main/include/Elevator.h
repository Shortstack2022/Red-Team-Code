#pragma once 

#include <ctre/Phoenix.h> 
#include  "frc/SpeedController.h"
#include "units/units.h"


class IntakeClass

{
    public:
    //variables private functions public
    IntakeClass();
    void initIntakeClass();
    void runIntake(bool,bool);
    void resetEncoders(); 
    //bool is for when you want on and off single speed motors
    //two bools for two buttons, think b=button


    private:
    TalonFX *mIntake;
    
};
