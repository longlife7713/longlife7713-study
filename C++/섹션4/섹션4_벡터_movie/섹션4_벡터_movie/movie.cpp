#include <iostream>
#include <vector>

using namespace std;

class Movie {
private:
	string title;
	double score;

public:
	Movie(string t = "", double s = 0.0) : title{t}, score{s} {}

	void print() {
		cout << title << " : " << score << endl;
	}

};

int main() {
	vector <Movie> movies;

	movies.push_back(Movie{ "Titinic", 9.9 });
	movies.push_back(Movie{ "Gone with the wind", 9.6 });
	movies.push_back(Movie{ "Terminator", 9.7 });
	
	for (auto& m : movies) {
		m.print();
	}

	return 0;
}