#pragma once
#include<iostream>

using namespace std;

class Elevator
{
	static int sum_count_floor;
	bool on_off{};
	int top;
	int bottom;
	int curent;

	//bool debug;

public:
	Elevator(int pBottom, int pTop) : on_off{ false }, top{ pTop }, bottom{ pBottom }, curent{ 0 } {};

	Elevator() : Elevator(0, 0) {};



	bool getStatus()
	{
		return on_off;
}

	int getCurentFloor()
	{
		return curent;
	}
	int getBottonFloor()
	{
		return bottom ;
	}
	int getTopFloor()
	{
		return top;
	}
	

	void switch_status ();

	void setCurentFloor(int floor);
	
	
};

