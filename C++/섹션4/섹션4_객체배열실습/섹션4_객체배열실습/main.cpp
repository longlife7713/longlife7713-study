#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


class Student {
private:
	string name;
	double marks;

public:
	Student(string n, double m) : name{ n }, marks{ m } {}

	void print() {
		cout << name << ", " << marks << endl;
	}

	void setter(string n) {
		name = n;
	}

	void setter(double m) {
		marks = m;
	}

	string get_name() {
		return name;
	}

	double get_marks() {
		return marks;
	}
};


bool compare(Student& a, Student& b);


int main() {
	vector <Student> list;

	string name;
	double marks;

	for (int i = 0; i < 3; i++) {
		cout << "이름과 학점을 입력하시오 : ";
		cin >> name >> marks;
		list.push_back(Student(name, marks));

	}

	/*
	list[0].setter(4.1);
	*/

	sort(list.begin(), list.end(), compare);

	for (auto& e : list) {
		e.print();
	}

	return 0;
}


bool compare(Student &a, Student &b) {
	return a.get_marks() > b.get_marks();
}