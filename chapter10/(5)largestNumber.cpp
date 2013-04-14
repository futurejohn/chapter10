#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	ifstream randomNumbers;
	int numbers = 0;
	double largestNumber = 0, smallestNumber = 0;

	randomNumbers.open("randomNumbers.txt");

	while (randomNumbers >> numbers)
	{
		if (numbers > largestNumber)
			largestNumber = numbers;
	}

		while (randomNumbers >> numbers)
	{
		if (numbers < largestNumber)
			smallestNumber = numbers;
	}

	randomNumbers.close();

	cout << "The largest number in the file is " << largestNumber << "." << endl;

	cout << "The smallest number in the file is " << smallestNumber << "." << endl;

	system("PAUSE");
	return 0;
}