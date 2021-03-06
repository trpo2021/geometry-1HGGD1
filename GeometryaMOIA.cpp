#define _CRT_SECURE_NO_WARNINGS

#include <Library.h>
#include <algorithm>
#include <cstring>
#include <fstream>
#include <iostream>
#include <math.h>
#include <string>
#include <time.h>
#include <vector>

using namespace std;

vector<Circle> Vec_of_Circles;

void File_Reading()
{
    string Chitaem;
    ifstream Vvod("input.txt");
    while (getline(Vvod, Chitaem)) {
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
        for (auto& circle_next : Vec_of_Circles) {
            if (circle != circle_next && CircleCircleIntersect(circle, circle_next)) {
         
                printf("Peresechenie\n");
                printf("Circle(%f %f,%f)\n\n",
                       circle_next.X,
                       circle_next.Y,
                       circle_next.R);
            }
        }
    }
}