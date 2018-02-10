#include "DLL.h"
#include<set>
#include<fstream>
#include<string>
#include<vector>
#include"UnitInfo.h"
using namespace std;

class Unit;

class DLL_EXPORT UnitParser
{
public:
	void ReadUnitInfo(set<UnitInfo*> allUnitsInfo, set<string> namesOfFilesOfUnits);
	set<string> ReadNamesOfFiles();
	vector<string> Split(const string& s, char delimiter);
private:
	set<Unit*> allUnits;
};