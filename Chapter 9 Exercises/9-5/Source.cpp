#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;

class Book {
private:
	string isbn;
	string title;
	string author;
	string copyrightdate;

public:
	string return_isbn() {
		return isbn;
	}
	string return_title() {
		return title;
	}
	string return_author() {
		return author;
	}
	string return_copyright() {
		return copyrightdate;
	}
	void input(Book bookadd) {
		string response;
		cout << "What is thie isbn of the book? (n-n-n-x)" << endl;
		cin >> response;
		//here <-

		bookadd.isbn = response;
		cout << "What is thie title of the book?" << endl;
		cin >> response;
		bookadd.title = response;
		cout << "Who is thie author of the book?";
		cin >> response;
		bookadd.author = response;
		cout << "What is thie copyright date of the book? (mm/dd/yy)";
		cin >> response;
		bookadd.copyrightdate = response;
	}

};

int main() {

}