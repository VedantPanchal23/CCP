#include<stdio.h>

void main()
{
    int year;
    printf("Enter year value : ");
    scanf("%d",&year);
    if(year%400 == 0)
    {
        printf("%d is a Leap Year",year);
    }
    else if(year%100 == 0)
    {
        printf("%d is Not a Leap Year",year);
    }
    else if(year%4 == 0)
    {
        printf("%d is a Leap Year",year);
    }
    else
    {
        printf("%d is Not a Leap Year",year);
    }



    printf("\n23aiml042_panchal vedant\n");
}
