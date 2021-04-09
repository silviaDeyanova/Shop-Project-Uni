#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "Category.h"

using namespace std;

class Product {
public:
	Product();
	Product(const string& , double, bool, Category, const string&);
	string getName() const;
	void setName(const string& );
	double getPrice() const;
	void setPrice(double);
	unsigned int getId() const;
	bool getDiscount() const;
	void setDiscount(bool);
	Category getCategory() const;
	void setCategory(Category);
	void setDescription(const string&);
	string getDescription() const;
	virtual void print() const = 0;

protected:
	bool discount;
	static int counter;
	unsigned int id;
	double price;
	string name;
	string description;
	enum Category category;
};
