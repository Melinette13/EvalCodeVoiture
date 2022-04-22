#pragma once
#include <iostream>
#include "Color.h"
using namespace std;

class ListOfVroum
{

private:
	std::string mModel;
	std::string mPlate;
	Color mCarColor;
	int mKmH;

public:
	ListOfVroum();
	ListOfVroum(string model, string plate, int KmH, Color CarColor);

	~ListOfVroum();
	std::string GetModel();
	std::string GetPlate();
	std::string GetKmh();
};

