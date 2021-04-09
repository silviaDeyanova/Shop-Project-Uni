#pragma once
#include "Product.h"

class Milk : public Product {
public:
	Milk();
	Milk(const string&, double, bool, Category, const string&, unsigned);
	void print() const override;
	
private:
	unsigned amount;
};
