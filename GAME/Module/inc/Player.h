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

	Player(const string& name) {}

	void SetName(const string& name);
	string GetName();

	int GetResourcesIncrease(int i);

	void AddUnit(Unit* unit);
	const set<Unit*>& GetUnits();
	void DeleteUnit(Unit* unit);

	void AddBuilding(Building* building);
	const set<Building*>& GetBuildings();
	void DeleteBuilding(Building* building);

	void AddBuildingToLibrary(Building* buildingInLibrary);
	const set<Building*>& GetBuildingsFromLibrary();

	void AddUnitToLibrary(Unit* unitInLibrary);
	const set<Unit*>& GetUnitsFromLibrary();

	void AddSpellToLibrary(Spell* spellToLibrary);
	const set<Spell*>& GetSpellsFromLibrary();

private:
	string			name;
	int				resources[7];
	int				resourcesIncrease[7];

	set<Unit*>		units;
	set<Building*>	buildings;
	set<Building*>	buildingLibrary;
	set<Unit*>		unitsLibrary;
	set<Spell*>		spellsLibrary;
};