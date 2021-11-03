#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

struct vector_elements
{
	int largest_element;
	double median;
	double mean;
};

int maxv(vector<int> any) {
	int element = any[1];
	for (unsigned int i = 1; i < any.size(); i++) {
		if (any[i] > element) {
			element = any[i];
		}
	}
	return element;
}

int median(vector<int> any) {
	double vector_median;
	sort(any.begin(), any.end());
	if (any.size() % 2 == 0) {
		int middle_left = any.size() / 2;
		vector_median = (any[middle_left] + any[middle_left + 1]) / 2;
	}

	else {
		int center = (any.size() + 1) / 2;
		vector_median = any[center];
	}

	return vector_median;
}

int mean(vector<int> any) {
	double total = 0;
	double anydbl = any.size() * 1.0;
	for (unsigned int i = 0; i < any.size(); i++) {
		total += any[i];
	}

	return (total / anydbl);
}

int main() {
	vector<int> insert_vector = { 1, 3, 8, 4, 9, 3, 2 , 4, 38};
	int largest_element = maxv(insert_vector);
	double vector_median = median(insert_vector);
	double vector_mean = mean(insert_vector);

	vector_elements test;
	test.largest_element = largest_element;
	test.median = vector_median;
	test.mean = vector_mean;

	cout << "The largest element of this list is: " << test.largest_element << endl;
	cout << "The median of this list is: " << test.median << endl;
	cout << "The mean of this list is: " << test.mean << endl;
}