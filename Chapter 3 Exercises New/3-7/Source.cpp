#include<iostream>
using namespace std;

//same code as 3-6 except I changed one single word.
//gla I didn't need to add any kind of #include thing. It was already built into iostream.

int main() {
	int i;
	const int arraysize = 3;
	string intarray[arraysize]; //changed from int to string. Everything else is the same.
	for (i = 0; i < arraysize; i++) {
		cout << "Enter string #" << i + 1 << ": ";
		cin >> intarray[i];
	}

	bool sorted = false; 

	while (sorted == false) {
		sorted = true;
		for (i = 0; i < (arraysize - 1); i++) {
			if (intarray[i] > intarray[i + 1]) {
				swap(intarray[i], intarray[i + 1]);
				sorted = false;
			}
		}
	}

	cout << intarray[0] << ", " << intarray[1] << ", " << intarray[2]; 
}