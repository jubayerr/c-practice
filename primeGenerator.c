#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num)
{
    int sqroot = (int)sqrt((double)num);

    for (int i = 2; i <= sqroot; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

void generatePrimes(int num)
{
    printf("\nGenerate primes until: %d\n\n", num);

    int count = 0;

    for (int i = 2; i <= num; i++)
    {
        if (isPrime(i))
        {
            count++;
            printf("%4d : %6d\n", count, i);
        }
    }

    printf("\nTotal primes found until %d is %d\n ", num, count);
}

int main()
{

    printf("\nGet Prime number upto you want: ");

    int userInp;

    scanf("%d", &userInp);

    generatePrimes(userInp);

    return 0;
}