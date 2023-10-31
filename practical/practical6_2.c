#include<stdio.h>
void main()
{
    int m=21,a,b,i;
    for(i=1;i<=4;i++)
    {
        printf("Enter the Number of match-sticks(1, 2, 3, 4):");
        scanf("%d",&a);
        b=5-a;
        printf("computer enter : %d\n",b);
        m=m-5;
        if(m==1)
        {
            printf("you pick last sticks\n");
            printf("YOU ARE LOSER !!!!!!");
        }
    }
    printf("\n23aiml042_panchal vedant\n");
}
