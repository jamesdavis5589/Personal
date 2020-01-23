/*
James Davis
January 23rd
Time - time.h
This program will define class Time
*/

#include "time.h"

Time::Time() :
	_milliseconds(0),
	_seconds(0),
	_minutes(0),
	_hours(0),
	_days(0),
	_months(0),
	_years(0)
{}

void Time::update()
{
	//Will update the time variables, making each appropriate

	//Milliseconds
	if (_milliseconds <= 1000)
	{
		int overflow;
		overflow = _milliseconds / 1000;

		//Add extra minutes to hours
		_seconds += overflow;

		//Remove extra minutes
		_milliseconds += _milliseconds % 1000;
	}

	//Seconds
	if (_seconds <= 60)
	{
		int overflow;
		overflow = _seconds / 60;

		//Add extra seconds to minutes
		_minutes += overflow;

		//Remove extra seconds
		_seconds += _seconds % 60;
	}

	//Minutes
	if (_minutes <= 60)
	{
		int overflow;
		overflow = _minutes / 60;

		//Add extra minutes to hours
		_hours += overflow;

		//Remove extra minutes
		_minutes += _minutes % 60;
	}

	//Hours
	if (_hours <= 24)
	{
		int overflow;
		overflow = _hours / 24;

		//Add extra hours to days
		_days += overflow;

		//Remove extra hours
		_hours += _hours % 24;
	}

	//Days
	if (_days <= 30)
	{
		int overflow;
		overflow = _days / 30;

		//Add extra hours to days
		_years += overflow;

		//Remove extra hours
		_days += _days % 30;
	}
}