#include<stdio.h>
void main()
{
    int i,j,n1,n2,n3,tmp,a[1000],b[1000],c[2000];
    printf("Enter size of A : ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("Enter A[%d] : ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter size of B : ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("Enter B[%d] : ",i+1);
        scanf("%d",&b[i]);
    }
    n3 = n1+n2;
    for(i=0;i<n1;i++)
    {
        c[i] = a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[i+n1] = b[i];
    }
    printf("\nYour Merge by Sorting of array A and B : ");
    for(i=0;i<n3-1;i++)
    {
        for(j=1;j<n3-i;j++)
        {
            if(c[j-1]>c[j])
            {
                tmp=c[j-1];
                c[j-1]=c[j];
                c[j]=tmp;
            }
        }
    }
    for(i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }
    printf("\n\n23aiml042_panchal vedant\n");
}
