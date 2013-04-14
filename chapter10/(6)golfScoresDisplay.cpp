#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string name;
	int score = 0;
	ifstream scores;

	scores.open("golfScores.txt");

	while (getline(scores, name))
	{
		scores >> score; scores.ignore(); scores.clear();
		cout << name << " - " << score << endl;
	}

	scores.close();

	system("PAUSE");
	return 0;
}