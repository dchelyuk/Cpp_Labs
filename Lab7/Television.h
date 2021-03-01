#pragma once

#include "Household.h"

class Television : public Household {
public:

    int channel;

    Television();

    Television(string xName, int xWeight, int xDifferentParameter);

    ~Television();

};