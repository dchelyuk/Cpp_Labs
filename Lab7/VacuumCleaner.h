#pragma once

#include "Household.h"

using namespace std;

class VacuumCleaner : public Household{
public:
    int suckPower;

    VacuumCleaner();

    VacuumCleaner(string xName, int xWeight, int xDifferentParameter);

    void clean(int area);

    ~VacuumCleaner();
};