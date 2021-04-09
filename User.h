#pragma once
#include "Cart.h"
#include "Product.h"

class User {
public:
	User();
	User(const string& , const string& );
	void setUsername(const string& );
	string getUsername() const;
	bool checkIfCorrect(const string& , const string& ) const;
	void login(const string& , const string& ) const;
	void addProductInCart(const Product*);
	void removeLastProductFromCart(const Product*);
	void prinInfoAboutProductsInCart() const;
	friend ostream& operator<<(ostream&, const User&);
	
private:
	string username;
	string password;
	Cart cart;
	void setPassword(const string&);
};
