#include <stdio.h>
#include <stdbool.h>

int main()
{

    int x = 55;
    int y = 2;

    float c, d;

    c = (float)x;
    c++;
    d = 5.2;

    // int result = x / y;
    // int remainder = x % y;

    float result = c / d;

    printf("%f\n", c);

    // printf("Result is = %d\n remainder is = %d", result, remainder);

    printf("result = %f", result);

    return 0;
}