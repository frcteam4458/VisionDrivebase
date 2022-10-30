#include "commands/TeleopCommand.h"

TeleopCommand::TeleopCommand(DriveSubsystem* _driveSubsystem)
    : driveSubsystem{_driveSubsystem},
    controller{0}
{

}

void TeleopCommand::Execute() {
    y = controller.GetLeftY();
    x = controller.GetRightX();

    driveSubsystem->ArcadeDrive(y, x);
}