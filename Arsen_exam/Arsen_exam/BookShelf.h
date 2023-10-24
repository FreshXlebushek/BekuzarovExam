// Class "BookShelf" that represent itself like storage of objects of class "Book".
#pragma once
#include <algorithm>
#include <vector>
#include "Book.h"


class BookShelf : public Book
{
protected:
	string genre;                                               // Genre/theme of books on "BookShelf".
	std::vector <Book> books;                                   // Vector of objects of class "Book".
public:
	BookShelf(std::vector <Book> BSbooks, string BSgenre);      // Constructor that makes bookshlef with chosen genre/theme.
	void list_by_an();                                          // Algorithm that shows list of books by autor`s names ascending.
};

void BookShelf::list_by_an()
{
	std::sort(this->books.begin(),this->books.end());           // "std::sort" to sort vector "books" by authors` names
	for (Book b : books)                                        // Here outputs our sorted books
	{
		std::cout << b << std::endl;
	}
}

BookShelf::BookShelf(std::vector <Book> BSbooks, string BSgenre) 
{
	this->books = BSbooks;                                      // Here books that have been input to objects "book" inputs to BookShelf
	this->genre = BSgenre;                                      // Here BookShelf gets it`s own genre or theme for books
}