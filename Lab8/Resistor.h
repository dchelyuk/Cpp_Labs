#pragma once

#include <iostream>
//#include <string>
#include <io.h>

using namespace std;

struct Resistor {
    enum type {
        NONE,
        AR,
        PR,
        CR,
        HMR,
        NMP,
        PWR,
        SWR
        /*HVR, AS, RT, TCS, CS,RS, WB, LR, LRS, TFAN, CN, CNA, CSR, CFS, MFD, MFR, MOF, CFR, TR, MC, MCHL, MCRF, MCLI*/
    } resistorType; //https://www.mikasa-ltd.jp/pdf/VIKING_RESISTOR_MLCC.pdf
    int resistance;
    int power;
    int accuracy;
    struct Resistor *next;
    struct Resistor *prev;

    Resistor();

    Resistor(int xResistance, int xPower, int xAccuracy, type xResistorType);

    friend ostream &operator<<(ostream &output, const Resistor *object);
};

void firstResistor(int xResistance, int xPower, int xAccuracy, Resistor::type xResistorType);

void newResistor(int xResistance, int xPower, int xAccuracy, Resistor::type xResistorType);

void getByAccuracy(int xAccuracy);