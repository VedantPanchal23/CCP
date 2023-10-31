#include<stdio.h>
void main()
{
    char str1[100],str2[100],temp=0;
    int i,j,choice;
    printf(" choices\n");
    printf("1. Length of a string\n");
    printf("2. Reverse string\n");
    printf("3. Compare two string\n");
    printf("4. Copy one string into another string\n");
    printf("5. Concatenate two string\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
            printf("Enter your string: ");
            scanf("%s", str1);
            i=0;
            while(str1[i]!='\0')
            {
                i++;
            }
            printf("Length of a string :%d\n",i);
            break;
        case 2:
            printf("Enter a string :");
            scanf("%s", str1);
            i=0;
            j=0;
            while(str1[i]!='\0')
            {
            i++;
            }
            i--;
            while(j<i)
            {
                temp = str1[j];
                str1[j] = str1[i];
                str1[i] = temp;
                i--;
                j++;
            }
            printf("Reversed string: %s\n", str1);
            break;
        case 3:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            i=0;
            while(str1[i]==str2[i])
            {
                if(str1[i]=='\0')
            {
                printf("String are equal.\n");
            }
             i++;
            }
            printf("String are not equal.\n");
            break;
        case 4:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);
            i=0;
            while(str1[i]!='\0')
            {
                str2[i] = str1[i];
                i++;
            }
            str2[i] = '\0';
            printf("\nyour copied string: %s\n",str2);
            break;
        case 5:
            printf("Enter the first string: ");
            scanf("%s", str1);
            printf("Enter the second string: ");
            scanf("%s", str2);
            i=0;
             while(str1[i]!='\0')
            {
            i++;
            }
            j=0;
            while(str2[j]!='\0')
            {
                str1[i] = str2[j];
                i++;
                j++;
            }
            str1[i]='\0';
            printf("\nConcatenated string: %s\n", str1);
            break;
        default:
            printf("Invalid choice");
    }
    printf("\n23aiml042_panchal vedant\n");
}
