/*
James Davis
January 23rd
Time - time.h
*/

#include "time.h"

Time::Time() :
	_seconds(0),
	_minutes(0),
	_hours(0)
{}

void Time::update()
{
	//Will update the time variables, making each appropriate

	if (_seconds <= 60)
	{
		int overflow;
		overflow = _seconds / 60;

		//Add extra seconds to minutes
		_minutes += overflow;

		//Remove extra seconds
		_seconds += _seconds % 60;
	}

	if (_minutes <= 60)
	{
		int overflow;
		overflow = _minutes / 60;

		//Add extra minutes to hours
		_hours += overflow;

		//Remove extra seconds
		_minutes += _minutes % 60;
	}
}