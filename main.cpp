#include <iostream>
#include "User.h"
#include "Product.h"
#include "Shop.h"
#include "Cart.h"
#include "Milk.h"
#include "Bread.h"
#include "Apple.h"

using namespace std;

int main() {
	Milk m("Milk", 1.80, true, DairyProducts, "from happy cows", 1);
	Bread b("Bread", 1.10, false, BakeryProducts, "whole-grain", 600, "Bulgaria");
	Apple a("Apple", 0.80, true, Fruits, "bio", "Bulgaria", "C, B6, K, E");
	Product* product1 = &m;
	Product* product2 = &b;
	Product* product3 = &a;

	Shop s = Shop("Fantastico");
	s.addNewProduct(product1);
	s.addNewProduct(product2);
	s.addNewProduct(product3);

	try {
		s.printProducts();
	}
	catch (const exception& ex) {
		cerr << ex.what() << endl;
	}
	
	User u = User("user123", "A587$");
	s.addNewUser(u);
	u.addProductInCart(product2);
	
	try {
		u.prinInfoAboutProductsInCart();
	}
	catch (const exception & ex) {
		cerr << ex.what() << endl;
	}
}