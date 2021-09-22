#include <stdio.h>

int main()
{

    int userAge = 15;

    switch (userAge)
    {
    case 15:
        printf("You are Kid!");
        break;
    case 20:
        printf("You are Young!");
        break;
    case 25:
        printf("You are Strong!");
        break;
    default:
        printf("Not found!");
        break;
    }
}