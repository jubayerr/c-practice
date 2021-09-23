#include <stdio.h>

int main()
{
    int userAge[5] = {15, 17, 21, 23, 25};

    for (int i = 0; i < 5; i++)
    {
        printf("Element[%d] : %d\n", i, userAge[i]);
    }

    return 0;
}