#pragma once

#include "Household.h"

class Magnitophone :public Household {
public:
    int casseteLength;

    Magnitophone();
    Magnitophone(string xName, int xWeight, int xDifferentParameter);

    ~Magnitophone();
};
