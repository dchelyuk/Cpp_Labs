#include "WashingMashine.h"

WashingMashine::WashingMashine() {
    name = "Unknown";
    weight = 0;
    maxLoudness = 0;
}

WashingMashine::WashingMashine(string xName, int xWeight, int xDifferentParameter) {
    name = move(xName);
    weight = xWeight;
    maxLoudness = xDifferentParameter;
}

void WashingMashine::Wash(int programNumber) {
    Sleep(1000 * programNumber);
}

WashingMashine::~WashingMashine() = default;