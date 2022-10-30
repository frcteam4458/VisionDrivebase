#pragma once
#ifndef TELEOP_COMMAND_H
#define TELEOP_COMMAND_H

#include <frc2/command/CommandBase.h>
#include <frc2/command/CommandHelper.h>

#include "subsystems/DriveSubsystem.h"

#include <frc/XboxController.h>

class TeleopCommand
    : public frc2::CommandHelper<frc2::CommandBase, TeleopCommand> {
 public:
  
  explicit TeleopCommand(DriveSubsystem* _driveSubsystem);

  void Execute() override;

 private:
  DriveSubsystem* driveSubsystem;
  frc::XboxController controller;

  double x = 0;
  double y = 0;
};

#endif