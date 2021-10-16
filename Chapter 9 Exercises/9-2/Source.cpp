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
		cout << "Enter names and type done when you've finished." << endl;
		cin >> current_name;
		while (current_name != "done" && current_name != "Done") {
			/*if () { see below

			}*/
			name.push_back(current_name);
			cin >> current_name;
		}
	};
	void read_ages();
	void v_sort();
	vector<string> get_names() {
		return name;
	}
	vector<double> get_age() {
		return age;
	}

	//not sure I know how to write this without breaking every == down the line

	bool operator==(string compare) { 
		bool match = false;
		for (int i = 0; i < name.size(); i++) {
			if (name[i] == compare) {
				match = true;
			}
		}
		return match;
	}

};

void operator<<(Name_pairs print, int e) { //I dont need a second parameter so I'm not sure what do use it for. 
	vector<string> names = print.get_names();
	vector<double> ages = print.get_age();
	for (int i = 0; i < names.size(); i++) {
		cout << names[i] << "," << ages[i] << endl;
	}
}	

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


int main() {
	Name_pairs my_class;
	my_class.read_names();
	my_class.read_ages();
	my_class.v_sort();
	my_class << 1;
}