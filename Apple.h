#pragma once
#include "Product.h"

class Apple: public Product {
public:
	Apple();
	Apple(const string&, double, bool, Category, const string&, const string&, const string&);
	void print() const override;

private:
	string nutritionFacts;
	string countryOfOrigin;
};
