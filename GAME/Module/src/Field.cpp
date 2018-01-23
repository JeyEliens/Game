#include "Field.h"

void Field::SetWaterAmount(int waterAmount)
{
	this->waterAmount = waterAmount;
}
int Field::GetWaterAmount()
{
	return waterAmount;
}

void Field::SetTemperatureType(string temperatureType)
{
	this->temperatureType = temperatureType;
}
string Field::GetTemperatureType()
{
	return temperatureType;
}

void Field::SetHumidityType(string humidityType)
{
	this->humidityType = humidityType;
}
string Field::GetHumidityType()
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