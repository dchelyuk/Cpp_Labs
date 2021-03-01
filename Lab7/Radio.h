#pragma once

#include "Household.h"

class Radio : public Household {
public:
    int frequency;

    Radio();

    Radio(string xName, int xWeight, int xDifferentParameter);

    ~Radio();
};
