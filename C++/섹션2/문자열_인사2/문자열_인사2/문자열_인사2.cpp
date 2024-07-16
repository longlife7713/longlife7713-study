#include <iostream>
#include <string>

using namespace std;

int main() {
	string names[] = { "Ã¶¼ö", "¿µÈñ", "±æµ¿" };

	for (string& name : names) {
		if (name == "±æµ¿")
			cout << name << "¾Æ ¾È³ç!" << endl;
		else
			cout << name << "¾ß ¾È³ç!" << endl;
	}

	return 0;
}