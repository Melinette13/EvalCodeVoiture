#include "ListOfVroum.h"
#include "Color.h"
#include <iostream>
using namespace std;

ListOfVroum::ListOfVroum()
{

	 mModel = "Default";
	 mPlate = "Default";
	 mCarColor = Color::Red; 
	 mKmH = 1;
}
ListOfVroum::ListOfVroum(string model, string plate, int KmH, Color CarColor)
{
	mModel = model;
	mPlate = plate; 
	mKmH = KmH; 
	mCarColor = CarColor;
}
ListOfVroum::~ListOfVroum(){}
string ListOfVroum::GetModel() { return mModel; }
string ListOfVroum::GetPlate() { return mPlate; }
int ListOfVroum::GetKmh() { return mKmH; }