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

  /// Setters:
  void setBookList(std::vector<Book> bookList);

  /// Member functions:
  void addBook(Book book);
  void removeBook(Book book);

  std::vector<Book> searchBookByTitle(std::string title) const;
  std::vector<Book> searchBookByAuthor(std::string author) const;
  std::vector<Book> searchBookByISBN(std::string isbn) const;

  size_t getBookCount() const;

  void printInventory() const;

private:
 std::vector<Book> books;
};

#endif // INVENTORY_HPP