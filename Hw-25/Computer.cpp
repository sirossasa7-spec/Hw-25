#include "Computer.h"

Computer::Computer() : name(""), frequency(0), ram(0), dvd(false), price(0) {}

Computer::Computer(std::string n, double f, int r, bool d, double p)
    : name(n), frequency(f), ram(r), dvd(d), price(p) {
}

std::string Computer::getName() const { return name; }
double Computer::getFrequency() const { return frequency; }
int Computer::getRAM() const { return ram; }
bool Computer::hasDVD() const { return dvd; }
double Computer::getPrice() const { return price; }

void Computer::setPrice(double p) { price = p; }

void Computer::print() const {
    std::cout << "Name: " << name
        << ", Frequency: " << frequency << " GHz"
        << ", RAM: " << ram << " GB"
        << ", DVD: " << (dvd ? "Yes" : "No")
        << ", Price: $" << price << std::endl;
}