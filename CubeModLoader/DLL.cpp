#include "DLL.h"
#include <iostream>

DLL::DLL(std::string fileName) {
    this->fileName = fileName;
    this->handle = nullptr;
}

HMODULE DLL::Load() {
    this->handle = LoadLibraryA(this->fileName.c_str());
    if (!this->handle) {
        printf("%s %d\n", this->fileName.c_str(), GetLastError());
    }
    return this->handle;
}

DLL::~DLL() {
    //dtor
}
