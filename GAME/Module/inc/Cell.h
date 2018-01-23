#include "DLL.h"
#include <string>
#include "Object.h"
#include "Spell.h"
using namespace std;

class DLL_EXPORT Cell
{
public:
	Cell() {}
	Cell(string landType, char visibility, Object myObject, Spell spell) {}
	void SetLandType(string landType) {}
	string GetLandType() {}

	void SetVisibility(char visibility) {}
	char GetVisibility() {}

	void SetMyObject(Object myObject) {}
	Object GetMyObject() {}

	void SetSpell(Spell spell) {}
	Spell GetSpell() {}
private:
	string		landType;
	char		visibility;
	Object		myObject;
	Spell		spell;
};