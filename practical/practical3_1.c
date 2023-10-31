#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    float l,g,t;
    printf("Enter the value of Length=");
    scanf("%f",&l);
    printf("Enter the value of Gravity=");
    scanf("%f",&g);
    t=2*PI*sqrt(l/g);
    printf("Time Calulated=\t%f",t);
    printf("\n23aiml042_panchal vedant\n");
    return 0;
}
