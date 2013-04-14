#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string name;
	int score = 0;
	int lowestScore = 0;
	string lowestName;
	ifstream scores;

	scores.open("golfScores.txt");

	getline(scores, name); scores >> score; 
	scores.ignore(); scores.clear();
	lowestScore = score;

	scores.close();

	scores.open("golfScores.txt");



	while (getline(scores, name))
	{
		scores.ignore(); scores.clear();
		scores >> score;
		if (score < lowestScore)
		{
			lowestName = name;
			lowestScore = score;
		}	
	}

	scores.close();

	cout << "The golfer with the lowest score is " << lowestName << " with a " << lowestScore << "." << endl;

	system("PAUSE");
	return 0;
}