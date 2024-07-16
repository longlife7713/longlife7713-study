#include <iostream>
#include "Time.h"

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
	Time t2{ 22,58,59 };
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