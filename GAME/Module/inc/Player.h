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
private:
	string			name;
	ResourceName	thisResourceName;
	int				resourses[7];
	int				resoursesIncrease[7];
	int				resoursesDecrease[7];

	list<Unit*>		units;
	list<Building*>	buildings;
	list<Building*>	buildingLibrary;
	list<Unit*>		unitsLibrary;
	list<Spell*>	spellsLibrary;
};