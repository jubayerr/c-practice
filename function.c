#include <stdio.h>

int addNumber();

int main()
{
    int a, b;
    a = 10;
    b = 5;

    int result2 = addNumber(a, b);

    printf("Result is %d", result2);

    return 0;
}

int addNumber(int x, int y)
{

    int result;

    result = x + y;

    return result;
}