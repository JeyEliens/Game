#include <string>
#include "Ability.h"
using namespace std;

class DLL_EXPORT BuildingInfo
{
public:
	BuildingInfo() {}
	BuildingInfo(string	name, string fraction,int cost, int	healthPoints, int damage, string damageType, int attackRange, int accuracy, int	armor, string armorType, int size, int fieldSize) {}
	void SetName(string name) {}
	string GetName() {}

	void SetFraction(int fraction) {}
	string GetFraction() {}

	void SetCost(int cost) {}
	int GetCost() {}

	void SetHealthPoints(int healthPoints) {}
	int GetHealthPoints() {}

	void SetDamage(int damage) {}
	int GetDamage() {}

	void SetDamageType(string damageType) {}
	string GetDamageType() {}

	void SetAttackRange(int attackRange) {}
	int GetAttackRange() {}

	void SetAccuracy(int accuracy) {}
	int GetAccuracy() {}

	void SetArmor(int armor) {}
	int GetArmor() {}

	void SetArmorType(string armorType) {}
	string GetArmorType() {}

	void SetSize(int size) {}
	int GetSize() {}

	void SetFieldSize(int fieldSize) {}
	int GetFieldSize() {}
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