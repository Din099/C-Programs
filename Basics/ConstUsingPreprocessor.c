//defining constant using preprocessor #define
#include <stdio.h>
#define pi 3.14
int main()
{
    double radius = 0;
    double area;
    printf("Enter the radius: \n");
    scanf("%lf",&radius);
    area = pi * radius * radius;
    
    printf("The area of a circle is %.4lf for the radius %.4lf \n", area,radius);
    return 0;
}
