#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	int dist = 0;

	cout << "17자리 문자열 두개를 입력하시오." << endl;
	cin >> s1 >> s2;
	
	if (s1.length() != s2.length())
		cout << "Error : 두 문자열의 길이가 다릅니다. 프로그램을 재실행하세요.";
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