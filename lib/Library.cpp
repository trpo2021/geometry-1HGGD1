#define _CRT_SECURE_NO_WARNINGS

#include "Library.h"
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <vector>
float pi = 3.1415926535897932384626433832795;
float X_drugoe, Y_drugoe, R_drugoe;

bool CircleCircleIntersect(Circle first, Circle second)
{
    int distSq = (first.X - second.X) * (first.X - second.X)
            + (first.Y - second.Y) * (first.Y - second.Y);
    int radSumSq = (first.R + second.R) * (first.R + second.R);
    return !(distSq >= radSumSq);
}

void Obrabotka(std::string str)
{
    if (Find_Case_Ins(str, "circle") != std::string::npos) {
        sscanf(str.data(), "circle(%f%f,%f)", &X_drugoe, &Y_drugoe, &R_drugoe);
    }
}
size_t Find_Case_Ins(std::string str, std::string substr)
{
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    std::transform(substr.begin(), substr.end(), substr.begin(), tolower);
    return str.find(substr, 0);
}