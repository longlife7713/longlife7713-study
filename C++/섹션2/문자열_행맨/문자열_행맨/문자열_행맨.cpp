#include <iostream>
#include <string>

using namespace std;

int main() {
	string solution = "language";
	string guess(solution.length(), '_');
	char ch;

	cout << "��� ����" << endl;

	while (true) {
		cout << guess << endl;
		cout << "���ڸ� �Է��Ͻÿ�(�ҹ��� ���ĺ�) : ";
		cin >> ch;
		cout << endl;
		for (int i = 0; i < solution.length(); i++) {
			if (solution[i] == ch) {
				guess[i] = ch;
			}
		}
		if (guess == solution) {
			cout << guess<< endl;
			cout << "�����մϴ�. �����Ͽ����ϴ�.";
			break;
		}
	}

	return 0;
}