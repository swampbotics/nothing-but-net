#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(UART_Usage, UART2, uartNotUsed, baudRate4800, IOPins, None, None)
#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, in1,    PowerExpander,  sensorAnalog)
#pragma config(Sensor, dgtl1,  Brake1,         sensorDigitalOut)
#pragma config(Sensor, dgtl2,  Brake2,         sensorDigitalOut)
#pragma config(Sensor, dgtl3,  collection_encoder, sensorQuadEncoder)
#pragma config(Sensor, I2C_1,  encoder_left,   sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  encoder_right,  sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_4,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port1,           CollectionB,   tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port2,           LeftB,         tmotorVex393_MC29, PIDControl, reversed, encoderPort, I2C_1)
#pragma config(Motor,  port3,           RightB,        tmotorVex393_MC29, PIDControl, encoderPort, I2C_4)
#pragma config(Motor,  port4,           LeftA,         tmotorVex393_MC29, PIDControl, reversed, encoderPort, I2C_2)
#pragma config(Motor,  port5,           RightA,        tmotorVex393_MC29, PIDControl, encoderPort, I2C_3)
#pragma config(Motor,  port6,           DriveRearLeft, tmotorVex393HighSpeed_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port7,           DriveRearRight, tmotorVex393HighSpeed_MC29, openLoop, driveRight)
#pragma config(Motor,  port8,           DriveFrontLeft, tmotorVex393HighSpeed_MC29, openLoop, reversed, driveLeft)
#pragma config(Motor,  port9,           DriveFrontRight, tmotorVex393HighSpeed_MC29, openLoop, driveRight)
#pragma config(Motor,  port10,          CollectionA,   tmotorVex393_HBridge, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// TO CHANGE LCD THING, GO TO LCD FILE LINE: 272
#define NoLiftLimits
#define NoDriveEncoder
#define OneLiftEncoder
//#define NoPowerExpander
//#define MultiDriveEncoders.
#if defined(_DEBUG)
const string FILE = __FILE__;
#endif

char Robot = 'A';
int motorSpeed;
#include "core/perRobot/2105A.h"
#include "core/v1/core.h"
#include "core/DriverProfiles/2105A.h"
#include "core/auton/2105A-all.h"
#include "core/misc/2105A-autonmanager.h"

void ResetDriveEncoders() {
	nMotorEncoder[LeftA] = 0;
	nMotorEncoder[RightA] = 0;
	nMotorEncoder[LeftB] = 0;
	nMotorEncoder[RightB] = 0;
	SensorValue[collection_encoder] = 0;
	SensorValue[Brake1] = 0;
	SensorValue[Brake2] = 0;
}

void init() {
	ResetDriveEncoders();
}