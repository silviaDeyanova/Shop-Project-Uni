#include "User.h"

User::User() {}

User::User(const string& _username, const string& _password) {
	this->setUsername(_username);
	this->setPassword(_password);
}

void User::setUsername(const string& _username) {
	this->username = _username;
}

string User::getUsername() const {
	return this->username;
}

void User::setPassword(const string& _password) {
	this->password = _password;
}

bool User::checkIfCorrect(const string& _username, const string& _password) const {
	int isUsernameCorrect = this->username.compare(_username);
	int isPasswordCorrect = this->password.compare(_password);
	return (isUsernameCorrect == 0 && isPasswordCorrect == 0);
}

void User::login(const string& _username, const string& _password) const {
	if (!this->checkIfCorrect(_username, _password)) {
		cout << "Wrong username and/or password!" << endl;
	}
	else {
		cout << "You have logged successfully!" << endl;
	}
}

void User::addProductInCart(const Product* _product) {
	this->cart.addProduct(_product);
}

void User::removeLastProductFromCart(const Product* _product) {
	this->cart.removeLastProduct(_product);
}

void User::prinInfoAboutProductsInCart() const {
	this->cart.printProducts();
}

ostream& operator<<(ostream& out, const User& _user) {
	out << _user.getUsername();
	return out;
}