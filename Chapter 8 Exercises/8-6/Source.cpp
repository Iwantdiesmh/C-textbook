#include<iostream>
#include<vector>
using namespace std;

void print(vector<string> number) {
	for (int i = 0; i < number.size(); i++) {
		cout << number[i] << endl;
	}
}

vector<string> double_list(vector<string> ls) {
	vector<string> swapping;
	for (int i = 0; i < ls.size(); i++) {
		swapping.push_back(ls[(ls.size() - 1) - i]);  
		/*accidentally found a bug that somehow still worked correctly. Originally it was "ls[(ls.size() - i)]" which meant it returned the 'size of ls minus i' instead of the placement on the list. Funnily enough this worked by it was still wrong.*/
	}
	return swapping;
}

vector<string> single_list(vector<string> ls) {
	int size; //determines how many values I need to swap, I'm flipping the list by flipping the first and last digit, 2nd and 2nd to last etc.
	if (ls.size() % 2 == 0) { //if list is even I need to swap every pair
		size = ls.size() / 2;
	}
	else { //if list is odd, I need to swap every pair except the middle one
		size = (ls.size() - 1) / 2;
	}

	for (int i = 0; i < size; i++) {
		swap(ls[i], ls[(ls.size() - 1) - i]);
	}
	return ls;
}

int main() {
	vector<string> original = { "1", "2", "3", "4", "5", "6", "7" };

	vector<string> swapped = double_list(original);
	cout << "double list swap" << endl;
	print(swapped);
	vector<string> swapped2 = single_list(original);
	cout << "single list swap" << endl;
	print(swapped2);

}