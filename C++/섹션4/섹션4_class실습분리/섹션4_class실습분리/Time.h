#pragma once
#include <iostream>
#ifndef TIME_H
#define TIME_H

using namespace std;


class Time {
private:
	//멤버변수
	int hour, minute, second;

public:

	//생성자. default = 0, inline function
	Time(int h = 0, int m = 0, int s = 0) : hour{ h }, minute{ m }, second{ s } {}


	//increase function
	void inc_hour();
	void inc_minute();
	void inc_second();


	//set function, error check (inline function)
	void set_hour(int h) {
		if (h >= 24) {
			hour = 0;
			cout << "error : 24 미만의 숫자로 다시 시도하세요." << endl;
		}
		else
			hour = h;

	}

	void set_minute(int m) {
		if (m >= 60) {
			minute = 0;
			cout << "error : 60 미만의 숫자로 다시 시도하세요." << endl;
		}
		else
			minute = m;
	}

	void set_second(int s) {
		if (s >= 60) {
			second = 0;
			cout << "error : 60 미만의 숫자로 다시 시도하세요." << endl;
		}
		else
			second = s;
	}


	//get function (inline function)
	int get_hour() {
		return hour;
	}

	int get_minute() {
		return minute;
	}

	int get_second() {
		return second;
	}


	//print function
	void print();
};


#endif