#pragma once
#include "Product.h"

class Bread: public Product {
public:
	Bread();
	Bread(const string&, double, bool, Category, const string&, unsigned, const string&);
	void print() const override;

private:
	unsigned amount;
	string countryOfOrigin;
};
