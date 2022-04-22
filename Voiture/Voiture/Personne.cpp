#include "Personne.h"
#include <iostream>
using namespace std;
 
Personne::Personne()
{
	mName = "Default";
	mDescription = "Default";
	TheName = "Default";
	mMoula = 1;
	mHaveVoiture = 1; 
}
Personne::Personne(string name, string desc, int Moula, int HaveVoiture)
{
	mName = name;
	mDescription = desc;
	mMoula = Moula; 
	TheName = mName; 
	mHaveVoiture = HaveVoiture; 
}
Personne::~Personne() 
{

}
string Personne::GetName()
{
	return mName;
}
string Personne::GetDescription()
{
	return mDescription;
}

int Personne::GetMoula()
{
	return mMoula;
}


int Personne::GetHaveVoiture() 
{
	return mHaveVoiture; 
}


void Personne::DisplaySumUp()
{
	cout <<  TheName << " est  " << mDescription << endl;
	cout << TheName << " a " << mHaveVoiture <<" voiture(s)" << endl;
	cout << TheName << " a " << mMoula << " Euros.\n";
	
}