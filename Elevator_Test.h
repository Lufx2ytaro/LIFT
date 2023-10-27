#pragma once
#include"Elevator.h"
class Elevator_Test
{
	Elevator elevator;

public:
	Elevator_Test(Elevator p_elevator) :elevator{ p_elevator } {};

	void testOnOff();
	void startAllTest();
	void testSetCurrentFloorLessBottom();
	void testSetCurrentFloorUpperTop();
	void testSetCurrentFloor();
};

