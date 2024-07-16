#include <iostream>
#include <string>

using namespace std;

int main() {
	string solution = "language";
	string guess(solution.length(), '_');
	char ch;

	cout << "행맨 게임" << endl;

	while (true) {
		cout << guess << endl;
		cout << "글자를 입력하시오(소문자 알파벳) : ";
		cin >> ch;
		cout << endl;
		for (int i = 0; i < solution.length(); i++) {
			if (solution[i] == ch) {
				guess[i] = ch;
			}
		}
		if (guess == solution) {
			cout << guess<< endl;
			cout << "축하합니다. 성공하였습니다.";
			break;
		}
	}

	return 0;
}