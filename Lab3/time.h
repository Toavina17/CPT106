#pragma once
#include "header.h";

class time
{
private:

	int hour;
	int minute;
	int second;

public:
	time() {
		hour = 0;
		minute = 0;
		second = 0;
	}; // Default constructor

	time(int hour, int minute, int second) {
		hour = hour;
		minute = minute;
		second = second;
	}; // Normal constructor

		// timeInput() get a time value from keyboard input
	void timeInput() {
		cout << "Input hour: ";
		cin >> hour;
		cout << "Input minutes: ";
		cin >> minute;
		cout << "Input seconds: ";
		cin >> second;
		cout << "Time was created!" << endl;
	};

	// t1.secondDiff(t2) calculates the time difference between t1 and t2.
	int secondDiff(time timePoint);

	// Display the content of the time object on screen
	void timeOutput();

};

int time::secondDiff(time timePoint) {
	int seconds;
	seconds = (hour - timePoint.hour) * 3600 + (minute - timePoint.minute) * 60 + (second - timePoint.second);
	return seconds;
};





