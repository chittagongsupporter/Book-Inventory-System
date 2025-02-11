#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include "Book.hpp"
#include <vector>

class Inventory
{
public:
  /// Constructors:
  Inventory();
  Inventory(std::vector<Book> bookList);

  /// Getters:
  const std::vector<Book>& getBookList() const;

  /// Setters
  void setBookList(const std::vector<Book>& bookList); // copy overload
  void setBookList(std::vector<Book>&& bookList); // move overload

  /// Member functions:
  void addBook(const Book& book);  // copy overload
  void addBook(Book&& book); // move overload

  void removeBook(const std::string& isbn);

  std::vector<Book> searchBookByTitle(const std::string& title) const;
  std::vector<Book> searchBookByAuthor(const std::string& author) const;
  std::vector<Book> searchBookByISBN(const std::string& isbn) const;

  size_t getBookCount() const;

  void printInventory() const;

private:
 std::vector<Book> books;
};

#endif // INVENTORY_HPP