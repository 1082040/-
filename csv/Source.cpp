#include <iostream>
using namespace std;
#include <fstream>   
#include <string>
int main()
{
	ofstream outFile;
	outFile.open("eng.csv");
	char ch = 'A';
	for (int i = 1; i <= 26; i++)
	{
		outFile << i << ","<< (char)(ch + i-1);
		outFile << endl;
	}

	outFile.close();
	system("Pause");
}