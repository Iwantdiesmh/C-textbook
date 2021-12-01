#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;


double mean(vector<double> temps) {
	int total = 0;
	for (int i = 0; i < temps.size(); i++) {
		total += temps[i];
	}
	int mean = total / temps.size();
	return mean;
}

double median(vector<double> temps) {
	vector<double> newvec = temps;
	sort(newvec.begin(), newvec.end()); //sort list
	const double newvecdbl = newvec.size();
	if (newvec.size() % 2 == 1) {
		double bottomint = newvec[floor(newvecdbl / 2) - 1]; //go to the middle point of the list, floor that to get the bottom integer, and subtract to compensate for being in a list
		double topint = newvec[floor(newvecdbl / 2)]; //same thing without the minus 1
		return ((bottomint + topint) / 2);
	}
	else {
		return newvec[(newvecdbl / 2) - 1];
	}
}

int main() {
	ifstream ist{ "raw_temps.txt" };
	vector<double> temps;
	double n;
	char t;
	while (true) {
		ist >> t >> n;
		if (ist.eof())
			break;

		else if (t == 'c' or t == 'C') {
			temps.push_back((n * 9 / 5) + 32);
			cout << (n * 9 / 5) + 32 << endl;
		}
		else {
			temps.push_back(n);
			cout << n << endl;
		}

	}
	for (int i = 0; i < temps.size(); i++) {
		cout << temps[i] << endl;
	}

	cout << "The mean is " << mean(temps) << "." << endl;
	cout << "The median is " << median(temps) << "." << endl;
}
