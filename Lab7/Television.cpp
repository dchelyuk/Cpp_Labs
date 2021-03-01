#include "Television.h"

#include <utility>

Television::Television() {
    name = "Unknown";
    weight = 0;
    channel = 0;
}

Television::Television(string xName, int xWeight, int xDifferentParameter) {
    name = move(xName);
    weight = xWeight;
    channel = xDifferentParameter;
}

Television::~Television() = default;