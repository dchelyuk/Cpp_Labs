#pragma once

#include <string>
#include <iostream>

using namespace std;

class Camera {
    string ManName;
    unsigned int MemoryInMB{};
    unsigned int Zoom{};

protected:
    string Password;
    unsigned int Pin{};

public:
    unsigned int CountOfPictures = 1110;
    string OwnersName = "Danylo";

    Camera();

    Camera(string TheManName, unsigned int TheMem, unsigned int TheZoom);

    string GetPass() const;

    string GetName() const;

    string GetOwnerName() const;

    unsigned int GetMem() const;

    unsigned int GetZoom() const;

    unsigned int GetPin() const;

    unsigned int GetPictureCount() const;

    ~Camera();
};

