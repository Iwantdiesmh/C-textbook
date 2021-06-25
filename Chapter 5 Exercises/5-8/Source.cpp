#include<iostream>
#include<vector>
#include<string>
using namespace std;

//I'm still really confused, and I'm not sure how to get an input with both strings and ints so I'm just gonna hardcode it so at least I have something. 
//also this covers 5-8 and 5-9 since 9 is just telling you to add a try statement. I don't really get 5-9 though, how would the result not be an int if all you gave it was integers?

int main() {
	//int n1, n2, n3, n4, n5;
	string line;
	cout << "Please enter the number of values you want to sum: \n";
	int nofvalues;
	cin >> nofvalues;
	//cout << "type '12 23 13 24 15 |' \n";
	//cin >> n1 >> n2 >> n3 >> n4 >> n5 >> line; //this is completely hardcoded I need help during class
	vector<int> list;
	do {
		cout << "enter a number (press '|' to stop): ";
		int number;
		string input_value;
		cin >> input_value;

		try {
			number = stoi(input_value);
		}
		catch (std::invalid_argument) {
			break;
		}
		catch (exception const& e) {
			cout << "Message: " << e.what() << "\n";
			cout << "Type: " << typeid(e).name() << "\n";
		}

		list.push_back(number);
	} while (true);

	try { //if this is correct it should check whether the ending result is an int and if it isn't couts an exception
		int total = 0;
		for (int i = 0; i < nofvalues; i++) {
			total += list[i];
			
		}
		cout << total << endl;
	}
	catch (exception const& e) {
		cout << "Message: " << e.what() << "\n";
		cout << "Type: " << typeid(e).name() << "\n";
	}


}
