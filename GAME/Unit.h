#include<string>
#include<list>
#include"Spell.h"
#include"Object.h"
#include"UnitInfo.h"
using namespace std;

class Unit : public Object
{
public:

private:
	UnitInfo thisUnitInfo;
	int movePoints;
	int currentHealthPoints;
	int currentDamage;
	int currentAttackRange;
	int currentArmor;
	int currentAccuracy;
	int currentAgility;
	int currentSpeed;
	list<Spell> castedSpells;
};