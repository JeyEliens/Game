#include<string>
#include<list>
#include"Unit.h"
#include"Building.h"
#include"Spell.h"
using namespace std;

class Player
{
public:
	enum ResourceName
	{
		eFire = 0,
		eWater = 1,
		eAir = 2,
		eEarth = 3,
		eLight = 4,
		eDark = 5,
		eCraft = 6
	};
private:
	string name;
	ResourceName thisResourceName;
	int resourses[7];
	int resoursesIncrease[7];
	int resoursesDecrease[7];
	list<Unit> myUnits;
	list<Building> myBuildings;
	list<Building> myLibraryOfBuildings;
	list<Unit> myLibraryOfUnits;
	list<Spell> mySpells;
};