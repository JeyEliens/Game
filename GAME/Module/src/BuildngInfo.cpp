#include "BuildingInfo.h"

void BuildingInfo::SetName(string name)
{
	this->name = name;
}
string BuildingInfo::GetName()
{
	return name;
}

void BuildingInfo::SetFraction(int fraction)
{
	this->fraction = fraction;
}
string BuildingInfo::GetFraction()
{
	return fraction;
}

void BuildingInfo::SetCost(int cost)
{
	this->cost = cost;
}
int BuildingInfo::GetCost()
{
	return cost;
}

void BuildingInfo::SetHealthPoints(int healthPoints)
{
	this->healthPoints = healthPoints;
}
int BuildingInfo::GetHealthPoints()
{
	return healthPoints;
}

void BuildingInfo::SetDamage(int damage)
{
	this->damage = damage;
}
int BuildingInfo::GetDamage()
{
	return damage;
}

void BuildingInfo::SetDamageType(DamageType damageType)
{
	this->damageType = damageType;
}
DamageType BuildingInfo::GetDamageType()
{
	return damageType;
}

void BuildingInfo::SetAttackRange(int attackRange)
{
	this->attackRange = attackRange;
}
int BuildingInfo::GetAttackRange()
{
	return attackRange;
}

void BuildingInfo::SetAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}
int BuildingInfo::GetAccuracy()
{
	return accuracy;
}

void BuildingInfo::SetArmor(int armor)
{
	this->armor = armor;
}
int BuildingInfo::GetArmor()
{
	return armor;
}

void BuildingInfo::SetArmorType(ArmorType armorType)
{
	this->armorType = armorType;
}
ArmorType BuildingInfo::GetArmorType()
{
	return armorType;
}

void BuildingInfo::SetSize(int size)
{
	this->size = size;
}
int BuildingInfo::GetSize()
{
	return size;
}

void BuildingInfo::SetFieldSize(int fieldSize)
{
	this->fieldSize = fieldSize;
}
int BuildingInfo::GetFieldSize()
{
	return fieldSize;
}