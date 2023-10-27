#include "Elevator_Test.h"
#include "Elevator.h"
#include<iostream>

using namespace std;

void Elevator_Test::testOnOff()
{
	bool curent_status = elevator.getStatus();
	elevator.switch_status();

	if (curent_status != elevator.getStatus())
	{
		cout << "FUNC working" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}
}

void Elevator_Test::startAllTest()
{
	cout << "Check Switch" << endl;
	testOnOff();
	cout << "Check button" << endl;
	testSetCurrentFloorLessBottom();
	cout << "check top" << endl;
	testSetCurrentFloorUpperTop();
	cout << "where are u" << endl;
	testSetCurrentFloor();
}

void Elevator_Test::testSetCurrentFloorLessBottom()
{
	int current = elevator.getBottonFloor();
	current -= 100;

	elevator.setCurentFloor(current);
	if (elevator.getCurentFloor() == elevator.getBottonFloor())
	{
		cout << "good" << endl;;
	}
	else
	{
		cout << "error" << endl;;
	}
}

void Elevator_Test::testSetCurrentFloorUpperTop()
{
	int current = elevator.getTopFloor();
	current += 100;

	elevator.setCurentFloor(current);
	if (elevator.getCurentFloor() == elevator.getTopFloor())
	{
		cout << "good" << endl;;
	}
	else
	{
		cout << "error" << endl;;
	}
}

void Elevator_Test::testSetCurrentFloor()
{

	int value = 2;
	if (elevator.getCurentFloor() == value)
	{
		value++;
	}

	elevator.setCurentFloor(value);

	if (elevator.getCurentFloor() == value)
	{
		cout << "ok not bad" << endl;
	}
	else
	{
		cout << "bro what are u do" << endl;
	}
}
