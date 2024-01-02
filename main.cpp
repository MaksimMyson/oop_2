#include "Worker.h"
#include <iostream>

int main() {
    const int WORKER_COUNT = 3;  // ʳ������ ����������
    Worker workers[WORKER_COUNT] = {
        Worker("John Doe", "Manager", 2010, 50000.0),
        Worker("Jane Smith", "Engineer", 2015, 60000.0),
        Worker("Bob Johnson", "Analyst", 2005, 45000.0)
        // ������� ����� ���������� �� ��������
    };

    // ���� ������ ����������, ���� ������ ���� �������� ������ ����� ����
    int requiredExperience = 10;
    std::cout << "Workers with experience more than " << requiredExperience << " years:\n";
    for (int i = 0; i < WORKER_COUNT; ++i) {
        if ((2022 - workers[i].getStartYear()) > requiredExperience) {
            workers[i].display();
        }
    }

    // ���� ������ ����������, �������� ���� �������� ������
    double requiredSalary = 55000.0;
    std::cout << "Workers with salary more than " << requiredSalary << ":\n";
    for (int i = 0; i < WORKER_COUNT; ++i) {
        if (workers[i].getSalary() > requiredSalary) {
            workers[i].display();
        }
    }

    // ���� ������ ����������, �� �������� ������ ������
    std::string targetPosition = "Engineer";
    std::cout << "Workers with position '" << targetPosition << "':\n";
    for (int i = 0; i < WORKER_COUNT; ++i) {
        if (workers[i].getPosition() == targetPosition) {
            workers[i].display();
        }
    }

    return 0;
}
