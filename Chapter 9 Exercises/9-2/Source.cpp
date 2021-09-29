#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Name_pairs {
private:
	vector<string> name;
	vector<double> age;
public:
	void read_names() {
		string current_name;
		cout << "Enter names and type done with you've finished." << endl;
		cin >> current_name;
		while (current_name != "done" && current_name != "Done") {
			name.push_back(current_name);
			cin >> current_name;
		}
	};
	void read_ages();
	void print();
	void v_sort();

};

void Name_pairs::read_ages() {
	for (int i = 0; i < name.size(); i++) {
		int current_age;
		cout << "How old is " << name[i] << "?" << endl; 
		cin >> current_age;
		age.push_back(current_age);
	}
}

void Name_pairs::v_sort() { //stole this from 8-7, but if the names they made me use in that excersize were the same as these ones it probably was meant for me to copy and paste it.
	vector<string> name_copy = name;
	vector<double> sorted_age;

	sort(name.begin(), name.end());

	for (int i = 0; i < name.size(); i++) {
		for (int x = 0; x < age.size(); x++) {
			if (name[i] == name_copy[x]) {
				sorted_age.push_back(age[x]);
			}
		}
	}

	age = sorted_age;
}

void Name_pairs::print() {
	for (int i = 0; i < name.size(); i++) {
		cout << name[i] << "," << age[i] << endl;
	}
}

int main() {
	Name_pairs my_class;
	my_class.read_names();
	my_class.read_ages();
	my_class.v_sort();
	my_class.print();
}