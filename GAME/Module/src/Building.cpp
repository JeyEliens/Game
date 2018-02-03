#include "Building.h"

void Building::SetThisBuildingInfo(BuildingInfo* buildingInfo)
{
	this->buildingInfo = buildingInfo;
}
BuildingInfo* Building::GetThisBuildingInfo()
{
	return buildingInfo;
}

void Building::SetCurrentHealthPoints(int currentHealthPoints)
{
	this->currentHealthPoints = currentHealthPoints;
}
int Building::GetCurrentHealthPoints()
{
	return currentHealthPoints;
}

void Building::SetCurrentDamage(int currentDamage)
{
	this->currentDamage = currentDamage;
}
int Building::GetCurrentDamage()
{
	return currentDamage;
}

void Building::SetCurrentAttackRange(int currentAttackRange)
{
	this->currentAttackRange = currentAttackRange;
}
int Building::GetCurrentAttackRange()
{
	return currentAttackRange;
}

void Building::SetCurrentAccuracy(int currentAccuracy)
{
	this->currentAccuracy = currentAccuracy;
}
int Building::GetCurrentAccuracy()
{
	return currentAccuracy;
}

void Building::SetCurrentArmor(int currentArmor)
{
	this->currentArmor = currentArmor;
}
int Building::GetCurrentArmor()
{
	return currentArmor;
}

ObjectType Building::GetType()
{
	return eBuilding;
}