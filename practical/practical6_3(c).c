#include<stdio.h>
int main()
{
    int i=1,j;
    do
    {
        j=1;
        do
        {
         printf("  ");
         j++;
        }while(j<=5-i);

        j=1;
        do
        {
         printf("%c ",j+64);
         j++;
        }while(j<=i);

        j=i-1;
        do
        {
            if(j==0)
                printf(" ");
            else
                printf("%c ",j+64);
         j--;
        }while(j>=1);
        printf("\n");
        i++;
    }while(i<=4);
    printf("\n23aiml042_panchal vedant\n");
    return 0;
}
