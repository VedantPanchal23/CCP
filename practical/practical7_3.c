#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10];
    int arows,acolumns,brows,bcolumns;
    int i,j,k,sum=0;
    printf("Enter a matrix rows number and columns numbers: ");
    scanf("%d %d",&arows,&acolumns);
    printf("Enter b matrix rows number and columns numbers: ");
    scanf("%d %d",&brows,&bcolumns);
    if(acolumns!=brows)
    {
        printf("matrix multiplication not allow");
    }
    else
    {
        for(i=0;i<arows;i++)
        {
            for(j=0;j<acolumns;j++)
            {
                printf("Enter the elements of a[%d][%d]:\n",i,j);
                scanf("%d",&a[i][j]);
            }
        }
         for(i=0;i<brows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                printf("Enter the elements of b[%d][%d]:\n",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {       sum=0;
                for(k=0;k<brows;k++)
                {
                    sum=sum+a[i][k]*b[k][j]; c[i][j]=sum;
                }

            }

        }
        printf("\nMultiplication of two matrix is :\n");
        for(i=0;i<arows;i++)
        {
            for(j=0;j<bcolumns;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n23aiml042_panchal vedant\n");
}
