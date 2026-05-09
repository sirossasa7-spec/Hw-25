#pragma once
#include <string>
#include <iostream>

class Computer {
private:
    std::string name;
    double frequency; 
    int ram; 
    bool dvd;
    double price;

public:
    Computer();
    Computer(std::string n, double f, int r, bool d, double p);

    std::string getName() const;
    double getFrequency() const;
    int getRAM() const;
    bool hasDVD() const;
    double getPrice() const;

    void setPrice(double p);

    void print() const;
};