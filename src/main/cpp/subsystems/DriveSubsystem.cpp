#include "subsystems/DriveSubsystem.h"

#include "Constants.h"
DriveSubsystem::DriveSubsystem() :
    fl{FL, rev::CANSparkMax::MotorType::kBrushless},
    fr{FR, rev::CANSparkMax::MotorType::kBrushless},
    bl{BL, rev::CANSparkMax::MotorType::kBrushless},
    br{BR, rev::CANSparkMax::MotorType::kBrushless}
{
    fl.SetInverted(true);
    bl.SetInverted(true);
}

void DriveSubsystem::Periodic() {

}

void DriveSubsystem::SimulationPeriodic() {
  
}

void DriveSubsystem::ArcadeDrive(double fwd, double omega) {
    fl.Set(fwd + 2 * omega);
    fr.Set(fwd - 2 * omega);
    bl.Set(fwd + 2 * omega);
    br.Set(fwd - 2 * omega);
}