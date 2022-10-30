#pragma once
#ifndef DRIVE_SUBSYSTEM_H
#define DRIVE_SUBSYSTEM_H

#include <frc2/command/SubsystemBase.h>

#include <rev/CANSparkMax.h>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();
  void Periodic() override;
  void SimulationPeriodic() override;

  void ArcadeDrive(double fwd, double omega);

 private:
  rev::CANSparkMax fl;
  rev::CANSparkMax fr;
  rev::CANSparkMax bl;
  rev::CANSparkMax br;
};

#endif