#include "Resistor.h"


int main() {
    newResistor(100, 20, 10, Resistor::AR);
    getByAccuracy(100);
    cout << "------------------" << endl;
    newResistor(50, 10, 5, Resistor::CR);
    newResistor(60, 10, 12, Resistor::PR);
    newResistor(40, 10, 7, Resistor::HMR);
    newResistor(105, 10, 13, Resistor::NMP);
    newResistor(110, 10, 1, Resistor::PWR);
    newResistor(90, 10, 8, Resistor::SWR);
    getByAccuracy(100);
    cout << "------------------" << endl;
    getByAccuracy(8);
    return 0;
}