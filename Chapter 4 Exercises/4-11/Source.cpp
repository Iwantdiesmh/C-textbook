#include<iostream>
#include<vector> //so I did this before realizing that you could just do "#include<vector>". Basically I tried writing this whole program with an array and that didn't go very well
using namespace std;


int main() {
	vector<int> prime;
	prime.push_back(2);
	bool isitprime;
	for (int i = 3; i < 100; i++) { //whoops I just realized that you can initialize the variable inside the for loop. Normally I just do "int i;" on a line before that
		isitprime = true;
		for (int primei = 0; primei < prime.size(); primei++) {
			if (i % prime[primei] == 0) {
				isitprime = false;
			}
		}
		if (isitprime == true) {
			prime.push_back(i);
		}
	}
	
	for (int i = 0; i < prime.size(); i++) {
		cout << prime[i] << "\n";
	}
}