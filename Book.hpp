#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book
{
public:
  // Constructors
  Book();
  Book(std::string title, std::string author, std::string isbn);

  // Getters
  std::string getTitle() const;
  std::string getAuthor() const;
  std::string getISBN() const;

  // Setters
  void setTitle(std::string title);
  void setAuthor(std::string author);
  void setISBN(std::string isbn);

  // Member functions

  // Converts book information to string
  std::string toString() const;

private:
	std::string title;
  std::string author;
  std::string isbn;
};

#endif // BOOK_HPP