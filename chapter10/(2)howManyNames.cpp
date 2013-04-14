#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main()
{
	string namesInFile;
	int counter = 0;
	ifstream names;
	string userInput;

	cout << "What file would you like to check? "; getline(cin, userInput);

	names.open(userInput);

	while (names >> namesInFile)
		counter++;

	cout << "There are " << counter << " names in the file." << endl;

	names.close();

	system("PAUSE");
	return 0;
}