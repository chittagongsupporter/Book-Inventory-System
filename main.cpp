#include "Inventory.hpp"
#include <iostream>
#include <vector>

void testBookObject() {
  Book book1("The Great Gatsby", "F. Scott Fitzgerald", "978-3-16-148410-0");

  // Test getters
  std::cout << "Title: " << book1.getTitle() << std::endl;
  std::cout << "Author: " << book1.getAuthor() << std::endl;
  std::cout << "ISBN: " << book1.getISBN() << std::endl;

  // Test setters
  book1.setTitle("To Kill a Mockingbird");
  book1.setAuthor("Harper Lee");
  book1.setISBN("978-0-393-72564-8");
  // Test toString()
  std::cout << book1.toString() << std::endl;
}

void testInventoryObject() {
  // Create Book objects
  Book book1("The Great Gatsby", "F. Scott Fitzgerald", "978-3-16-148410-0");
  Book book2("To Kill a Mockingbird", "Harper Lee", "978-0-393-72564-8");

  // Create Inventory object
  Inventory inventory;
  // Add Book objects to Inventory
  inventory.addBook(book1);
  inventory.addBook(book2);
  // Test getters
  std::cout << "Number of books in inventory: " << inventory.getBookCount()
            << std::endl;
}

int main() {
  // testBookObject();
  testInventoryObject();
  return 0;
}