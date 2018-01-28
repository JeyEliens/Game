#include "DLL.h"
#include <string>
#include <set>
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

	void AddUnit(Unit* unit) {}
	set<Unit*> GetUnits() {}
	void DeleteUnit(Unit* unit) {}

	void AddBuilding(Building* building) {}
	set<Building*> GetBuildings() {}
	void DeleteBuilding(Building* building) {}

	void AddBuildingToLibrary(Building* buildingInLibrary) {}
	set<Building*> GetBuildingsFromLibrary() {}

	void AddUnitToLibrary(Unit* unitInLibrary) {}
	set<Unit*> GetUnitsFromLibrary() {}

	void AddSpellToLibrary(Spell* spellToLibrary) {}
	set<Spell*> GetSpellsFromLibrary() {}

private:
	string			name;
	ResourceName	thisResourceName;
	int				resources[7];
	int				resourcesIncrease[7];
	int				resourcesDecrease[7];

	set<Unit*>		units;
	set<Building*>	buildings;
	set<Building*>	buildingLibrary;
	set<Unit*>		unitsLibrary;
	set<Spell*>	spellsLibrary;
};