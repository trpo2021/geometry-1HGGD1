#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <vector>
using namespace std;
float pi = 3.1415926535897932384626433832795;
float X_drugoe, Y_drugoe, R_drugoe;

struct Circle {
    float X = 0, Y = 0, R = 0;
    Circle(float X1, float Y1, float R1) : X(X1), Y(Y1), R(R1)
    {
    }
};

vector<Circle> Vec_of_Circles;

size_t FindCaseInsens(std::string str, std::string substr)
{
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    std::transform(substr.begin(), substr.end(), substr.begin(), tolower);
    return str.find(substr, 0);
}

void Obrabotka(string str)
{
    if (FindCaseInsens(str, "circle") != string::npos) {
        sscanf(str.data(), "circle(%f%f,%f)", &X_drugoe, &Y_drugoe, &R_drugoe);
    }
}

void File_Reading()
{
    string Chitaem;
    ifstream Vvod("input.txt");
    while (!Vvod.eof()) {
        getline(Vvod, Chitaem);
        Obrabotka(Chitaem);
        Vec_of_Circles.emplace_back(X_drugoe, Y_drugoe, R_drugoe);
    }
}

int main(int argc, char* argv[])
{
    File_Reading();
    for (auto& circle : Vec_of_Circles) {
        printf("Circle(%f %f,%f)\n", circle.X, circle.Y, circle.R);
        float Perimetr = 2 * pi * circle.R;
        printf("Perimetr of Circle: %f\n", Perimetr);
        float Ploshad = pi * circle.R * circle.R;
        printf("Ploshad of Circle: %f\n", Ploshad);
    }
}
