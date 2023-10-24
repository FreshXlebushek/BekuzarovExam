// Class of object "Book" with all data
#pragma once
#include <string>

using std::string;
using std::ostream;

class Book
{
private:
	string book_name;                                                            // Name of the book.
	string author_name;                                                          // Author`s name of the book.
	unsigned short publishing_year;                                              // The year when book`s been published.
	unsigned short pages_number;                                                 // The count of pages of the book.
public:
	// Getters
	Book()
	{
		this->author_name = " "; this->book_name = " "; this->pages_number = 0; this->publishing_year = 0;
	}
	Book(string bn, string an, unsigned short py, unsigned short pn);            /* Constructor that makes book with
																					all data of that. bn - Book name;
																					an - Author`s name; py - Publishing
																					year; pn - Number of pages. */
	string get_bn();                                                             // Getter of book_name.
	string get_an();                                                             // Getter of author_name.
	unsigned short get_py();                                                     // Getter of publishing_year.
	unsigned short get_pn();                                                     // Getter of pages_number.
	bool operator <(Book& book);                                                 // Overloading operator '<'.
	bool operator >(Book& book);                                                 // Overloading operator '>'.
	bool operator ==(Book& book);                                                // Overloading operator '=='.
	friend ostream& operator<<(ostream& os, const Book& bk);                     // Overloading operator '<<' for function "list_by_an"
};

string Book::get_bn()
{
	return this->book_name;
}

string Book::get_an()
{
	return this->author_name;
}

unsigned short Book::get_py()
{
	return this->publishing_year;
}

unsigned short Book::get_pn()
{
	return this->pages_number;
}

bool Book::operator <(Book& book)
{
	if (this->author_name < book.author_name) return true;
	else return false;	
}

bool Book::operator ==(Book& book)
{
	if (this->author_name == book.author_name) return true;
	else return false;
}

Book::Book(string bn, string an, unsigned short py, unsigned short pn)
{
	this->book_name = bn;
	this->author_name = an;
	this->publishing_year = py;
	this->pages_number = pn;
}

ostream& operator <<(ostream& os, const Book& bk)
{
	os << bk.author_name << ", " << bk.book_name << ", " << bk.publishing_year << ", " << bk.pages_number;
	return os;
}