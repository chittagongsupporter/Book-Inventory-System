#include "Inventory.hpp"
#include <algorithm>
#include <iostream>

// Constructors:
Inventory::Inventory() {}
Inventory::Inventory(std::vector<Book> bookList) : books(bookList) {}

// Getters:
std::vector<Book> Inventory::getBookList() const { return books; }
// Setters:
void Inventory::setBookList(std::vector<Book> bookList) { books = bookList; }

// Member functions:
void Inventory::addBook(Book book) { books.push_back(book); }

void Inventory::removeBook(Book bookToRemove) {
  // Lambda fn to check if a book has the same ISBN as the target
  auto hasMatchingISBN = [&bookToRemove](const Book &currentBookInVector) {
    return currentBookInVector.getISBN() == bookToRemove.getISBN();
  };

  auto newEndIterator =
      std::remove_if(books.begin(), books.end(), hasMatchingISBN);

  books.erase(newEndIterator, books.end());
}

std::vector<Book> Inventory::searchBookByTitle(std::string title) const {
  std::vector<Book> result;
  for (const auto &book : books) {
    if (book.getTitle() == title)
      result.push_back(book);
  }
  return result;
}

std::vector<Book> Inventory::searchBookByAuthor(std::string author) const {
  std::vector<Book> result;
  for (const auto &book : books) {
    if (book.getAuthor() == author)
      result.push_back(book);
  }
  return result;
}

std::vector<Book> Inventory::searchBookByISBN(std::string isbn) const {
  std::vector<Book> result;
  for (const auto &book : books) {
    if (book.getISBN() == isbn)
      result.push_back(book);
  }
  return result;
}

size_t Inventory::getBookCount() const { return books.size(); }

void Inventory::printInventory() const {
  for (const auto &book : books) {
    std::cout << book.toString() << std::endl;
  }
}