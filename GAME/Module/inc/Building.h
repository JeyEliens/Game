#include "DLL.h"
#include <string>
#include "Object.h"

class BuildingInfo;
using namespace std;

class DLL_EXPORT Building : public Object
{
public:

private:
	BuildingInfo*	buildingInfo;
	int				currentHealthPoints;
	int				currentDamage;
	int				currentAttackRange;
	int				currentAccuracy;
	int				currentArmor;
};