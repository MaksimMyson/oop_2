#ifndef WORKER_H
#define WORKER_H

#include <string>

class Worker {
private:
    std::string fullName;
    std::string position;
    int startYear;
    double salary;

public:
    explicit Worker(const std::string& fullName, const std::string& position, int startYear, double salary);

    // ��������� �������-����� ��� ����������� �����
    void display() const;

    // �������
    std::string getFullName() const;
    std::string getPosition() const;
    int getStartYear() const;
    double getSalary() const;
};

#endif // WORKER_H
