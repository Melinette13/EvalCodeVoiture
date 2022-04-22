#pragma once
#include <iostream>
using namespace std;

class Personne
{
private:
	std::string mName;
	std::string mDescription;
	int mMoula;
	int mHaveVoiture;

public:

	std::string TheName;
	Personne();
	Personne(string name, string desc, int Moula, int HaveVoiture);



	~Personne();
	std::string GetName();
	std::string GetDescription();
	int GetMoula();
	int GetHaveVoiture();


	void DisplaySumUp();
};

