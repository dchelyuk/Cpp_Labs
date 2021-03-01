#include "Household.h"

int main() {
    Household House1("Chelyuk's");
    House1.newObject("Bosch", 15, 5, Household::VACUUMCLEANER);
    House1.newObject("Xtra", 68, 5, Household::WASHINGMASHINE);
    return 0;
}
