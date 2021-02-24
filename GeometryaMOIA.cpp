#include <iostream>
#include <string>
#include <math.h>
int main()
{
	float x1,y1,x2,y2,x3,y3;// триугольник 
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
	printf("\nPloshiad of triangle %f",area);
}
