#include <stdio.h>
void IsFactorial();
void IsFactorial_1(int);
int IsFactorial_2(int);
int IsFactorial_3();

int main()
{
	// IsFactorial();

	//IsFactorial_1(120);

	// int a = IsFactorial_2(120);
	// if (a)
	// 	printf("given number is factorial of: %d\n",a);
	// else
	// 	printf("given number is not a factorial.\n");
	// return 0;

	int a = IsFactorial_3();
	if (a)
		printf("given number is factorial of: %d\n",a);
	else
		printf("given number is not a factorial.\n");
	return 0;

}

void IsFactorial()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int i = 2;
	int sum = 1;

	while(1)
        {
		sum *= i;
		if(sum == n)
		{
			printf("given number is factorial of %d\n",i);
			break;
		} else if(sum>n)
		{
			printf("given number is not a factorial.\n");
			break;
		}
		++i;
    	}
}


void IsFactorial_1(int n)
{
	int i = 2;
	int sum = 1;

	while(1)
        {
		sum *= i;
		if(sum == n)
		{
			printf("given number is factorial of %d\n",i);
			break;
		} else if(sum>n)
		{
			printf("given number is not a factorial.\n");
			break;
		}
		++i;
	    }
}


int IsFactorial_2(int n)
{
	int i = 2;
	int sum = 1;
	while(1)
        {
		sum *= i;
		if(sum == n)
		{
			return i;
		}else if (sum>n)
		{
			return 0;
		}
		++i;
	}
}


int IsFactorial_3()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);

	int i = 2;
	int sum = 1;

	while(1)
        {
		sum *= i;
		if (sum == n)
		{
			return i;
		} else if (sum>n)
		{
			return 0;
		}
		++i;
	}
}
