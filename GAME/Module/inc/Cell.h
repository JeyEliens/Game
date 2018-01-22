#include "DLL.h"
#include <string>
#include "Object.h"
#include "Spell.h"
using namespace std;

class DLL_EXPORT Cell
{
public:

private:
	string		landType;
	char		visibility;
	Object		myObject;
	Spell		spell;
};