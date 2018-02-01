#include"UnitParser.h"
#include<sstream>
#include<vector>

void UnitParser::ReadUnitInfo(/*place of folder*/ set<Unit*> allUnits)
{
	ifstream in("unit1.ini");

	UnitInfo* unit = new UnitInfo();

	string line;
	int integer;
	while (getline(in, line))
	{
		vector<string> myVector = split(line, '=');

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
			unit->SetDamageType(myVector[1]);
		else if (myVector[0] == "attackRange")
			unit->SetAttackRange(integer);
		else if (myVector[0] == "armor")
			unit->SetArmor(integer);
		else if (myVector[0] == "armorType")
			unit->SetArmorType(myVector[1]);
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
			//there must be switch-case for all classes(categories) that we have but now we have no categories!!
		}
	}
	delete unit;
}

vector<string> UnitParser::split(const string& s, char delimiter)
{
	vector<string> tokens;
	string token;
	istringstream tokenStream(s);
	while (getline(tokenStream, token, delimiter))
		tokens.push_back(token);
	return tokens;
}