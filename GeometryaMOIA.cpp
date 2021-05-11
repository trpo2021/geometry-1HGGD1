
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
/*float x1,y1,x2,y2,x3,y3;// триугольник
float xCentra, yCentra, r;  // круг
bool f=0 ;

scanf("triangle (%f %f , %f %f , %f %f)", &x1, &y1,&x2 ,&y2,&x3, &y3);
printf("\ntriangle (%f %f , %f %f , %f %f)", x1 ,y1,x2, y2,x3, y3);
scanf("circle (%f %f %f)" ,&xCentra, &yCentra ,&r);
printf ("\ncircle (%f %f %f)", xCentra ,yCentra ,r);

float V1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
float V2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
float V3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
float perimeter = V1 + V2 + V3;
float half_p = perimeter / 2;
float area = sqrt(half_p * (half_p - V1) * (half_p - V2) * (half_p - V3));
printf("\nPerimetr of triangle %f",  perimeter );
printf("\nPloshiad of triangle %f",area);*/
