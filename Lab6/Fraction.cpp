#include "Fraction.h"

Fraction::Fraction() {
    nom = 1;
    deNom = 1;
    int arr[nom][deNom];
}

Fraction::Fraction(int theNom, int theDeNom) {
    nom = theNom;
    deNom = theDeNom;
}

ostream &operator<<(ostream &out, const Fraction &obj) {
    out << obj.nom << "/" << obj.deNom;
    return out;
}

istream &operator>>(istream &in, Fraction &obj) {
    cout << "Enter fraction in format 3/4:";
    char slash;
    in >> obj.nom >> slash >> obj.deNom;
    return in;
}

bool operator==(const Fraction &obj1, const Fraction &obj2) {
    return obj1.nom * obj2.deNom == obj2.nom * obj1.deNom;
}

Fraction operator+(const Fraction &obj1, const Fraction &obj2) {
    Fraction result(0, 0);
    result.nom = (obj1.nom * obj2.deNom + obj2.nom * obj1.deNom) /
                 gcd(obj1.deNom, obj2.deNom);
    result.deNom = lcm(obj1.deNom, obj2.deNom);
    return result;
}

Fraction operator-(const Fraction &obj1, const Fraction &obj2) {
    Fraction result(0, 0);
    result.nom = (obj1.nom * obj2.deNom - obj2.nom * obj1.deNom) /
                 gcd(obj1.deNom, obj2.deNom);
    result.deNom = lcm(obj1.deNom, obj2.deNom);
    return result;
}

Fraction operator*(const Fraction &obj1, const Fraction &obj2) {
    Fraction result(0, 0);
    result.nom = obj1.nom * obj2.nom;
    result.deNom = obj1.deNom * obj2.deNom;
    return result;
}

Fraction operator/(const Fraction &obj1, const Fraction &obj2) {
    Fraction result(0, 0);
    result.nom = obj1.nom * obj2.deNom;
    result.deNom = obj1.deNom * obj2.nom;
    return result;
}

Fraction::~Fraction() = default;