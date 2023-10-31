#include<stdio.h>
void main()
{
    float bs,da,hra,ma,ta,pf,gs,Allowances,Deduction,ns;
    printf("1.\tEnter your Basic Salary\t\t");
    scanf("%f",&bs);
    da=bs*0.70;
    hra=bs*0.07;
    ma=bs*0.02;
    ta=bs*0.04;
    pf=bs*0.12;
    Allowances=da+hra+ma+ta;
    gs=bs+Allowances;
    Deduction=pf;
    ns=gs-Deduction;
    printf("2.\tDA of Basic Salary\t\t%f",da);
    printf("\n3.\tHRA of Basic Salary\t\t%f",hra);
    printf("\n4.\tMA of Basic Salary\t\t%f",ma);
    printf("\n5.\tTA of Basic Salary\t\t%f",ta);
    printf("\n6.\tPF of Basic Salary\t\t%f",pf);
    printf("\n7.\tGross Salary\t\t\t%f",gs);
    printf("\n8.\tNet Salary\t\t\t%f",ns);
    printf("\n23aiml042_panchal vedant\n");
}
