#include "DLL.h"
#include <string>
#include <list>
using namespace std;

class Unit;
class Building;
class Spell;

class DLL_EXPORT Player
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

	Player() {}
	Player(string name, ResourceName thisResourceName, int resourses[], int resoursesIncrease[], int resoursesDecrease[], list<Unit*> units, list<Building*> buildings, list<Building*>	buildingLibrary, list<Unit*> unitsLibrary, list<Spell*>	spellsLibrary) {}

	void SetName(string name) {}
	string GetName() {}

	void SetResource(int resources[], int i) {}
	int GetResourse(int i) {}

	void SetResourcesIncrease(int resourceIncrease, int i) {}
	int GetResourcesIncrease(int i) {}

	void SetResourcesDecrease(int resourceDecrease, int i) {}
	int GetResourcesDecrease(int i) {}

	/*set-get for lists*/
	Unit* SetUnits(list<Unit*> units) {}

private:
	string			name;
	ResourceName	thisResourceName;
	int				resources[7];
	int				resourcesIncrease[7];
	int				resourcesDecrease[7];

	list<Unit*>		units;
	list<Building*>	buildings;
	list<Building*>	buildingLibrary;
	list<Unit*>		unitsLibrary;
	list<Spell*>	spellsLibrary;
};