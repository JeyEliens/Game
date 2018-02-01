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
	UnitInfo* ReadUnitInfo();
	vector<string> split(const string& s, char delimiter);
private:
	
};