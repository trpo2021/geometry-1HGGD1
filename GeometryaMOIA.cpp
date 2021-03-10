#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <math.h>
#include <string>

int main()
{
    double x1, y1, x2, y2, x3, y3; // триугольник
    double xCentra, yCentra, r;    // круг
    int f = 0;
    double pi = 3.1415;

    if (scanf("triangle (%lf %lf , %lf %lf , %lf %lf)\n)",
              &x1,
              &y1,
              &x2,
              &y2,
              &x3,
              &y3)) {
        scanf("circle (%lf %lf , %lf)", &xCentra, &yCentra, &r);
        printf("\ntriangle (%lf %lf , %lf %lf , %lf %lf)",
               x1,
               y1,
               x2,
               y2,
               x3,
               y3);
        double V1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double V2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        double V3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double perimeter = V1 + V2 + V3;
        double half_p = perimeter / 2;
        double area
                = sqrt(half_p * (half_p - V1) * (half_p - V2) * (half_p - V3));
        printf("\nPerimetr of triangle %lf", perimeter);
        printf("\nPloshiad of triangle %lf", area);

        printf("\ncircle (%lf %lf , %lf)", xCentra, yCentra, r);
        double perimeter_C = 2 * pi * r;
        double area_C = pi * (r * r);
        printf("\nPerimetr of circle %lf", perimeter_C);
        printf("\nPloshiad of circle %lf", area_C);

    } else if (scanf("triangle (%lf %lf , %lf %lf , %lf %lf)",
                     &x1,
                     &y1,
                     &x2,
                     &y2,
                     &x3,
                     &y3)) {
        printf("\ntriangle (%lf %lf , %lf %lf , %lf %lf)",
               x1,
               y1,
               x2,
               y2,
               x3,
               y3);
        double V1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double V2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        double V3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double perimeter = V1 + V2 + V3;
        double half_p = perimeter / 2;
        double area
                = sqrt(half_p * (half_p - V1) * (half_p - V2) * (half_p - V3));
        printf("\nPerimetr of triangle %lf", perimeter);
        printf("\nPloshiad of triangle %lf", area);
    } else {
        scanf("circle (%lf %lf , %lf)\n", &xCentra, &yCentra, &r);
        scanf("triangle (%lf %lf , %lf %lf , %lf %lf)",
              &x1,
              &y1,
              &x2,
              &y2,
              &x3,
              &y3);
        printf("\ncircle (%lf %lf , %lf)", xCentra, yCentra, r);
        double perimeter_C = 2 * pi * r;
        double area_C = pi * (r * r);
        printf("\nPerimetr of circle %lf", perimeter_C);
        printf("\nPloshiad of circle %lf", area_C);
        printf("\ntriangle (%lf %lf , %lf %lf , %lf %lf)",
               x1,
               y1,
               x2,
               y2,
               x3,
               y3);
        double V1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double V2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
        double V3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double perimeter = V1 + V2 + V3;
        double half_p = perimeter / 2;
        double area
                = sqrt(half_p * (half_p - V1) * (half_p - V2) * (half_p - V3));
        printf("\nPerimetr of triangle %lf", perimeter);
        printf("\nPloshiad of triangle %lf", area);
    }

    /*if (scanf("triangle (%lf %lf , %lf %lf , %lf %lf)", &x1, &y1, &x2, &y2,
    &x3, &y3))
    {
            printf("\ntriangle (%lf %lf , %lf %lf , %lf %lf)", x1, y1, x2, y2,
    x3, y3); double V1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); double V2 =
    sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2)); double V3 = sqrt(pow(x3 - x2, 2) +
    pow(y3 - y2, 2)); double perimeter = V1 + V2 + V3; double half_p = perimeter
    / 2; double area = sqrt(half_p * (half_p - V1) * (half_p - V2) * (half_p -
    V3)); printf("\nPerimetr of triangle %lf", perimeter); printf("\nPloshiad of
    triangle %lf", area);
    }

    if (scanf("circle (%lf %lf , %lf)", &xCentra, &yCentra, &r))
    {
            printf("\ncircle (%lf %lf , %lf)", xCentra, yCentra, r);
            double perimeter_C = 2 * pi * r;
            double area_C = pi * (r * r);
            printf("\nPerimetr of circle %lf", perimeter_C);
            printf("\nPloshiad of circle %lf", area_C);

    }
    */

    /*scanf("triangle (%lf %lf , %lf %lf , %lf %lf)", &x1, &y1, &x2, &y2, &x3,
    &y3); printf("\ntriangle (%lf %lf , %lf %lf , %lf %lf)", x1, y1, x2, y2, x3,
    y3); scanf("circle (%lf %lf , %lf)", &xCentra, &yCentra, &r);
    printf("\ncircle (%lf %lf , %lf)", xCentra, yCentra, r);

    double V1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double V2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    double V3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double perimeter = V1 + V2 + V3;
    double half_p = perimeter / 2;
    double area = sqrt(half_p * (half_p - V1) * (half_p - V2) * (half_p - V3));
    printf("\nPerimetr of triangle %lf", perimeter);
    printf("\nPloshiad of triangle %lf", area);

    double perimeter_C = 2 * pi * r;
    double area_C = pi*(r * r);
    printf("\nPerimetr of circle %lf", perimeter_C);
    printf("\nPloshiad of circle %lf", area_C);*/
}