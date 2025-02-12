#include "Inventory.hpp"
#include <algorithm>
#include <iostream>

// Constructors:
Inventory::Inventory() = default;

Inventory::Inventory(std::vector<Book> bookList) : books(std::move(bookList)) {}

// Getter:
const std::vector<Book> &Inventory::getBookList() const { return books; }

// Setters:
// copy overload
void Inventory::setBookList(const std::vector<Book> &bookList) {
  books = bookList;
}

// move overload
void Inventory::setBookList(std::vector<Book> &&bookList) {
  books = std::move(bookList);
}

// Member functions:

// addBook copy overload
void Inventory::addBook(const Book &book) { books.push_back(book); }

// addBook move overload
void Inventory::addBook(Book &&book) { books.push_back(std::move(book)); }

void Inventory::removeBook(const std::string &isbn) {
  // Lambda fn to check if a book has the same ISBN as the target
  auto hasMatchingISBN = [&isbn](const Book &currentBookInVector) {
    return currentBookInVector.getISBN() == isbn;
  };

  auto newEndIterator =
      std::remove_if(books.begin(), books.end(), hasMatchingISBN);

  books.erase(newEndIterator, books.end());
}

std::vector<Book> Inventory::searchBookByTitle(const std::string &title) const {
  std::vector<Book> result;

  for (const auto &book : books) {
    if (book.getTitle() == title)
      result.push_back(book);
  }

  return result;
}

std::vector<Book>
Inventory::searchBookByAuthor(const std::string &author) const {
  std::vector<Book> result;

  for (const auto &book : books) {
    if (book.getAuthor() == author)
      result.push_back(book);
  }

  return result;
}

std::vector<Book> Inventory::searchBookByISBN(const std::string &isbn) const {
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