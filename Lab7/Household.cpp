
#include "Household.h"
#include "WashingMashine.h"
#include "VacuumCleaner.h"
#include "Television.h"
#include "Magnitophone.h"
#include "Radio.h"
#include "MusicalCentre.h"

Household::Household() {
    name = "Unknown";
    HouseholdType = UNKNOWN;
    differentParameter = 0;
}

Household::Household(string xName) {
    name = xName;
    weight - 0;
    HouseholdType = UNKNOWN;
    differentParameter = 0;
}

void Household::newObject(string xName, int xWeight, int xDifferentParameter, type xHouseholdType) {
    vector<WashingMashine> WML;
    vector<VacuumCleaner> VCL;
    vector<Television> TVL;
    vector<Magnitophone> MPL;
    vector<Radio> RDL;
    vector<MusicalCentre> MCL;
    switch (xHouseholdType) {
        case UNKNOWN: {
        }

        case WASHINGMASHINE: {
            int xMxLd = 5;
            WashingMashine *element = new WashingMashine(xName, xWeight, xDifferentParameter);
            WML.push_back(*element);
            cout << "Element:\n" << "   Name: " << element->name << "\n    Weight: " << element->weight << endl;
        }

        case VACUUMCLEANER: {
            int xMxLd = 5;
            VacuumCleaner *element = new VacuumCleaner(xName, xWeight, xDifferentParameter);
            VCL.push_back(*element);
            cout << "Element:\n" << "   Name: " << element->name << "\n    Weight: " << element->weight << endl;
        }

        case TV: {
            int xMxLd = 5;
            Television *element = new Television(xName, xWeight, xDifferentParameter);
            TVL.push_back(*element);
            cout << "Element:\n" << "   Name: " << element->name << "\n    Weight: " << element->weight << endl;
        }

        case RADIO: {
            int xMxLd = 5;
            Radio *element = new Radio(xName, xWeight, xDifferentParameter);
            RDL.push_back(*element);
            cout << "Element:\n" << "   Name: " << element->name << "\n    Weight: " << element->weight << endl;
        }

        case MAGNITOPHONE: {
            int xMxLd = 5;
            Magnitophone *element = new Magnitophone(xName, xWeight, xDifferentParameter);
            MPL.push_back(*element);
            cout << "Element:\n" << "   Name: " << element->name << "\n    Weight: " << element->weight << endl;
        }

        case MUSICALCENTRE: {
            int xMxLd = 5;
            MusicalCentre *element = new MusicalCentre(xName, xWeight, xDifferentParameter);
            MCL.push_back(*element);
            cout << "Element:\n" << "   Name: " << element->name << "\n    Weight: " << element->weight << endl;
        }
    }
}

Household::~Household() = default;
