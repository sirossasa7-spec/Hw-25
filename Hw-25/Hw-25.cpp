#include <iostream>
#include <vector>
#include <algorithm>
#include "Computer.h"

int main() {
    std::vector<Computer> computers = {
        {"Dell", 3.2, 16, true, 800},
        {"HP", 2.8, 8, false, 600},
        {"Asus", 3.5, 32, true, 1200},
        {"Acer", 2.5, 4, false, 400},
        {"Lenovo", 3.0, 16, true, 900}
    };

    std::cout << "Initial list:\n";
    for (const auto& c : computers) c.print();

    std::string searchName = "Asus";
    auto it = std::find_if(computers.begin(), computers.end(),
        [searchName](const Computer& c) {
            return c.getName() == searchName;
        });

    std::cout << "\nFind by name:\n";
    if (it != computers.end())
        it->print();
    else
        std::cout << "Not found\n";

    auto minIt = std::min_element(computers.begin(), computers.end(),
        [](const Computer& a, const Computer& b) {
            return a.getFrequency() < b.getFrequency();
        });

    if (minIt != computers.end()) {
        std::cout << "\nRemoving computer with lowest frequency:\n";
        minIt->print();
        computers.erase(minIt);
    }

    std::cout << "\nAfter removal:\n";
    for (const auto& c : computers) c.print();

    int dvdCount = std::count_if(computers.begin(), computers.end(),
        [](const Computer& c) {
            return c.hasDVD();
        });

    std::cout << "\nComputers with DVD: " << dvdCount << std::endl;

    std::for_each(computers.begin(), computers.end(),
        [](Computer& c) {
            if (c.getRAM() > 16)
                c.setPrice(c.getPrice() * 1.1); 
        });

    std::cout << "\nAfter price increase:\n";
    for (const auto& c : computers) c.print();

    std::sort(computers.begin(), computers.end(),
        [](const Computer& a, const Computer& b) {
            return a.getPrice() < b.getPrice();
        });

    std::cout << "\nSorted by price (ascending):\n";
    for (const auto& c : computers) c.print();

    std::sort(computers.begin(), computers.end(),
        [](const Computer& a, const Computer& b) {
            return a.getPrice() > b.getPrice();
        });

    std::cout << "\nSorted by price (descending):\n";
    for (const auto& c : computers) c.print();

    return 0;
}