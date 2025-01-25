#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>
#include "Apperance.h"
using namespace System;
using namespace System::Windows::Forms;

class VisitorPass
{
private:
    char firstName[50];
    char lastName[50];
    char id[3];
    Apperance appearance;

public:
    VisitorPass() {
        strcpy(firstName, "Unknown");
        strcpy(lastName, "Unknown");
        strcpy(id, "00");
    }

    void setVisitor(const char* first, const char* last, const char* idNum, const char* hair, const char* cloth) {
        strcpy(firstName, first);
        strcpy(lastName, last);
        strcpy(id, idNum);
        appearance.setAppearance(hair, cloth);
    }

    const char* getFirstName() const { return firstName; }
    const char* getLastName() const { return lastName; }
    const char* getId() const { return id; }
    const Apperance& getAppearance() const { return appearance; }
};


