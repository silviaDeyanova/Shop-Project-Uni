#include <exception>
#include "Shop.h"

Shop::Shop() 
	:
	productCount(0)
{}

Shop::Shop(const string&  _name) {
	this->setName(_name);
}

void Shop::setName(const string&  _name) {	
	this->name = _name;
}

string Shop::getName() const {
	return this->name;
}

void Shop::printProducts() const {
	if (this->productCount == 0) {
		throw exception("There are not products in this shop!");
	}
	cout << "Products in the shop:" << endl;
	for (int i = 0; i < this->productCount; i++) {
		this->products[i]->print();
	}
}

void Shop::addNewProduct(const Product* _product) {
	Product* ptr = const_cast<Product*>(_product);
	this->products.push_back(ptr);
	this->productCount++;
}

void Shop::addNewUser(const User& _user) {
	this->users.push_back(_user);
}

void Shop::printUsers() const {
	if (users.size() == 0) {
		throw exception("There are not users!");
	}
	for (auto it = this->users.begin(); it != this->users.end(); it++) {
		cout << *it << endl;
	}
}
