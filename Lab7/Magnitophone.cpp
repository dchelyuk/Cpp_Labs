#include "Magnitophone.h"

#include <utility>

Magnitophone::Magnitophone() {
    name = "Unknown";
    weight = 0;
    casseteLength = 0;
}

Magnitophone::Magnitophone(string xName, int xWeight, int xDifferentParameter) {
    name = move(xName);
    weight = xWeight;
    casseteLength = xDifferentParameter;
}

Magnitophone::~Magnitophone() = default;