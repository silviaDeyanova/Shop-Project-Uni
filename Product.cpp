#include "Product.h"

int Product::counter;

Product::Product() 
	:
	price(0.0),
	discount(false),
	category(Meat)
{
	Product::counter += 1;
	this->id = Product::counter;
}

Product::Product(const string& _name, double _price, bool _discount, Category _category, const string& _description)
	:
	price(_price),
	discount(_discount),
	category(_category),
	description(_description)
{
	Product::counter += 1;
	this->id = Product::counter;
	this->setName(_name);
}

string Product::getName() const {
	return this->name;
}

void Product::setName(const string& _name) {
	this->name = _name;
}

double Product::getPrice() const {
	return this->price;
}

void Product::setPrice(double _price) {
	this->price = _price;
}

unsigned int Product::getId() const {
	return this->id;
}

bool Product::getDiscount() const {
	return this->discount;
}

void Product::setDiscount(bool _discount) {
	this->discount = _discount;
}

Category Product::getCategory() const {
	return this->category;
}

void Product::setCategory(Category _category) {
	this->category = _category;
}

void Product::setDescription(const string& _description) {
	this->description = _description;
}
string Product::getDescription() const {
	return this->description;
}