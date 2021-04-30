#include <iostream>
using namespace std;

int main () {
	cout << "Enter the name of the person you want to write to: \n";
	string first_name;
	cin >> first_name;
	cout << "Dear " + first_name + ",\n"
		<< "How are you? I am fine. I miss you. \n";
	string friend_name;
	char friend_sex;
	cout << "Enter the name of another friend: \n";
	cin >> friend_name;
	cout << "Please enter M or F depending on whether the friend is male or female: \n";
	cin >> friend_sex;
	if (friend_sex == 'm') {
		cout << "If you see " + friend_name + ", please tell him to call me. \n";
	}
	if (friend_sex == 'f') {
		cout << "If you see " + friend_name + ", please tell her to call me. \n";
	}
	int age;
	cout << "What is your age? \n";
	cin >> age;
	if (age < 0 || age > 110) {
		cout << "You're kidding!";
	}
	else{
		cout << "I heard you just had a birthday and you are " << age << " years old \n";
		if (age < 12) {
			cout << "Next year you will be " << age + 1 << " years old \n";
		}
		else if (age == 17) {
			cout << "Next year you will be able to vote \n";
		}
		else if (age > 70) {
			cout << "I hope you're enjoying retirement! \n";
		}
		cout << "Sincerly \n \n" << first_name;
	}
	}	