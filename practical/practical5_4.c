#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    printf("Enter the value of a, b and c: \n");
    scanf("%d %d %d",&a, &b, &c);
    int d = b*b - 4*a*c;
    int check;
    if(d>0)
    {
        check = 1;
    }
    else if(d==0)
    {
        check = 0;
    }
    else
    {
        check = -1;
    }
    float r1,r2, i;
    switch(check)
    {
        case 1:
            r1 = (-b + sqrt(d))/2*a;
            r2 = (-b - sqrt(d))/2*a;
            printf("Your roots are: %.2f and %.2f",r1,r2);
            break;
        case 0:
            r1 = (-b)/2*a;
            r2 = r1;
            printf("Your roots are: %.2f and %.2f",r1,r2);
            break;
        case -1:
            r1 = (-b)/2*a;
            i = sqrt(-d);
            r2 = (-b)/2*a;
            printf("Your roots are: %.2f+%fi and %.2f-%fi",r1,r2);
            break;
    }
printf("\n23aiml042_panchal vedant\n");
}
