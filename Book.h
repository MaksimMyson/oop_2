#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
private:
    std::string author;
    std::string title;
    std::string publisher;
    int year;
    int pageCount;

public:
    explicit Book(const std::string& author, const std::string& title, const std::string& publisher, int year, int pageCount);

    // ��������� �������-����� ��� ����������� �����
    void display() const;

    // �������
    std::string getAuthor() const;
    std::string getPublisher() const;
    int getYear() const;
};

#endif // BOOK_H
