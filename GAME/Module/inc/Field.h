#include "DLL.h"
#include <string>
using namespace std;

class DLL_EXPORT Field
{
public:
	Field() {}
	Field(int size, int waterAmount, string temperatureType, string humidityType, int mountainsAmount) {}
	
	void SetSize(int size);
	int GetSize();

	void SetWaterAmount(int waterAmount);
	int GetWaterAmount();

	void SetTemperatureType(string temperatureType);
	string GetTemperatureType();

	void SetHumidityType(string humidityType);
	string GetHumidityType();

	void SetMountainsAmount(int mountainsAmount);
	int GetmountainsAmount();
private:
	int			size;
	int			waterAmount;
	string		temperatureType;
	string		humidityType;
	int			mountainsAmount;
	/*cells*/
};