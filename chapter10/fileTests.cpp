#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string hello, test;

	ofstream outputFile;
	ifstream inputFile;

	outputFile.open("exampleFile.txt");

	outputFile << "Hello world" << endl << "this is a test";

	outputFile.close();

	inputFile.open("exampleFile.txt");

	getline(inputFile, hello); 
	getline(inputFile, test);

	inputFile.close();

	cout << hello << endl << test << endl;

	system("PAUSE");
	return 0;
}