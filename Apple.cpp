#include "Apple.h"


Apple::Apple()
	:
	Product()
{}

Apple::Apple(const string& _name, double _price, bool _discount, Category _category, const string& _description, 
	const string& _countryOfOrigin, const string& _nutritionFacts)
	:
	Product(_name, _price, _discount, _category, _description),
	countryOfOrigin(_countryOfOrigin),
	nutritionFacts(_nutritionFacts)
{}

void Apple::print() const {
	cout << fixed;
	cout << "Name: " << Product::name << ", Price: " << setprecision(2) << Product::price << ", ID: "
		<< Product::id << ", Discount: " << Product::discount << ", Category: " << Product::category
		<< ", Description: " << Product::description << ", Country of origin: " << this->countryOfOrigin
		<< ", Nutrition facts: " << this->nutritionFacts << endl;
}