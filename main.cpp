#include "Reservoir.h"
#include <fstream>
#include <iostream>

int main() {
    const int RESERVOIR_COUNT = 3;  // Кількість водойм
    Reservoir reservoirs[RESERVOIR_COUNT] = {
        Reservoir("Sea1", 1000.0, 2000.0, 50.0),
        Reservoir("Lake1", 500.0, 800.0, 30.0),
        Reservoir("Sea2", 1200.0, 2500.0, 60.0)
        // Додайте більше водойм за потребою
    };

    // Вивід даних про водойми
    std::cout << "Information about reservoirs:\n";
    for (int i = 0; i < RESERVOIR_COUNT; ++i) {
        reservoirs[i].display();
    }

    // Динамічний масив об'єктів класу Reservoir
    Reservoir* dynamicReservoirs = new Reservoir[RESERVOIR_COUNT];
    // Додавання об'єктів в масив
    dynamicReservoirs[0] = Reservoir("River1", 200.0, 400.0, 15.0);
    dynamicReservoirs[1] = Reservoir("Pool1", 30.0, 50.0, 3.0);
    dynamicReservoirs[2] = Reservoir("Sea3", 800.0, 1500.0, 40.0);

    // Видалення об'єкта з динамічного масиву
    delete[] dynamicReservoirs;

    // Запис інформації про об'єкти в текстовий файл
    std::ofstream textFile("reservoirs.txt");
    for (int i = 0; i < RESERVOIR_COUNT; ++i) {
        textFile << "Reservoir " << i + 1 << ":\n";
        textFile << "Name: " << reservoirs[i].getName() << "\n";
        textFile << "Width: " << reservoirs[i].getWidth() << " meters\n";
        textFile << "Length: " << reservoirs[i].getLength() << " meters\n";
        textFile << "Max Depth: " << reservoirs[i].getMaxDepth() << " meters\n\n";
    }
    textFile.close();

    // Запис інформації про об'єкти в бінарний файл
    std::ofstream binaryFile("reservoirs.bin", std::ios::binary);
    binaryFile.write(reinterpret_cast<char*>(reservoirs), sizeof(Reservoir) * RESERVOIR_COUNT);
    binaryFile.close();

    return 0;
}
