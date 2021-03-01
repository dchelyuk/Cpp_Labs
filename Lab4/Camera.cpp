#include "Camera.h"

Camera::Camera() = default;

Camera::Camera(string TheManName, unsigned int TheMem, unsigned int TheZoom) {
    ManName = std::move(TheManName);
    MemoryInMB = TheMem;
    Zoom = TheZoom;
    Password = "Aadmin1234";
    Pin = 1111;
}

string Camera::GetPass() const {
    return Password;
}

string Camera::GetName() const {
    return ManName;
}

string Camera::GetOwnerName() const {
    return OwnersName;
}

unsigned int Camera::GetMem() const {
    return MemoryInMB;
}

unsigned int Camera::GetZoom() const {
    return Zoom;
}

unsigned int Camera::GetPin() const {
    return Pin;
}

unsigned int Camera::GetPictureCount() const {
    return CountOfPictures;
}

Camera::~Camera() = default;
