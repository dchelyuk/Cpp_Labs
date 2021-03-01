#include "MusicalCentre.h"

#include <utility>

MusicalCentre::MusicalCentre() {
    name = "Unknown";
    weight = 0;
    speakerQuality = 0;
}

MusicalCentre::MusicalCentre(string xName, int xWeight, int xDifferentParameter) {
    name = move(xName);
    weight = xWeight;
    speakerQuality = xDifferentParameter;
}

MusicalCentre::~MusicalCentre() = default;