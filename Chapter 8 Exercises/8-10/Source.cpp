#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string maxv(vector<string> any) {
	string element = any[1];
	for (int i = 1; i < any.size(); i++) {
		if (any[i] > element) {
			element = any[i];
		}
	}
	return element;
}

int main() {
	vector<string> insert_vector = {"I", "Don't", "Get", "How", "I'm", "Supposed", "To", "Write", "This", "Program"};
	cout << maxv(insert_vector);
}