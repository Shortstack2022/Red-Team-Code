#include "ElevatorAClass.h"

ElevatorAClass::ElevatorAClass()

{

elevatorv1 = new VictorSPX(11);
elevatorv2 = new VictorSPX(12);
elevatorv3 = new VictorSPX(17);
elevatorTalon = new TalonSRX(10);

//Numbers are ports

}

 void ElevatorAClass::initElevatorAClass()

 {

 //mRight3->SetInverted(true);
 }

void ElevatorAClass::manualElevator(double power)

{
elevatorv1->Set(ControlMode::PercentOutput, power/2.0-.05); 
elevatorv2->Set(ControlMode::PercentOutput, power/2.0-.05); 
elevatorv3->Set(ControlMode::PercentOutput, power/2.0-.05); 
elevatorTalon->Set(ControlMode::PercentOutput, power/2.0-.05); 
}
// The power is divided by 2 because it moves too fast normally










