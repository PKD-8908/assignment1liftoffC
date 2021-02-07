#include<stdio.h>
int main()
{
    int a, b, s, d, m, q, r;
    printf("Enter First Number ");
    scanf("%d", &a);
    printf("Enter Second Number ");
    scanf("%d", &b);
    s = a+b;
    d = a-b;
    m = a*b;
    q = a/b;
    r = a%b;
    printf("SUM = %d\n", s);
    printf("DIFFERENCE = %d\n", d);
    printf("MULTIPLICATION = %d\n", m);
    printf("QUOTIENT = %d\n", q);
    printf("REMAINDER = %d\n", r);
    return 0; 
}