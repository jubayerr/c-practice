#include <stdio.h>

int main()
{

    int x, y;
    x = 5;
    y = 50;

    if (x < y)
    {
        printf("%d is less than %d", x, y);
    }
    else
    {
        if (x == y)
        {
            printf("%d is equal to %d", x, y);
        }
        else
        {
            printf("%d is greater than %d", x, y);
        }
    }
    return 0;
}