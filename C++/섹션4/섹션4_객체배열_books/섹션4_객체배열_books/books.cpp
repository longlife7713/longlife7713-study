#include <iostream>
using namespace std;

class Book {
private:
	string title;
	int price;

public:
	Book(string t,int p) : title{ t }, price{ p } {}

	void print() {
		cout << "���� : " << title << "   " << "���� : " << price << endl;
	}
};

int main() {
	cout << "�����ϰ� �ִ� å ����" << endl;
	cout << "===================" << endl;

	Book Books[2]{ {"��� C++", 25000}, {"��� C", 22000} };
		for (Book& b : Books) {
			b.print();
		}

	cout << "===================" << endl;
	
	return 0;
}