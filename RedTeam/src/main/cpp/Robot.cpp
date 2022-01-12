// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <frc/smartdashboard/SmartDashboard.h>

#include <iostream>

DriveTrainClass *Drive; 
ControllerClass *Controller1;
ElevatorAClass *ElevatorA;
//IntakeClass *Elevator;


void Robot::RobotInit() {
Drive = new DriveTrainClass();
Controller1 = new ControllerClass();
ElevatorA = new ElevatorAClass();
//Elevator = new IntakeClass();
Drive->initDriveTrainClass();
ElevatorA->initElevatorAClass();
}
void Robot::RobotPeriodic() {}

void Robot::AutonomousInit() {}
void Robot::AutonomousPeriodic() {}

void Robot::TeleopInit() {}
void Robot::TeleopPeriodic() {
  Controller1->Update();
  //Elevator->runIntake(Controller1->bRightBumperC1, Controller1->bLeftBumperC1);
  Drive->TankDrive(Controller1->dLeftStickYC1,Controller1->dRightStickYC1);
  ElevatorA->manualElevator(Controller1->dRightStickYC2);
  
}

void Robot::DisabledInit() {}
void Robot::DisabledPeriodic() {}

void Robot::TestInit() {}
void Robot::TestPeriodic() 
{
  std::cout<<"test"<<std::endl;
}

#ifndef RUNNING_FRC_TESTS
int main() {
  return frc::StartRobot<Robot>();
}
#endif
