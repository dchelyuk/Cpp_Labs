#include "Camera.h"
#include <iostream>
using namespace std;

void CamOut() {
    Camera c1("Nikon", 2048, 3);
    cout << "Manufacturer: " << c1.GetName() << endl;
    cout << "Available memory: " << c1.GetMem() << "MB" << endl;
    cout << "Max zoom: " << c1.GetZoom() << "X" << endl;
    cout << "Password: " << c1.GetPass() << endl;
    cout << "Pin: " << c1.GetPin() << endl;
    cout << "Owner's name: " << c1.GetOwnerName() << endl;
    cout << "Count of pictures: " << c1.GetPictureCount() << endl;
}

int main() {
    CamOut();
    return 0;
}