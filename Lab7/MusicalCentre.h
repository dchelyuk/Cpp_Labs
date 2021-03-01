#pragma once

#include "Household.h"

class MusicalCentre : public Household {
public:
    int speakerQuality;

    MusicalCentre();

    MusicalCentre(string xName, int xWeight, int xDifferentParameter);

    ~MusicalCentre();
};
