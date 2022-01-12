#include "Elevator.h"

IntakeClass::IntakeClass(){
mIntake = new TalonFX(10);
}

void IntakeClass::initIntakeClass(){}

void IntakeClass::runIntake(bool forward,bool reverse){
//This is all intake below- outtake falls into intake outtake=ReverseIntake
mIntake->Set(ControlMode::PercentOutput,(forward-reverse)*0.75);
}

//mIntake->Set is how you would say run motor