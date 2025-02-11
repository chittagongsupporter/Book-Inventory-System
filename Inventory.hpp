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
private:
 std::vector<Book> books;
};

#endif // INVENTORY_HPP