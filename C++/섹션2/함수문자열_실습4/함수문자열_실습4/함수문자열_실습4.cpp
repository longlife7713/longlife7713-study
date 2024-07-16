#include <iostream>
#include <string>

using namespace std;

int main() {

	string s1 = "I love ";
	string s2 = "myself";
	string s3, s4, s5;

	s5 = s1 + s2;

	cin >> s3;
	cin.ignore();
	getline(cin, s4);

	cout << s3 + s4 << endl;

	cout << s5 << endl;

	int index = s5.find('l');
	cout << index << endl;

	int index2 = s5.find('l', 3);
	cout << index2 << endl;

	s5.insert(1, "-");
	cout << s5 << endl;

	cout << s5.length() << endl;
	

	return 0;
}