#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int golfScore = 0;
	string golferName;
	ofstream scores;

	cout << "The program will ask you to input the name of a golfer and their score for this round." << endl;
	cout << "When you are finished, enter 'end' for the golfer's name or '0' for the golfer's score." << endl << endl;

	scores.open("golfScores.txt");


	while (golferName != "end" || golfScore != 0)
	{
		cout << "Input golfer's name: "; getline(cin, golferName); 
		cout << "Input golfer's score: "; cin >> golfScore; cin.ignore(); cin.clear();
		
		if (golferName != "end" || golfScore != 0)
		{
			scores << golferName << endl;
			scores << golfScore << endl;
		}
	}

	scores.close();

	return 0;
}