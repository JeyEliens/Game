#include "Cell.h"

void Cell::SetLandType(string landType)
{
	this->landType = landType;
}
string Cell::GetLandType()
{
	return landType;
}

void Cell::SetVisibility(char visibility)
{
	this->visibility = visibility;
}
char Cell::GetVisibility()
{
	return visibility;
}

void Cell::SetMyObject(Object myObject)
{
	this->myObject = myObject;
}
Object Cell::GetMyObject()
{
	return myObject;
}

void Cell::SetSpell(Spell spell)
{
	this->spell = spell;
}
Spell Cell::GetSpell()
{
	return spell;
}