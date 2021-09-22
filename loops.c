#include <stdio.h>

int main()
{

    int age = 15;

    if (age >= 18)
    {
        printf("Welcome to the new world!");
    }
    else
    {
        int userAge = 15;

        for (int i = 0; i < 50; i++)
        {
            if (i == userAge)
            {
                break;
            }
            printf("Grow Up Kids! %d\n", i);
        }
    }

    return 0;
}