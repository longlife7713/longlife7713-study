#include <iostream>
#include <string>

using namespace std;

int main() {
	string names[] = { "ö��", "����", "�浿" };

	for (string& name : names) {
		if (name == "�浿")
			cout << name << "�� �ȳ�!" << endl;
		else
			cout << name << "�� �ȳ�!" << endl;
	}

	return 0;
}