#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
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
	/*
	terribly written but it goes something like this, for each name in the vector "name", it sees which value it matches in the original name list ("name_copy")
	so if the original third name was Angus and now that's now the first in the sorted list, it would recognize that Angus was originally in the third slot through comparing with the copied list
	now that it knows, it push_back's the corresponding age to the "sorted_age" list, so since Angus was name_copy[3], it would just push back age[3] to "sorted_age", making it the first value and so on.
	*/
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
	vector<string> name(5); //sets the name for all 5 people
	string currentname;
	for (int i = 0; i < name.size(); i++) {
		cout << "Enter a name: ";
		getline(cin, currentname);
		name.at(i) = currentname;
	}
	vector<int> age(5); //sets the age for all 5 people
	int currentage;
	for (int i = 0; i < age.size(); i++) {
		cout << "What is " << name[i] << "'s age?: ";
		cin >> currentage;
		age.at(i) = currentage;
	}

	sort_thing(name, age);
}
