#include <iostream>
#include <string>

using namespace std;

int main() {
	string name, address;

	cout << "�̸��� �Է��Ͻÿ� : ";

	cin >> name;
	cin.ignore();

	cout << endl;
	cout << "�ּҸ� �Է��Ͻÿ� : ";

	getline(cin, address);

	cout << endl;

	cout << address << "�� " << name << "�� �ȳ��ϼ���?" << endl;

	return 0;
}