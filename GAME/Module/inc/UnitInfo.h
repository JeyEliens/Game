#include "DLL.h"
#include <string>
#include <list>
using namespace std;

class Ability;

class DLL_EXPORT UnitInfo
{
public:
	UnitInfo() {}
	UnitInfo(string name, string fraction, int cost, int healthPoint, int damage, string damageType, int attackRange, int armor, string armorType, int accuracy, int agility, int speed, int size, string category, list<Ability*> thisAbility) {}

	void SetName(string name) {}
	string GetName() {}

	void SetFraction(string fraction) {}
	string GetFraction() {}

	void SetCost(int cost) {}
	int GetCost() {}

	void SetHealthPoint(int healthPoint) {}
	int GetHealthPoint() {}

	void SetDamage(int damage) {}
	int GetDamage() {}

	void SetDamageType(string damageType) {}
	string GetDamageType() {}

	void SetAttackRange(int attackRange) {}
	int GetAttackRange() {}

	void SetArmor(int armor) {}
	int GetArmor() {}

	void SetArmorType(string armorType) {}
	string GetArmorType() {}

	void SetAccuracy(int accuracy) {}
	int GetAccuracy() {}

	void SetAgility(int agility) {}
	int GetAgility() {}

	void SetSpeed(int speed) {}
	int GetSpeed() {}

	void SetSize(int size) {}
	int GetSize() {}

	void SetCategory(string category) {}
	string GetCategory() {}

	/*set-get of list*/
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