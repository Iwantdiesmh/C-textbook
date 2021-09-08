#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> number) {
	for (int i = 0; i < number.size(); i++) {
		cout << number[i] << endl;
	}
}

vector<int> double_list(vector<int> ls) {
	vector<int> swapping;
	for (int i = 0; i < ls.size(); i++) {
		swapping.push_back(ls[(ls.size() - 1 )- i]);
	}
	return swapping;
}

vector<int> single_list(vector<int> ls) {
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
	vector<int> original = {1, 2, 3, 4, 5, 6};

	vector<int> swapped = double_list(original);
	cout << "double list swap" << endl;
	print(swapped);
	vector<int> swapped2 = single_list(original);
	cout << "single list swap" << endl;
	print(swapped2);

}