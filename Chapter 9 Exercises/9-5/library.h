#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Book {
private:
	string isbn;
	string title;
	string author;
	string copyrightdate;
	string genre;

public:
	string get_isbn() {
		return isbn;
	}
	string get_title() {
		return title;
	}
	string get_author() {
		return author;
	}
	string get_copyright() {
		return copyrightdate;
	}
	string get_genre() {
		return genre;
	}
	void input() {
		string response;
		cout << "----Adding Book----" << endl;
		cout << "What is thie isbn of the book? (n-n-n-x)" << endl;
		getline(cin, isbn);
		cout << "What is thie title of the book?" << endl;
		getline(cin, title);
		cout << "Who is thie author of the book?" << endl;
		getline(cin, author);
		cout << "What is thie copyright date of the book? (mm/dd/yy)" << endl;
		getline(cin, copyrightdate);
		cout << "What is the genre of this book?" << endl;
		cin >> response;
		while (response != "fiction" && response != "nonfiction" && response != "periodical" && response != "biography" && response != "children" && response != "Fiction" && response != "Nonfiction" && response != "Periodical" && response != "Biography" && response != "Children") {
			cout << "Title has to be one of these categories: [fiction, nonfiction, periodical, biography, children]" << endl;
			getline(cin, response);
			
		}
		genre = response;
		cout << "\n";
	}

};

class Patron {
private:
	string name = "none";
	int id = 12345678;
	double fee = 0;
public:
	string get_name() {
		return name;
	}
	void add_user() {
		cout << "---Adding user----" << endl;
		cout << "What's your name?" << endl;
		getline(cin, name);
		cout << "What is your id?" << endl;
		cin >> id;
		cout << "\n";
		//no idea how to set fee so for now it's going to be default 0
	}
	bool is_fee() {
		return (fee != 0);
	}
};

struct Transaction {
private:
	Book book;
	Patron patron;
	string date;
public:
	string get_name() {
		return patron.get_name();
	}
	void set_patron(Patron set) { //couldn't think of a better name
		patron = set;
	}

	void set_book(Book set) {
		book = set;
	}

	void set_date(string set) {
		date = set;
	}

	Book get_book() {
		return book;
	}
};

class Library {
private:
	vector<Book> books;
	vector<Patron> patrons;
	vector<Transaction> transactions;
public:
	void add_book();
	void add_patron();
	void checkout();
	void checkin();
	vector<Patron> overdue();
};
