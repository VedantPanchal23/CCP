#include <stdio.h>

void main()
{

    int loop = 1;
    do
    {
        printf("\n1. To check prime number or not.\n");
        printf("2. To check armstrong number or not.\n");
        printf("3. To check perfect number or not.\n");
        printf("Select from above : ");
        int choice;
        scanf("%d", &choice);
        int input;
        printf("Enter your number: ");
        scanf("%d", &input);
        switch (choice)
        {
        case 1:
        {
            int x = 0;
            for (int i = 2; i < (input + 1) / 2; i++)
            {
                if (input % i == 0)
                {
                    x = 1;
                    break;
                }
            }
            if (x == 1)
            {
                printf("It is not a prime number.\n");
            }
            else
            {
                printf("It is a prime number.\n");
            }
        }
        break;
        case 2:
        { 
            int digits = 0;
            int tmp = input; 
            while (tmp)
            {                  
                digits++;   
                tmp = tmp / 10; 

            }
            tmp = input; 
            int sum = 0;
            int digit;
            while (tmp)
            {                     
                digit = tmp % 10;               
                int res = 1;
                for(int j=0; j<digits; j++){
                    res = res*digit;
                }
                sum = sum + res; 
                tmp = tmp / 10;                 
            }
            if (sum == input)
            {
                printf("It is an armstrong number.\n");
            }
            else
            {
                printf("It is not an armstrong number.\n");
            }
        }
        break;
        case 3:
        {

            int perfect = 0;
            int k = 1;
            do{
                if (input % k == 0){
                    perfect = perfect + k;
                }
                k++;
            }while(k < input);
            if (perfect == input){
                printf("It is a perfect number.\n");
            }
            else {
                printf("It is not a perfect number.\n");
            }
        }
        break;
        default:
            printf("Selected choice is not 1 or 2 or 3, so exiting.");
            loop = 0; 
            break;
        }
    } while (loop > 0);
    printf("\n23aiml042_panchal vedant");
}
