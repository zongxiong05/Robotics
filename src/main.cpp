#include "main.h"
#include "Robot.h"


/**
 * A callback function for LLEMU's center button.
 *
 * When this callback is fired, it will toggle line 2 of the LCD text between
 * "I was pressed!" and nothing.
 */
void on_center_button() {

}

/**
 * Runs initialization code. This occurs as soon as the program is started.
 *
 * All other competition modes are blocked by initialize; it is recommended
 * to keep execution time for this mode under a few seconds.
 */
void initialize() {

}



















/**
 * Runs while the robot is in the disabled state of Field Management System or
 * the VEX Competition Switch, following either autonomous or opcontrol. When
 * the robot is enabled, this task will exit.
 */
void disabled() {}

/**
 * Runs after initialize(), and before autonomous when connected to the Field
 * Management System or the VEX Competition Switch. This is intended for
 * competition-specific initialization routines, such as an autonomous selector
 * on the LCD.
 *
 * This task will exit when the robot is enabled and autonomous or opcontrol
 * starts.
 */
void competition_initialize() {}

/**
 * Runs the user autonomous code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the autonomous
 * mode. Alternatively, this function may be called in initialize or opcontrol
 * for non-competition testing purposes.
 *
 * If the robot is disabled or communications is lost, the autonomous task
 * will be stopped. Re-enabling the robot will restart the task, not re-start it
 * from where it left off.
 */






void autonomous() {
  //Robot::drive( 10 ,0 ):


//need to test this number

 /* Call spinner for ? seconds, be brief as I want very little distance. Need to test*/

 Robot::Spinner1 = -180;
 Robot::Spinner2 = -180;
 delay(300); // need to test this number
 Robot::pneumatics.set_value(1);
 delay(100);
 Robot::pneumatics.set_value(0);
 Robot::Spinner1 = 0;
 Robot::Spinner2 = 0;


 // call piston, need to know the function name
 //robot::drive backwards  (if we cannot hold two at once)
 //Robot::drive(-10, 0); need to test the number
 //Robot::Intake = 127;
  //call intake at same time
 //repeat lines 60-63
 //idle lol idk


}
