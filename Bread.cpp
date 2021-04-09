#include "Bread.h"


Bread::Bread()
	:
	Product(),
	amount(0)
{}

Bread::Bread(const string& _name, double _price, bool _discount, Category _category, const string& _descripton, unsigned _amount,
	const string& _countryOfOrigin)
	:
	Product(_name, _price, _discount, _category, _descripton),
	amount(_amount),
	countryOfOrigin(_countryOfOrigin)
{}

void Bread::print() const {
	cout << fixed;
	cout << "Name: " << Product::name << ", Price: " << setprecision(2) << Product::price << ", ID: " << Product::id
		<< ", Discount: " << Product::discount << ", Category: " << Product::category << ", Description: "
		<< Product::description << ", Amount: " << this->amount << "grams" << ", Country of origin: " << this->countryOfOrigin << endl;
}
