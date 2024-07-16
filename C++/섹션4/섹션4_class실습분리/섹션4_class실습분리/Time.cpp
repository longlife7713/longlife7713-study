#include <iostream>
#include "Time.h"


//function ±¸ÇöºÎ

void Time::inc_hour() {
	++hour;
	if (hour > 23) {
		hour = 0;
	}
}

void Time::inc_minute() {
	++minute;
	if (minute > 59) {
		++hour;
		minute = 0;
	}
}

void Time::inc_second() {
	++second;
	if (second > 59) {
		++minute;
		second = 0;
	}
}

void Time::print() {
	cout << hour << ":" << minute << ":" << second << endl;
}