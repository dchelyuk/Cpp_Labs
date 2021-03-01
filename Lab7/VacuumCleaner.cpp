#include "VacuumCleaner.h"

#include <utility>

VacuumCleaner::VacuumCleaner() {
    name = "Unknown";
    weight = 0;
    suckPower = 0;
}

VacuumCleaner::VacuumCleaner(string xName, int xWeight, int xDifferentParameter) {
    name = move(xName);
    weight = xWeight;
    suckPower = xDifferentParameter;
}

void VacuumCleaner::clean(int area) {
    Sleep(500 * area);
}

VacuumCleaner::~VacuumCleaner() = default;
