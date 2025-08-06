using namespace vex;

extern brain Brain;

extern motor leftDrive;
extern motor rightDrive;
extern gps GPS;
extern smartdrive Drivetrain;
extern motor Intake;
extern motor Belt;
extern controller Controller;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 *
 * This should be called at the start of your int main function.
 */
void vexcodeInit(void);
