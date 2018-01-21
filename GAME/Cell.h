#include<string>
#include"Object.h"
#include"Spell.h"
using namespace std;

class Cell
{
public:

private:
	string landType;
	char visibility;
	Object myObject;
	Spell spellOnThisCell;
};