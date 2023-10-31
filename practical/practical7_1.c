#include<stdio.h>
void main()
{
    int a[1000],i,n,pos=0,neg=0,odd=0,even=0;
    printf("How many number you enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter Number %d : ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
            pos++;
        else
            neg++;
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\nPositive numbers : %d",pos);
    printf("\nNegative numbers : %d",neg);
    printf("\nEven numbers     : %d",even);
    printf("\nOdd numbers      : %d",odd);
    printf("\n\n23aiml042_panchal vedant\n");
}
