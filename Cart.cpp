#include <exception>
#include "Cart.h"

Cart::Cart() 
	:
	isEmpty(true),
	productCount(0),
	totalPrice(0.0)
{}

void Cart::addProduct(const Product* _m) {
	this->isEmpty = false;
	this->totalPrice += _m->getPrice();
	Product* ptr = const_cast<Product*>(_m);
	this->products.push_back(ptr);
	this->productCount++;
}

void Cart::removeLastProduct(const Product* product) {
	if (this->productCount == 0) {
		throw exception("There are not products in this cart! You can not remove products!");
	}
	this->products.pop_back();
	this->productCount--;
	this->totalPrice -= product->getPrice();
}

void Cart::printProducts() const {
	if (this->productCount == 0) {
		throw exception("There are not products in this cart!");
	}
	cout << "Products in the cart:" << endl;
	for (int i = 0; i < this->productCount; i++) {
		this->products[i]->print();
	}
	cout << "The total price is: " << this->totalPrice << "$" << endl;
}