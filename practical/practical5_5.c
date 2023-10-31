#include<stdio.h>
#include<ctype.h>

int main()
{
char a;
printf("Enter a character: ");
a=getchar();
if(islower(a))
{
    printf("%c is in lower case\n",a);
    printf("%c in upper case: %c\n",a,toupper(a));
}
if(isupper(a))
{
    printf("%c is in upper case\n",a);
    printf("%c in lower case: %c\n",a,tolower(a));
}
if(isalnum(a))
{
    printf("%c is alphanumerical\n",a);
}
if(isdigit(a))
{
    printf("%c is digit\n",a);
}
if(isalpha(a))
{
    printf("%c is alphabet\n",a);
}
if(ispunct(a))
{
    printf("%c is punctuation mark\n",a);
}

if(isprint(a))
{
    printf("%c is printable\n",a);
}

if(isspace(a))
{
    printf("%c is white space\n",a);
}
printf("\n23aiml042_panchal vedant\n");
return 0;
}
