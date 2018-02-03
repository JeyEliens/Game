#include "DLL.h"
#include <string>
#include "Enums/LandType.h"
using namespace std;

class Object;
class Spell;

class DLL_EXPORT Cell
{
public:
	Cell(LandType landType) {}

	void SetLandType(LandType landType);
	LandType GetLandType();

	void SetVisibility(char visibility);
	char GetVisibility();

	void SetMyObject(Object* myObject);
	Object* GetMyObject();

	void SetSpell(Spell* spell);
	Spell* GetSpell();
private:
	LandType		landType;
	char		visibility;
	Object*		myObject;
	Spell*		spell;
};