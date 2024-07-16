#include <iostream>
#include <string>

using namespace std;

int main() {
	string name, address;

	cout << "이름을 입력하시오 : ";

	cin >> name;
	cin.ignore();

	cout << endl;
	cout << "주소를 입력하시오 : ";

	getline(cin, address);

	cout << endl;

	cout << address << "의 " << name << "씨 안녕하세요?" << endl;

	return 0;
}