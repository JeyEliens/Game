#include<string>
#include"Object.h"
#include"BuildngInfo.h"
using namespace std;

class Building : public Object
{
public:

private:
	BuildingInfo thisBuildingInfo;
	int currentHealthPoints;
	int currentDamage;
	int currentAttackRange;
	int currentAccuracy;
	int currentArmor;
};