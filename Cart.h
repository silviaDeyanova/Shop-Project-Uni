#pragma once
#include "Product.h"

class Cart {
public:
	Cart();
	void addProduct(const Product*);
	void removeLastProduct(const Product*);
	void printProducts() const;

private:
	bool isEmpty;
	int productCount;
	double totalPrice;
	vector<Product*> products;
};
