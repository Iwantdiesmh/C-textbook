#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

double total(vector<double> price, vector<double> weight) {
	double total_amount;
	for (int i = 0; i < price.size(); i++) {
		double value = price[i] * weight[i];
	total_amount += value;
	}


	return total_amount;
}

//I don't really understand this excersize
int main() {
	vector<double> price = {1.23, 3.12, 23.50, 87.89, 2.99};
	vector<double> weight = {3.20, 14.30, 2.11, 25.2, 7.99, 1.00};

	double total_amount = total(price, weight);

	cout << "Total: " << total_amount; 
}

