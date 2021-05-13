#pragma once
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <vector>

extern float pi;
extern float X_drugoe, Y_drugoe, R_drugoe;

struct Circle {
    float X = 0, Y = 0, R = 0;
    Circle(float X1, float Y1, float R1) : X(X1), Y(Y1), R(R1)
    {
    }
    bool operator==(Circle& cr1)
    {
        return (this->X == cr1.X) && (this->Y == cr1.Y) && (this->R == cr1.R);
    }
    bool operator!=(Circle& cr1)
    {
        return !(*this == cr1);
    }
};
bool CircleCircleIntersect(Circle first, Circle second);
void Obrabotka(std::string str);
size_t Find_Case_Ins(std::string str, std::string substr);