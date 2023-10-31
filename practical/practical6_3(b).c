#include<stdio.h>
void main()
{

    int i=1,j,n=5;
    while(i<=n)
    {
        j=5;
        while(j>i)
        {
            printf(" ");
            j--;
        }
            j=1;
            while(j<=i)
            {
                printf("%d",j);
                j++;
            }
            printf("\n");
            i++;
    }
    printf("\n23aiml042_panchal vedant\n");
}
