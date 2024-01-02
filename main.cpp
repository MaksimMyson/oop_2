#include "Book.h"
#include <iostream>

int main() {
    const int BOOK_COUNT = 3;  // Кількість книг
    Book books[BOOK_COUNT] = {
        Book("Author1", "Title1", "Publisher1", 2000, 300),
        Book("Author2", "Title2", "Publisher2", 2010, 250),
        Book("Author1", "Title3", "Publisher1", 2015, 400)
        // Додайте більше книг за потребою
    };

    // Вивід списку книг заданого автора
    std::string targetAuthor = "Author1";
    std::cout << "Books by Author '" << targetAuthor << "':\n";
    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (books[i].getAuthor() == targetAuthor) {
            books[i].display();
        }
    }

    // Вивід списку книг, випущених заданим видавництвом
    std::string targetPublisher = "Publisher1";
    std::cout << "Books by Publisher '" << targetPublisher << "':\n";
    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (books[i].getPublisher() == targetPublisher) {
            books[i].display();
        }
    }

    // Вивід списку книг, випущених після заданого року
    int targetYear = 2010;
    std::cout << "Books released after year " << targetYear << ":\n";
    for (int i = 0; i < BOOK_COUNT; ++i) {
        if (books[i].getYear() > targetYear) {
            books[i].display();
        }
    }

    return 0;
}
