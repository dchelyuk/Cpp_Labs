#include "Resistor.h"

Resistor::Resistor(int xResistance, int xPower, int xAccuracy, type xResistorType) {
    resistance = xResistance;
    power = xPower;
    accuracy = xAccuracy;
    resistorType = xResistorType;
    next = nullptr;
    prev = nullptr;
}

Resistor::Resistor() {
    resistance = 0;
    power = 0;
    accuracy = 0;
    resistorType = NONE;
    next = nullptr;
    prev = nullptr;
}

struct Resistor *head;
struct Resistor *tail;
struct Resistor *temp;
struct Resistor *newR;

ostream &operator<<(ostream &out, const Resistor *object) {
    out << "Resistor:" << "\n   Resistance: " << object->resistance << "\n   Power: " << object->power
        << "\n   Accuracy: " << object->accuracy << "\n   Type: " << to_string(object->resistorType) << "\n" << endl;
    return out;
}

void newResistor(int xResistance, int xPower, int xAccuracy, Resistor::type xResistorType) {
    newR = new Resistor(xResistance, xPower, xAccuracy, xResistorType);
    if (head == nullptr) {
        newR->prev = newR;
        newR->next = newR->prev;
        temp = newR;
        head = temp;
        tail = temp;
        /*} else {
            temp = tail;
            do {
                temp = temp->next;
            } while (newR->resistorType > temp->resistorType);
            do {
                temp = temp->next;
            } while(newR->resistance > temp->resistance and newR->resistorType > temp->resistorType);
        }*/
    } else {
        if (newR->resistance <= head->resistance) {
            temp = head;
            newR->prev = tail;
            newR->next = temp;
            temp->prev = newR;
            head = newR;
            tail->next = head;
        } else if (newR->resistance >= tail->resistance) {
            temp = tail;
            newR->next = head;
            newR->prev = temp;
            temp->next = newR;
            tail = newR;
        } else {
            temp = head;
            do {
                temp = temp->next;
            } while (temp->resistance < newR->resistance);
            newR->next = temp;
            temp->prev->next = newR;
            newR->prev = temp->prev;
            temp->prev = newR;
        }
    }
}

void getByAccuracy(int xAccuracy) {
    temp = head;
    do {
        if (temp->accuracy <= xAccuracy) cout << temp;
        temp = temp->next;
    } while (temp != head);
}