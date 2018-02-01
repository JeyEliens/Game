#include "DLL.h"
#include <string>
#include <set>
using namespace std;

class Ability;

class DLL_EXPORT UnitInfo
{
public:
	enum Fraction
	{
		eHeaven = 0,
		eBattleInstitution = 1,
		eMountains = 2,
		eForest = 3,
		eCave = 4,
		eTundra = 5,
		eDesert = 6,
		eSea = 7,
		eUndead = 8,
		eHell = 9
	};

	enum Category
	{
		eGargoyle = 0
	}; //i don't know wich categories there must be

	UnitInfo() {}
	UnitInfo(string name, Fraction fraction, int cost, int healthPoint, int damage, string damageType, int attackRange, int armor, string armorType, int accuracy, int agility, int speed, int size, Category category, set<Ability*> thisAbility) {}

	void SetName(string name);
	string GetName();

	void SetFraction(Fraction fraction);
	Fraction GetFraction();

	void SetCost(int cost);
	int GetCost();

	void SetHealthPoint(int healthPoint);
	int GetHealthPoint();

	void SetDamage(int damage);
	int GetDamage();

	void SetDamageType(string damageType);
	string GetDamageType();

	void SetAttackRange(int attackRange);
	int GetAttackRange();

	void SetArmor(int armor);
	int GetArmor();

	void SetArmorType(string armorType);
	string GetArmorType();

	void SetAccuracy(int accuracy);
	int GetAccuracy();

	void SetAgility(int agility);
	int GetAgility();

	void SetSpeed(int speed);
	int GetSpeed();

	void SetSize(int size);
	int GetSize();

	void SetCategory(Category category);
	Category GetCategory();

	void SetAbility(Ability* ability);
	set<Ability*> GetAbilities();
private:
	string			name;
	Fraction		fraction;
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
	Category		category; //category means class(mag, warior, etc) cause word "class" is reserved
	set<Ability*>	thisAbilities;
};