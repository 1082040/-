#include <iostream>
using namespace std;
#include <fstream> 
#include <string>
int main()
{
	string value;
	int b;
	char filename[26];
	cout << "½Ð¿é¤JÀÉ¦W" << endl;
	cin >> filename;
	ifstream infile(filename);
	while (infile.good()) {
		getline(infile, value, ',');
		b = atoi(value.c_str());
		
		getline(infile, value, '\n');
		for (int i = 0; i < b; i++) {
			cout << value.c_str();
		}
		cout << endl;
	}
	system("pause");
}