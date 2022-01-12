#include "ControllerClass.h"

ControllerClass::ControllerClass()
 
 {
    Controller1 = new XboxController(1);
    Controller2 = new XboxController(2);
 }

void ControllerClass::ReadController1()

 {
    bAButtonRawC1 = Controller1->GetRawButton(A_Button);
    bBButtonRawC1 = Controller1->GetRawButton(B_Button);
    bYButtonRawC1 = Controller1->GetRawButton(Y_Button);
    bXButtonRawC1 = Controller1->GetRawButton(X_Button);
       
    bAButtonPressedC1 = Controller1->GetAButtonPressed();
    bBButtonPressedC1 = Controller1->GetBButtonPressed();
    bYButtonPressedC1 = Controller1->GetYButtonPressed();
    bXButtonPressedC1 = Controller1->GetXButtonPressed();
    
    bAButtonReleasedC1 = Controller1->GetAButtonReleased();
    bBButtonReleasedC1 = Controller1->GetBButtonReleased();
    bYButtonReleasedC1 = Controller1->GetYButtonReleased();
    bXButtonReleasedC1 = Controller1->GetXButtonReleased();

    dRightStickXC1 = Controller1->GetX(frc::GenericHID::JoystickHand::kRightHand);
    dRightStickYC1 = Controller1->GetY(frc::GenericHID::JoystickHand::kRightHand);

    dLeftStickXC1 = Controller1->GetX(frc::GenericHID::JoystickHand::kLeftHand);
    dLeftStickYC1 = Controller1->GetY(frc::GenericHID::JoystickHand::kLeftHand);

    dRightTriggerC1 = Controller1->GetTriggerAxis(frc::GenericHID::JoystickHand::kRightHand);
    dLeftTriggerC1 = Controller1->GetTriggerAxis(frc::GenericHID::JoystickHand::kLeftHand);

    bRightBumperC1 = Controller1->GetBumper(frc::GenericHID::JoystickHand::kRightHand);
    bLeftBumperC1 = Controller1->GetBumper(frc::GenericHID::JoystickHand::kLeftHand);

    bRightBumperPressedC1 = Controller1->GetBumperPressed(frc::GenericHID::JoystickHand::kRightHand);
    bLeftBumperPressedC1 = Controller1->GetBumperPressed(frc::GenericHID::JoystickHand::kLeftHand);

    bRightBumperReleasedC1 = Controller1->GetBumperReleased(frc::GenericHID::JoystickHand::kRightHand);
    bLeftBumperReleasedC1 = Controller1->GetBumperReleased(frc::GenericHID::JoystickHand::kLeftHand);

 }

   void ControllerClass::ReadController2()

 {
    bAButtonRawC2 = Controller2->GetRawButton(A_Button);
    bBButtonRawC2 = Controller2->GetRawButton(B_Button);
    bYButtonRawC2 = Controller2->GetRawButton(Y_Button);
    bXButtonRawC2 = Controller2->GetRawButton(X_Button);
       
    bAButtonPressedC2 = Controller2->GetAButtonPressed();
    bBButtonPressedC2 = Controller2->GetBButtonPressed();
    bYButtonPressedC2 = Controller2->GetYButtonPressed();
    bXButtonPressedC2 = Controller2->GetXButtonPressed();
    
    bAButtonReleasedC2 = Controller2->GetAButtonReleased();
    bBButtonReleasedC2 = Controller2->GetBButtonReleased();
    bYButtonReleasedC2 = Controller2->GetYButtonReleased();
    bXButtonReleasedC2 = Controller2->GetXButtonReleased();

    dRightStickXC2 = Controller2->GetX(frc::GenericHID::JoystickHand::kRightHand);
    dRightStickYC2 = Controller2->GetY(frc::GenericHID::JoystickHand::kRightHand);

    dLeftStickXC2 = Controller2->GetX(frc::GenericHID::JoystickHand::kLeftHand);
    dLeftStickYC2 = Controller2->GetY(frc::GenericHID::JoystickHand::kLeftHand);

    dRightTriggerC2 = Controller2->GetTriggerAxis(frc::GenericHID::JoystickHand::kRightHand);
    dLeftTriggerC2 = Controller2->GetTriggerAxis(frc::GenericHID::JoystickHand::kLeftHand);

    bRightBumperC2 = Controller2->GetBumper(frc::GenericHID::JoystickHand::kRightHand);
    bLeftBumperC2 = Controller2->GetBumper(frc::GenericHID::JoystickHand::kLeftHand);

    bRightBumperPressedC2 = Controller2->GetBumperPressed(frc::GenericHID::JoystickHand::kRightHand);
    bLeftBumperPressedC2 = Controller2->GetBumperPressed(frc::GenericHID::JoystickHand::kLeftHand);

    bRightBumperReleasedC2 = Controller2->GetBumperReleased(frc::GenericHID::JoystickHand::kRightHand);
    bLeftBumperReleasedC2 = Controller2->GetBumperReleased(frc::GenericHID::JoystickHand::kLeftHand);

 }

  void ControllerClass::Update()
{
   ReadController1();
   ReadController2();
}



