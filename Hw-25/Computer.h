#pragma once
#include <string>
using namespace std;

class Computer
{
private:
    string name;
    double frequency;
    int ram;
    bool dvd;
    double price;

public:
    Computer();
    Computer(string n, double f, int r, bool d, double p);

    void setName(string n);
    string getName() const;

    void setFrequency(double f);
    double getFrequency() const;

    void setRAM(int r);
    int getRAM() const;

    void setDVD(bool d);
    bool getDVD() const;

    void setPrice(double p);
    double getPrice() const;

    void print() const;
};