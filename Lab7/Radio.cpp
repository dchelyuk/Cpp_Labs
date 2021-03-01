#include "Radio.h"

#include <utility>

Radio::Radio() {
    name = "Unknown";
    weight = 0;
    frequency = 0;
}

Radio::Radio(string xName, int xWeight, int xDifferentParameter) {
    name = move(xName);
    weight = xWeight;
    frequency = xDifferentParameter;
}

Radio::~Radio() = default;