#include <stdio.h>

int main()
{
    int input;
    char ch;

    do
    {
        printf("Enter option (1, 2, 3, 4): \n 1. Factorial of a number \n 2. Prime or not \n 3. Odd or even \n 4. Exit \n");
        scanf("%d", &input);

        switch (input)
        {
        case 1:
        {
            int n, i;
            printf("Enter number: \n");
            scanf("%d", &n);

            int fact = 1;
            for (i = 1; i <= n; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d is %d \n", n, fact);
            break;
        }
        case 2:
        {
            int n, i, flag = 0;
            printf("Enter a positive integer: \n");
            scanf("%d", &n);

            if (n == 0 || n == 1)
            {
                printf("%d is not a prime number. \n", n);
            }
            else
            {
                for (i = 2; i <= n / 2; ++i)
                {
                    if (n % i == 0)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                    printf("%d is a prime number. \n", n);
                else
                    printf("%d is not a prime number. \n", n);
            }
            break;
        }
        case 3:
        {
            int num;
            printf("Enter an integer: \n");
            scanf("%d", &num);

            if (num % 2 == 0)
            {
                printf("%d is even. \n", num);
            }
            else
            {
                printf("%d is odd. \n", num);
            }
            break;
        }
        case 4:
        {
            printf("Exiting program. \n");
            return 0;
        }
        default:
        {
            printf("Selected option is invalid! \n");
            break;
        }
        }
        printf("Do you want to continue (y/n)? \n");
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}
