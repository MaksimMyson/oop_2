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
    Reservoir(const Reservoir& other);  // Конструктор копіювання
    ~Reservoir();  // Деструктор

    // Константні функції-члени для відображення даних
    void display() const;

    // Методи для визначення параметрів
    double calculateVolume() const;
    double calculateSurfaceArea() const;

    // Метод для порівняння площі водної поверхні водойм одного типу
    bool compareSurfaceArea(const Reservoir& other) const;

    // Метод для перевірки, чи належать водойми до одного типу
    bool isSameType(const Reservoir& other) const;

    // Методи set і get
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
