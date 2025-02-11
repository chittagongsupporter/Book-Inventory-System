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
  std::vector<Book> getBookList() const;

  /// Setters:
  void setBookList(std::vector<Book> bookList);

  /// Member functions:
  void addBook(Book book);
  void removeBook(Book book);
  void printInventory() const;

private:
 std::vector<Book> books;
};

#endif // INVENTORY_HPP