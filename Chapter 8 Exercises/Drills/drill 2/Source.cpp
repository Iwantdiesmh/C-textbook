#include<iostream>
using namespace std;

void swap_v(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

/*void swap_cr( const int& a, const  int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}*/

int main() {
	int x = 7;
	int y = 9;
	swap_r(x, y);
}