// Program 3.2: Time.cpp
// Member-function definitions for class Time.
#include <iostream>
using std::cout;
#include <iomanip>
using std::setfill;
using std::setw;
#include "Time.h" // include definition of class Time
// constructor function to initialize private data;
// calls member function setTime to set variables;
// default values are 0 (see class definition)

Time::Time(int hour, int minute, int second)
{
	setTime(hour, minute, second);
} // end Time constructor
// set hour, minute and second values

void Time::setTime(int hour, int minute, int second)
{
	setHour(hour);
	setMinute(minute);
	setSecond(second);
} // end function setTime

// set hour value
void Time::setHour(int h)
{
	hour = (h >= 0 && h < 24) ? h : 0; // validate hour
} // end function setHour

// set minute value
void Time::setMinute(int m)
{
	minute = (m >= 0 && m < 60) ? m : 0; // validate minute
} // end function setMinute

// set second value
void Time::setSecond(int s)
{
	second = (s >= 0 && s < 60) ? s : 0; // validate second
} // end function setSecond

// return hour value
int Time::getHour() const // get functions should be const
{
	return hour;
} // end function getHour

// return minute value
int Time::getMinute() const
{
	return minute;
} // end function getMinute

// return second value
int Time::getSecond() const
{
	return second;
} // end function getSecond

// print Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
	cout << setfill('0') << setw(2) << hour << ":"
		<< setw(2) << minute << ":" << setw(2) << second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() // note lack of const declaration
{
	cout << ((hour == 0 || hour == 12) ? 12 : hour % 12)
		<< ":" << setfill('0') << setw(2) << minute
		<< ":" << setw(2) << second << (hour < 12 ? " AM" : " PM");
} // end function printStandard