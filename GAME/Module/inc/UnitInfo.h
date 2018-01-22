#include "DLL.h"
#include <string>
#include <list>
using namespace std;

class Ability;

class DLL_EXPORT UnitInfo
{
public:

private:
	string			name;
	string			fraction;
	int				cost;
	int				healthPoint;
	int				damage;
	string			damageType;
	int				attackRange;
	int				armor;
	string			armorType;
	int				accuracy;
	int				agility;
	int				speed;
	int				size;
	string			category; //category means class(mag, warior, etc) cause word "class" is reserved
	list<Ability*>	thisAbility;
};