#include<iostream> //same as 8-7 but it's now not a fixed list.
#include<vector>
#include <string>
#include <algorithm>
using namespace std;

void print(vector<string> name, vector<int> age) {
	for (int i = 0; i < name.size(); i++) {
		cout << name[i] << ", " << age[i] << endl;
	}
}
void sort_thing(vector<string> name, vector<int> age) {
	vector<string> name_copy = name;
	vector<int> sorted_age;

	sort(name.begin(), name.end());
	for (int i = 0; i < name.size(); i++) {
		for (int x = 0; x < age.size(); x++) {
			if (name[i] == name_copy[x]) {
				sorted_age.push_back(age[x]);
			}
		}
	}

	print(name, sorted_age);

}

int main() {
	vector<string> name; 
	string currentname;
	while (true) {
		cout << "Enter a name: ";
		getline(cin, currentname);
		if (currentname == "stop" || currentname == "Stop") {
			break;
		}
		else {
			name.push_back(currentname);
		}

	}

	vector<int> age(name.size()); 
	int currentage;
	for (int i = 0; i < age.size(); i++) {
		cout << "What is " << name[i] << "'s age?: ";
		cin >> currentage;
		age.at(i) = currentage;
	}

	sort_thing(name, age);
}
