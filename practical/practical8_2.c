#include<string.h>
#include<stdio.h>
void main()
{
    int i,j,n;
    char str[10000][50],tmp[50];
    printf("How many students names you Enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter %d student name : ",i+1);
        scanf("%s",str[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(str[i],str[j])<0)
            {
                strcpy(tmp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],tmp);
            }
        }
    }
    printf("\nAfter Arranging students name : \n");
    for(i=0;i<n;i++)
    {
        printf("%d. : %s\n",i+1,str[i]);
    }
    printf("\n23aiml042_panchal vedant\n");
}
