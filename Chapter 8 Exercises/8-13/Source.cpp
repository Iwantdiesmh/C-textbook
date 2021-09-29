#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> convert(vector<string> str) {
	vector<int> converted;
	for (int i = 0; i < str.size(); i++) {
		converted.push_back(str[i].length());
	}

	return converted;
}

void print(vector<int> printthis, string text) {
	cout << text << endl;
	for (int i = 0; i < printthis.size(); i++) {
		cout << printthis[i] << endl;
	}
}

void print(vector<string> printthis, string text) {
	cout << text << endl;
	for (int i = 0; i < printthis.size(); i++) {
		cout << printthis[i] << endl;
	}
}

vector<string> shortest_strings(vector<int> newvector, vector<string> og) {
	vector<string> smallest_strings;
	int smallest = newvector[0];
	for (int i = 0; i < newvector.size(); i++) {

		if (newvector[i] < smallest) {
			smallest = newvector[i];
		}
	}
	for (int i = 0; i < newvector.size(); i++) {
		if (newvector[i] == smallest) {
			smallest_strings.push_back(og[i]);
		}
	}

	return smallest_strings;
}

vector<string> longest_strings(vector<int> newvector, vector<string> og) {
	vector<string> long_strings;
	int max = newvector[0];
	for (int i = 0; i < newvector.size(); i++) {

		if (newvector[i] > max) {
			max = newvector[i];
		}
	}
	for (int i = 0; i < newvector.size(); i++) {
		if (newvector[i] == max) {
			long_strings.push_back(og[i]);
		}
	}

	return long_strings;
}

int main() {
	vector<string> og = {"hi", "I", "Am", "Angus", "A", "High Schooler", "At", "Gunn"};
	vector<int> newvector = convert(og);
	print(newvector, "The length of each string");\

	vector<string> smallest_strings = shortest_strings(newvector, og);
	print(smallest_strings, "The smallest string(s) are");

	vector<string> long_strings = longest_strings(newvector, og);
	print(long_strings, "The longest string(s) are");
}