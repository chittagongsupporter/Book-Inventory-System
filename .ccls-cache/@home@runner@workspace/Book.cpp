#include "Book.hpp"

// Constructors:
Book::Book() : title(""), author(""), isbn("") {}
Book::Book(std::string title, std::string author, std::string isbn)
    : title(title), author(author), isbn(isbn) {}

// Getters:
std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getISBN() const { return isbn; }

// Setters:
void Book::setTitle(const std::string &title) { this->title = title; }
void Book::setAuthor(const std::string &author) { this->author = author; }
void Book::setISBN(const std::string &isbn) { this->isbn = isbn; }

// Member functions:
std::string Book::toString() const {
  return "Title: " + title + ", Author: " + author + ", ISBN: " + isbn;
}
