#pragma once

#include <iostream>
#include <string>
#include <io.h>
#include <fcntl.h>
#include <numeric>

using namespace std;

class Fraction {
public:
    int nom;
    int deNom;

    Fraction();

    Fraction(int theNom, int theDeNom);

    friend ostream &operator<<(ostream &output, const Fraction &obj);

    friend istream &operator>>(istream &in, Fraction &obj);

    friend bool operator==(const Fraction &obj1, const Fraction &obj2);

    friend Fraction operator+(const Fraction &obj1, const Fraction &obj2);

    friend Fraction operator-(const Fraction &obj1, const Fraction &obj2);

    friend Fraction operator*(const Fraction &obj1, const Fraction &obj2);

    friend Fraction operator/(const Fraction &obj1, const Fraction &obj2);

    ~Fraction();
};