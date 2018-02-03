#include "Unit.h"

void Unit::SetUnitInfo(UnitInfo* thisUnitInfo)
{
	this->thisUnitInfo = thisUnitInfo;
}
UnitInfo* Unit::GetUnitInfo()
{
	return thisUnitInfo;
}

void Unit::SetMovePoints(int movePoints)
{
	this->movePoints = movePoints;
}
int Unit::GetMovePoints()
{
	return movePoints;
}

void Unit::SetCurrentHealthPoints(int currentHealthPoints)
{
	this->currentHealthPoints = currentHealthPoints;
}
int Unit::GetCurrentHealthPoints()
{
	return currentHealthPoints;
}

void Unit::SetCurrentDamage(int currentDamage)
{
	this->currentDamage = currentDamage;
}
int Unit::GetCurrentDamages()
{
	return currentDamage;
}

void Unit::SetCurrentAttackRange(int currentAttackRange)
{
	this->currentAttackRange = currentAttackRange;
}
int Unit::GetCurrentAttackRange()
{
	return currentAttackRange;
}

void Unit::SetCurrentArmor(int currentArmor)
{
	this->currentArmor = currentArmor;
}
int Unit::GetCurrentArmor()
{
	return currentArmor;
}

void Unit::SetCurrentAccuracy(int currentAccuracy)
{
	this->currentAccuracy = currentAccuracy;
}
int Unit::GetCurrentAccuracy()
{
	return currentAccuracy;
}

void Unit::SetCurrentAgility(int currentAgility)
{
	this->currentAgility = currentAgility;
}
int Unit::GetCurrentAgility()
{
	return currentAgility;
}

void Unit::SetCurrentSpeed(int currentSpeed)
{
	this->currentSpeed = currentSpeed;
}
int Unit::GetCurrentSpeed()
{
	return currentSpeed;
}

void Unit::SetSpellOnUnit(Spell* spell)
{
	castedSpells.insert(spell);
}
set<Spell*> Unit::GetSpellsOnUnit()
{
	return castedSpells;
}
void  Unit::DeleteSpellFromUnit(Spell* spell)
{
	castedSpells.erase(spell);
}


ObjectType Unit::GetType()
{
	return eUnit;
}