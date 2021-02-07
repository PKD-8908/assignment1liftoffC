#include <stdio.h>
void main()
{
    float r;
    printf("Enter the Radius of the Circle ");
    scanf("%f", &r);
    printf("DIAMETER = %f\n AREA = %f \t CIRCUMFERENCE = %f", 2r, 3.14*r*r, 2*3.14*r);
    return 0;
}