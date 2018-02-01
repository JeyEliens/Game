#include "DLL.h"
#include <string>
#include "Object.h"

class BuildingInfo;
using namespace std;

class DLL_EXPORT Building : public Object
{
public:
	Building() {};
	Building(BuildingInfo* thisBuildingInfo, int currentHealthPoints, int currentDamage, int currentAttackRange, int currentAccuracy, int currentArmor) {};

	void SetThisBuildingInfo(BuildingInfo* buildingInfo);
	BuildingInfo* GetThisBuildingInfo();

	void SetCurrentHealthPoints(int currentHealthPoints);
	int GetCurrentHealthPoints();

	void SetCurrentDamage(int currentDamage);
	int GetCurrentDamage();

	void SetCurrentAttackRange(int currentAttackRange);
	int GetCurrentAttackRange();

	void SetCurrentAccuracy(int currentAccuracy);
	int GetCurrentAccuracy();

	void SetCurrentArmor(int currentArmor);
	int GetCurrentArmor();
private:
	BuildingInfo*	buildingInfo;
	int				currentHealthPoints;
	int				currentDamage;
	int				currentAttackRange;
	int				currentAccuracy;
	int				currentArmor;
};