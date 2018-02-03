#include "DLL.h"

enum ObjectType
{
	eUnit,
	eBuilding
};

class DLL_EXPORT Object 
{
public:
	Object() {}

	virtual ObjectType GetType() = 0;
};