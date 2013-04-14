#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int SIZE = 100;

int main()
{
	srand (time(NULL));
	ofstream randomNumberFile;

	randomNumberFile.open("randomNumbers.txt");

	for (int index = 0; index <= SIZE - 1; index++)
	{
		randomNumberFile << rand() % SIZE << endl;
	}

	return 0;
}