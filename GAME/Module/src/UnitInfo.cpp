#include "UnitInfo.h"

void UnitInfo::SetName(const string& name)
{
	this->name = name;
}
string UnitInfo::GetName()
{
	return name;
}

void UnitInfo::SetFraction(Fraction fraction)
{
	this->fraction = fraction;
}
UnitInfo::Fraction UnitInfo::GetFraction()
{
	return fraction;
}

void UnitInfo::SetCost(int cost)
{
	this->cost = cost;
}
int UnitInfo::GetCost()
{
	return cost;
}

void UnitInfo::SetHealthPoint(int healthPoint)
{
	this->healthPoint = healthPoint;
}
int UnitInfo::GetHealthPoint()
{
	return healthPoint;
}

void UnitInfo::SetDamage(int damage)
{
	this->damage = damage;
}
int UnitInfo::GetDamage()
{
	return damage;
}

void UnitInfo::SetDamageType(DamageType damageType)
{
	this->damageType = damageType;
}
DamageType UnitInfo::GetDamageType()
{
	return damageType;
}

void UnitInfo::SetAttackRange(int attackRange)
{
	this->attackRange = attackRange;
}
int UnitInfo::GetAttackRange()
{
	return attackRange;
}

void UnitInfo::SetArmor(int armor)
{
	this->armor = armor;
}
int UnitInfo::GetArmor()
{
	return armor;
}

void UnitInfo::SetArmorType(ArmorType armorType)
{
	this->armorType = armorType;
}
ArmorType UnitInfo::GetArmorType()
{
	return armorType;
}

void UnitInfo::SetAccuracy(int accuracy)
{
	this->accuracy = accuracy;
}
int UnitInfo::GetAccuracy()
{
	return accuracy;
}

void UnitInfo::SetAgility(int agility)
{
	this->agility = agility;
}
int UnitInfo::GetAgility()
{
	return agility;
}

void UnitInfo::SetSpeed(int speed)
{
	this->speed = speed;
}
int UnitInfo::GetSpeed()
{
	return speed;
}

void UnitInfo::SetSize(int size)
{
	this->size = size;
}
int UnitInfo::GetSize()
{
	return size;
}

void UnitInfo::SetCategory(Category category)
{
	this->category = category;
}
UnitInfo::Category UnitInfo::GetCategory()
{
	return category;
}

void UnitInfo::AddAbility(Ability* ability)
{
	thisAbilities.insert(ability);
}
set<Ability*> UnitInfo::GetAbilities()
{
	return thisAbilities;
}