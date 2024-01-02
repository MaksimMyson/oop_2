#include "Book.h"
#include <iostream>

// explicit-�����������
Book::Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pageCount)
    : author(author), title(title), publisher(publisher), year(year), pageCount(pageCount) {}

// ³���������� ����� ��� �����
void Book::display() const {
    std::cout << "Author: " << author << "\n";
    std::cout << "Title: " << title << "\n";
    std::cout << "Publisher: " << publisher << "\n";
    std::cout << "Year: " << year << "\n";
    std::cout << "Page Count: " << pageCount << "\n\n";
}

// �������
std::string Book::getAuthor() const {
    return author;
}

std::string Book::getPublisher() const {
    return publisher;
}

int Book::getYear() const {
    return year;
}
