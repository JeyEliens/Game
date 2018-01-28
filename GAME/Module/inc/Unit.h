#include <string>
#include <set>
#include "Spell.h"
#include "Object.h"
#include "UnitInfo.h"
using namespace std;

class UnitInfo;

class DLL_EXPORT Unit : public Object
{
public:
	Unit() {}
	Unit(UnitInfo* thisUnitInfo, int movePoints, int currentHealthPoints, int currentDamage, int currentAttackRange, int currentArmor, int currentAccuracy, int currentAgility, int currentSpeed, list<Spell*> castedSpells) {}

	void SetUnitInfo(UnitInfo* thisUnitInfo) {}
	UnitInfo* GetUnitInfo() {}

	void SetMovePoints(int movePoints) {}
	int GetMovePoints() {}

	void SetCurrentHealthPoints(int currentHealthPoints) {}
	int GetCurrentHealthPoints() {}

	void SetCurrentDamage(int currentDamage) {}
	int GetCurrentDamages() {}

	void SetCurrentAttackRange(int currentAttackRange) {}
	int GetCurrentAttackRange() {}

	void SetCurrentArmor(int currentArmor) {}
	int GetCurrentArmor() {}

	void SetCurrentAccuracy(int currentAccuracy) {}
	int GetCurrentAccuracy() {}

	void SetCurrentAgility(int currentAgility) {}
	int GetCurrentAgility() {}

	void SetCurrentSpeed(int currentSpeed) {}
	int GetCurrentSpeed() {}

	void SetSpellOnUnit(Spell* spell) {}
	set<Spell*> GetSpellsOnUnit() {}
	void DeleteSpellFromUnit(Spell* spell) {}
private:
	UnitInfo*		thisUnitInfo;
	int				movePoints;
	int				currentHealthPoints;
	int				currentDamage;
	int				currentAttackRange;
	int				currentArmor;
	int				currentAccuracy;
	int				currentAgility;
	int				currentSpeed;
	set<Spell*>	castedSpells;
};