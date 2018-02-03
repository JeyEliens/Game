#include "Field.h"

void Field::SetWaterAmount(int waterAmount)
{
	this->waterAmount = waterAmount;
}
int Field::GetWaterAmount()
{
	return waterAmount;
}

void Field::SetTemperatureType(TemperatureType temperatureType)
{
	this->temperatureType = temperatureType;
}
TemperatureType Field::GetTemperatureType()
{
	return temperatureType;
}

void Field::SetHumidityType(HumidityType humidityType)
{
	this->humidityType = humidityType;
}
HumidityType Field::GetHumidityType()
{
	return humidityType;
}

void Field::SetMountainsAmount(int mountainsAmount)
{
	this->mountainsAmount = mountainsAmount;
}
int Field::GetmountainsAmount()
{
	return mountainsAmount;
}