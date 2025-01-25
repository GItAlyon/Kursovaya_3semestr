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

class Resident
{
private:
    char firstName[50];
    char lastName[50];
    char id[3]; // Идентификационный номер из 2 цифр
    Apperance appearance;
    char phone[10];

public:
    Resident() {
        strcpy(firstName, "Unknown");
        strcpy(lastName, "Unknown");
        strcpy(id, "00");
        strcpy(phone, "Unknown");
    }

    void setResident(const char* first, const char* last, const char* idNum, const char* hair, const char* cloth, const char* phoneNum) {
        strcpy(firstName, first);
        strcpy(lastName, last);
        strcpy(id, idNum);
        appearance.setAppearance(hair, cloth);
        strcpy(phone, phoneNum);
    }

    const char* getFirstName() const { return firstName; }
    const char* getLastName() const { return lastName; }
    const char* getId() const { return id; }
    const char* getPhone() const { return phone; }
    const Apperance& getAppearance() const { return appearance; }
};

