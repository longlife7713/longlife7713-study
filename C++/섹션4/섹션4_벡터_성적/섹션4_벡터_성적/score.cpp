#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> scores;

	int input;
	int sum = 0;
	int count = 0;
	double avg;

	while (true) {
		cout << "������ �Է��Ͻÿ�(����� -1) : ";
		cin >> input;

		cout << endl;

		if (input == -1)
			break;

		sum += input;
		count++;

		scores.push_back(input);
	}

	avg = double(sum) / count;

	//count ��� scores.size() ��� ����

	cout << "���� ��� = " << avg;

	return 0;
}