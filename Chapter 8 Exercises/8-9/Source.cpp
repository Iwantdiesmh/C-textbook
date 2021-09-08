#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

//I don't really understand this excersize
int main() {
	vector<double> price = {1.23, 3.12, 23.50, 87.89, 2.99};
	vector<double> weight = {3.20, 14.30, 2.11, 25.2, 7.99, 1.00};

	cout << "Total: " << total(price, weight); //I find it hard to believe that this was what it was asking before because it's way too easy but oh well
}

double total(vector<double> price, vector<double> weight) {
	double total_amount;
	for (int i = 0; i < price.size(); i++) {
		total_amount += (price[i] * weight[i]);
	}
	return total_amount;
}