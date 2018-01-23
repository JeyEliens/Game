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

/*set-get for lists*/

Unit* Player::SetUnits(list<Unit*> units)
{
	for (list<Unit*>::iterator it = units.begin(); it != units.end(); it++)
		this->units.push_back(*it);
}