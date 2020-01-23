/*
James Davis
January 23rd
Time - time.h
This program will house the class prototype for Time
*/

#ifndef time_h
#define time_h

class Time {
	int _milliseconds;
	int _seconds;
	int _minutes;
	int _hours;
	int _days;
	int _months;
	int _years;

public:
	Time();

	void update();
};

#endif