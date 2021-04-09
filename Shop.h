#pragma once
#include "Product.h"
#include "User.h"

class Shop {
public:
	Shop();
	Shop(const string&);
	string getName() const;
	void printProducts() const;
	void addNewProduct(const Product*);
	void addNewUser(const User&);

private:
	int productCount;
	string name;
	vector<Product*> products;
	vector<User> users;
	void setName(const string& );
	void printUsers() const;
};
