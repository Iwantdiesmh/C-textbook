#include<iostream>
#include<vector>
#include<string>
using namespace std;

#include "library.h"

ostream& operator<<(ostream& stream, Book book) {
	stream << "Book title: " << book.get_title() << endl;
	stream << "ISBN: " << book.get_isbn() << endl;
	stream << "Author: " << book.get_author() << endl;
	stream << "Copyright date: " << book.get_copyright() << endl;
	return stream;
}

void Library::add_book() {
	Book new_book;
	new_book.input();
	books.push_back(new_book);
}

void Library::add_patron() {
	Patron new_user;
	new_user.add_user();
	patrons.push_back(new_user);

}

void Library::checkout() { //checksouts books
	cout << "---Checking out----" << endl;
	string name, title;
	cout << "Who is checking out?" << endl;
	getline(cin, name);
	cout << "What book is " << name << " checking out?" << endl;
	getline(cin, title);
	bool matching_name = false;
	bool matching_book = false;
	int user_number, book_number;
	for (unsigned int i = 0; i < patrons.size(); i++) { //checks if the name that wants to check out matches with any of the patrons
		if (patrons[i].get_name() == name) {
			matching_name = true;
			user_number = i;
		}
	}
	for (unsigned int i = 0; i < books.size(); i++) { //checks if the book that wants to be checked oout matches with any of the books in the library
		if (books[i].get_title() == title) {
			matching_book = true;
			book_number = i;
		}
	}

	if (matching_name && matching_book) { //if it works it asks for the date, creates a transcation and puts it into the library
		cout << "What is today's date? mm/dd/yy" << endl;
		string date;
		getline(cin, date);
		Transaction current;
		current.set_book(books[book_number]);
		current.set_patron(patrons[user_number]);
		current.set_date(date);
		transactions.push_back(current);
	}
	else if (matching_name) {
		cout << "Book not matching" << endl;
	}
	else if (matching_book) {
		cout << "Book not matching" << endl;
	}
	else{
		cout << "Book and Name not matching" << endl;
	}

	books.erase(books.begin() + matching_book - 1); //then removes the book from the library
	cout << "\n";
}

void Library::checkin() { //checks in books
	string name;
	cout << "---Checking in----" << endl;
	cout << "Who is checking in their books?" << endl;
	getline(cin, name);
	bool matching_name = false;
	int user_number = -1;
	if (transactions.size() != 0) {
		for (int i = 0; i < transactions.size(); i++) { //checks if the name that wants to check in matches with any of the patrons
			if (patrons[i].get_name() == name) {
				matching_name = true;
				user_number = i;
			}

			if (user_number == -1) {
				cout << "There is no user." << endl;
				break;
			}

		}
		


		if (matching_name == true) { //if it does, it checks for all the transactions it has with the persons name and then adds the book back into the library and deletes the transactions
			for (unsigned int i = 0; i < transactions.size(); i++) {
				if (patrons[user_number].get_name() == transactions[i].get_name()) {
					books.push_back(transactions[i].get_book());
				}
				transactions.erase(transactions.begin() + i);
			}
		}

	}
	else {
		cout << "There are no transcations";
	}
}

vector<Patron> Library::overdue() { //returns a list containing people with fees
	vector<Patron> due;
	for (int i = 0; patrons.size(); i++) {
		if (patrons[i].is_fee()) {
			due.push_back(patrons[i]);
		}
	}
	return due;
}