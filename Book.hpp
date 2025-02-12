#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book
{
public:
  /// Constructors:
  Book();
  Book(std::string title, std::string author, std::string isbn);

  // Explicit copy constructor
  Book(const Book& other)
      : title(other.title), author(other.author), isbn(other.isbn) {}
  
  // Explicit copy assignment operator
  Book& operator=(const Book& other) {
      if (this != &other) {
          title = other.title;
          author = other.author;
          isbn = other.isbn;
      }
      return *this;
  }

  /// Getters:
  const std::string& getTitle() const;
  const std::string& getAuthor() const;
  const std::string& getISBN() const;

  /// Setters:
  void setTitle(const std::string &title);
  void setAuthor(const std::string &author);
  void setISBN(const std::string &isbn);

  /// Member functions:

  /// Converts book information to string
  std::string toString() const;

private:
	std::string title;
  std::string author;
  std::string isbn;
};

#endif // BOOK_HPP