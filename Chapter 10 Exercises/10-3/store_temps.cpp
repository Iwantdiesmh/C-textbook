#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main() {
	ofstream outdata;

	vector<int> temp_data = { 12, 234, 23, 1, 4, 23, 34, 2341, 92, 342, 2, 4, 628, 239, 93, 928 };

	outdata.open("raw_temps.txt");
	for (int i = 0; i < temp_data.size(); i++) {
		outdata << temp_data[i] << endl;
	}
}