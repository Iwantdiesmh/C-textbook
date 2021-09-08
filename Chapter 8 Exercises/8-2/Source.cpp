#include<iostream>
#include<vector>
using namespace std;

void function(string label, vector<int> number) {
	cout << "Name: " << label << endl;
	for (int i = 0; i < number.size(); i++) {
		cout << "Vector number " << i + 1 << ": " << number[i] << endl;
	}
}

void fibonacci(int x, int y, vector<int> v, int n) { //x and y are the starting digits, v is the vector and n is the amount of numbers in v. 
	int previous, sum;
	previous = x;
	sum = y;
	v.push_back(x); 
	v.push_back(y);
	for (int i = 0; i < n - 2; i++) {
		v.push_back(previous + sum);
		int temp = previous;
		previous = sum;
		sum = temp + sum;
	}
	function("Fibbonacci Sequence", v);
}


int main() {
	vector<int> list;
	int x, y, n;
	cout << "input x: ";
	cin >> x;
	cout << "input y: ";
	cin >> y;
	cout << "input the number of integers you want in the list: ";
	cin >> n;

	fibonacci(x, y, list, n);
}

//1610612736 is as far as I can get