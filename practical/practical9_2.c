#include<stdio.h>
#include<math.h>
void area (float,int,int,int);
void is_triangle(int,int,int);

void area (float s,int x,int y,int z)
{
    float A;
    A=sqrt(s*(s-x)*(s-y)*(s-z));
    if(A>0)
    {
        printf("\nIt is triangle");
        printf("\n\nArea : %.2f\n",A);
    }
    else
    {
        printf("\nIt is  not triangle.\n");
    }
}
void is_triangle(int x,int y,int z)
{
    float s;
    s=(x+y+z)/2;
    area(s,x,y,z);
}
void main()
{
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Enter c : ");
    scanf("%d",&c);
    is_triangle(a,b,c);
}

