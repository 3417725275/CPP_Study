#pragma once
#include "WindData.h"
#include "Temperature.h"
#include "SolarData.h"


class AllData
{


private:
	WindData _wind_data;
	Temperature _temp_data;
	SolarData _solar_data;
};