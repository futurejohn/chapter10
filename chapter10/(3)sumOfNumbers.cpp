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
	int counter = 0;

	randomNumbers.open("randomNumbers.txt");

	while (randomNumbers >> numbers)
		counter += numbers;

	randomNumbers.close();

	cout << "The numbers in the file add up to " << counter << "." << endl;

	system("PAUSE");
	return 0;
}