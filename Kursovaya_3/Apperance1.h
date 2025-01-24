#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>
const int MAX_NAME_LENGTH = 50;
const int MAX_APPEARANCE_LENGTH = 50;
const int MAX_PHONE_LENGTH = 15;
const int RESIDENTS_COUNT = 5;
const char* FILENAME = "residents2.txt";
const char* RESULT_FILENAME = "results2.txt";
class Apperance1
{
    private:
        char hairColor[MAX_NAME_LENGTH];
        char clothes[MAX_APPEARANCE_LENGTH];

    public:
        void Appearance() {
            strcpy(hairColor, "Unknown");
            strcpy(clothes, "Unknown");
        }

        void setAppearance(const char* hair, const char* cloth) {
            strcpy(hairColor, hair);
            strcpy(clothes, cloth);
        }

        const char* getHairColor() const {
            return hairColor;
        }

        const char* getClothes() const {
            return clothes;
        }
    };
};

