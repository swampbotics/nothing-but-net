#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in2,    Gyroscope,      sensorGyro)
#pragma config(Sensor, dgtl1,  enc,            sensorQuadEncoder)
#pragma config(Sensor, I2C_1,  DriveEncoderRight, sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Sensor, I2C_2,  DriveEncoder,   sensorQuadEncoderOnI2CPort,    , AutoAssign )
#pragma config(Motor,  port1,           CollectionB,   tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           DriveRight,    tmotorVex393_MC29, openLoop, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           LT,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           LM,            tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           CT,            tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port6,           CM,            tmotorVex393HighSpeed_MC29, openLoop, driveLeft)
#pragma config(Motor,  port7,           CB,            tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight)
#pragma config(Motor,  port8,           LB,            tmotorVex393HighSpeed_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port9,           DriveLeft,     tmotorVex393HighSpeed_MC29, openLoop, reversed, driveRight, encoderPort, I2C_2)
#pragma config(Motor,  port10,          CollectionA,   tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// TO CHANGE LCD THING, GO TO LCD FILE LINE: 272
// LINE 58 COMP.H
#define NoLiftLimits
#define OneLiftEncoder
#define HasGyro
#define NoPowerExpander
//#define MultiDriveEncoders.
#if defined(_DEBUG)
const string FILE = __FILE__;
#endif

int motorSpeed;
#include "core/v1/pid/a.h"
#include "core/v1/coreA.h"
#include "core/DriverProfiles/2105A.h"

#include "core/auton/A/Red_Front.h"
#include "core/auton/A/Red_Back.h"
#include "core/auton/A/Blue_Front.h"
#include "core/auton/A/Blue_Back.h"
#include "core/auton/A/Stay.h"
#include "core/auton/A/Progskills.h"

#include "core/misc/2105A-autonmanager.h"

void ResetDriveEncoders() {
	nMotorEncoder[DriveEncoderRight] = 0;
	nMotorEncoder[DriveEncoder] = 0;
	SensorValue[DriveEncoder] = 0;
	SensorValue[DriveEncoderRight] = 0;
}

void init() {
	SensorValue[enc] = 0;
	SensorValue[Gyroscope] = 0;
	PID_Drive.Sensor = DriveEncoder;
	PID_Drive.IntegralLimit = 100;
	PID_Drive.Kp = 0.06;
	PID_Drive.Ki = 0.0125;
	PID_Drive.Kd = 0.1;
	PID_Drive_TurnTo.Sensor = Gyroscope;
	PID_Drive_TurnTo.IntegralLimit = 200;
	PID_Drive_TurnTo.Kp = 0.3;
	PID_Drive_TurnTo.Ki = 0.0001;
	PID_Drive_TurnTo.Kd = 0.001;
}
