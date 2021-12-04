#pragma once
#include <string>
#include <vector>
#include "Route.h"
#include "Train.h"
class Station
{
private:
	std::string name = "Undefined";
	std::string city = "Undefined";
	std::vector<Route> routes;
	std::vector<Train> trains;
};
