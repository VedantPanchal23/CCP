#include<stdio.h>
void main()
{
    float a,b,c;
    printf("Enter your quantity of your items : ");
    scanf("%f",&a);
    printf("Enter your price per items : ");
    scanf("%f",&b);
    c=a*b;
    if(a>=1000)
    {
        c=(a*0.10)+a*b;
        printf("your total expenses :%f",c);
    }
    printf("your total expenses :%f",c);
    printf("\n23aiml042_panchal vedant\n");
}
