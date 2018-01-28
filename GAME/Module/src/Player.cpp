#include "Player.h"
#include<iostream>

void Player::SetName(string name)
{
	this->name = name;
}
string Player::GetName()
{
	return name;
}

void Player::SetResource(int resources[], int i)
{
	this->resources[i] = resources[i];
}
int Player::GetResourse(int i)
{
	return resources[i];
}

void Player::SetResourcesIncrease(int resourceIncrease, int i)
{
	this->resourcesIncrease[i] = resourceIncrease;
}
int Player::GetResourcesIncrease(int i)
{
	return resourcesIncrease[i];
}

void Player::SetResourcesDecrease(int resourceDecrease, int i)
{
	this->resourcesDecrease[i] = resourceDecrease;
}
int Player::GetResourcesDecrease(int i)
{
	return resourcesDecrease[i];
}

void Player::AddUnit(Unit* unit)
{
	this->units.insert(unit);
}
set<Unit*> Player::GetUnits()
{
	return units;
}
void Player::DeleteUnit(Unit* unit)
{
	units.erase(unit);
}

void Player::AddBuilding(Building* building)
{
	this->buildings.insert(building);
}
set<Building*> Player::GetBuildings()
{
	return buildings;
}
void Player::DeleteBuilding(Building* building)
{
	buildings.erase(building);
}

void Player::AddBuildingToLibrary(Building* buildingToLibrary)
{
	this->buildingLibrary.insert(buildingToLibrary);
}
set<Building*> Player::GetBuildingsFromLibrary()
{
	return buildingLibrary;
}

void Player::AddUnitToLibrary(Unit* unitInLibrary)
{
	this->unitsLibrary.insert(unitInLibrary);
}
set<Unit*> Player::GetUnitsFromLibrary()
{
	return unitsLibrary;
}

void Player::AddSpellToLibrary(Spell* spellToLibrary)
{
	this->spellsLibrary.insert(spellToLibrary);
}
set<Spell*> Player::GetSpellsFromLibrary()
{
	return spellsLibrary;
}