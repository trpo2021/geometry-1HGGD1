
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
float X1 = 0, X2 = 0, X3 = 0, Y1 = 0, Y2 = 0, Y3 = 0, R = 0;

size_t FindCaseInsens(std::string str, std::string substr)
{
    std::transform(str.begin(), str.end(), str.begin(), tolower);
    std::transform(substr.begin(), substr.end(), substr.begin(), tolower);
    return str.find(substr, 0);
}

void Obrabotka(string str)
{
    if (FindCaseInsens(str, "circle") != string::npos) {
        sscanf(str.data(), "circle(%f%f,%f)", &X1, &Y1, &R);
        printf("circle(%f%f,%f)", X1, Y1, R);
    }
}

void File_Reading()
{
    string Chitaem;
    ifstream Vvod("input.txt");
    while (!Vvod.eof()) {
        getline(Vvod, Chitaem);
        Obrabotka(Chitaem);
    }
}

int main(int argc, char* argv[])
{
    File_Reading();
}

