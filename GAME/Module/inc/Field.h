#include "DLL.h"
#include <string>
using namespace std;

enum TemperatureType : char
{
	eFrosty = 1,
	eCold = 2,
	eNormal = 3,
	eWarm = 4,
	eHot = 5
};

enum HumidityType : char
{
	eLow = 1,
	eMedium = 2,
	eHigh = 3
};

class DLL_EXPORT Field
{
public:
	Field() {}
	Field(int size, int waterAmount, TemperatureType temperatureType, HumidityType humidityType, int mountainsAmount) {}
	
	void SetSize(int size);
	int GetSize();

	void SetWaterAmount(int waterAmount);
	int GetWaterAmount();

	void SetTemperatureType(TemperatureType temperatureType);
	TemperatureType GetTemperatureType();

	void SetHumidityType(HumidityType humidityType);
	HumidityType GetHumidityType();

	void SetMountainsAmount(int mountainsAmount);
	int GetmountainsAmount();

private:
	int				size;
	int				waterAmount;
	TemperatureType	temperatureType;
	HumidityType	humidityType;
	int				mountainsAmount;
	/*cells*/
};