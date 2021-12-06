#include<iostream>
#include<vector>
#include<string>
using namespace std;

#include "library.h"

int main() { 
	Library statefarm_library;
	statefarm_library.add_patron();
	statefarm_library.add_book();
	statefarm_library.checkout();
	statefarm_library.checkin();
}