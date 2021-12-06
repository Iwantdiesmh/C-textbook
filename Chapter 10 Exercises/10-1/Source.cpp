#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
	string open_file;
	cout << "Please enter file name: " << endl;
	getline(cin, open_file);
	ifstream ist{ open_file };

	int n;
	int total = 0;
	while (true) {
		ist >> n;
		if (ist.eof())
			break;

		total += n;

	}
	cout << "Total  = " << total << endl;
	ist.close();
}