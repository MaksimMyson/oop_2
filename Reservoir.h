#ifndef RESERVOIR_H
#define RESERVOIR_H

#include <string>

class Reservoir {
private:
    std::string name;
    double width;
    double length;
    double maxDepth;

public:
    explicit Reservoir(const std::string& name = "", double width = 0.0, double length = 0.0, double maxDepth = 0.0);
    Reservoir(const Reservoir& other);  // ����������� ���������
    ~Reservoir();  // ����������

    // ��������� �������-����� ��� ����������� �����
    void display() const;

    // ������ ��� ���������� ���������
    double calculateVolume() const;
    double calculateSurfaceArea() const;

    // ����� ��� ��������� ����� ����� ������� ������ ������ ����
    bool compareSurfaceArea(const Reservoir& other) const;

    // ����� ��� ��������, �� �������� ������� �� ������ ����
    bool isSameType(const Reservoir& other) const;

    // ������ set � get
    void setName(const std::string& name);
    void setWidth(double width);
    void setLength(double length);
    void setMaxDepth(double maxDepth);
    std::string getName() const;
    double getWidth() const;
    double getLength() const;
    double getMaxDepth() const;
};

#endif // RESERVOIR_H
