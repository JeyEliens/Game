#include "Player.h"
#include<iostream>

void Player::SetName(const string& name)
{
	this->name = name;
}
string Player::GetName()
{
	return name;
}


int Player::GetResourcesIncrease(int i)
{
	return resourcesIncrease[i];
}

void Player::AddUnit(Unit* unit)
{
	this->units.insert(unit);
}
const set<Unit*>& Player::GetUnits()
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
const set<Building*>& Player::GetBuildings()
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
const set<Building*>& Player::GetBuildingsFromLibrary()
{
	return buildingLibrary;
}

void Player::AddUnitToLibrary(Unit* unitInLibrary)
{
	this->unitsLibrary.insert(unitInLibrary);
}
const set<Unit*>& Player::GetUnitsFromLibrary()
{
	return unitsLibrary;
}

void Player::AddSpellToLibrary(Spell* spellToLibrary)
{
	this->spellsLibrary.insert(spellToLibrary);
}
const set<Spell*>& Player::GetSpellsFromLibrary()
{
	return spellsLibrary;
}