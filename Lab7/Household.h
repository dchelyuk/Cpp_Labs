#pragma once

#include <iostream>
#include <vector>
#include <windows.h>

using namespace std;

class Household {
public:
    string name;
    int weight;
    int differentParameter;
    enum type {
        WASHINGMASHINE = 0, VACUUMCLEANER, TV, MAGNITOPHONE, RADIO, MUSICALCENTRE, UNKNOWN
    } HouseholdType;

    Household();

    Household(string xName);

    void newObject(string xName, int xWeight, int xDifferentParameter, type xHouseholdType);



    ~Household();
};
