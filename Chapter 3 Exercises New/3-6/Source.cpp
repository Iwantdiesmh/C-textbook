#include<iostream>
using namespace std;

int main() {
	int i;
	const int arraysize = 3; 
	int intarray[arraysize];
	for (i = 0; i < arraysize; i++) {
		cout << "enter int #" << i + 1 << ": ";
		cin >> intarray[i];
	}

	//I will confess, I stole this from my foothill assignment, but that was my work too so it can't be that bad.

	/* everything below is copied from my assignment including the comments (well I changed the array to "intarray")*/

	bool sorted = false; //determining whether the list is sorted or not

	//resorting the list to make it in order using the bubble method. I kind of created my own that is a bit of a spinoff though (should be a bit simpler)
	//basically checks if [i] is greater than [i+1], which then it swaps.

	while (sorted == false) {
		sorted = true;
		for (i = 0; i < (arraysize - 1); i++) {
			if (intarray[i] > intarray[i + 1]) {
				swap(intarray[i], intarray[i + 1]);
				sorted = false;
			}
		}
	}


	/* okay end of copy and paste */
	
	cout << intarray[0] << ", " << intarray[1] << ", " << intarray[2]; //okay it's broken again but it's 6:22 and I'll ask during class or come back if I have time
}