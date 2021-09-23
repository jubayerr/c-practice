#include <stdio.h>

int main()
{
    int userNum;

    int randomNum = 20;

    printf("Give any number : ");
    scanf("%d", &userNum);

    printf("%d x %d = %d", userNum, randomNum, (userNum * randomNum));

    return 0;
}