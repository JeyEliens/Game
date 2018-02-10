#include"UnitParser.h"
#include<fstream>
#include<string>
#include<sstream>
#include<vector>
#include<windows.h>
#include<iostream>
using namespace std;

vector<string> UnitParser::Split(const string& s, char delimiter)
{
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}

set<string> UnitParser::ReadNamesOfFiles()
{
	WIN32_FIND_DATAA FindFileData;
	HANDLE hf;
	hf = FindFirstFileA("../res/Units/*", &FindFileData);

	set<string> namesOfFilesOfUnits;

	if (hf != INVALID_HANDLE_VALUE)
	{
		do
		{
			namesOfFilesOfUnits.insert(FindFileData.cFileName);
		} while (FindNextFileA(hf, &FindFileData) != 0);
		FindClose(hf);
	}
	return namesOfFilesOfUnits;
}

void UnitParser::ReadUnitInfo(set<UnitInfo*> allUnitsInfo, set<string> namesOfFilesOfUnits)
{
	string line = NULL;
	int integer = NULL; // integer is converted from int to string value which means one of the arguments
	for (set<string>::iterator it; it != namesOfFilesOfUnits.end(); it++)
	{
		ifstream in(*it);

		UnitInfo* unit = new UnitInfo();

		while (getline(in, line))
		{
			vector<string> myVector = Split(line, '=');

			integer = stoi(myVector[1]);

			if (myVector[0] == "name")
				unit->SetName(myVector[1]);
			else if (myVector[0] == "fraction")
			{
				switch (integer)
				{
				case 0:
					unit->SetFraction(UnitInfo::Fraction::eHeaven);
				case 1:
					unit->SetFraction(UnitInfo::Fraction::eBattleInstitution);
				case 2:
					unit->SetFraction(UnitInfo::Fraction::eMountains);
				case 3:
					unit->SetFraction(UnitInfo::Fraction::eForest);
				case 4:
					unit->SetFraction(UnitInfo::Fraction::eCave);
				case 5:
					unit->SetFraction(UnitInfo::Fraction::eTundra);
				case 6:
					unit->SetFraction(UnitInfo::Fraction::eDesert);
				case 7:
					unit->SetFraction(UnitInfo::Fraction::eSea);
				case 8:
					unit->SetFraction(UnitInfo::Fraction::eUndead);
				case 9:
					unit->SetFraction(UnitInfo::Fraction::eHell);
				default:
					break;
				}
			}
			else if (myVector[0] == "cost")
				unit->SetCost(integer);
			else if (myVector[0] == "healthPoint")
				unit->SetHealthPoint(integer);
			else if (myVector[0] == "damage")
				unit->SetDamage(integer);
			else if (myVector[0] == "damageType")
			{
				// there must be switch-case for all damage types
			}
			else if (myVector[0] == "attackRange")
				unit->SetAttackRange(integer);
			else if (myVector[0] == "armor")
				unit->SetArmor(integer);
			else if (myVector[0] == "armorType")
			{
				// there must be switch-case for all armor types
			}
			else if (myVector[0] == "accuracy")
				unit->SetAccuracy(integer);
			else if (myVector[0] == "agility")
				unit->SetAgility(integer);
			else if (myVector[0] == "speed")
				unit->SetSpeed(integer);
			else if (myVector[0] == "size")
				unit->SetSize(integer);
			else if (myVector[0] == "category")
			{
				//there must be switch-case for all classes(categories) 
			}
		}
		allUnitsInfo.insert(unit);
		delete unit;
	}
}