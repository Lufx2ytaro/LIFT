#include "Elevator.h"

void Elevator::switch_status()
{
	if (on_off)
	{
		on_off = false;
	}
	else
	{
		on_off = true;
	}
}

void Elevator::setCurentFloor(int floor)
{

	if (floor < bottom)
	{
		curent = bottom;
		
	}
	else if (floor > top)
	{
		curent = top;
		
	}
	else
	{
		curent = floor;
		
	}
}
