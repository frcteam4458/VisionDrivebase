#include "RobotContainer.h"

RobotContainer::RobotContainer() :
  driveSubsystem{},
  
  teleopCommand{&driveSubsystem}
  
{
  ConfigureButtonBindings();
}

void RobotContainer::ConfigureButtonBindings() {
  
}

frc2::Command* RobotContainer::GetTeleopCommand() {
  return &teleopCommand;
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  return nullptr;
}
