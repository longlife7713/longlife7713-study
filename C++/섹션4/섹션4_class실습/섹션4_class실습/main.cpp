#include <iostream>
using namespace std;

class Time {
private :
	//�������
	int hour, minute, second;

public:

	//������. default = 0, inline function
	Time(int h=0, int m=0, int s=0) : hour{ h }, minute{ m }, second{ s } {}


	//increase function
	void inc_hour();
	void inc_minute();
	void inc_second();


	//set function, error check (inline function)
	void set_hour(int h) {
		if (h >= 24) {
			hour = 0;
			cout << "error : 24 �̸��� ���ڷ� �ٽ� �õ��ϼ���." << endl;
		}
		else
			hour = h;

	}

	void set_minute(int m) {
		if (m >= 60) {
			minute = 0;
			cout << "error : 60 �̸��� ���ڷ� �ٽ� �õ��ϼ���." << endl;
		}
		else
			minute = m;
	}

	void set_second(int s) {
		if (s >= 60) {
			second = 0;
			cout << "error : 60 �̸��� ���ڷ� �ٽ� �õ��ϼ���." << endl;
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


//function ������

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


//test main function
int main() {
	//default ����, increase function test
	Time t;
	t.print();
	t.inc_hour();
	t.print();
	t.inc_minute();
	t.print();
	t.inc_second();
	t.print();

	cout << endl;


	//���� ����, if�� test
	Time t2{ 22,58,59};
	t2.print();
	t2.inc_second();
	t2.print();
	t2.inc_minute();
	t2.print();
	t2.inc_hour();
	t2.print();

	cout << endl;


	//���� ���� + default ���� test
	Time t3{ 12 };
	Time t4{ 14, 10 };

	t3.print();
	t4.print();

	cout << endl;


	//set function and error test
	Time t5;
	t5.print();
	t5.set_hour(25);
	t5.print();
	t5.set_hour(18);
	t5.print();
	t5.set_minute(70);
	t5.print();
	t5.set_minute(50);
	t5.print();
	t5.set_second(80);
	t5.print();
	t5.set_second(25);
	t5.print();

	cout << endl;

	
	//get function test
	cout << t5.get_hour() << ":" << t5.get_minute() << ":" << t5.get_second() << endl;

	return 0;
}