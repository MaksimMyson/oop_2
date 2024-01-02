#include "Worker.h"
#include <iostream>

// explicit-�����������
Worker::Worker(const std::string& fullName, const std::string& position, int startYear, double salary)
    : fullName(fullName), position(position), startYear(startYear), salary(salary) {}

// ³���������� ����� ��� ����������
void Worker::display() const {
    std::cout << "Full Name: " << fullName << "\n";
    std::cout << "Position: " << position << "\n";
    std::cout << "Start Year: " << startYear << "\n";
    std::cout << "Salary: " << salary << "\n\n";
}

// �������
std::string Worker::getFullName() const {
    return fullName;
}

std::string Worker::getPosition() const {
    return position;
}

int Worker::getStartYear() const {
    return startYear;
}

double Worker::getSalary() const {
    return salary;
}
