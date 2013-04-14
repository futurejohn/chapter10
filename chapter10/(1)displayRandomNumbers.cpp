#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	ifstream randomNumbers;
	int numbers;

	randomNumbers.open("randomNumbers.txt");

	while (randomNumbers >> numbers)
		cout << numbers << endl;

	system("PAUSE");
	return 0;
}