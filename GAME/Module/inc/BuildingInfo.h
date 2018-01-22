#include <string>
#include "Ability.h"
using namespace std;

class DLL_EXPORT BuildingInfo
{
public:

private:
	string		name;
	string		fraction;
	int			cost;
	int			healthPoints;
	int			damage;
	string		damageType;
	int			attackRange;
	int			accuracy;
	int			armor;
	string		armorType;
	int			size;
	int			fieldSize;
};