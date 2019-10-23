/**
 * RobotSense.h
 *
 * Created on: Oct 17, 2019
 * Author: William
 * 
 * Description:  Librairie des capteurs du robot
 */

#include <Arduino.h>
#include <LibRobus.h>

#define Dumb

enum {Left, Right};
enum {Forward, Reverse};

enum Color
{
    Red,
    Green,
    Blue,
    Yellow,
    Black,
    White
};

/**
 * @brief Returns value from the color sensor
 * 
 * @return Colors enum 
 */
Color COLOR_Read();

/**
 * @brief This function is used to move forward or backward the robot
 * 
 * @param SpeedCommand Speed 0 to 1
 * @param DistanceToDo Distance to do in centimeter
 * @param Direction 0 is forward and 1 is backward
 */
void FollowLine(float SpeedCommand, float DistanceToDo, bool Direction);

/**
 * @brief 
 * 
 * @return true 
 * @return false 
 */
bool LineFound();

/**
 * @brief Returns the distance sensed by the infrared sensor
 * 
 * @return int 
 */
int IR_Distance();

