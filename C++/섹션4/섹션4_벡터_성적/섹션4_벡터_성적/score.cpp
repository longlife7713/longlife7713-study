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
		cout << "성적을 입력하시오(종료는 -1) : ";
		cin >> input;

		cout << endl;

		if (input == -1)
			break;

		sum += input;
		count++;

		scores.push_back(input);
	}

	avg = double(sum) / count;

	//count 대신 scores.size() 사용 가능

	cout << "성적 평균 = " << avg;

	return 0;
}