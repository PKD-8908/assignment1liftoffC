#include <stdio.h>
void main()
{
    float f, c;
    printf("Enter the Temperature in Celsius Scale ");
    scanf("%f", &c);
    f = ((c)*(9.0/5))+32;
    printf("The temperature in Fahrenheit Scale is %f", f);
    return 0;
}