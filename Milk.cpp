#include "Milk.h"

Milk::Milk()
	:
	Product(),
	amount(0)
{}

Milk::Milk(const string& _name, double _price, bool _discount, Category _category, const string& _descripton, unsigned _amount)
	: 
	Product(_name, _price, _discount, _category, _descripton), 
	amount(_amount)
{}

void Milk::print() const {
	cout << fixed;
	cout << "Name: " << Product::name << ", Price: " << setprecision(2) << Product::price << ", ID: "
		<< Product::id << ", Discount: " << Product::discount << ", Category: " << Product::category << ", Description: "
		<< Product::description << ", Amount: " << this->amount << endl;
}
