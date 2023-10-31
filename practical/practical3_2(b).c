#include<stdio.h>
#include<conio.h>
void main()
{
    int y=10,p=20,cal;
    int yellow=10,pink=20;
    printf("Number of yellow balls before execution: %d\n",y);
    printf("Number of pink balls before execution: %d\n\n",p);
    y=++y;
    y=y++;
    y=--y;
    p=++p;
    p=--p;
    p=--p;
    printf("Number of yellow balls after execution: %d\n",y);
    printf("Number of pink balls after execution: %d\n\n",p);
    cal=++yellow + yellow++ + --yellow + ++pink - --pink - --pink;
    printf("Calulation: %d",cal);
    printf("\n23aiml042_panchal vedant\n");
}
