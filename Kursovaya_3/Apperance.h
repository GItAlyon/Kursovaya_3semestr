#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>
using namespace System;
using namespace System::Windows::Forms;

class Apperance
{
private:
    char hairColor[50];
    char clothes[50];

public:
    void Appearance() {
        strcpy(hairColor, "Unknown");
        strcpy(clothes, "Unknown");
    }

    void setAppearance(const char* hair, const char* cloth) {
        strcpy(hairColor, hair);
        strcpy(clothes, cloth);
    }

    const char* getHairColor() {
        return hairColor;
    }

    const char* getClothes() {
        return clothes;
    }
};

