#include <stdio.h>
main()
{
    float p, ph, c, b, m, co, t;
    printf("Enter Obtained Mark in Physics: ");
    scanf("%f", &ph);
    printf("Enter Obtained Mark in Chemistry: ");
    scanf("%f", &c);
    printf("Enter Obtained Mark in Biology: ");
    scanf("%f", &b);
    printf("Enter Obtained Mark in Mathematics: ");
    scanf("%f", &m);
    printf("Enter Obtained Mark in Computer: ");
    scanf("%f", &co);
    t = ph+c+b+m+co;
    p = (t/500.0)*100.0;
    printf("PERCENTAGE = %f\n", p);
    if (p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if(p>=70)
    {
        printf("Grade C");
    }
    else if(p>=60)
    {
        printf("Grade D");
    }
    else if(p>=40)
    {
        printf("Grade E");
    }
    else if(p<40)
    {
        printf("F Grade");
    }
}