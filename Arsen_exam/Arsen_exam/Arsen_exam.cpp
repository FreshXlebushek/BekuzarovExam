#include <iostream>
#include "BookShelf.h"

int main()
{
	// Here are examples of some books. If You want, You can add something
	Book b1("Ruslan and Ludmila", "Aleksandr Pushkin", 1818, 136), b2("War and Peace", "Lev Tolstoy", 1863, 1300),
		b3("The Cherry Garden", "Anton Chehov", 1904, 352), b4("Dune", "Frank Herbert", 1965, 768);

	// Now we are adding a bookshelf. And again if You want, You can add one more
	BookShelf bs1({ b1,b2,b3 }, "Russian Litrature");
	bs1.list_by_an();

}