#include "Reservoir.h"
#include <iostream>

// explicit-����������� �� �������������
Reservoir::Reservoir(const std::string& name, double width, double length, double maxDepth)
    : name(name), width(width), length(length), maxDepth(maxDepth) {}

// ����������� ���������
Reservoir::Reservoir(const Reservoir& other)
    : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

// ����������
Reservoir::~Reservoir() {
    std::cout << "Reservoir '" << name << "' is being destroyed.\n";
}

// ³���������� ����� ��� �������
void Reservoir::display() const {
    std::cout << "Reservoir: " << name << "\n";
    std::cout << "Width: " << width << " meters\n";
    std::cout << "Length: " << length << " meters\n";
    std::cout << "Max Depth: " << maxDepth << " meters\n\n";
}

// ����� ��� ���������� ����������� ������
double Reservoir::calculateVolume() const {
    return width * length * maxDepth;
}

// ����� ��� ���������� ����� ����� �������
double Reservoir::calculateSurfaceArea() const {
    return width * length;
}

// ����� ��� ��������� ����� ����� ������� ������ ������ ����
bool Reservoir::compareSurfaceArea(const Reservoir& other) const {
    return calculateSurfaceArea() > other.calculateSurfaceArea();
}

// ����� ��� ��������, �� �������� ������� �� ������ ����
bool Reservoir::isSameType(const Reservoir& other) const {
    return (name.find("sea") != std::string::npos && other.getName().find("sea") != std::string::npos) ||
        (name.find("lake") != std::string::npos && other.getName().find("lake") != std::string::npos);
}

// ������ set � get
void Reservoir::setName(const std::string& name) {
    this->name = name;
}

void Reservoir::setWidth(double width) {
    this->width = width;
}

void Reservoir::setLength(double length) {
    this->length = length;
}

void Reservoir::setMaxDepth(double maxDepth) {
    this->maxDepth = maxDepth;
}

std::string Reservoir::getName() const {
    return name;
}

double Reservoir::getWidth() const {
    return width;
}

double Reservoir::getLength() const {
    return length;
}

double Reservoir::getMaxDepth() const {
    return maxDepth;
}
