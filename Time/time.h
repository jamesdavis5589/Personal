/*
James Davis
January 23rd
Time - time.h
*/

#ifndef time_h
#define time_h

class Time {
	int _seconds;
	int _minutes;
	int _hours;

public:
	Time();

	void update();
};

#endif