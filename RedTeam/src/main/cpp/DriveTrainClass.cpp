#include "DriveTrainClass.h"

DriveTrainClass::DriveTrainClass()

{

mLeft1 = new VictorSPX(15);
mLeft2 = new VictorSPX(14);
mLeft3 = new VictorSPX(13);

mRight1= new TalonSRX(01);
mRight2= new VictorSPX(00);
mRight3= new VictorSPX(02);

//Numbers are ports

}

 void DriveTrainClass::initDriveTrainClass()

 {
 mRight1->SetInverted(false);
 mRight2->SetInverted(false); 
 mRight3->SetInverted(false);

 mLeft1->SetInverted(true);
 mLeft2->SetInverted(true);
 mLeft3->SetInverted(true);
 }

void DriveTrainClass::TankDrive(double L, double R)

{
mLeft1->Set(ControlMode::PercentOutput, L); 
mLeft2->Set(ControlMode::PercentOutput, L); 
mLeft3->Set(ControlMode::PercentOutput, L); 
mRight1->Set(ControlMode::PercentOutput, R); 
mRight2->Set(ControlMode::PercentOutput, R); 
mRight3->Set(ControlMode::PercentOutput, R); 
}










