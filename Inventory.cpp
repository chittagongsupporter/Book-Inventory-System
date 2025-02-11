#include "Inventory.hpp"

// Constructors:
Inventory::Inventory() {}
Inventory::Inventory(std::vector<Book> bookList) { setBookList(bookList); }

// Getters:
std::vector<Book> Inventory::getBookList() const { return books; }
// Setters:
void Inventory::setBookList(std::vector<Book> bookList) { books = bookList; }