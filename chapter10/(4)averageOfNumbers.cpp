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
	double total = 0;
	int counter = 0;

	randomNumbers.open("randomNumbers.txt");

	while (randomNumbers >> numbers)
	{
		total += numbers;
		counter++;
	}

	randomNumbers.close();

	cout << "The average of the numbers in the file is " << total / counter << "." << endl;

	system("PAUSE");
	return 0;
}