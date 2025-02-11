#include <iostream>
#include "Book.hpp"

int main() {
  Book book1( "The Great Gatsby", "F. Scott Fitzgerald", "978-3-16-148410-0");

  // Test getters
  std::cout << "Title: " << book1.getTitle() << std::endl;
  std::cout << "Author: " << book1.getAuthor() << std::endl;
  std::cout << "ISBN: " << book1.getISBN() << std::endl;
}