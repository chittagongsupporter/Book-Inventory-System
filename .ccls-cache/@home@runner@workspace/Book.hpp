#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book
{
public:
  /// Constructors:
  Book();
  Book(std::string title, std::string author, std::string isbn);

  /// Move operations:
  Book(Book&&) = default;
  Book& operator=(Book&&) = default;

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