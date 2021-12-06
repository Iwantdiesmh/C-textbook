#include<iostream>
using namespace std;

class Date { //this is the class from the textbook which I don't really want to copy the entire thing since that's more just copying and not really learning coding


public:
	bool leapyear(int y);
};

bool Date::leapyear(int y) {
	return (y % 4 == 0 && not(y % 400 == 0)); //if it's divisible by 4 it's a leap but, but if it's divisble by 400 then it isn't
}

int main() {
	Date today;
	if (today.leapyear(2021)) {
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	if (today.leapyear(2024)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	if (today.leapyear(4400)) {
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
}