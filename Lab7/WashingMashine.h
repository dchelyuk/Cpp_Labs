#pragma once

#include "Household.h"

using namespace std;

class WashingMashine : public Household {
public:
    int maxLoudness;

    WashingMashine();

    WashingMashine(string xName, int xWeight, int xDifferentParameter);

    void Wash(int programNumber);

    ~WashingMashine();
};
