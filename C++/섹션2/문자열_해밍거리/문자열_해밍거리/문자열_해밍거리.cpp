#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	int dist = 0;

	cout << "17�ڸ� ���ڿ� �ΰ��� �Է��Ͻÿ�." << endl;
	cin >> s1 >> s2;
	
	if (s1.length() != s2.length())
		cout << "Error : �� ���ڿ��� ���̰� �ٸ��ϴ�. ���α׷��� ������ϼ���.";
	else {
		for (int i = 0; i < 17; i++) {
			if (s1[i] != s2[i]) {
				dist += 1;
			}
		}
		cout << endl << dist << endl;
	}

	return 0;
}