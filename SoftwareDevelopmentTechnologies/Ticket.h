#pragma once
#include <string>
class Ticket
{
private:
	size_t id = 0;
	std::string leavingCity = "Undefined";
	std::string arrivingCity = "Undefined";
	std::string timeOfArriving = "Undefined";
	double price = 0;
	int seat = 0;
	int vagon = 0;
};
