#pragma once
#include <string>
class Route
{
private:
	std::string leavingCity = "Undefined";
	std::string arrivingCity = "Undefined";
	double length = 0;
	int travelTimeInMinutes = 0;
	double costOfTravel = 0;
};
