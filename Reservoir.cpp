#include "Reservoir.h"
#include <iostream>

// explicit-конструктор за замовчуванням
Reservoir::Reservoir(const std::string& name, double width, double length, double maxDepth)
    : name(name), width(width), length(length), maxDepth(maxDepth) {}

// Конструктор копіювання
Reservoir::Reservoir(const Reservoir& other)
    : name(other.name), width(other.width), length(other.length), maxDepth(other.maxDepth) {}

// Деструктор
Reservoir::~Reservoir() {
    std::cout << "Reservoir '" << name << "' is being destroyed.\n";
}

// Відображення даних про водойму
void Reservoir::display() const {
    std::cout << "Reservoir: " << name << "\n";
    std::cout << "Width: " << width << " meters\n";
    std::cout << "Length: " << length << " meters\n";
    std::cout << "Max Depth: " << maxDepth << " meters\n\n";
}

// Метод для визначення приблизного обсягу
double Reservoir::calculateVolume() const {
    return width * length * maxDepth;
}

// Метод для визначення площі водної поверхні
double Reservoir::calculateSurfaceArea() const {
    return width * length;
}

// Метод для порівняння площі водної поверхні водойм одного типу
bool Reservoir::compareSurfaceArea(const Reservoir& other) const {
    return calculateSurfaceArea() > other.calculateSurfaceArea();
}

// Метод для перевірки, чи належать водойми до одного типу
bool Reservoir::isSameType(const Reservoir& other) const {
    return (name.find("sea") != std::string::npos && other.getName().find("sea") != std::string::npos) ||
        (name.find("lake") != std::string::npos && other.getName().find("lake") != std::string::npos);
}

// Методи set і get
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
