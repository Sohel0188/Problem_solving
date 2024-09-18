#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    char *numbers[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (a % 2 == 0)
    {
        if (a <= 9)
        {
            for (int i = a; i < 10; i++)
            {
                printf("%s \n", numbers[i]);
            }
        }

        printf("even\n");
    }
    else
    {
         if (a <= 9)
        {
            for (int i = a; i < 10; i++)
            {
                printf("%s \n", numbers[i]);
            }
        }
        printf("odd\n");
    }
if (b % 2 == 0)
    {
        if (b <= 9)
        {
            for (int i = b; i < 10; i++)
            {
                printf("%s \n", numbers[i]);
            }
        }

        printf("even\n");
    }
    else
    {
         if (b <= 9)
        {
            for (int i = b; i < 10; i++)
            {
                printf("%s \n", numbers[i]);
            }
        }
        printf("odd\n");
    }

    
    return 0;
}