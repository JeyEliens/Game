#include <string>
#include "Ability.h"
#include "Enums/ArmorType.h"
#include "Enums/DamageType.h"
using namespace std;

class DLL_EXPORT BuildingInfo
{
public:
	BuildingInfo() {}
	
	void SetName(string name);
	string GetName();

	void SetFraction(int fraction);
	string GetFraction();

	void SetCost(int cost);
	int GetCost();

	void SetHealthPoints(int healthPoints);
	int GetHealthPoints();

	void SetDamage(int damage);
	int GetDamage();

	void SetDamageType(DamageType damageType);
	DamageType GetDamageType();

	void SetAttackRange(int attackRange);
	int GetAttackRange();

	void SetAccuracy(int accuracy);
	int GetAccuracy();

	void SetArmor(int armor);
	int GetArmor();

	void SetArmorType(ArmorType armorType);
	ArmorType GetArmorType();

	void SetSize(int size);
	int GetSize();

	void SetFieldSize(int fieldSize);
	int GetFieldSize();
private:
	string		name;
	string		fraction;
	int			cost;
	int			healthPoints;
	int			damage;
	DamageType	damageType;
	int			attackRange;
	int			accuracy;
	int			armor;
	ArmorType	armorType;
	int			size;
	int			fieldSize;
};