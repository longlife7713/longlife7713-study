#include <iostream>
using namespace std;

class Book {
private:
	string title;
	int price;

public:
	Book(string t,int p) : title{ t }, price{ p } {}

	void print() {
		cout << "제목 : " << title << "   " << "가격 : " << price << endl;
	}
};

int main() {
	cout << "소장하고 있는 책 정보" << endl;
	cout << "===================" << endl;

	Book Books[2]{ {"어서와 C++", 25000}, {"어서와 C", 22000} };
		for (Book& b : Books) {
			b.print();
		}

	cout << "===================" << endl;
	
	return 0;
}