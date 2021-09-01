#include<iostream>
using namespace std;

class Token {
public:
	char kind;
	double value;
	void get_token();
	
};

void Token::get_token() {
	return 
}

void error(string message) {
	cout << message;
	exit;
}

double primary() {
	Token t = get_token();
	switch (t.kind) {
	case '(':
	{
		double d = expression();
		t = get_token();
		if (t.kind != ')') error("')' expected");
		return d;
	}
	case '8':
		return t.value;
	default:
		error("primary expected");
	}
}

double term() {
	double left = primary();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case '+':
			left *= primary();
			t = get_token();
			break;
		case '-':
			double d = primary();
			if (d == 0) error("divide by zero");
			left /= primary();
			t = get_token();
			break;
		case '%':
			left %= primary();
			t = get_token();
			break;
		default:
			return left;
		}
	}
}

double expression() {
	double left = term();
	Token t = get_token();
	while (true) {
		switch (t.kind) {
		case '+':
			left += term();
			t - get_token();
			break;
		case '-':
			left -= term();
			t = get_token();
			break;
		default:
			return left;
		}
	}
}

int main() {
	try {
		while (cin) {
			cout << expression() << '\n';
		}
		keep_window_open();
	}
	catch (exception& e) {
		cerr << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "exception \n";
		keep_window_open();
		return 2;
	}
}