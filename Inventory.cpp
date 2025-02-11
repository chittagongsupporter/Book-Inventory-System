#include "Inventory.hpp"

// Constructors:
Inventory::Inventory() {}
Inventory::Inventory(std::vector<Book> bookList) { setBookList(bookList); }