#include <stdio.h>

int main()
{
    char fname[20], lname[20];

    printf("First name : ");
    scanf("%s", fname);

    printf("Last name : ");
    scanf("%s", lname);

    printf("Full name is %s %s", fname, lname);

    return 0;
}
