#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <Windows.h>
#include <stdio.h>
//#include "Resident.h"
//#include "Apperance.h"
using namespace System;
using namespace System::Windows::Forms;

class CheckResult
{
public:
    //Resident resident;
    int isMatch;
    const char* discrepancyReason;

    //CheckResult() : isMatch(0), discrepancyReason("") {}
};

