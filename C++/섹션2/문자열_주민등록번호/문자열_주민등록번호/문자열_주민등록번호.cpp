#include <iostream>
#include <string>

using namespace std;

int main() {
	string num, result;

	cin >> num;

	for (auto& c : num) {
		if (c == '-')
			continue;
		cout << c;
	}
	cout << endl;

	return 0;
}