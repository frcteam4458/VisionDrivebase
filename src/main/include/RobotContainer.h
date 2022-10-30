#pragma once
#ifndef ROBOT_CONTAINER_H
#define ROBOT_CONTAINER_H

#include <frc2/command/Command.h>

#include "subsystems/DriveSubsystem.h"

#include "commands/TeleopCommand.h"

class RobotContainer {
 public:
  RobotContainer();

  frc2::Command* GetAutonomousCommand();
  frc2::Command* GetTeleopCommand();

 private:
  DriveSubsystem driveSubsystem;

  TeleopCommand teleopCommand;

  void ConfigureButtonBindings();
};

#endif